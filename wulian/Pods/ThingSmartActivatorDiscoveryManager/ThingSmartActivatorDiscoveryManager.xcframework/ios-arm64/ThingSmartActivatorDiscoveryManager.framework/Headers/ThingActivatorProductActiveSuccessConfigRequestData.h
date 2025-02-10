//
//  ThingActivatorProductActiveSuccessConfigParam.h
//  ThingSmartActivatorDiscoveryManager
//
//  Created by huangjj on 2023/12/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingActivatorProductActiveSuccessConfigRequestData : NSObject
@property (nonatomic, strong) NSString *productId;
@property (nonatomic, assign) BOOL moreConfigFlag; // false 即不返回更多配置信息
@end

NS_ASSUME_NONNULL_END
