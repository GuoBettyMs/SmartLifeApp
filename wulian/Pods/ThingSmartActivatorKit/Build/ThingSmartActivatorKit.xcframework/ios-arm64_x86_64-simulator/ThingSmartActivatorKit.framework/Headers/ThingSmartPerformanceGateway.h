//
//  ThingSmartPerformanceGateway.h
//  ThingSmartActivatorKit
//
//  Copyright (c) 2014-2024.
//

#import <Foundation/Foundation.h>
#import "ThingSmartActivatorDefinition.h"

@class ThingSmartPerformanceGatewayProperty;
@class ThingSmartPerformanceGatewaySubMaximum;

NS_ASSUME_NONNULL_BEGIN

/// 为了增强体验，高性能网关在配网完成后将子设备自动绑定到网关下，当存在多个高性能网关时则引导用户配置
@interface ThingSmartPerformanceGateway : NSObject

/// 是否存在可以自动绑定的网关或子设备
/// - Parameter devices: 配网成功的设备
- (BOOL)shouldBindForSuccessActivatorDevices:(NSArray <ThingSmartDeviceModel *> *)successActivatorDevices;

#pragma mark - 对家庭下网关与子设备处理自动绑定逻辑

typedef NS_ENUM(NSInteger, ThingSmartPerformanceGatewayActionType) {
    ThingSmartPerformanceGatewayActionTypeIdle,// 无设备可绑定
    ThingSmartPerformanceGatewayActionTypeAuto,// 仅单网关时，自动绑定子设备
    ThingSmartPerformanceGatewayActionTypeManual// 多网关时，手动绑定子设备
};

typedef NS_ENUM(NSInteger, ThingSmartPerformanceGatewayActionTypeErrorCode) {
    ThingSmartPerformanceGatewayActionTypeErrorCodeHomeID = -10000,
    ThingSmartPerformanceGatewayActionTypeErrorCodeNoDevice, //家庭下无可处理的设备
    ThingSmartPerformanceGatewayActionTypeErrorCodeNoGateway, //家庭下无可处理的网关
    ThingSmartPerformanceGatewayActionTypeErrorCodeNoSubDevice, //家庭下无可处理的子设备
    ThingSmartPerformanceGatewayActionTypeErrorCodeRequestProerty, //请求网关属性错误
    ThingSmartPerformanceGatewayActionTypeErrorCodeNoPerformanceDevice,// 无高性能网关
    ThingSmartPerformanceGatewayActionTypeErrorCodePerformanceDeviceOver,// 高性能网关超出可添加的子设备数量
    ThingSmartPerformanceGatewayActionTypeErrorCodeMiniAppURLFailed, //无法获取到小程序面板
};

/// value:NSError* __nullable 错误信息
extern NSString *const ThingSmartPerformanceGatewayAutoBindErrorKey;
/// value:ThingSmartPerformanceGatewayProperty* __nonnull 网关属性
extern NSString *const ThingSmartPerformanceGatewayAutoBindGatewayPropertyKey;
/// value:NSArray<NSString *> * __nonnull 子设备id列表
extern NSString *const ThingSmartPerformanceGatewayAutoBindSubDeviceIDListKey;
/// value:NSString* __nonnull miniApp URL 地址
extern NSString *const ThingSmartPerformanceGatewayAutoBindGatewayMiniAppURLKey;

/// 获取网关属性
/// - Parameters:
///  - actionType:`ThingSmartPerformanceGatewayActionType`
///  - userInfo: 额外信息
///    `ThingSmartPerformanceGatewayAutoBindErrorKey` , `actionType` 为 `ThingSmartPerformanceGatewayActionTypeIdle` 时可以处理
///    `ThingSmartPerformanceGatewayAutoBindGatewayPropertyKey` `actionType` 为 `ThingSmartPerformanceGatewayActionTypeAuto` 时可以处理
///    `ThingSmartPerformanceGatewayAutoBindSubDeviceIDListKey` `actionType` 为 `ThingSmartPerformanceGatewayActionTypeAuto` 时可以处理
///    `ThingSmartPerformanceGatewayAutoBindGatewayMiniAppURLKey`, `actionType` 为 `ThingSmartPerformanceGatewayActionTypeManual` 时可以处理
typedef void(^ThingSmartPerformanceGatewayAutoBindComplete)(ThingSmartPerformanceGatewayActionType actionType, NSDictionary *__nullable userInfo);


/// 将房间下的网关与子设备进行自动绑定
/// - Parameters:
///   - homeID: 房间id
///   - complete: 会有三种结果，1. 无法进行自动绑定 2. 满足条件自动由云端完成绑定 3. 跳转至手动绑定页面完成绑定
- (void)autoBindRoomDevicesWithRoomID:(ThingSmartHomeID)homeID complete:(ThingSmartPerformanceGatewayAutoBindComplete)complete;


/// 与 `ThingSmartPerformanceGatewayService` 同名方法一致
- (void)autoBindingGateway:(ThingSmartPerformanceGatewayProperty *)gatewayProperty subDeviceIDList:(NSArray<NSString *> *)subDeviceIDList success:(ThingSuccessBOOL __nullable)success failure:(ThingFailureError __nullable)failure;

@end

NS_ASSUME_NONNULL_END
