//
// ThingSmartBleMesh.h
// ThingSmartBLEMeshKit
//
// Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The Bluetooth LE mesh delegate that is instantiated when the mesh network is used to perform a specific action.
@protocol ThingSmartBleMeshDelegate<NSObject>

@optional

/// The data point (DP) update.
- (void)subDeviceUpdateWithAddress:(NSString *)address dps:(NSDictionary *)dps;

/// Receives the DPs of raw type.
- (void)bleMeshReceiveRawData:(NSString *)raw;

/// Reports multiple DPs in a call.
- (void)bleMeshReceiveBatchDeviceDpsInfo;

@end

/// @brief The Bluetooth mesh base class that supports the basic operations of Bluetooth mesh networks. For example, devices in a mesh network can be created, updated, and deleted.
///
/// The mesh parameters are required to establish a Bluetooth mesh connection.
///
@interface ThingSmartBleMesh : NSObject

@property (nonatomic, strong, readonly) ThingSmartBleMeshModel *bleMeshModel;

@property (nonatomic, weak) id<ThingSmartBleMeshDelegate> delegate;

/// Whether to disable bluetooth. Default NO
@property (nonatomic, assign) BOOL disableBLECapability;

/// The shared instance.
+ (instancetype)sharedInstance;

/// Returns a device object.
/// @param meshId The mesh ID.
/// @param homeId The home ID.
+ (instancetype)bleMeshWithMeshId:(NSString *)meshId homeId:(long long)homeId;

/// The mesh parameters are required to establish a Bluetooth mesh connection.
/// @param meshId The mesh ID.
/// @param homeId The home ID.
- (instancetype)initWithMeshId:(NSString *)meshId homeId:(long long)homeId NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

/// Creates a mesh.
/// @param meshName The mesh name.
/// @param homeId The home ID.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
+ (void)createBleMeshWithMeshName:(NSString *)meshName homeId:(long long)homeId success:(void(^)(ThingSmartBleMeshModel *meshModel))success failure:(ThingFailureError)failure;

/// Returns the sub-device information of the mesh.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)getSubDeviceListFromCloudWithSuccess:(void (^)(NSArray <ThingSmartDeviceModel *> *subDeviceList))success failure:(ThingFailureError)failure;

/// Returns the single sub-device information.
/// @param deviceId The device ID.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)getSubDeviceFromCloudWithDeviceId:(NSString *)deviceId success:(void (^)(ThingSmartDeviceModel *subDeviceModel))success failure:(ThingFailureError)failure;

/// Sends DPs to a single sub-device.
/// @param nodeId The node ID.
/// @param pcc The size class label.
/// @param dps The DP dictionary.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)publishNodeId:(NSString *)nodeId
                  pcc:(NSString *)pcc
                  dps:(NSDictionary *)dps
              success:(ThingSuccessHandler)success
              failure:(ThingFailureError)failure;

/// Controls devices in a group.
/// @param localId The local ID.
/// @param pcc The size class label.
/// @param dps The DP dictionary.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)multiPublishWithLocalId:(NSString *)localId
                            pcc:(NSString *)pcc
                            dps:(NSDictionary *)dps
                        success:(ThingSuccessHandler)success
                        failure:(ThingFailureError)failure;

/// Sends broadcast DPs.
/// @param dps The DP dictionary.
/// @param pcc The size class label.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)broadcastDps:(NSDictionary *)dps
                 pcc:(NSString *)pcc
             success:(ThingSuccessHandler)success
             failure:(ThingFailureError)failure;

/// Returns the latest DP information of the sub-device.
/// @param nodeId The node ID.
/// @param pcc The size class label.
/// @param dpIdList A list of keys in the DPs.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)getSubDeviceDpsWithNodeId:(NSString *)nodeId
                              pcc:(NSString *)pcc
                         dpIdList:(NSArray <NSNumber *> *)dpIdList
                          success:(ThingSuccessHandler)success
                          failure:(ThingFailureError)failure;

/// Sends DPs of raw type to the device.
/// @param raw The type of transmission.
/// @param pcc The size class label.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)publishRawDataWithRaw:(NSString *)raw
                          pcc:(NSString *)pcc
                      success:(ThingSuccessHandler)success
                      failure:(ThingFailureError)failure;

/// Modifies the mesh name.
/// @param meshName The mesh name.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)updateMeshName:(NSString *)meshName success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

/// Deletes the mesh. If the specified mesh group contains sub-devices, the sub-devices are also removed. The Wi-Fi connector is also removed.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)removeMeshWithSuccess:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

/// Adds a Bluetooth sub-device. API version: 2.0.
/// @param uuid The short address identification of the Bluetooth sub-device.
/// @param homeId The home ID.
/// @param authKey The authorization key.
/// @param nodeId The node ID.
/// @param productKey The product key.
/// @param ver The version.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)addSubDeviceWithUuid:(NSString *)uuid
                      homeId:(long long)homeId
                     authKey:(NSString *)authKey
                      nodeId:(NSString *)nodeId
                  productKey:(NSString *)productKey
                         ver:(NSString *)ver
                     success:(void (^)(NSString *devId, NSString *name))success
                     failure:(ThingFailureError)failure;

/// Renames the mesh sub-device.
/// @param deviceId The device ID.
/// @param name The device name.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)renameMeshSubDeviceWithDeviceId:(NSString *)deviceId name:(NSString *)name success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

/// Removes the mesh sub-device.
/// @param deviceId The device ID.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)removeMeshSubDeviceWithDeviceId:(NSString *)deviceId success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

@end

NS_ASSUME_NONNULL_END
