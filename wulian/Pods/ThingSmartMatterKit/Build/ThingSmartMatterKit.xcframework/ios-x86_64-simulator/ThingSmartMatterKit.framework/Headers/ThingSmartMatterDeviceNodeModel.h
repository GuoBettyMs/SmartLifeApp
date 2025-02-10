//
// ThingSmartMatterDeviceNodeModel.h
// ThingSmartMatterKit
//
// Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartMatterDeviceNodeModel : NSObject

@property (nonatomic, strong) NSString *devId;

@property (nonatomic, strong) NSString *fabricId;

@property (nonatomic, assign) long long nodeId;

@property (nonatomic, assign) BOOL control;
@end

NS_ASSUME_NONNULL_END
