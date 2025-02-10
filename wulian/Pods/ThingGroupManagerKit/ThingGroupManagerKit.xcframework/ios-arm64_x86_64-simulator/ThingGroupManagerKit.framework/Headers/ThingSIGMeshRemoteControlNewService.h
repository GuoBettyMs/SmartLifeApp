//
//  ThingSIGMeshRemoteControlNewService.h
//  ThingGroupManagerKit
//
//  Created by 宇 on 2022/7/15.
//

#import "ThingGroupServiceProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface ThingSIGMeshRemoteControlNewService :  NSObject <ThingGroupServiceProtocol>

+ (instancetype)createWithDevId:(NSString *)devId localId:(NSString *)localId pccs:(NSArray *)pccs;

+ (instancetype)createWithDevId:(NSString *)devId localId:(NSString *)localId categoryCode:(nullable NSString *)categoryCode filterType:(nullable NSString *)filterType pccs:(NSArray *)pccs codes:(nullable NSArray *)codes;

@end

NS_ASSUME_NONNULL_END
