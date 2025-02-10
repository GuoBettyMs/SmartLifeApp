//
//  ThingTimeoutTaskManager.h
//  ThingSmartWatchExtensionModule
//
//  Created by 尼奥 on 2024/2/8.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface ThingTimeoutTask : NSObject
@property (nonatomic, strong, readonly) NSString *taskId;
@property (nonatomic, strong) NSDictionary *userInfo;

- (instancetype)initWithTaskId:(NSString *)taskId userInfo:(NSDictionary *_Nullable)userInfo;
+ (instancetype)taskWithTaskId:(NSString *)taskId userInfo:(NSDictionary *_Nullable)userInfo;
@end


@protocol ThingTimeoutTaskManagerDelagate <NSObject>
@required
- (void)timeoutTaskManagerFinishedTask:(ThingTimeoutTask *)task;
@end


/// 用于管理任务超时；支持线程安全
@interface ThingTimeoutTaskManager : NSObject

// 相同taskId至多只完成一次, 默认NO
@property (nonatomic, assign) BOOL onceTask;

// 初始化方法，接受一个超时秒数作为参数
- (instancetype)initWithTimeoutSeconds:(NSInteger)seconds;

// 任务超时时回调
@property (nonatomic, weak) id<ThingTimeoutTaskManagerDelagate> delegate;

// 方法用于检查给定的任务 ID 是否有正在运行的任务
- (BOOL)isRunningTaskId:(NSString *)taskId;

// 执行中的任务 ID
- (NSArray<NSString *> *)runningTaskId;

// 方法用于开始一个任务，接受一个任务 ID 作为参数
- (void)startTaskWithTaskId:(NSString *)taskId;

- (void)startTaskWithTask:(ThingTimeoutTask *)task;


// 方法用于结束一个任务，接受一个任务 ID 作为参数
- (void)finishTaskWithTaskId:(NSString *)taskId;


// 暂停计时，暂停后调用 startTaskWithTaskId: 任务会被丢弃
- (void)pause;

// 恢复计时，将已经在计时的任务重置，重置后将重新计算超时时间
- (void)resume;

@end

NS_ASSUME_NONNULL_END
