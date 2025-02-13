//
//  ThingSmartGroupDevListModel.h
//  ThingSmartDeviceCoreKit
//
//  Copyright (c) 2014-2024.
//

#ifndef ThingSmart_ThingSmartGroupDevListModel
#define ThingSmart_ThingSmartGroupDevListModel

#import <Foundation/Foundation.h>

/// Information about the group device list.
@interface ThingSmartGroupDevListModel : NSObject


/// The device ID.
@property(nonatomic,strong) NSString    *devId;

/// The gateway ID.
@property(nonatomic,strong) NSString    *gwId;

/// Indicates whether the device is online.
@property(nonatomic,assign) BOOL        online;

/// The URL of the device icon.
@property(nonatomic,strong) NSString    *iconUrl;

/// The product ID.
@property(nonatomic,strong) NSString    *productId;

/// Indicates whether the device is selected.
@property(nonatomic,assign) BOOL        checked;

/// The device name.
@property(nonatomic,strong) NSString    *name;

/// The device address.
@property(nonatomic,strong) NSString    *nodeId;


@end

#endif

