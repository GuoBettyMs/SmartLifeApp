//
//  ThingDeviceChannelManager.h
//  ThingDeviceDetailKit
//
//  Created by 后主 on 2024/1/5.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingDeviceChannelManager : NSObject

- (instancetype)initWithDeviceId:(NSString *)deviceId;

- (void)updateChannel:(int)channel success:(void(^)(void))success failure:(void(^)(NSError *))failure;

@end

NS_ASSUME_NONNULL_END
