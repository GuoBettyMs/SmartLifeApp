/**
 *
 *    Copyright (c) 2022-2023 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <Water/WTLBaseDevice.h>

NS_ASSUME_NONNULL_BEGIN

@class WTLDeviceController;
@class WTLAsyncCallbackWorkQueue;

typedef NS_ENUM(NSUInteger, WTLDeviceState) {
    WTLDeviceStateUnknown = 0,
    WTLDeviceStateReachable = 1,
    WTLDeviceStateUnreachable = 2
};

@protocol WTLDeviceDelegate;

@interface WTLDevice : NSObject
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
 * TODO: Document usage better
 *
 * Directly instantiate a WTLDevice with a WTLDeviceController as a shim.
 *
 * All device-specific information would be stored on the device controller, and
 * retrieved when performing actions using a combination of WTLBaseDevice
 * and WTLAsyncCallbackQueue.
 */
+ (WTLDevice *)deviceWithNodeID:(NSNumber *)nodeID
                     controller:(WTLDeviceController *)controller API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

/**
 * The current state of the device.
 *
 * The three states:
 *   WTLDeviceStateUnknown
 *      Unable to determine the state of the device at the moment.
 *
 *   WTLDeviceStateReachable
 *      Communication with the device is expected to succeed.
 *
 *   WTLDeviceStateUnreachable
 *      The device is currently unreachable.
 */
@property (nonatomic, readonly) WTLDeviceState state;

/**
 * The estimated device system start time.
 *
 * A device can report its events with either calendar time or time since system start time. When events are reported with time
 * since system start time, this property will return an estimation of the device system start time. Because a device may report
 * timestamps this way due to the lack of a wall clock, system start time can only be estimated based on event receive time and the
 * timestamp value, and this estimation may change over time.
 *
 * Device reboots may also cause the estimated device start time to jump forward.
 *
 * If events are always reported with calendar time, then this property will return nil.
 */
@property (nonatomic, readonly, nullable)
    NSDate * estimatedStartTime API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));

/**
 * Set the delegate to receive asynchronous callbacks about the device.
 *
 * The delegate will be called on the provided queue, for attribute reports, event reports, and device state changes.
 */
- (void)setDelegate:(id<WTLDeviceDelegate>)delegate queue:(dispatch_queue_t)queue;

/**
 * Read attribute in a designated attribute path
 *
 * TODO: Need to document that this returns "the system's best guess" of attribute values.
 *
 * @return a data-value dictionary of the attribute as described in WTLDeviceResponseHandler
 */
- (NSDictionary<NSString *, id> *)readAttributeWithEndpointID:(NSNumber *)endpointID
                                                    clusterID:(NSNumber *)clusterID
                                                  attributeID:(NSNumber *)attributeID
                                                       params:(WTLReadParams * _Nullable)params;

/**
 * Write to attribute in a designated attribute path
 *
 * @param value       A data-value NSDictionary object as described in
 *                    WTLDeviceResponseHandler.
 *
 * @param expectedValueInterval  maximum interval in milliseconds during which reads of the attribute will return the value being
 * written. This value must be within [1, UINT32_MAX], and will be clamped to this range.
 *
 * TODO: document that -readAttribute... will return the expected value for the [endpoint,cluster,attribute] until one of the
 * following:
 *  1. Another write for the same attribute happens.
 *  2. expectedValueIntervalMs (clamped) expires. Need to figure out phrasing here.
 *  3. We succeed at writing the attribute.
 *  4. We fail at writing the attribute and give up on the write
 *
 * @param timeout   timeout in milliseconds for timed write, or nil. This value must be within [1, UINT16_MAX], and will be clamped
 * to this range.
 * TODO: make timeout arguments uniform
 */
- (void)writeAttributeWithEndpointID:(NSNumber *)endpointID
                           clusterID:(NSNumber *)clusterID
                         attributeID:(NSNumber *)attributeID
                               value:(id)value
               expectedValueInterval:(NSNumber *)expectedValueInterval
                   timedWriteTimeout:(NSNumber * _Nullable)timeout;

/**
 * Invoke a command with a designated command path
 *
 * @param commandFields   command fields object. The object must be a data-value NSDictionary object
 *                      as described in the WTLDeviceResponseHandler.
 *                      The attribute must be a Structure, i.e.,
 *                      the NSDictionary WTLTypeKey key must have the value WTLStructureValueType.
 *
 * @param expectedValues  array of dictionaries containing the expected values in the same format as
 *                       attribute read completion handler. Requires WTLAttributePathKey values.
 *                       See WTLDeviceResponseHandler definition for dictionary details.
 *                       The expectedValues and expectedValueInterval arguments need to be both
 *                       nil or both non-nil, or both will be both ignored.
 *
 * TODO: document better the expectedValues is how this command is expected to change attributes when read, and that the next
 * readAttribute will get these values
 *
 * @param expectedValueInterval  maximum interval in milliseconds during which reads of the attribute will return the value being
 * written. If the value is less than 1, both this value and expectedValues will be ignored.
            If this value is greater than UINT32_MAX, it will be clamped to UINT32_MAX.
 *
 * @param timeout   timeout in milliseconds for timed invoke, or nil. This value must be within [1, UINT16_MAX], and will be clamped
 * to this range.
 *
 * @param completion  response handler will receive either values or error.  A
 *                    path-specific error status from the command invocation
 *                    will result in an error being passed to the completion, so
 *                    values will only be passed in when the command succeeds.
 */
- (void)invokeCommandWithEndpointID:(NSNumber *)endpointID
                          clusterID:(NSNumber *)clusterID
                          commandID:(NSNumber *)commandID
                      commandFields:(id)commandFields
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedValues
              expectedValueInterval:(NSNumber * _Nullable)expectedValueInterval
                 timedInvokeTimeout:(NSNumber * _Nullable)timeout
                              queue:(dispatch_queue_t)queue
                         completion:(WTLDeviceResponseHandler)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

/**
 * Open a commissioning window on the device.
 *
 * On success, completion will be called on queue with the WTLSetupPayload that
 * can be used to commission the device.
 *
 * @param setupPasscode The setup passcode to use for the commissioning window.
 *                      See WTLSetupPayload's generateRandomSetupPasscode for
 *                      generating a valid random passcode.
 * @param discriminator The discriminator to use for the commissionable
 *                      advertisement.
 * @param duration      Duration, in seconds, during which the commissioning
 *                      window will be open.
 */
- (void)openCommissioningWindowWithSetupPasscode:(NSNumber *)setupPasscode
                                   discriminator:(NSNumber *)discriminator
                                        duration:(NSNumber *)duration
                                           queue:(dispatch_queue_t)queue
                                      completion:(WTLDeviceOpenCommissioningWindowHandler)completion
    API_AVAILABLE( macos(13.1), watchos(9.2), tvos(16.2));

/**
 * Open a commissioning window on the device, using a random setup passcode.
 *
 * On success, completion will be called on queue with the WTLSetupPayload that
 * can be used to commission the device.
 *
 * @param discriminator The discriminator to use for the commissionable
 *                      advertisement.
 * @param duration      Duration, in seconds, during which the commissioning
 *                      window will be open.
 */
- (void)openCommissioningWindowWithDiscriminator:(NSNumber *)discriminator
                                        duration:(NSNumber *)duration
                                           queue:(dispatch_queue_t)queue
                                      completion:(WTLDeviceOpenCommissioningWindowHandler)completion WTL_NEWLY_AVAILABLE;

@end

@protocol WTLDeviceDelegate <NSObject>
@required
/**
 * @param state The current state of the device
 */
- (void)device:(WTLDevice *)device stateChanged:(WTLDeviceState)state;

/**
 * Notifies delegate of attribute reports from the WTLDevice
 *
 * @param attributeReport  An array of response-value objects as described in WTLDeviceResponseHandler
 */
- (void)device:(WTLDevice *)device receivedAttributeReport:(NSArray<NSDictionary<NSString *, id> *> *)attributeReport;

/**
 * Notifies delegate of event reports from the WTLDevice
 *
 * @param eventReport  An array of response-value objects as described in WTLDeviceResponseHandler
 *
 *                In addition to the WTLEventPathKey and WTLDataKey containing the path and event values, eventReport also contains
 *                these keys:
 *
 *                WTLEventNumberKey : NSNumber-wrapped uint64_t value. Monotonically increasing, and consecutive event reports
 *                                    should have consecutive numbers unless device reboots, or if events are lost.
 *                WTLEventPriorityKey : NSNumber-wrapped WTLEventPriority value.
 *                WTLEventTimeTypeKey : NSNumber-wrapped WTLEventTimeType value.
 *                WTLEventSystemUpTimeKey : NSNumber-wrapped NSTimeInterval value.
 *                WTLEventTimestampDateKey : NSDate object.
 *
 *                Only one of WTLEventTimestampDateKey and WTLEventSystemUpTimeKey will be present, depending on the value for
 *                WTLEventTimeTypeKey.
 */
- (void)device:(WTLDevice *)device receivedEventReport:(NSArray<NSDictionary<NSString *, id> *> *)eventReport;

@optional
/**
 * Notifies delegate the device is currently actively communicating.
 *
 * This can be used as a hint that now is a good time to send commands to the
 * device, especially if the device is sleepy and might not be active very often.
 */
- (void)deviceBecameActive:(WTLDevice *)device API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@end

@interface WTLDevice (Deprecated)

/**
 * Deprecated WTLDevice APIs.
 */
+ (WTLDevice *)deviceWithNodeID:(uint64_t)nodeID
               deviceController:(WTLDeviceController *)deviceController
    WTL_DEPRECATED(
        "Please use deviceWithNodeID:controller:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)invokeCommandWithEndpointID:(NSNumber *)endpointID
                          clusterID:(NSNumber *)clusterID
                          commandID:(NSNumber *)commandID
                      commandFields:(id)commandFields
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedValues
              expectedValueInterval:(NSNumber * _Nullable)expectedValueInterval
                 timedInvokeTimeout:(NSNumber * _Nullable)timeout
                        clientQueue:(dispatch_queue_t)queue
                         completion:(WTLDeviceResponseHandler)completion
    WTL_DEPRECATED("Please use "
                   "invokeCommandWithEndpointID:clusterID:commandID:commandFields:expectedValues:expectedValueInterval:"
                   "timedInvokeTimeout:queue:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

NS_ASSUME_NONNULL_END
