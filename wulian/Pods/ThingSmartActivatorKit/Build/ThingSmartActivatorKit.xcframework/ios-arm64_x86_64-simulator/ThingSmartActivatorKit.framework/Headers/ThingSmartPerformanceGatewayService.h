//
//  ThingSmartPerformanceGatewayService.h
//  ThingSmartActivatorKit
//
//  Copyright (c) 2014-2024.
//

#import <Foundation/Foundation.h>
#import <ThingSmartBaseKit/ThingSmartBaseKit.h>
#import "ThingSmartActivatorDefinition.h"

NS_ASSUME_NONNULL_BEGIN

/* 获取网关属性 BEGIN */
@class ThingSmartPerformanceGatewayProperty;
@class ThingSmartPerformanceGatewaySubMaximum;

@interface ThingSmartPerformanceGatewayProperty : NSObject
@property (nonatomic, copy)   NSString *gwId;
@property (nonatomic, assign) BOOL gwAutoRelation;
@property (nonatomic, strong) ThingSmartPerformanceGatewaySubMaximum *subMaximum;
@end

@interface ThingSmartPerformanceGatewaySubMaximum : NSObject
@property (nonatomic, assign) NSInteger blu;
@property (nonatomic, assign) NSInteger zig;
@end
/* 获取网关属性 END */


@interface ThingSmartPerformanceGatewayService : ThingSmartRequest

#pragma mark - 获取网关属性
typedef void (^ThingSmartPerformanceGatewayPropertySuccess)(NSArray <ThingSmartPerformanceGatewayProperty *> *elements);
typedef NS_ENUM(NSInteger, ThingSmartPerformanceGatewayPropertyErrorCode) {
    ThingSmartPerformanceGatewayPropertyErrorCodeDeviceIDEmpty = -10000,// 请求参数错误
    ThingSmartPerformanceGatewayPropertyErrorCodeParseError,// 返回解析网关属性错误
};

/// 获取网关属性
/// - Parameters:
///   - gatewayIDList: 网关id，仅支持处于在线状态的 SigMesh、Beacon 网关
///   - success: 可能结果为空
///   - failure: 本地错误类型见 `ThingSmartPerformanceGatewayServiceErrorCode`，后端错误参考后端文档
- (void)gatewayPropertyGatewayIDList:(NSArray<NSString *> *)gatewayIDList success:(ThingSmartPerformanceGatewayPropertySuccess __nullable)success failure:(ThingFailureError __nullable)failure;


#pragma mark - 获取小程序面板

typedef NS_ENUM(NSInteger, ThingSmartPerformanceGatewayMiniAppURLErrorCode) {
    ThingSmartPerformanceGatewayMiniAppURLErrorCodeParserError = -10000,// 返回解析小程序URL错误
};

/// 获取多网关配置面板 URL
/// - Parameters:
///   - success: 可能结果为空
///   - failure: 错误类型见 `ThingSmartPerformanceGatewayMiniAppURLErrorCode`，后端错误参考后端文档
- (void)fetchMiniAppURLWithSuccess:(ThingSuccessString __nullable)success failure:(ThingFailureError __nullable)failure;


#pragma mark - 自动绑定网关与子设备
typedef NS_ENUM(NSInteger, ThingSmartPerformanceGatewayAutoBindingErrorCode) {
    ThingSmartPerformanceGatewayAutoBindingErrorCodeGatewayEmpty = -10000,//网关id错误
    ThingSmartPerformanceGatewayAutoBindingErrorCodeSubDeviceIDEmpty,//子设备错误
    ThingSmartPerformanceGatewayAutoBindingErrorCodeSubDeviceOver,//子设备数量超过网关能够绑定的上限
    ThingSmartPerformanceGatewayAutoBindingErrorCodeParserError,// 返回解析绑定结果错误
};

/// 自动绑定网关与子设备
/// - Parameters:
///   - gatewayProperty: 网关属性，仅支持处于在线状态的 SigMesh、Beacon 网关
///   - subDeviceIDList: 子设备id，
///   - success: 绑定成功，网关能够绑定的子设备数是有数量限制的，只有网关能够绑定的剩余数量不小于待绑定的子设备个数才能成功
///   - failure: 本地错误类型见 `ThingSmartPerformanceGatewayAutoBindingErrorCodeParserError`，后端错误参考后端文档
- (void)autoBindingGateway:(ThingSmartPerformanceGatewayProperty *)gatewayProperty subDeviceIDList:(NSArray<NSString *> *)subDeviceIDList success:(ThingSuccessBOOL __nullable)success failure:(ThingFailureError __nullable)failure;

@end

NS_ASSUME_NONNULL_END
