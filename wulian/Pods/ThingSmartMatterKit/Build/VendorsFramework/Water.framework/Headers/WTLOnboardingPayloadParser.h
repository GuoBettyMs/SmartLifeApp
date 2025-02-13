/**
 *
 *    Copyright (c) 2020 Project CHIP Authors
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

NS_ASSUME_NONNULL_BEGIN

@class WTLSetupPayload;

typedef NS_ENUM(NSUInteger, WTLOnboardingPayloadType) {
    WTLOnboardingPayloadTypeQRCode = 0,
    WTLOnboardingPayloadTypeManualCode,
    WTLOnboardingPayloadTypeNFC
} WTL_NEWLY_DEPRECATED("WTLOnboardingPayloadType is unused");

WTL_NEWLY_DEPRECATED("Please use [WTLSetupPayload setupPayloadWithOnboardingPayload:error:]")
@interface WTLOnboardingPayloadParser : NSObject

+ (WTLSetupPayload * _Nullable)setupPayloadForOnboardingPayload:(NSString *)onboardingPayload
                                                          error:(NSError * __autoreleasing *)error;

@end

NS_ASSUME_NONNULL_END
