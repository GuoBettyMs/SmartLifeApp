//
//  ThingSmartHomeKitActivator+Home.h
//  ThingSmartActivatorKit
//
//  Copyright (c) 2014-2024.
//

#import <Foundation/Foundation.h>
#import <ThingSmartDeviceKit/ThingSmartDeviceKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartHomeKitActivator (Home)

/// Returns the pairing token for HomeKit devices.
/// @param homeID The home ID.
/// @param success Called when the task is finished. The token is returned.
/// @param failure Called when the task is interrupted by an error.
- (void)getTokenWithHomeID:(long long)homeID Success:(ThingSuccessString)success failure:(ThingFailureError)failure;

/// Adds HomeKit devices to a specified home.
/// @param homeId The home ID.
/// @param devIds A list of device IDs.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)bindHomeKitDeviceWithHomeId:(long long)homeId devIds:(NSArray <NSString *>*)devIds success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;


@end

NS_ASSUME_NONNULL_END
