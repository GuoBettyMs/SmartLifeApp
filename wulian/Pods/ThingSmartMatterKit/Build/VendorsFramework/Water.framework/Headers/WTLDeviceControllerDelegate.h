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

#import <Water/WTLDefines.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, WTLCommissioningStatus) {
    WTLCommissioningStatusUnknown = 0,
    WTLCommissioningStatusSuccess = 1,
    WTLCommissioningStatusFailed = 2,
    WTLCommissioningStatusDiscoveringMoreDevices WTL_DEPRECATED("WTLCommissioningStatusDiscoveringMoreDevices is not used.",
        macos(13.0, 13.4), watchos(9.1, 9.5), tvos(16.1, 16.5))
    = 3,
} API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

typedef NS_ENUM(NSInteger, WTLConnectNetworkStatus) {
    WTLConnectNetworkStatusSuccess                          = 0,
    WTLConnectNetworkStatusOutofRange                       = 1,
    WTLConnectNetworkStatusBoundsExceeded                   = 2,
    WTLConnectNetworkStatusNetworkIDNotFound                = 3,
    WTLConnectNetworkStatusDuplicatedNetworkID              = 4,
    WTLConnectNetworkStatusNetworkNotFound                  = 5,
    WTLConnectNetworkStatusRegulatoryError                  = 6,
    WTLConnectNetworkStatusAuthFailure                      = 7,
    WTLConnectNetworkStatusUnSupportSecurity                = 8,
    WTLConnectNetworkStatusOtherConnectionFailure           = 9,
    WTLConnectNetworkStatusIPV6Failed                       = 10,
    WTLConnectNetworkStatusBindFailed                       = 11,
    WTLConnectNetworkStatusUnknowError                      = 12,
    WTLConnectNetworkStatusUnknowEnumValue                  = 13,
};

/**
 * A representation of a (vendor, product) pair that identifies a specific product.
 */
WTL_NEWLY_AVAILABLE
@interface WTLProductIdentity : NSObject

@property (nonatomic, copy, readonly) NSNumber * vendorID;

@property (nonatomic, copy, readonly) NSNumber * productID;

- (instancetype)initWithVendorID:(NSNumber *)vendorID productID:(NSNumber *)productID;
@end

@class WTLDeviceController;

/**
 * The protocol definition for the WTLDeviceControllerDelegate.
 *
 * All delegate methods will be called on the supplied Delegate Queue.
 */
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@protocol WTLDeviceControllerDelegate <NSObject>
@optional
/**
 * Notify the delegate when commissioning status gets updated.
 */
- (void)controller:(WTLDeviceController *)controller statusUpdate:(WTLCommissioningStatus)status;

/**
 * Notify the delegate when a commissioning session is established or the
 * establishment has errored out.
 */
- (void)controller:(WTLDeviceController *)controller commissioningSessionEstablishmentDone:(NSError * _Nullable)error;

/**
 * Notify the delegate when commissioning is completed.
 */
- (void)controller:(WTLDeviceController *)controller
    commissioningComplete:(NSError * _Nullable)error WTL_NEWLY_DEPRECATED("Please use controller:commissioningComplete:nodeID:");

/**
 * Notify the delegate when commissioning stage is called.
 */
- (void)controller:(WTLDeviceController *)controller commissioningStatusUpdate:(NSString * _Nullable)status error:(NSError * _Nullable)error;

/**
 * Notify the delegate when commissioning is completed.
 *
 * Exactly one of error and nodeID will be nil.
 *
 * If nodeID is not nil, then it represents the node id the node was assigned, as encoded in its operational certificate.
 */
- (void)controller:(WTLDeviceController *)controller
    commissioningComplete:(NSError * _Nullable)error
                   nodeID:(NSNumber * _Nullable)nodeID WTL_NEWLY_AVAILABLE;

- (void)controller:(WTLDeviceController *)controller networkCommissioningStatus:(WTLConnectNetworkStatus)status nodeID:(NSNumber * _Nullable)nodeID;


/**
 * Notify the delegate when commissioning infomation has been read from the Basic
 * Information cluster of the commissionee.
 *
 * At the point when this notification happens, device attestation has not been performed yet,
 * so the information delivered by this notification should not be trusted.
 */
- (void)controller:(WTLDeviceController *)controller readCommissioningInfo:(WTLProductIdentity *)info WTL_NEWLY_AVAILABLE;
@end

typedef NS_ENUM(NSUInteger, WTLPairingStatus) {
    WTLPairingStatusUnknown WTL_DEPRECATED(
        "Please use WTLCommissioningStatusUnknown",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0,
    WTLPairingStatusSuccess WTL_DEPRECATED(
        "Please use WTLCommissioningStatusSuccess",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 1,
    WTLPairingStatusFailed WTL_DEPRECATED(
        "Please use WTLCommissioningStatusFailed",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 2,
    WTLPairingStatusDiscoveringMoreDevices WTL_DEPRECATED("WTLPairingStatusDiscoveringMoreDevices is not used.", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 3
} WTL_DEPRECATED("Please use WTLCommissioningStatus",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

WTL_DEPRECATED("Please use WTLDeviceControllerDelegate",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@protocol WTLDevicePairingDelegate <NSObject>
@optional
- (void)onStatusUpdate:(WTLPairingStatus)status;
- (void)onPairingComplete:(NSError * _Nullable)error;
- (void)onCommissioningComplete:(NSError * _Nullable)error;
- (void)onPairingDeleted:(NSError * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
