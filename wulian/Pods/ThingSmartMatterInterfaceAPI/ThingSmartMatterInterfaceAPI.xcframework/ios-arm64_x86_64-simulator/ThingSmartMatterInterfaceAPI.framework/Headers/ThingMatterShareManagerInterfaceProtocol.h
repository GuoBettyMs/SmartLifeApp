//
//  ThingMatterShareManagerInterfaceProtocol.h
//  ThingSmartMatterInterfaceAPI
//
//  Created by 尼诺 on 2022/7/27.
//

#import <Foundation/Foundation.h>
#import "ThingSmartMatterNodeModel.h"
#import "ThingSmartMatterACLSyncStatusModel.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ThingMatterShareManagerInterfaceProtocol <NSObject>

/// writeAccessControlList 写入ACL
///
/// @param devId           devId
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.
- (void)writeAccessControlListWithDevId:(NSString *)devId success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;


- (void)writeAccessControlListWithDevIds:(nonnull NSArray<NSString *> *)devIds callback:(void(^)(void))callback;


/// 通知设备写入ACL
///
/// @param devId           devId
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.
- (void)notifyAccessControlListWithDevId:(NSString *)devId success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

/// 获取 matter 设备 ACL 同步状态的缓存数据。
/// 注意：暂时仅无脑缓存上次接口请求的数据，如果有“在切换 Fabric 时清空缓存的需求”请在业务层自行处理。
- (NSArray<ThingSmartMatterACLSyncStatusModel *> *)getMatterDeviceCachedACLSyncStatus;

/// 获取 matter 设备 ACL 同步状态。
- (void)getMatterDeviceACLSyncStatusWithDevIds:(NSArray <NSString *>*)devIds success:(void(^)(NSArray <ThingSmartMatterACLSyncStatusModel *>*result))success failure:(ThingFailureError)failure;


/// 获取所有已经缓存的设备节点ID
- (NSArray<NSString *> *)getMatterNodesCachedDeviceIds;

/// 缓存设备节点ID
- (void)setMatterNodesCachedDevceIds:(NSArray<NSString *> *)devIDs;

/// 获取当前家庭所有设备节点信息的混存数据
- (NSArray<ThingSmartMatterNodeModel *> *)getDevicesLocalCacheFabricNodesWithdevIds:(NSArray <NSString *>*)devIds;

/// 获取当前家庭所有设备的节点信息
- (void)getDevicesFabricNodesWithdevIds:(NSArray <NSString *>*)devIds
                               callback:(void(^)(NSArray <ThingSmartMatterNodeModel *>*result))callback;

- (void)getDevicesFabricNodesWithdevIds:(NSArray <NSString *>*)devIds
                                spaceId:(long long)spaceId
                               callback:(void(^)(NSArray <ThingSmartMatterNodeModel *>*result))callback;

/// 设置当前家庭所有设备的节点信息
/// param nodeModelList 设备节点信息
- (void)setMatterNodes:(NSArray <ThingSmartMatterNodeModel *>*)nodeModelList;


/// 重置（初始化）设备节点信息
- (void)resetMatterNodes;

@end

NS_ASSUME_NONNULL_END
