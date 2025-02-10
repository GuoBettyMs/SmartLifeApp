//
//  ThingDeviceInfoUtils.h
//  ThingDeviceDetailKit
//
//  Created by 后主 on 2024/1/5.
//

#import <Foundation/Foundation.h>
#import <ThingSmartDeviceCoreKit/ThingSmartDeviceCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingDeviceInfoUtils : NSObject

/// 获取matter设备信息
+ (void)getMatterDeviceInfoWithDeviceId:(NSString *)deviceId success:(void(^)(NSDictionary *dict))success failure:(void(^)(NSError *error))failure;

/// 获取硬件信息
+ (void)device:(ThingSmartDevice *)device getHardwareInfoSuccess:(void(^)(NSDictionary *dict))success failure:(void(^)(NSError *error))failure;
/// 获取硬件信息
+ (void)getHardwareInfoWithDeviceId:(NSString *)deviceId Success:(void(^)(NSDictionary *dict))success failure:(void(^)(NSError *error))failure;

+ (NSString *)generateUniqueId;

@end

NS_ASSUME_NONNULL_END
