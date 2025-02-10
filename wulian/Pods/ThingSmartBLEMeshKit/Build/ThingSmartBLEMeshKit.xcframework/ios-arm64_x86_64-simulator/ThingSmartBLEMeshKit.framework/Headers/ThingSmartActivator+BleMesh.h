//
// ThingSmartActivator+BleMesh.h
// ThingSmartBLEMeshKit
//
// Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)

#import <ThingSmartActivatorCoreKit/ThingSmartActivatorCoreKit.h>

NS_ASSUME_NONNULL_BEGIN

/// @brief The mesh activator category.
@interface ThingSmartActivator (BleMesh)

/// Adds a Wi-Fi connector to a mesh network and returns a pairing token that is valid for 10 minutes.
/// @param meshId The mesh ID.
/// @param nodeId The node ID.
/// @param productId The product ID.
/// @param uuid The device UUID.
/// @param authKey The authorization key.
/// @param version The version.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)getTokenWithMeshId:(NSString *)meshId
                    nodeId:(NSString *)nodeId
                 productId:(NSString *)productId
                      uuid:(NSString *)uuid
                   authKey:(NSString *)authKey
                   version:(NSString *)version
                   success:(ThingSuccessString)success
                   failure:(ThingFailureError)failure;

/// Connects a device to a Bluetooth mesh network.
/// @param ssid The router hotspot name.
/// @param password The router hotspot password.
/// @param token The pairing token.
/// @param timeout The timeout value is 100 seconds by default.
- (void)startBleMeshConfigWiFiWithSsid:(NSString *)ssid
                              password:(NSString *)password
                                 token:(NSString *)token
                               timeout:(NSTimeInterval)timeout;


@end

NS_ASSUME_NONNULL_END
