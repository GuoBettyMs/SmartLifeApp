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

typedef NS_OPTIONS(NSUInteger, WTLDiscoveryCapabilities) {
    WTLDiscoveryCapabilitiesUnknown = 0, // Device capabilities are not known (e.g. all we have is a numeric code).
    WTLDiscoveryCapabilitiesNone WTL_DEPRECATED_WITH_REPLACEMENT(
        "WTLDiscoveryCapabilitiesUnknown",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0,
    WTLDiscoveryCapabilitiesSoftAP = 1 << 0, // Device supports WiFi softAP
    WTLDiscoveryCapabilitiesBLE = 1 << 1, // Device supports BLE
    WTLDiscoveryCapabilitiesOnNetwork = 1 << 2, // Device supports On Network setup

    WTLDiscoveryCapabilitiesAllMask
    = WTLDiscoveryCapabilitiesSoftAP | WTLDiscoveryCapabilitiesBLE | WTLDiscoveryCapabilitiesOnNetwork,
};

typedef NS_ENUM(NSUInteger, WTLCommissioningFlow) {
    WTLCommissioningFlowStandard = 0, // Device automatically enters commissioning mode upon power-up
    WTLCommissioningFlowUserActionRequired = 1, // Device requires a user interaction to enter commissioning mode
    WTLCommissioningFlowCustom = 2, // Commissioning steps should be retrieved from the distributed compliance ledger
    WTLCommissioningFlowInvalid = 3,
};

typedef NS_ENUM(NSUInteger, WTLOptionalQRCodeInfoType) {
    WTLOptionalQRCodeInfoTypeUnknown WTL_DEPRECATED(
        "The type is never actually unknown",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4)),
    WTLOptionalQRCodeInfoTypeString,
    WTLOptionalQRCodeInfoTypeInt32,
};

/**
 * An optional information item present in the QR code the setup payload was
 * initialized from.
 */
@interface WTLOptionalQRCodeInfo : NSObject

@property (nonatomic, assign) WTLOptionalQRCodeInfoType type API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

/**
 * The numeric value of the TLV tag for this information item.
 */
@property (nonatomic, copy) NSNumber * tag;

/**
 * Exactly one of integerValue and stringValue will be non-nil, depending on the
 * the value of "type".
 */
@property (nonatomic, copy, nullable) NSNumber * integerValue;
@property (nonatomic, copy, nullable) NSString * stringValue;

@end

/**
 * A setup payload that can be created from a numeric code or QR code and
 * serialized to a numeric code or QR code, though serializing to QR code after
 * creating from numeric code will not work, because some required information
 * will be missing.
 */
@interface WTLSetupPayload : NSObject <NSSecureCoding>

@property (nonatomic, copy) NSNumber * version;
@property (nonatomic, copy) NSNumber * vendorID;
@property (nonatomic, copy) NSNumber * productID;
@property (nonatomic, assign) WTLCommissioningFlow commissioningFlow;

@property (nonatomic, strong) NSArray <WTLOptionalQRCodeInfo *> *allQRCodeInfoArray;

/**
 * The value of discoveryCapabilities is made up of the various
 * WTLDiscoveryCapabilities flags.  If the discovery capabilities are not known,
 * this will be set to WTLDiscoveryCapabilitiesUnknown.
 */
@property (nonatomic, assign)
    WTLDiscoveryCapabilities discoveryCapabilities API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * discriminator;

/**
 * If hasShortDiscriminator is true, the discriminator value contains just the
 * high 4 bits of the full discriminator.  For example, if
 * hasShortDiscriminator is true and discriminator is 0xA, then the full
 * discriminator can be anything in the range 0xA00 t0 0xAFF.
 */
@property (nonatomic, assign) BOOL hasShortDiscriminator;
@property (nonatomic, copy) NSNumber * setupPasscode API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy, nullable) NSString * serialNumber;
- (NSArray<WTLOptionalQRCodeInfo *> * _Nullable)getAllOptionalVendorData:(NSError * __autoreleasing *)error;

/**
 * Generate a random Matter-valid setup PIN.
 */
+ (NSUInteger)generateRandomPIN;

/**
 * Generate a random Matter-valid setup passcode.
 */
+ (NSNumber *)generateRandomSetupPasscode API_AVAILABLE( macos(13.1), watchos(9.2), tvos(16.2));

/**
 * Create an WTLSetupPayload with the given onboarding payload.
 *
 * Will return nil on errors (e.g. if the onboarding payload cannot be parsed).
 */
+ (WTLSetupPayload * _Nullable)setupPayloadWithOnboardingPayload:(NSString *)onboardingPayload
                                                           error:(NSError * __autoreleasing *)error
    API_AVAILABLE( macos(13.1), watchos(9.2), tvos(16.2));

/**
 * Initialize an WTLSetupPayload with the given passcode and discriminator.
 * This will pre-set version, product id, and vendor id to 0.
 */
- (instancetype)initWithSetupPasscode:(NSNumber *)setupPasscode
                        discriminator:(NSNumber *)discriminator API_AVAILABLE( macos(13.1), watchos(9.2), tvos(16.2));

/** Get 11 digit manual entry code from the setup payload. */
- (NSString * _Nullable)manualEntryCode;

/**
 * Get a QR code from the setup payload.
 *
 * Returns nil on failure (e.g. if the setup payload does not have all the
 * information a QR code needs).
 */
- (NSString * _Nullable)qrCodeString:(NSError * __autoreleasing *)error
    API_AVAILABLE( macos(13.1), watchos(9.2), tvos(16.2));

@end

@interface WTLOptionalQRCodeInfo (Deprecated)

@property (nonatomic, copy)
    NSNumber * infoType WTL_DEPRECATED("Please use type",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLSetupPayload (Deprecated)

@property (nonatomic, copy, nullable) NSNumber * rendezvousInformation WTL_DEPRECATED(
    "Please use discoveryCapabilities",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSNumber * setUpPINCode WTL_DEPRECATED(
    "Please use setupPasscode",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (instancetype)init WTL_DEPRECATED("Please use initWithSetupPasscode or setupPayloadWithOnboardingPayload", 
    macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
+ (instancetype)new WTL_DEPRECATED("Please use initWithSetupPasscode or setupPayloadWithOnboardingPayload", 
    macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

NS_ASSUME_NONNULL_END
