//
//  ThingSmartACategoryLevel1Model.h
//  ThingActivatorSktAPI
//
//  Created by qisong on 2022/3/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartACategoryLevel1Model : NSObject
@property (nonatomic, copy) NSString *name; ///< name
@property (nonatomic, copy) NSString *level1Code; ///< code
@property (nonatomic, copy) NSString *type; ///< code
@property (nonatomic, strong) NSNumber *cardType; ///< 1 big card ,2 small card
@property (nonatomic, assign) BOOL cardBackground; ///< show card background
@end

NS_ASSUME_NONNULL_END
