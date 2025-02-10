//
// ThingSmartMatterManager.h
// ThingSmartMatterKit
//
// Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartMatterManager : NSObject

@property (nonatomic, assign, readonly) long long spaceId;

/// shareInstance.
ThingSDK_SINGLETON

/// load the fabric by space id.
/// - Parameters:
///   - spaceId: the space id. (aka home id).
///   - success: Called when the task is finished.
///   - failure: Called when the task is interrupted by an error.
- (void)loadFabricWithSpaceId:(long long)spaceId success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

/// load current home matter compressed fabricID
- (uint64_t)currentCompressedFabricID;

@end

NS_ASSUME_NONNULL_END
