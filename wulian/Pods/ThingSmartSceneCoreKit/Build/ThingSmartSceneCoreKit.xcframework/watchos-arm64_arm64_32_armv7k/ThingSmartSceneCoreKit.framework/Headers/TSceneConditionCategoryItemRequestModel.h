//
//  TSceneConditionCategoryItemRequestModel.h
//  ThingSmartSceneCoreKit
//
//  Created by mile on 2024/7/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TSceneConditionCategoryItemRequestModel : NSObject

/// The home ID.
@property (nonatomic, assign) long long homeId;

/// The app version.
@property (nonatomic, copy) NSString *appVersion;

@end

NS_ASSUME_NONNULL_END
