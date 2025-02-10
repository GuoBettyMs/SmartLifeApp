//
//  ThingSmartMatterDiscoveryModel.h
//  ThingSmartMatterKit
//
// Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartMatterDiscoveryModel : NSObject

@property (nonatomic, strong) ThingSmartMatterSetupPayload *payload;

@property (nonatomic, strong) NSString *iconUrl;

@property (nonatomic, strong) NSString *deviceName;

@property (nonatomic, strong) NSString *productId;

@property (nonatomic, assign) BOOL isThingDevice;

@property (nonatomic, assign) ThingSmartMatterDeviceType deviceType;

- (instancetype)initWithPayload:(ThingSmartMatterSetupPayload *)payload;

@end

NS_ASSUME_NONNULL_END
