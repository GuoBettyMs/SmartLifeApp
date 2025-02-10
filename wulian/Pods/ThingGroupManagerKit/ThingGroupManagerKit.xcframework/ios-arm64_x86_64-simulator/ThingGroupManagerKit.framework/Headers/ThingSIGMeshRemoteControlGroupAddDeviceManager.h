//
//  ThingSIGMeshRemoteControlGroupAddDeviceManager.h
//  ThingGroupManagerKit
//
//  Created by 后主 on 2024/3/5.
//

#import <Foundation/Foundation.h>
#import <ThingSmartDeviceCoreKit/ThingSmartDeviceCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSIGMeshRemoteControlGroupAddDeviceManager : NSObject

//这里的localId就是群组的localid
- (instancetype)initWithLocalId:(NSString *)localId timeout:(NSInteger)timeout;


- (void)addDeviceId:(NSString *)deviceId success:(void(^)(void))success failure:(void(^)(NSError *error))failure;


#pragma mark - ThingBluetoothInterfaceGroupServiceProtocol 通知回调
/**
 sigmesh遥控器群组添加设备。
 如果设备本地群组超过8个，则先删除失效群组，再重新添加设备。
 往群组里添加设备或从群组中移除设备，都需要监听 ThingBluetoothInterfaceGroupServiceProtocol。但是ThingBluetoothInterfaceService和ThingBluetoothBleMesh 都是单delegate，如果在内部设置代理将导致覆盖，可能会引起不必要的问题。
 */

//群组内添加设备回调
- (void)didAddDevice:(ThingSmartDeviceModel *)device toGroup:(ThingSmartGroupModel *)group error:(NSError *)error;

//获取到设备的本地群组列表
- (void)didFetchDevice:(ThingSmartDeviceModel *)device groupList:(NSArray<NSString *> *)groupList;

//群组内移除设备回调
- (void)didRemoveDevice:(ThingSmartDeviceModel *)device toGroup:(ThingSmartGroupModel *)group error:(NSError *)error;


@end

NS_ASSUME_NONNULL_END
