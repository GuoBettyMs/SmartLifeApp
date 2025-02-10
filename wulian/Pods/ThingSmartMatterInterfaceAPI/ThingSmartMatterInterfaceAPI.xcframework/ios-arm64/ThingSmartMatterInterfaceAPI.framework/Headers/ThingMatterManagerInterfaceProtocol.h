//
//  ThingMatterManagerInterfaceProtocol.h
//  ThingSmartMatterInterfaceAPI
//
//  Created by Ninuo on 2022/6/7.
//

#import <Foundation/Foundation.h>
#import <ThingSmartUtil/ThingSmartUtil.h>

NS_ASSUME_NONNULL_BEGIN

@protocol ThingMatterManagerInterfaceProtocol <NSObject>

// 当前 Matter 生效的空间ID
- (long long)currentMatterSpaceId;

// 加载空间的 Matter 信息
- (void)loadFabricWithSpaceId:(long long)spaceId success:(ThingSuccessHandler)success failure:(ThingFailureError)failure;

@end

NS_ASSUME_NONNULL_END
