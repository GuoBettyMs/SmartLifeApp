//
//  ThingSmartFamilyCityModel.h
//  ThingSmartFamilyBizKit
//
//  Created by huangjj on 2022/12/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartFamilyCityModel : NSObject

/// Area of the home
@property (nonatomic, strong, nullable) NSString *area;

@property (nonatomic, strong, nullable) NSString *pinyin;

/// Province of home
@property (nonatomic, strong, nullable) NSString *province;

/// City of home
@property (nonatomic, strong, nullable) NSString *city;
@property (nonatomic, strong, nullable) NSString *cityIdTxt;
@property (nonatomic, strong, nullable) NSString *cityId;

@end

NS_ASSUME_NONNULL_END
