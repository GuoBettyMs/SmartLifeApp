//
//  ThingBLEStatusHandler.h
//  Pods
//
//  Created by 吴戈 on 2020/1/7.
//

#import <Foundation/Foundation.h>
#import "ThingBLEStatusService.h"

NS_ASSUME_NONNULL_BEGIN

@protocol ThingBLEDeviceInfoProtocol;
@interface ThingBLEStatusHandler : NSObject

ThingSDK_SINGLETON

/// 是否在 batch 接口调用完后进行自动扫描连接
@property (nonatomic, assign) BOOL autoScanning;

/// 获取已扫描到的未配网设备
- (NSArray *)getUnActivedListInfo;

- (void)clearUnactiveList;

- (void)disconnectAllDevices;

- (NSInteger)getPeripheralRSSI:(NSString *)uuid __deprecated_msg("This method is deprecated, Use getPeripheralRSSI:mac: instead");

//获取蓝牙外设的信号 传其中一个即可
- (NSInteger)getPeripheralRSSI:(nullable NSString *)uuid mac:(nullable NSString *)mac;

#pragma mark - OTA Method
//当前是否在升级中
- (BOOL)isOTA:(NSString *)uuid;

- (NSInteger)getOTAStatus:(NSString *)uuid;

- (void)disconnectDevice:(id<ThingBLEDeviceInfoProtocol>)deviceInfo;

#pragma mark - ConnectManage
/// 判断当前已连接设备是否达到阈值，并踢掉最不活跃的设备
- (BOOL)handleConnectedDevices:(NSString *)uuid;

@end

NS_ASSUME_NONNULL_END
