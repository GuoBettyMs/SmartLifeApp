//
//  ThingSmartRoomTagDataModel.h
//  ThingSmartFamilyBizKit
//
//  Created by wzm on 2024/5/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartRoomTagDataModel : NSObject
/// 房间分组id
@property (nonatomic, assign) NSInteger roomTagId;
/// 房间分组名称
@property (nonatomic, copy) NSString *name;
/// 房间分组排序值
@property (nonatomic, assign) NSInteger displayOrder;
/// 家庭id
@property (nonatomic, copy) NSString *groupId;
@end

NS_ASSUME_NONNULL_END
