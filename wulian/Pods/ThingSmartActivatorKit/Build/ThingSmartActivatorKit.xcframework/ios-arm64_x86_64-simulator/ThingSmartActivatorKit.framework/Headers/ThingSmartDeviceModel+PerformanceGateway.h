//
//  ThingSmartDeviceModel+PerformanceGateway.h
//  ThingSmartActivatorKit
//
//  Copyright (c) 2014-2024.
//

#import <ThingSmartDeviceCoreKit/ThingSmartDeviceCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ThingSmartDeviceModelGatewayBindType) {
    ThingSmartDeviceModelGatewayBindTypeDefault, // 可以进行绑定的子设备
    ThingSmartDeviceModelGatewayBindTypeManualOnly, //必须用户手动确认绑定关系
};

@interface ThingSmartDeviceModel (PerformanceGateway)

/// 符合绑定条件的子设备
- (BOOL)canBeBindSubDevice;

/// 符合绑定条件的网关
- (BOOL)canBeBindGateway;

/// 网关和子设备都可能可以进行绑定，但并不表示当前设备是高性能的
- (BOOL)canBeBind;

/// 确定子设备的绑定类型
- (ThingSmartDeviceModelGatewayBindType)gatewayBindType;

@end

NS_ASSUME_NONNULL_END
