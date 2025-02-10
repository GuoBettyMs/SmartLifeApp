//
//  ThingSmartBLEConfigPackageNotify.h
//  Pods
//
//  Created by 奥托 on 2021/7/1.
//

#ifndef ThingSmartBLEConfigPackageNotify_h
#define ThingSmartBLEConfigPackageNotify_h

#import "ThingSmartBLEConfigNotifyItem.h"

@protocol ThingSmartBLEConfigPackageNotify <NSObject>

- (void)classicConfigPackageWithDeviceInfo:(id<ThingBLEDeviceInfoProtocol>)deviceInfo
                                notifyItem:(ThingSmartBLEConfigNotifyItem *)notifyItem;

- (void)plusConfigPackageWithDeviceInfo:(id<ThingBLEDeviceInfoProtocol>)deviceInfo
                             notifyItem:(ThingSmartBLEConfigNotifyItem *)notifyItem;

- (void)secretConfigPackageWithDeviceInfo:(id<ThingBLEDeviceInfoProtocol>)deviceInfo
                               notifyItem:(ThingSmartBLEConfigNotifyItem *)notifyItem;

@end

#endif /* ThingSmartBLEConfigPackageNotify_h */
