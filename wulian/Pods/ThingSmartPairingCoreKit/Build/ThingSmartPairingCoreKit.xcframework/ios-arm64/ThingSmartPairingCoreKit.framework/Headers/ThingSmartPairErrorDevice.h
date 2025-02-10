//
//  ThingSmartPairErrorDevice.h
//  ThingSmartPairingCoreKit
//
//  Copyright (c) 2014-2024 Tuya Inc. (https://developer.tuya.com)
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartPairErrorDevice : NSObject

@property (nonatomic, copy) NSString *devId;

@property (nonatomic, strong) NSError *error;

@property (nonatomic, strong) id device;

@end

NS_ASSUME_NONNULL_END
