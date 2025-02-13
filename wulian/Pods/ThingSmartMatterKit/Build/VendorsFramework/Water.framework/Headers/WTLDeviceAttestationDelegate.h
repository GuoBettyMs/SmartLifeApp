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
#import <Water/WTLCertificates.h>

NS_ASSUME_NONNULL_BEGIN

@class WTLDeviceController;

@interface WTLDeviceAttestationDeviceInfo : NSObject

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

/**
 * The vendor ID for the device from the Device Attestation Certificate. May be nil only if attestation was unsucessful.
 */
@property (nonatomic, readonly, nullable) NSNumber * vendorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

/**
 * The product ID for the device from the Device Attestation Certificate. May be nil only if attestation was unsucessful.
 */
@property (nonatomic, readonly, nullable) NSNumber * productID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, readonly) WTLCertificateDERBytes dacCertificate;
@property (nonatomic, readonly) WTLCertificateDERBytes dacPAICertificate;
@property (nonatomic, readonly, nullable) NSData * certificateDeclaration;

@end

/**
 * The protocol definition for the WTLDeviceAttestationDelegate.
 */
@protocol WTLDeviceAttestationDelegate <NSObject>
@optional
/**
 * Only one of the following delegate callbacks should be implemented.
 *
 * If -deviceAttestationFailedForController:opaqueDeviceHandle:error: is implemented, then it will
 * be called when device attestation fails, and the client can decide to continue or stop the
 * commissioning.
 *
 * If -deviceAttestationCompletedForController:opaqueDeviceHandle:attestationDeviceInfo:error: is
 * implemented, then it will always be called when device attestation completes.
 */

/**
 * Notify the delegate when device attestation completed with device info for additional verification. If
 * this callback is implemented, continueCommissioningDevice on WTLDeviceController is expected
 * to be called if commisioning should continue.
 *
 * This allows the delegate to stop commissioning after examining the device info (DAC, PAI, CD).
 *
 * @param controller Controller corresponding to the commissioning process
 * @param opaqueDeviceHandle Handle of device being commissioned
 * @param attestationDeviceInfo Attestation information for the device
 * @param error NSError representing the error code on attestation failure. Nil if success.
 */
- (void)deviceAttestationCompletedForController:(WTLDeviceController *)controller
                             opaqueDeviceHandle:(void *)opaqueDeviceHandle
                          attestationDeviceInfo:(WTLDeviceAttestationDeviceInfo *)attestationDeviceInfo
                                          error:(NSError * _Nullable)error
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

/**
 * Notify the delegate when device attestation fails.  If this callback is implemented,
 * continueCommissioningDevice on WTLDeviceController is expected to be called if commisioning
 * should continue.
 *
 * @param controller Controller corresponding to the commissioning process
 * @param opaqueDeviceHandle Handle of device being commissioned
 * @param error NSError representing the error code for the failure
 */
- (void)deviceAttestationFailedForController:(WTLDeviceController *)controller
                          opaqueDeviceHandle:(void *)opaqueDeviceHandle
                                       error:(NSError * _Nonnull)error
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)deviceAttestation:(WTLDeviceController *)controller
       completedForDevice:(void *)device
    attestationDeviceInfo:(WTLDeviceAttestationDeviceInfo *)attestationDeviceInfo
                    error:(NSError * _Nullable)error
    WTL_DEPRECATED("Please implement deviceAttestationCompletedForController:opaqueDeviceHandle:attestationDeviceInfo:error:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)deviceAttestation:(WTLDeviceController *)controller
          failedForDevice:(void *)device
                    error:(NSError * _Nonnull)error
    WTL_DEPRECATED("Please implement deviceAttestationFailedForController:opaqueDeviceHandle:error:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

NS_ASSUME_NONNULL_END
