//
//  ThingPairingManager.h
//  ThingSmartPairingCoreKit
//
//  Copyright (c) 2014-2024 Tuya Inc. (https://developer.tuya.com)
//

#import <Foundation/Foundation.h>
#import <ThingSmartUtil/ThingSmartUtil.h>


NS_ASSUME_NONNULL_BEGIN

@protocol ThingSmartPairingHandlerDelegate;
@protocol ThingSmartPairConfiguration;
@protocol ThingSmartLogTrackConfiguration;
@class ThingSmartPairingResumeConfigWiFiParam;
@class ThingSmartPairingScanWiFiListParam;
@class ThingSmartPairingWiFiInfo;

@interface ThingPairingManager : NSObject

@property (nonatomic, strong, nullable) NSString *gwId;

@property (nonatomic, strong, nullable) NSString *token;

@property (nonatomic, strong, nullable) NSString *registerString;//2位地区码+8位token+4位secret

@property (nonatomic, assign) ThingActivatorMode mode;

@property (nonatomic, copy, nullable) NSString *type;

@property (nonatomic, copy, nullable) NSString *pairStep;

@property (nonatomic, copy, nullable) NSString *productId;//只为某一特定的设备类型配网

@property (nonatomic, assign) BOOL hasSuccess;

@property (nonatomic, copy) NSDictionary *dataExt;

@property (nonatomic, copy) NSString *miniPairId;

@property (nonatomic, assign) BOOL isReported;

@property (nonatomic, assign) BOOL isPairing;

@property (nonatomic, weak, nullable) id<ThingSmartLogTrackConfiguration> logTrackConfiguration;

+ (void)getSSID:(ThingSuccessString)success failure:(ThingFailureError)failure;

+ (void)getBSSID:(ThingSuccessString)success failure:(ThingFailureError)failure;

+ (void)connectSSID:(NSString *)ssid pwd:(NSString *)pwd success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

+ (void)connectWifiWithSSID:(NSString *)ssid password:(NSString *)password completionHandler:(void (^)(NSError * error))completionHandler;

+ (void)connectSSIDPrefix:(NSString *)SSIDPrefix pwd:(NSString *)pwd success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

+ (void)connectWifiWithSSIDPrefix:(NSString *)SSIDPrefix password:(NSString *)password completionHandler:(void (^)(NSError * error))completionHandler;

+ (void)disconnectWifiWithSSID:(NSString *)ssid;

#pragma mark - General

- (void)startPairingWithConfiguration:(id<ThingSmartPairConfiguration>)config
                                 mode:(ThingActivatorMode)mode
                             delegate:(id<ThingSmartPairingHandlerDelegate>)delegate;

- (void)resumeAPPlusWithConfiguration:(id<ThingSmartPairConfiguration>)config;


/// 恢复配网，配网过程中如果遇到路由器连接失败，可以通过此接口恢复配网流程
/// @see `ThingSmartPairingResumeConfigWiFiParam`
/// @param param 恢复配网参数
/// @param error 错误信息
/// @return 0 成功
- (int)resumeConfigWiFi:(ThingSmartPairingResumeConfigWiFiParam*)param error:(NSError**)error;

/// 扫描可用wifi列表
/// @see `ThingSmartPairingScanWiFiListParam`,`ThingSmartPairingWiFiInfo`
/// @param param 扫描参数
/// @param success 扫描结果回调
/// @param failure 扫描失败回调
- (void)scanConnectableWiFiList:(ThingSmartPairingScanWiFiListParam*)param
                        success:(void(^)(NSArray <ThingSmartPairingWiFiInfo*>*_Nullable listArray))success
                        failure:(void(^)(NSError *_Nullable error))failure;

- (void)pairingSubDeviceWithGwId:(NSString *)gwId
                             msg:(NSDictionary *)msg
                        localKey:(NSString *)localKey
                              pv:(double)pv
                         success:(nullable ThingSuccessHandler)success
                         failure:(nullable ThingFailureError)failure;

- (void)publishMqttMsg:(NSDictionary *)msg
              protocol:(NSInteger)protocol
                 devId:(NSString *)devId
              localKey:(NSString *)localKey
                    pv:(double)pv
               success:(nullable ThingSuccessHandler)success
               failure:(nullable ThingFailureError)failure;

- (void)searchDevices;

- (void)stopConfigWiFi;

- (void)stopConfigZigbeeSubDevice;

- (void)stopConfigWifiUnBind;

- (void)continueConfigSecurityLevelDevice;

- (void)resetDevice;

@end

NS_ASSUME_NONNULL_END
