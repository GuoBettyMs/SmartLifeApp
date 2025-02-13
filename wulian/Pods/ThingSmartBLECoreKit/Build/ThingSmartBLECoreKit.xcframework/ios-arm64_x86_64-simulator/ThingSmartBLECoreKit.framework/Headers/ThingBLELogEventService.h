//
//  ThingBLELogEventService.h
//  ThingSmartBLEKit
//
//  Created by 吴戈 on 2019/8/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// common event
#define Thing_LOG_EVENT_BLE_CONFIG_START   @"bc78b0af622a504d8d1d7dc12bf84f0c"
#define Thing_LOG_EVENT_BLE_CONFIG_SUCCESS @"3c99d3ab3debaf41d896296b490d2a85"
#define Thing_LOG_EVENT_BLE_CONFIG_FAILURE @"f22f53893cedc95aa34844b792f341ba"

// ble private event
#define Thing_LOG_EVENT_BLE_CONFIG                         @"a5edb7fb59a6b10ff6959150ddf73388"
#define Thing_LOG_EVENT_BLE_CONNECT                        @"c29bb3a9fe300fcc9dee70068309a5c5"
#define Thing_LOG_EVENT_BLE_OTA                            @"09ab59808da00453664333dcf339af58"

#define Thing_LOG_EVENT_BLE_PAIR                           @"thing_7651589qm7wa7xorzixwskllleyw76z5"
#define Thing_LOG_EVENT_BLE_TRANSPARENT_CHANNEL            @"thing_0a93u96flzoye2tgy0aoo1h4gwgk2hxd"

#define Thing_LOG_EVENT_BLE_CHANNEL_COMPAT                 @"thing_z4fmjx9co2sishnkk6u347swzlvy1vac"

// config type
#define Thing_LOG_TYPE_BLE_CONFIG                          @"ble_config_ble"
#define Thing_LOG_TYPE_BLE_PLUS_CONFIG                     @"ble_config_ble_plus"
#define Thing_LOG_TYPE_BLE_SECURIThing_CONFIG                 @"ble_config_ble_security"
#define Thing_LOG_TYPE_BLE_DEVDERT_CONFIG                  @"ble_config_ble_devcert"
#define Thing_LOG_TYPE_BLE_PLUGPLAY_CONFIG                 @"ble_config_ble_plugplay"
#define Thing_LOG_TYPE_BLE_PLUGPLAY_WIFI_CONFIG            @"ble_config_ble_plugplay_wifi"
#define Thing_LOG_TYPE_BLE_ZIGBEE_CONFIG                   @"ble_config_ble_zb"

// by beacon type
#define Thing_LOG_TYPE_BEACON_CONFIG                   @"ble_config_beacon"

// connect type
#define Thing_LOG_TYPE_BLE_CONNECT                         @"ble_connect_ble"
#define Thing_LOG_TYPE_BLE_PLUS_CONNECT                    @"ble_connect_ble_plus"
#define Thing_LOG_TYPE_BLE_SECURIThing_CONNECT                @"ble_connect_ble_security"
#define Thing_LOG_TYPE_BLE_DEVDERT_CONNECT                 @"ble_connect_ble_devcert"

// ota type
#define Thing_LOG_TYPE_BLE_OTA                             @"ble_ota_v1"
#define Thing_LOG_TYPE_BLE_PRO_OTA                         @"ble_ota_v1_pro"
#define Thing_LOG_TYPE_BLE_PLUS_OTA                        @"ble_ota_v1_plus"
#define Thing_LOG_TYPE_BLE_SECURIThing_OTA                    @"ble_ota_v2"
#define Thing_LOG_TYPE_BLE_MCU_OTA                         @"ble_ota_mcu_v2"
#define Thing_LOG_TYPE_BLE_CHANNEL_OTA                     @"ble_ota_channel_v2"
#define Thing_LOG_TYPE_BLE_SECURIThing_OTA_V4                 @"ble_ota_v4"
#define Thing_LOG_TYPE_BLE_MCU_OTA_V4                      @"ble_ota_mcu_v4"
#define Thing_LOG_TYPE_BLE_CHANNEL_OTA_V4                  @"ble_ota_channel_v4"

// config step
#define Thing_BLE_CONFIG_STEP_CHECK                        @"ble_check"
#define Thing_BLE_CONFIG_STEP_TIMEOUT                      @"ble_timeout"
#define Thing_BLE_CONFIG_STEP_CONFIG_CANCEL                @"ble_config_cancel"
#define Thing_BLE_CONFIG_STEP_CONNECT                      @"ble_connect"
#define Thing_BLE_CONFIG_STEP_SERVICE                      @"ble_discover_service"
#define Thing_BLE_CONFIG_STEP_CHARACT                      @"ble_discover_character"
#define Thing_BLE_CONFIG_STEP_NOTIFY                       @"ble_notify_error"
#define Thing_BLE_CONFIG_STEP_GET_KEY_FAILURE              @"ble_get_key"
#define Thing_BLE_CONFIG_STEP_GET_DEVINFO                  @"ble_get_devinfo"
#define Thing_BLE_CONFIG_STEP_SET_PWD                      @"ble_set_pwd"
#define Thing_BLE_CONFIG_STEP_REGISTER_ERROR               @"ble_register"
#define Thing_BLE_CONFIG_STEP_PAIR                         @"ble_pair"
#define Thing_BLE_CONFIG_STEP_DEVCERT                      @"ble_devcert"
#define Thing_BLE_CONFIG_STEP_ACTIVE                       @"ble_active"
#define Thing_BLE_CONFIG_STEP_ACTIVE_BIND                  @"ble_active_bind"
#define Thing_BLE_CONFIG_STEP_ACTIVE_GUEST_BIND            @"ble_active_guest_bind"
#define Thing_BLE_CONFIG_STEP_DEVCERT                      @"ble_devcert"
#define Thing_BLE_CONFIG_STEP_UNKNOWN                     @"ble_unknown"

#define THING_BLE_SERVER_GET_DEVINFO                     @"ble_service_get_devinfo";


#define Thing_BLE_CONFIG_STEP_PP_CHECK                     @"ble_pp_check"                     /// 业务层调用时传参异常
#define Thing_BLE_CONFIG_STEP_PP_GET_DEVINFO               @"ble_pp_get_devinfo"               /// 0x001A 指令错误
#define Thing_BLE_CONFIG_STEP_PP_ACTIVE                    @"ble_pp_active"                    /// thing.m.dm.device.active 接口报错
#define Thing_BLE_CONFIG_STEP_PP_ACTIVE_INFO               @"ble_pp_active_info"               /// 0x001B 指令错误（分包错误）
#define Thing_BLE_CONFIG_STEP_PP_ENV                       @"ble_pp_env"                       /// thing.m.env.get 接口报错
#define Thing_BLE_CONFIG_STEP_PP_PSK_API                   @"ble_pp_psk_api"                       /// 安全等级接口报错
#define Thing_BLE_CONFIG_STEP_PP_SEND_WIFI_INFO            @"ble_pp_send_wifi_info"            /// 0x001C 指令发送错误
#define Thing_BLE_CONFIG_STEP_PP_DEVICE_WIFI_INFO          @"ble_pp_device_wifi_info_error"    /// 0x001C 设备返回 Wi-Fi json 解析错误
#define Thing_BLE_CONFIG_STEP_PP_TIMEOUT                   @"ble_pp_timeout"                   /// plugplay 轮询超时

#define Thing_BLE_CONFIG_STEP_ZB_CHECK                     @"ble_zb_check"                     /// 业务层调用时传参异常
#define Thing_BLE_CONFIG_STEP_ZB_GW_NOT_SUPPORT            @"ble_zb_gw_not_sup"                /// 当前网关不支持 plugplay 功能
#define Thing_BLE_CONFIG_STEP_ZB_GET_DEVINFO               @"ble_zb_get_devinfo"               /// 0x0000 指令获取 zigbee 子设备信息错误
#define Thing_BLE_CONFIG_STEP_ZB_PUBLISH_MAC               @"ble_zb_mac"                       /// 通过 mq 下发 64 号指令给网关去配子设备失败
#define Thing_BLE_CONFIG_STEP_ZB_GW_ERROR                  @"ble_zb_gw_error"                  /// 网关返回 65 号指令，返回错误
#define Thing_BLE_CONFIG_STEP_ZB_GW_INFO                   @"ble_zb_gw_info"                   /// 网关通过 65 号指令返回的网关信息不全
#define Thing_BLE_CONFIG_STEP_ZB_SEND_GW_INFO              @"ble_zb_send_gw_info"              /// 通过 0x0040 指令下发网关信息给子设备失败
#define Thing_BLE_CONFIG_STEP_ZB_DEVICE_GW_INFO            @"ble_zb_device_gw_info_error"      /// 通过 0x0040 指令下发网关信息给子设备，子设备返回错误
#define Thing_BLE_CONFIG_STEP_ZB_TIMEOUT                   @"ble_zb_timeout"                   /// plugplay 轮询子设备上线超时

// connect step
#define Thing_BLE_CONNECT_STEP_CONNECT                     @"ble_connect"
#define Thing_BLE_CONNECT_STEP_SERVICE                     @"ble_discover_service"
#define Thing_BLE_CONNECT_STEP_CHARACT                     @"ble_discover_character"
#define Thing_BLE_CONNECT_STEP_NOTIFY                      @"ble_notify_error"
#define Thing_BLE_CONNECT_STEP_GET_DEVINFO                 @"ble_get_devinfo"
#define Thing_BLE_CONNECT_STEP_GET_DEVINFO_TIMEOUT         @"ble_get_devinfo_timeout"
#define Thing_BLE_CONNECT_STEP_PAIR                        @"ble_pair"
#define Thing_BLE_CONNECT_STEP_PAIR_TIMEOUT                @"ble_pair_timeout"
#define Thing_BLE_CONNECT_STEP_DEVCERT                     @"ble_devcert"
#define Thing_BLE_CONNECT_STEP_TIMEOUT                     @"ble_timeout"
#define Thing_BLE_CONNECT_STEP_DEVICE_NOT_EXIST            @"ble_device_not_exist"

//channel compat type
#define Thing_BLE_COMPAT_TYPE_CONNECT                       @"ble_compat_connect"
#define Thing_BLE_COMPAT_TYPE_QUERYDEVICEINFO               @"ble_compat_get_deviceInfo"
#define Thing_BLE_COMPAT_TYPE_TIMEOUT              @"ble_compat_timeout"

//channel compat errorCode
#define Thing_BLE_COMPAT_ERRORCODE_NULLSERVICE                   @"ble_discover_service_null"   /// 发现服务为空
#define Thing_BLE_COMPAT_ERRORCODE_CHARACT                     @"ble_discover_character_wrong" /// 发现特征值失败或为空
#define Thing_BLE_COMPAT_ERRORCODE_NOTIFYCHARACT                     @"ble_discover_notify_character_wrong"  /// notify特征值失败
#define Thing_BLE_COMPAT_ERRORCODE_PAIR_TIMEOUT                    @"ble_pair_timeout" /// 配对指令超时
#define Thing_BLE_COMPAT_ERRORCODE_TOTAL_TIMEOUT                    @"ble_connect_total_timeout" ///蓝牙连接总超时


@interface ThingBLELogEventService : NSObject

@property (nonatomic, strong)   NSDate      *freeDate;
@property (nonatomic, copy)     NSString    *event;
@property (nonatomic, copy)     NSString    *type;
@property (nonatomic, copy)     NSString    *step;
@property (nonatomic, copy)     NSString    *pid;
@property (nonatomic, copy)     NSString    *uuid;
@property (nonatomic, copy)     NSString    *errorMsg;
@property (nonatomic, assign)   BOOL        isSuccess;
@property (nonatomic, copy)     NSString    *pairID;

@property (nonatomic, copy)     NSString    *category;
@property (nonatomic, copy)     NSString    *subCategory;
@property (nonatomic, copy)     NSString    *thirdCategory;
/// OTA
@property (nonatomic, copy)     NSString    *firmwareSize;
@property (nonatomic, copy)     NSString    *firmwareVersion;
//区分设备连接是走的安全连接还是非安全连接
@property (nonatomic, assign) NSInteger bleV2Crpt;

- (void)logEvent;
- (void)updateLogEventWithError:(NSError *)error;

@end

@interface ThingBLECompatEventService : NSObject

@property (nonatomic, copy)     NSString    *event;
@property (nonatomic, copy)     NSString    *devId;
@property (nonatomic, copy)     NSString    *pid;
@property (nonatomic, copy)     NSString    *uuid;
@property (nonatomic, copy)     NSString    *category;
@property (nonatomic, copy)     NSString    *subCategory;
@property (nonatomic, copy)     NSString    *thirdCategory;
@property (nonatomic, copy)     NSString    *type;
@property (nonatomic, copy)     NSString    *errorCode;
@property (nonatomic, copy)     NSString    *errorMsg;
@property (nonatomic, assign)   BOOL        isSuccess;

- (void)logEvent;

@end

//用于埋点的设备品类相关模型
@interface ThingBLEDeviceCategoryInfo : NSObject

@property (nonatomic, copy)     NSString    *devId;
@property (nonatomic, copy)     NSString    *category;
@property (nonatomic, copy)     NSString    *subCategory;
@property (nonatomic, copy)     NSString    *thirdCategory;

@end

NS_ASSUME_NONNULL_END
