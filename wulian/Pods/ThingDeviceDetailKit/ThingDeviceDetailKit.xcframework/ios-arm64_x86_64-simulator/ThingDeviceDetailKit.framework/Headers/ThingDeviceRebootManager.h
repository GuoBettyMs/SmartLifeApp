//
//  ThingDeviceRebootManager.h
//  ThingDeviceDetailKit
//
//  Created by 后主 on 2024/1/10.
//

#import <Foundation/Foundation.h>
#import "ThingDeviceRebootTimer.h"

NS_ASSUME_NONNULL_BEGIN

@interface ThingDeviceRebootManager : NSObject

- (instancetype)initWithDeviceId:(NSString *)deviceId;

@property (nonatomic, copy, readonly) NSString *deviceId;


#pragma mark - timer reboot
- (void)addTimers:(NSArray<ThingDeviceRebootTimer *> *)timers success:(void(^)(NSArray<NSString *> *))success failure:(void(^)(NSError *error))failure;


- (void)updateTimer:(ThingDeviceRebootTimer *)timer success:(void(^)(void))success failure:(void(^)(NSError *error))failure;


- (void)getTimersSuccess:(void(^)(NSArray<ThingDeviceRebootTimer *> *))success failure:(void(^)(NSError *error))failure;

- (void)getTimersCountSuccess:(void(^)(NSInteger count))success failure:(void(^)(NSError *error))failure;


- (void)removeTimers:(NSArray<NSString *> *)timers success:(void(^)(void))success failure:(void(^)(NSError *error))failure;


#pragma mark - immediately reboot
- (void)rebootImmediatelySuccess:(void(^)(void))success failure:(void(^)(NSError *error))failure;

#pragma mark - reboot support
- (void)supportRebootSuccess:(void(^)(BOOL support))success failure:(void(^)(NSError *))failure;

@end

NS_ASSUME_NONNULL_END
