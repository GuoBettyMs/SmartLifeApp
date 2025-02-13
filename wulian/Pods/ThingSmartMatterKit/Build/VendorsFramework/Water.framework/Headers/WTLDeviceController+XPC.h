/**
 *
 *    Copyright (c) 2020-2023 Project CHIP Authors
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

#import <Water/WTLCluster.h>
#import <Water/WTLDeviceController.h>

NS_ASSUME_NONNULL_BEGIN

typedef NSXPCConnection * _Nonnull (^WTLXPCConnectBlock)(void);

typedef void (^WTLDeviceControllerGetterHandler)(id _Nullable controller, NSError * _Nullable error);

typedef void (^WTLValuesHandler)(id _Nullable values, NSError * _Nullable error);

/**
 * Extended methods for WTLDeviceController object over XPC
 */
@interface WTLDeviceController (XPC)

/**
 * Returns a shared device controller proxy for the controller object over XPC connection.
 *
 * @param controllerID    an implementation specific id in case multiple shared device controllers are available over XPC connection
 * @param xpcConnectBlock block to connect to an XPC listener serving the shared device controllers in an implementation specific
 * way
 */
+ (WTLDeviceController *)sharedControllerWithID:(id<NSCopying> _Nullable)controllerID
                                xpcConnectBlock:(WTLXPCConnectBlock)xpcConnectBlock
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

/**
 * Returns an encoded values object to send over XPC for read, write and command interactions
 */
+ (NSArray<NSDictionary<NSString *, id> *> * _Nullable)encodeXPCResponseValues:
    (NSArray<NSDictionary<NSString *, id> *> * _Nullable)values;

/**
 * Returns a decoded values object from a values object received from XPC for read, write and command interactions
 */
+ (NSArray<NSDictionary<NSString *, id> *> * _Nullable)decodeXPCResponseValues:
    (NSArray<NSDictionary<NSString *, id> *> * _Nullable)values;

/**
 * Returns a serialized read parameter object to send over XPC
 */
+ (NSDictionary<NSString *, id> * _Nullable)encodeXPCReadParams:(WTLReadParams *)params;

/**
 * Returns a deserialized read parameter object from an object received over XPC
 */
+ (WTLReadParams * _Nullable)decodeXPCReadParams:(NSDictionary<NSString *, id> * _Nullable)params;

/**
 * Returns a serialized subscribe parameter object to send over XPC
 */
+ (NSDictionary<NSString *, id> * _Nullable)encodeXPCSubscribeParams:(WTLSubscribeParams * _Nullable)params;

/**
 * Returns a deserialized subscribe parameter object from an object received over XPC
 */
+ (WTLSubscribeParams * _Nullable)decodeXPCSubscribeParams:(NSDictionary<NSString *, id> * _Nullable)params;

/**
 * Returns an NSXPCInterface configured for WTLDeviceControllerServerProtocol.
 */
+ (NSXPCInterface *)xpcInterfaceForServerProtocol API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));

/**
 * Returns an NSXPCInterface configured for WTLDeviceControllerClientProtocol.
 */
+ (NSXPCInterface *)xpcInterfaceForClientProtocol API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));
@end

/**
 * Protocol that remote object must support over XPC
 */
@protocol WTLDeviceControllerServerProtocol <NSObject>

@optional
/**
 * Gets device controller ID corresponding to a specific fabric ID
 */
- (void)getDeviceControllerWithFabricId:(uint64_t)fabricId
                             completion:(WTLDeviceControllerGetterHandler)completion
    WTL_DEPRECATED("This never called.",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@required
/**
 * Gets any available device controller ID
 */
- (void)getAnyDeviceControllerWithCompletion:(WTLDeviceControllerGetterHandler)completion;

/**
 * Requests reading attribute
 */
- (void)readAttributeWithController:(id _Nullable)controller
                             nodeId:(uint64_t)nodeId
                         endpointId:(NSNumber * _Nullable)endpointId
                          clusterId:(NSNumber * _Nullable)clusterId
                        attributeId:(NSNumber * _Nullable)attributeId
                             params:(NSDictionary<NSString *, id> * _Nullable)params
                         completion:(WTLValuesHandler)completion;

/**
 * Requests writing attribute
 */
- (void)writeAttributeWithController:(id _Nullable)controller
                              nodeId:(uint64_t)nodeId
                          endpointId:(NSNumber *)endpointId
                           clusterId:(NSNumber *)clusterId
                         attributeId:(NSNumber *)attributeId
                               value:(id)value
                   timedWriteTimeout:(NSNumber * _Nullable)timeoutMs
                          completion:(WTLValuesHandler)completion;

/**
 * Requests invoking command
 */
- (void)invokeCommandWithController:(id _Nullable)controller
                             nodeId:(uint64_t)nodeId
                         endpointId:(NSNumber *)endpointId
                          clusterId:(NSNumber *)clusterId
                          commandId:(NSNumber *)commandId
                             fields:(id)fields
                 timedInvokeTimeout:(NSNumber * _Nullable)timeoutMs
                         completion:(WTLValuesHandler)completion;

/**
 * Requests subscribing attribute.  The minInterval/maxInterval arguments
 * override whatever intervals might be present in params.
 */
- (void)subscribeAttributeWithController:(id _Nullable)controller
                                  nodeId:(uint64_t)nodeId
                              endpointId:(NSNumber * _Nullable)endpointId
                               clusterId:(NSNumber * _Nullable)clusterId
                             attributeId:(NSNumber * _Nullable)attributeId
                             minInterval:(NSNumber *)minInterval
                             maxInterval:(NSNumber *)maxInterval
                                  params:(NSDictionary<NSString *, id> * _Nullable)params
                      establishedHandler:(dispatch_block_t)establishedHandler;

/**
 * Requests to stop reporting
 */
- (void)stopReportsWithController:(id _Nullable)controller nodeId:(uint64_t)nodeId completion:(dispatch_block_t)completion;

/**
 * Requests subscription of all attributes.  The minInterval/maxInterval
 * arguments override whatever intervals might be present in params.
 */
- (void)subscribeWithController:(id _Nullable)controller
                         nodeId:(uint64_t)nodeId
                    minInterval:(NSNumber *)minInterval
                    maxInterval:(NSNumber *)maxInterval
                         params:(NSDictionary<NSString *, id> * _Nullable)params
                    shouldCache:(BOOL)shouldCache
                     completion:(WTLStatusCompletion)completion;

/**
 * Requests reading attribute cache
 */
- (void)readAttributeCacheWithController:(id _Nullable)controller
                                  nodeId:(uint64_t)nodeId
                              endpointId:(NSNumber * _Nullable)endpointId
                               clusterId:(NSNumber * _Nullable)clusterId
                             attributeId:(NSNumber * _Nullable)attributeId
                              completion:(WTLValuesHandler)completion;

@end

/**
 * Protocol that the XPC client local object must support
 */
@protocol WTLDeviceControllerClientProtocol <NSObject>

/**
 * Handles a report received by a device controller
 */
- (void)handleReportWithController:(id _Nullable)controller
                            nodeId:(uint64_t)nodeId
                            values:(id _Nullable)values
                             error:(NSError * _Nullable)error;

@end

@interface WTLDeviceController (Deprecated_XPC)

+ (WTLDeviceController *)sharedControllerWithId:(id<NSCopying> _Nullable)controllerID
                                xpcConnectBlock:(WTLXPCConnectBlock)xpcConnectBlock
    WTL_DEPRECATED("Please use sharedControllerWithID:xpcConnectBlock:",  macos(13.0, 13.3), watchos(9.1, 9.4),
        tvos(16.1, 16.4));

@end

NS_ASSUME_NONNULL_END
