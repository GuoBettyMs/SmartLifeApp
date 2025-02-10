//
//  ThingSmartMessageDNDListEntity.h
//  ThingSmartMessageKit
//
//  Created by 柒松 on 2024/6/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartMessageDNDListEntity : NSObject
/**
 * An array that stores weekly periodic do-not-disturb periods.
 */
@property (nonatomic, copy, nullable) NSArray *periodDNDList;
/**
 * An array that stores one-time do-not-disturb periods.
 */
@property (nonatomic, copy, nullable) NSArray *onceDNDList;
@end

NS_ASSUME_NONNULL_END
