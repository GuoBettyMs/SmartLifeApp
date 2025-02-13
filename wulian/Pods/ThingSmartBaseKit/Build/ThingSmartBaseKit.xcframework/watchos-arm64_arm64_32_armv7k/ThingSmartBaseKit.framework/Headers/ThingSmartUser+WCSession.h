//
//  ThingSmartUser+WCSession.h
//  ThingSmartBaseKit
//
//  Copyright (c) 2014-2024.
//

#ifndef ThingSmartUser_WCSession_h
#define ThingSmartUser_WCSession_h

#import "ThingSmartUser.h"

/**
 WatchConnectivity.framework is not linked because not all developers require this feature.
 If the SDKs are linked to WatchConnectivity.framework but do not use this feature, your app might be rejected when you publish the app to Apple Store.
 Therefore, we recommend that you manually link WatchConnectivity.framework and use the feature on demand.
 */
//#import <WatchConnectivity/WatchConnectivity.h>

@class WCSession, WCSessionUserInfoTransfer;

NS_ASSUME_NONNULL_BEGIN

extern NSString *const ThingSmartUserWCSessionKey;

/// WatchConnectivity.framework is not linked because not all developers require this feature.
/// If the SDKs are linked to WatchConnectivity.framework but do not use this feature, your app might be rejected when you publish the app to Apple Store.
/// Therefore, we recommend that you manually link WatchConnectivity.framework and use the feature on demand.
@interface ThingSmartUser (WCSession)

/// Synchronizes ThingSmartUser context to Apple Watch. In the case of user login, logout, and session expiration on iPhone, use this method to manually synchronize the data.
/// Example: [ThingSmartUser.sharedInstance updateApplicationContext:session];
/// @param session The session.
/// @return Results of synchronization.
- (BOOL)updateApplicationContext:(WCSession *)session API_AVAILABLE(ios(9.0));

/// Receives ThingSmartUser context from iPhone.
/// @param applicationContext The app context.
- (void)didReceiveApplicationContext:(NSDictionary *)applicationContext API_AVAILABLE(watchos(2.0));

@end

NS_ASSUME_NONNULL_END

#endif /* ThingSmartUser_WCSession_h */
