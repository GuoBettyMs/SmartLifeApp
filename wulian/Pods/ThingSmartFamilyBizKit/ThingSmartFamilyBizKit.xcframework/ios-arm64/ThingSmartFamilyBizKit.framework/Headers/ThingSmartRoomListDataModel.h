//
//  ThingSmartRoomListDataModel.h
//  ThingSmartFamilyBizKit
//
//  Created by wzm on 2024/5/7.
//

#import <Foundation/Foundation.h>
#import <YYModel/YYModel.h>

NS_ASSUME_NONNULL_BEGIN

/// 房间的云端模型
@interface ThingSmartRoomInfoDataModel : NSObject <NSCopying>
/// 房间id
@property (nonatomic, copy) NSString *roomId;
/// 关联的房间分组id列表
@property (nonatomic, copy) NSArray<NSString *> *roomTagIds;
/// 房间名称
@property (nonatomic, copy) NSString *name;
@end

@interface ThingSmartRoomListDataModel : NSObject <YYModel>
/// 按分组聚合的房间列表, key-房间分组id value-房间列表(按照groupOrder排序)
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSArray<ThingSmartRoomInfoDataModel *> *> *roomGroupMap;
/// 未分组房间列表
@property (nonatomic, strong) NSArray<ThingSmartRoomInfoDataModel *> *rooms;

@end
NS_ASSUME_NONNULL_END
