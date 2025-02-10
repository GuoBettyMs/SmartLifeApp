//
//  ThingDeviceDetailKitErrorDefine.h
//  ThingDeviceDetailKit
//
//  Created by 后主 on 2023/8/29.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 通用错误
extern NSErrorDomain const ThingDeviceDetailKitErrorDomain;

typedef NS_ENUM(NSInteger, ThingDeviceDetailKitError) {
    //base
    ThingDeviceDetailKitGeneralError = -10000, //general error
    
    //device
    ThingDeviceDetailKitDeviceError = -10010, //device error
    ThingDeviceDetailKitDeviceNullError = -10011, //device is nil
    ThingDeviceDetailKitDeviceOfflineError = -10012, //device is offline
    
    //group
    ThingDeviceDetailKitGroupError = -10020, //group error
    ThingDeviceDetailKitGroupNullError = -10021, //group is nil
    
    
    //timer
    ThingDeviceDetailKitTimerError = -10030, //timer error
    ThingDeviceDetailKitTimerExtraError = -10031, //get data extra of timer fail
    ThingDeviceDetailKitTimerBleTransmissionTimeoutError = -10032, //ble transmission time out
    ThingDeviceDetailKitTimerBleDataParseError = -10033, //ble data parse error
    ThingDeviceDetailKitTimerDeviceCannotSyncError = -10034, //device can not sync
    
    //channel
    ThingDeviceDetailKitChannelError = -10040, //channel error
    ThingDeviceDetailKitChannelSetupTimeoutError = -10041, //settup channel time out
    ThingDeviceDetailKitChannelSetupSubDeviceExistError = -10042, //sub device exist
    ThingDeviceDetailKitChannelSetupDeviceCloudOfflineError = -10043, //device cloud offline
    ThingDeviceDetailKitChannelSetupUnsupportError = -10044, //not support
    ThingDeviceDetailKitChannelSetupDeviceSizeError = -10045, //device size error
    
    //reboot
    ThingDeviceDetailKitRebootError = -10050, //reboot error
    ThingDeviceDetailKitRebootDeviceOfflineError = -10051, //device LAN and Cloud offline
    ThingDeviceDetailKitRebootTimeoutError = -10052, //reboot time out
    ThingDeviceDetailKitRebootDeviceError = -10053, //reboot generate error

    
    //share
    ThingDeviceDetailKitShareError = -10060, //share error
    ThingDeviceDetailKitShareUserAccountNil = -10061, //user account is nil
    ThingDeviceDetailKitShareSpaceIdNil = -10062, //space is nil
};



/// 蓝牙协议层错误
extern NSErrorDomain const ThingDeviceTimerBleSyncErrorDomain;

/// 操作失败原因
typedef NS_ENUM(NSInteger, ThingDeviceTimerBleSyncErrorCode) {
    /// 取不到错误码（数据为空，数据字节过短）
    ThingTimerBleTimerProtocolErrorCode_DataError = -1,
    /// 协议层只定义了一种错误码 0x01
    ThingTimerBleTimerProtocolErrorCode_Unknow  = 0x01
};

NS_ASSUME_NONNULL_END
