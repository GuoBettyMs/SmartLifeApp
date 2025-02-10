//
//  ThingSmartSceneConditionExtendConfigModel.h
//  ThingSmartSceneCoreKit
//
//  Created by 霞客 on 2024/5/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// Condition category item object.
@interface ThingSceneItemConfigModel : NSObject
// The condition item name.
@property (nonatomic, copy) NSString *title;
// The condition item description.
@property (nonatomic, copy) NSString *desc;
// When you select this conditional category will jump to the target page type. eg: mini, H5, native
@property (nonatomic, copy) NSString *jumpType;
// The condition item jump url.
@property (nonatomic, copy) NSString *jumpUrl;
// The condition item display icon url.
@property (nonatomic, copy) NSString *iconUrl;

@end

@interface ThingSceneConditionItemModel : ThingSceneItemConfigModel
// The condition entity type.
@property (nonatomic, assign) ThingConditionAutoType entityType;
// The item
@property (nonatomic, copy) NSString *code;

@end

@interface ThingSceneActionItemModel : ThingSceneItemConfigModel
// The action executor type.
@property (nonatomic, strong) NSString *actionExecutor;
@end

@interface ThingSceneCategoryItemList : NSObject

/// Device related condition categories, such as family return, face recognition.
@property (nonatomic, copy) NSArray<ThingSceneConditionItemModel *> *conditionItemList;

@property (nonatomic, copy) NSArray<ThingSceneActionItemModel *> *actionItemList;

@end


NS_ASSUME_NONNULL_END
