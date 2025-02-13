//
//  ThingSmartRouterActivator.h
//  ThingSmartActivatorCoreKit
//
//  Copyright (c) 2014-2024.
//

#import <ThingSmartDeviceCoreKit/ThingSmartDeviceCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

@class ThingSmartRouterActivator;

@protocol ThingSmartRouterActivatorDelegate <NSObject>

/// The callback of pairing status updates.
/// @param activator The activator instance.
/// @param deviceModel The value of ThingSmartDeviceModel.
/// @param error An error occurs while processing the request.
- (void)routerActivator:(ThingSmartRouterActivator *)activator didReceiveAutoConfigDevice:(ThingSmartDeviceModel *)deviceModel error:(NSError *)error;

@end

@interface ThingSmartRouterActivator : NSObject

/// Returns the delegate of ThingSmartRouterActivator.
@property (nonatomic, weak) id<ThingSmartRouterActivatorDelegate> delegate;


/// Returns the pairing token. This token is valid for 10 minutes.
/// @param success Called when the task is finished. ThingSuccessString is returned.
/// @param failure Called when the task is interrupted by an error.
- (void)getTokenSuccess:(ThingSuccessString)success
                failure:(ThingFailureError)failure;


/// Starts to scan for devices.
/// @param devIds A list of device IDs.
/// @param type Specifies whether to start scanning. Set the value to `0` to start scanning.
/// @param timeout The timeout value. Unit: seconds. Default value: 100.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)startDiscoverRouterWithDevIds:(NSArray<NSString *> *)devIds
                                 type:(NSInteger)type
                              timeout:(NSTimeInterval)timeout
                              success:(ThingSuccessHandler)success
                              failure:(ThingFailureError)failure;


/// Starts to scan for devices.
/// @param devIds A list of device IDs.
/// @param token The pairing token.
/// @param type Specifies whether to start scanning. Set the value to `0` to start scanning.
/// @param timeout The timeout value. Unit: seconds. Default value: 100.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)startDiscoverRouterWithDevIds:(NSArray<NSString *> *)devIds
                                token:(NSString *)token
                                 type:(NSInteger)type
                              timeout:(NSTimeInterval)timeout
                              success:(ThingSuccessHandler)success
                              failure:(ThingFailureError)failure;


/// Stops scanning for devices.
- (void)stopDiscover;

@end

NS_ASSUME_NONNULL_END
