//
//  ThingMatterShareInterfaceAPI.h
//  Pods
//
//  Created by 萧然 on 2022/7/12.
//

#ifndef ThingMatterShareInterfaceAPI_h
#define ThingMatterShareInterfaceAPI_h

#import "ThingMatterMultipleFabricPasscodeModel.h"
#import "ThingMatterMultipleFabricInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^ThingSuccessHandler)(void);
typedef void (^ThingSuccessInt)(int result);
typedef void (^ThingSuccessString)(NSString *result);

typedef void (^ThingFailureHandler)(void);
typedef void (^ThingFailureError)(NSError * _Nonnull error);


@protocol ThingMatterShareInterfaceProtocol <NSObject>


/// get matter connected Status 获取matter连接状态
/// @param devid           devid
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.
- (void)getConnectedStatusSuccessWithDevid:(NSString *)devid success:(ThingSuccessHandler)success failure:(ThingFailureError)failure __deprecated_msg("This api is deprecate.");

/// readSupportedFabrics 支持的Fabric数量
/// @param devid           devid
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.
/// 
- (void)readSupportedFabricsWithDevid:(NSString *)devid success:(ThingSuccessInt)success failure:(ThingFailureError)failure __deprecated_msg("This api is deprecate.");

/// readCommissionedFabrics
/// @param devid           devid
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.
- (void)readCommissionedFabricsWithDevid:(NSString *)devid success:(ThingSuccessInt)success failure:(ThingFailureError)failure __deprecated_msg("This api is deprecate.");

//请求云端passcode

/// getMultipleFabricPasscode
/// @param devid           devid
/// @param completionBlock      Called when the task is finished.
- (void)getMultipleFabricPasscodeWithDevid:(NSString *)devid completion:(void(^)(ThingMatterMultipleFabricPasscodeModel *passcodeModel, NSError *error))completionBlock __deprecated_msg("This api is deprecate. Please use `-sendEnhancedCommissioningWithDevid:forceRefresh:ssidInfo:success:failure:` directly");

//从云端获取passcode，无视过期时间，每次都获取新的

/// getMultipleFabricPasscode
/// @param devid           devid
/// @param completionBlock      Called when the task is finished.
- (void)getMultipleFabricPasscodeForceRefreshWithDevid:(NSString *)devid completion:(void(^)(ThingMatterMultipleFabricPasscodeModel *passcodeModel, NSError *error))completionBlock __deprecated_msg("This api is deprecate. Please use `-sendEnhancedCommissioningWithDevid:forceRefresh:ssidInfo:success:failure:` directly");

//- (NSString *)generateQrCodeWithDevid:(NSString *)devid multipleFabricPasscodeModel:(ThingSmartMatterMultipleFabricPasscodeModel*)passcodeModel;

/// generateQrCode 生成二维码内容
/// @return QrCode
- (NSString *)generateQrCodeWithDevid:(NSString *)devid fabricPasscodeModel:(ThingMatterMultipleFabricPasscodeModel*)passcodeModel __deprecated_msg("This api is deprecate. Please use `-sendEnhancedCommissioningWithDevid:forceRefresh:ssidInfo:success:failure:` directly");

/// open commissing  window 发送ECM指令
/// @param devid           devid
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.
- (void)sendEnhancedCommissioningCommandWithDevid:(NSString *)devid fabricPasscodeModel:(ThingMatterMultipleFabricPasscodeModel *)passcodeModel success:(void(^)(NSString *qrCode,NSString *setupCode))success failure:(ThingFailureError)failure __deprecated_msg("This api is deprecate. Please use `-sendEnhancedCommissioningWithDevid:forceRefresh:ssidInfo:success:failure:` directly");

/// close commissing  window 关闭设备调试窗口
/// @param devid           devid
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.

//- (void)revokeCommissioningCommandWithdevid:(NSString *)devid success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;
- (void)revokeCommissioningCommandWithDevid:(NSString *)devid success:(ThingSuccessHandler)success failure:(ThingFailureError)failure __deprecated_msg("This api is deprecate.");

/// 获取当前设备 Wifi 名称
/// @param devid           devid
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.

- (void)getWifiDeviceSsidWithDevid:(NSString *)devid success:(ThingSuccessString)success failure:(ThingFailureError)failure;

/// writeAccessControlList 写入ACL
///
/// @param devId           devId
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.
- (void)writeAccessControlListWithDevId:(NSString *)devId success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

/// 通知设备写入ACL
///
/// @param devId           devId
/// @param success      Called when the task is finished.
/// @param failure      Called when the task is interrupted by an error.
- (void)notifyAccessControlListWithDevId:(NSString *)devId success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

/// Read fabric list. 获取 Fabirc 列表
/// - Parameters:
///   - devId: devId
///   - success:  Called when the task is finished.
///   - failure: Called when the task is interrupted by an error.
- (void)readFabricsWithDevid:(NSString *)devid
                     success:(void(^)(NSArray<ThingMatterMultipleFabricInfoModel *> *fabrics))success
                       failure:(ThingFailureError)failure;


/// Remove Fabric by Fabric index.
/// - Parameters:
///   - devId: devId
///   - faibricIndex: The fabric index.
///   - success: Called when the task is finished.
///   - failure: Called when the task is interrupted by an error.
- (void)removeFabricDevid:(NSString *)devid
                    Index:(NSInteger)fabricIndex
                  success:(ThingSuccessHandler)success
                  failure:(ThingFailureError)failure;

/// Check the device multiple fabric command communicate channels avaliable or not.
- (BOOL)checkPipelineAvailableWithDevid:(NSString *)devid;

/// Open commissing  window. (ECM Command)
/// - Parameters:
///   - devId: devId
///   - forceRefresh: Force refresh the passcode info.
///   - ssidInfo: The Wi-Fi ssid currently connected to the device.
///   - success: Called when the task is finished.
///   - failure: Called when the task is interrupted by an error.
- (void)sendEnhancedCommissioningWithDevid:(NSString *)devid
                              forceRefresh:(BOOL)forceRefresh
                                  ssidInfo:(nullable void(^)(NSString * __nullable ssid))ssidInfo
                                   success:(void(^)(NSString *qrCodeStr, NSString *setupCode))success
                                   failure:(nullable ThingFailureError)failure;

/// Open commissing  window. (ECM Command)
/// - Parameters:
///   - devId: devId
///   - forceRefresh: Force refresh the passcode info.
///   - ssidInfo: The Wi-Fi ssid currently connected to the device.
///   - success: Called when the task is finished.
///   - failure: Called when the task is interrupted by an error.
- (void)sendEnhancedCommissioningMethodWithDevid:(NSString *)devid
                                    forceRefresh:(BOOL)forceRefresh
                                        ssidInfo:(nullable void(^)(NSString * __nullable ssid))ssidInfo
                                         success:(void(^)(NSString *qrCodeStr, NSString *setupCode, long long duration))success
                                         failure:(nullable ThingFailureError)failure;

@end

NS_ASSUME_NONNULL_END

#endif /* ThingMatterShareInterfaceAPI_h */
