//
//  ThingUpgradeConstants.h
//  ThingDeviceDetailKit
//
//  Created by 后主 on 2024/5/14.
//

#import <Foundation/Foundation.h>
#import <ThingSmartDeviceCoreKit/ThingSmartDeviceCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const ThingUpgradeErrorDomain;

typedef NS_ENUM(NSUInteger, ThingUpgradeErrorCode) {
    ThingUpgradeErrorDeviceNotExists = 10000,
    ThingUpgradeErrorApDirectlyUnsupport = 10001,
    ThingUpgradeErrorGetUpgradeInfoFail = 10002,
    ThingUpgradeErrorGetUpgradeStatusFail = 10003,
};

typedef NS_ENUM(NSUInteger, ThingUpgradeNoticeType) {
    ThingUpgradeNoticeTypeDetection = 0,
    ThingUpgradeNoticeTypeRemind = 1,
    ThingUpgradeNoticeTypeForced = 2,
};

typedef NS_ENUM(NSUInteger, ThingUpgradeStatus) {
    ThingUpgradeStatusNone = ThingSmartDeviceUpgradeStatusReady,
    ThingUpgradeStatusPrepare = ThingSmartDeviceUpgradeStatusLocalPrepare,
    ThingUpgradeStatusWaiting = ThingSmartDeviceUpgradeStatusWaitingExectue,
    ThingUpgradeStatusDownloaded = ThingSmartDeviceUpgradeStatusDownloaded,
    ThingUpgradeStatusInQueue = ThingSmartDeviceUpgradeStatusInQueue,
    ThingUpgradeStatusUpgrading = ThingSmartDeviceUpgradeStatusUpgrading,
};

@interface ThingUpgradeInfo : NSObject

- (instancetype)initWithFirmwares:(NSArray<ThingSmartFirmwareUpgradeModel *> *)firmwares;

@property (nonatomic, strong, readonly) NSArray<ThingSmartFirmwareUpgradeModel *> *firmwares;

@property (nonatomic, assign, readonly) BOOL needUpgrade; //是否需要升级

@property (nonatomic, strong, readonly) NSArray<ThingSmartFirmwareUpgradeModel *> *needUpgradeFirmwares; //需要升级的固件

@property (nonatomic, assign, readonly) BOOL isUpgrading; //是否正在升级

@property (nonatomic, assign, readonly) ThingUpgradeStatus upgradeStatus; //升级状态

@property (nonatomic, assign, readonly) ThingSmartDeviceUpgradeMode upgradeMode; //升级模式

@property (nonatomic, assign, readonly) ThingUpgradeNoticeType noticeType; //提醒类型

@property (nonatomic, assign, readonly) BOOL controllableDudringUpgrade; //升级中是否可控

@property (nonatomic, assign, readonly) BOOL matchUpgradeCondition; //是否满足升级条件

@property (nonatomic, strong, readonly, nullable) NSString *mismatchReason; //不满足升级条件的原因

@end




@interface ThingUpgradeListInfo : NSObject

/// 设备 id
@property (nonatomic, copy) NSString *devId;

/// 设备 icon
@property (nonatomic, copy) NSString *icon;

/// 设备 name
@property (nonatomic, copy) NSString *name;

/// 升级固件 List
@property (nonatomic, strong) NSArray<ThingSmartFirmwareUpgradeModel *> *upgradeList;

@end


NS_ASSUME_NONNULL_END
