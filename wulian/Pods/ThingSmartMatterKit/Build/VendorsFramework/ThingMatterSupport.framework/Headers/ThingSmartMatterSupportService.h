//
//  ThingSmartMatterSupportService.h
//  ThingMatterSupport
//
//  Created by 神威 on 2022/11/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class MTRSetupPayload;

typedef void(^ThingMatterPairCompleteBlock)(NSError * result);

@interface ThingSmartMatterSupportService : NSObject

+ (instancetype)sharedInstance;

- (MTRSetupPayload *)generatePayloadWithOnboardingString:(NSString *)onboardingString;

- (void)startMatterSupportPairWithEcoName:(NSString *)ecoName homes:(NSArray <NSString *> *)homes payloadString:(NSString *)payloadString completion:(ThingMatterPairCompleteBlock)completion;

@end

NS_ASSUME_NONNULL_END
