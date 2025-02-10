//
//  ThingSmartPairingHandlerDelegate.h
//  ThingSmartPairingCoreKit
//
//  Copyright (c) 2014-2024 Tuya Inc. (https://developer.tuya.com)
//

#import <Foundation/Foundation.h>
#import "ThingSmartPairSuccessDevice.h"
#import "ThingSmartPairErrorDevice.h"
#import "ThingSmartPairingHeader.h"
#import <ThingSmartUtil/ThingSmartUtil.h>

typedef void(^ ThingPollingRetry)(void);
typedef void(^ ThingApCompensation)(void);

NS_ASSUME_NONNULL_BEGIN

@protocol ThingSmartPairingHandlerDelegate <NSObject>

@optional

- (void)pairingDeviceReady;

- (void)pairingDeviceStateError:(NSError *)error;

/// 开始设备轮询
/// @param token token
/// @param retry 重试回调
/// @param success 成功轮询到设备的回调
/// @param failure 轮询到配网失败的设备回调
/// @discuss:
/// 开始设备轮询时从服务端拉取的设备信息不一定存在，所以需要多次触发接口查询设备是否成功配网，如果当前没有轮询到设备则需要调用 retry() 进行重试，轮询到设备后也有可能依然存在正在配网的设备正在上线中，所以依然需要调用 retry() , 不用担心循环的问题，在该方法中有超时和停止设定，当轮询到达一定时间时会自动停止，在手动调用 stopConfigWiFi 时也会停止轮询操作。
- (void)pollingDeviceWithToken:(NSString *)token retry:(nullable ThingPollingRetry)retry success:(nullable void(^)(ThingSmartPairSuccessDevice * _Nullable device))success failure:(nullable void(^)(ThingSmartPairErrorDevice * _Nullable device))failure;

- (void)pairingWithResult:(nullable id)result error:(nullable NSError *)error step:(ThingActivatorStep)step;

- (void)pairingSuccessWithResult:(nullable id)result;

- (void)pairingError:(nullable NSError *)error errorDevice:(nullable id)errorDevice;

/// 有安全级别的设备传递完了wifi信息，等待下一步了
- (void)pairingDidPassWiFiToSecurityLevelDevice:(NSString *)uuid;

- (void)deviceDataUpdate:(NSString *)devId;

- (void)meshSubDeviceDataUpdateWithMeshId:(NSString *)meshId deviceId:(NSString *)deviceId error:(NSError *)error;

- (void)checkDeviceStatusByDevId:(nullable NSString *)devId token:(nullable NSString *)token apCompensation:(nullable ThingSuccessHandler)compensation;

- (void)fetchInitKeyWithUUID:(NSString *)uuid success:(nullable void(^)(NSString * initKey))success failure:(nullable ThingFailureError)failure;

- (void)fetchPSKInfoWithSL:(NSNumber *)SL success:(nullable ThingSuccessDict)success failure:(nullable ThingFailureError)failure;

// MARK: EZ 2.0
/// 查询网关绑定状态，是否需要重置
- (void)checkGatewayInfo:(nullable NSString *)devId
                   token:(nullable NSString *)token
                 success:(nullable void(^)(void))success
                 failure:(ThingFailureError)failure;
/// 重置设备
- (void)resetDevice:(nullable NSString *)devId
              token:(nullable NSString *)token
            success:(nullable void(^)(void))success
            failure:(ThingFailureError)failure;


// MARK: IPC 直连
/// 获取设备模型中的 OriginJson
- (NSDictionary *)requestDeviceModel;

/// 更新设备模型
- (void)updateDeviceModelWithBody:(NSDictionary *)body data:(NSData *)data lpv:(NSString *)lpv type:(int)type;

/// 获取激活的 schema
- (NSDictionary *)requestDeviceSchema;

/// 免配网激活成功回调
- (void)activatorDeviceSuccessed;

/// 免配网激活失败回调
- (void)activatorDeviceFailureWithError:(NSError *)error;

- (void)didFailedToConnectWiFiToDevice:(NSString *)ssid uuid:(NSString *)uuid error:(NSError*)error;

@end

NS_ASSUME_NONNULL_END
