//
//  ThingUpgradeListManager.h
//  ThingDeviceDetailKit
//
//  Created by 后主 on 2024/6/19.
//

#import <Foundation/Foundation.h>
#import "ThingUpgradeConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface ThingUpgradeListManager : NSObject

+ (instancetype)sharedInstance;

/// 获取当前家庭下设备固件升级信息
- (void)getUpgradeDevicesInFamily:(long long)familyId success:(void (^)(NSArray<ThingUpgradeListInfo *> * list))success failure:(void (^)(NSError *error))failure;

@end

NS_ASSUME_NONNULL_END
