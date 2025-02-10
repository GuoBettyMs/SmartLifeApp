//
//  ThingSmartProduct.h
//  ThingSmartDeviceCoreKit
//
//  Copyright (c) 2014-2024.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ThingSmartDeviceType) {
    ThingSmartDeviceTypeGatewaySubDevice,
};

@interface ThingSmartDeviceReplacementService : NSObject

- (instancetype)initWithDeviceType:(ThingSmartDeviceType)deviceType;

- (void)subDevReplaceWithOriginalId:(NSString *)deviceId
                      replacementId:(NSString *)replacementId
                            timeout:(NSTimeInterval)timeout
                     triggerSuccess:(nullable void (^)(void))success
                            complete:(nullable void (^)(void))complete
                            failure:(nullable void (^)(NSError *error))failure;


@end

NS_ASSUME_NONNULL_END
