//
//  ThingSmartRoomBiz.h
//  ThingSmartRoomBizKit
//
//  Created by 陈立 on 2019/2/19.
//

#import <Foundation/Foundation.h>
#import <ThingSmartDeviceKit/ThingSmartRoom.h>
#import <ThingSmartDeviceKit/ThingSmartRoomModel.h>
#import <ThingSmartDeviceKit/ThingSmartHomeModel.h>
#import <ThingSmartUtil/ThingSmartUtil.h>
#import "ThingSmartDefaultRoomItem.h"
#import "ThingSmartRoomTagDataModel.h"
#import "ThingSmartRoomListDataModel.h"
#import "ThingDiyHomeRoomSnapshot.h"


NS_ASSUME_NONNULL_BEGIN

@class ThingSmartRoomBiz;

@protocol ThingSmartRoomBizDelegate <NSObject>

@optional

/**
 *  The delegate that is instantiated when a room is added.
 *
 *  @param roomBiz        Instance of room management
 *  @param roomModel    The room model
 *  @param homeModel    The home model
 */
- (void)roomBiz:(ThingSmartRoomBiz *)roomBiz
     didAddRoom:(ThingSmartRoomModel *)roomModel
         atHome:(ThingSmartHomeModel *)homeModel;

/**
 *  The delegate that is instantiated when an existing room is removed.
 *
 *  @param roomBiz         Instance of room management
 *  @param roomId           Room ID
 *  @param homeModel    The home model
 */
- (void)roomBiz:(ThingSmartRoomBiz *)roomBiz
  didRemoveRoom:(long long)roomId
         atHome:(ThingSmartHomeModel *)homeModel;

/**
 *  The delegate of room update information, such as the name.
 *
 *  @param roomBiz        Instance of room management
 *  @param roomModel    The room model
 *  @param homeModel    The home model
 */
- (void)roomBiz:(ThingSmartRoomBiz *)roomBiz
  didUpdateRoom:(ThingSmartRoomModel *)roomModel
         atHome:(ThingSmartHomeModel *)homeModel;

/**
 *  The delegate of updating the relationship between room and device or group
 *
 *  @param roomBiz        Instance of room management
 *  @param roomModel    The room model
 *  @param homeModel    The home model.
 */
- (void)roomBiz:(ThingSmartRoomBiz *)roomBiz
didUpdateRoomRelation:(ThingSmartRoomModel *)roomModel
         atHome:(ThingSmartHomeModel *)homeModel;

/**
 *  The delegate of sorting rooms
 *
 *  @param roomBiz         Instance of room management
 *  @param roomList       The room list
 *  @param homeModel     The home model.
 */
- (void)roomBiz:(ThingSmartRoomBiz *)roomBiz
didSortRoomList:(NSArray<ThingSmartRoomModel *>*)roomList
         atHome:(ThingSmartHomeModel *)homeModel;

@end

@interface ThingSmartRoomBiz : NSObject

+ (instancetype)sharedInstance;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

#pragma mark - Listener

/**
 *  Adding a Listener
 *
 *  @param observer     Implementation ThingSmartRoomBizDelegate  protocol
 */
- (void)addObserver:(id<ThingSmartRoomBizDelegate>)observer;

/**
 *  Removing a Listener
 *
 *  @param observer     Implementation ThingSmartRoomBizDelegate  protocol
 */
- (void)removeObserver:(id<ThingSmartRoomBizDelegate>)observer;

/// 获取家庭下房间列表
/**
 *  Get the list of rooms under the family
 *
 *  @param homeId        Family ID
 *  @param success      Success callback
 *  @param failure      Failure callback
 */
- (void)getRoomListWithHomeId:(long long)homeId
                      success:(void(^)(NSArray <ThingSmartRoomModel *> *roomList))success
                      failure:(ThingFailureError)failure;

/**
 *  Get the default rooms
 *
 *  @param success      Success callback
 *  @param failure      Failure callback
 */
- (void)getDefaultRoomsWithSuccess:(void(^)(NSArray <ThingSmartDefaultRoomItem *>*rooms))success
                           failure:(ThingFailureError)failure;


/**
 *  Get Recommended Rooms
 *
 *  @param success      Success callback
 *  @param failure      Failure callback
 */
- (void)getRecommendRoomsWithSuccess:(void(^)(NSArray<NSString *> *rooms))success
                             failure:(ThingFailureError)failure;

/**
 *  Get room details
 *
 *  @param roomId       Room ID
 *  @param homeId       Family ID
 *  @return The room model
 */
- (ThingSmartRoom *)getRoomDetailWithRoomId:(long long)roomId homeId:(long long)homeId;

/**
 *  Add a new room
 *
 *  @param roomName           Room name
 *  @param homeId               Family ID of the room to be added
 *  @param success             Success callback
 *  @param failure             Failure callback
 */
- (void)addHomeRoomWithName:(NSString *)roomName
                     homeId:(long long)homeId
                    success:(void(^)(ThingSmartRoomModel *roomModel))success
                    failure:(ThingFailureError)failure;

/**
 *  Remove a room
 *
 *  @param roomId       Room ID
 *  @param success     Success callback
 *  @param failure     Failure callback
 */
- (void)removeHomeRoomWithRoomId:(long long)roomId
                          homeId:(long long)homeId
                         success:(ThingSuccessHandler)success
                         failure:(ThingFailureError)failure;


/**
 *  Updat room names
 *
 *  @param roomName          New room name
 *  @param roomId              Room ID
 *  @param homeId              Family ID
 *  @param success            Success callback
 *  @param failure            Failure callback
 */
- (void)updateHomeRoomWithName:(NSString *)roomName
                        roomId:(long long)roomId
                        homeId:(long long)homeId
                       success:(void(^)(ThingSmartRoomModel *roomModel))success
                       failure:(ThingFailureError)failure;

/**
 *  Sort the rooms
 *
 *  @param rooms                Room list
 *  @param homeId              Family ID
 *  @param success            Success callback
 *  @param failure            Failure callback
 */
- (void)sortRoomList:(NSArray <ThingSmartRoomModel *> *)rooms
              homeId:(long long)homeId
             success:(ThingSuccessHandler)success
             failure:(ThingFailureError)failure;

/**
 *  Batch modification of rooms in relation to groups and devices
 *
 *  @param deviceGroupList       Device、Group list
 *  @param roomId                           Room ID
 *  @param homeId                           Family ID
 *  @param success                         Success callback
 *  @param failure                         Failure callback
 */
- (void)saveBatchRoomRelationWithDeviceGroupList:(NSArray <NSString *> *)deviceGroupList
                                          roomId:(long long)roomId
                                          homeId:(long long)homeId
                                         success:(ThingSuccessHandler)success
                                         failure:(ThingFailureError)failure;

/**
 *  Add device to a room
 *
 *  @param deviceId                      Device ID
 *  @param roomId                           Room ID
 *  @param homeId                           Family ID
 *  @param success                         Success callback
 *  @param failure                         Failure callback
 */
- (void)addDeviceWithDeviceId:(NSString *)deviceId
                       roomId:(long long)roomId
                       homeId:(long long)homeId
                      success:(ThingSuccessHandler)success
                      failure:(ThingFailureError)failure;

/**
 *  Remove device from a room
 *
 *  @param deviceId                      Device ID
 *  @param roomId                           Room ID
 *  @param homeId                           Family ID
 *  @param success                         Success callback
 *  @param failure                         Failure callback
 */
- (void)removeDeviceWithDeviceId:(NSString *)deviceId
                          roomId:(long long)roomId
                          homeId:(long long)homeId
                         success:(ThingSuccessHandler)success
                         failure:(ThingFailureError)failure;

/**
 *  Add group to a room
 *
 *  @param groupId                         Group ID
 *  @param roomId                           Room ID
 *  @param homeId                           Family ID
 *  @param success                         Success callback
 *  @param failure                         Failure callback
 */
- (void)addGroupWithGroupId:(NSString *)groupId
                     roomId:(long long)roomId
                     homeId:(long long)homeId
                    success:(ThingSuccessHandler)success
                    failure:(ThingFailureError)failure;

/**
 *  Remove group from a room
 *
 *  @param groupId                         Group ID
 *  @param roomId                           Room ID
 *  @param homeId                           Family ID
 *  @param success                         Success callback
 *  @param failure                         Failure callback
 */
- (void)removeGroupWithGroupId:(NSString *)groupId
                        roomId:(long long)roomId
                        homeId:(long long)homeId
                       success:(ThingSuccessHandler)success
                       failure:(ThingFailureError)failure;


#pragma mark - RoomTag
- (void)getRoomListDataModelWithHomeId:(long long)homeId
                               success:(void (^__nullable)(ThingSmartRoomListDataModel * dataModel))success
                               failure:(ThingFailureError __nullable)failure;

- (void)getRoomTagListWithHomeId:(long long)homeId
                         success:(void (^__nullable)(NSArray<ThingSmartRoomTagDataModel *> * roomTagList))success
                         failure:(ThingFailureError __nullable)failure;

- (void)createRoomTagWithName:(NSString *)name
                       homeId:(long long)homeId
                      success:(void (^ __nullable)(long long roomTagID))success
                      failure:(ThingFailureError __nullable)failure;
- (void)deleteRoomTagWithRoomTagId:(long long)roomTagId
                           success:(ThingSuccessHandler __nullable)success
                           failure:(ThingFailureError __nullable)failure;

- (void)updateRoomTagNameWithRoomTagId:(long long)roomTagId
                                  name:(NSString *)name
                               success:(ThingSuccessHandler __nullable)success
                               failure:(ThingFailureError __nullable)failure;

- (void)sortRoomTagWithRoomTagIds:(NSArray<NSString *> *)roomTagIds
                           homeId:(long long)homeId
                          success:(ThingSuccessHandler __nullable)success
                          failure:(ThingFailureError __nullable)failure;

- (void)manageRoomTagWithRoomRelationship:(NSDictionary<NSString *, NSArray<NSString *> *> *)roomRelationship
                               roomTagIds:(NSArray<NSString *> *)roomTagIds
                                   homeId:(long long)homeId
                                  success:(ThingSuccessHandler __nullable)success
                                  failure:(ThingFailureError __nullable)failure;
/// 查询家庭房间的快照（设备、群组、场景）
/// - Parameters:
///   - gid: 家庭ID
///   - roomId: 房间ID
///   - success: 成功回调
///   - failure: 失败回调
- (void)fetchRoomSnapshotWithHomeId:(long long)homeId
                             roomId:(long long)roomId
                            success:(void (^_Nullable)(ThingDiyHomeRoomSnapshot * roomSnapshot))success
                            failure:(ThingFailureError _Nullable)failure;
@end

NS_ASSUME_NONNULL_END
