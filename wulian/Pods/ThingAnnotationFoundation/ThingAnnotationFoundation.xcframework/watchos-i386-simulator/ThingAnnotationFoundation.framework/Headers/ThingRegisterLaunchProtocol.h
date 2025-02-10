//
//  ThingRegisterRouterProtocol.h
//  ThingAnnotationFoundation
//
//  Created by Storm on 2022/2/6.
//

#import "ThingBaseAnnotation.h"


typedef enum : NSUInteger {
    ThingLaunchTaskRunMode_AsyncOnGlobal   = 0,      /**< 异步到全局队列执行 */
    ThingLaunchTaskRunMode_AsyncOnMain     = 1,      /**< 异步到主队列执行 */
    // 在主线程串行由于对启动时间影响较大，为内部保留类型，有需要请打call
} ThingLaunchTaskRunMode;

typedef enum : NSUInteger {
    ThingLaunchTaskPriority_Low = 250,
    ThingLaunchTaskPriority_Default = 750,
    ThingLaunchTaskPriority_Hight = 1000,
} ThingLaunchTaskPriority;


@protocol ThingRegisterLaunchProtocol <NSObject>

@optional

//路由优先级，默认是EAnnotationPriorityBase（0）
//+ (NSNumber *)launchPriority;
//+ (void)launchAnnotationTask;


@required
/*
 开始执行, 请把需要执行的任务写在此回调下
 */
- (void)start;

@optional

/// 设置task，主线程调用，所有task一起执行，这里仅建议做必要初始化、监听注册操作
- (void)setupTask;

/*
 执行方式  [Default: ThingLaunchTaskRunMode_AsyncOnGlobal]
 */
+ (ThingLaunchTaskRunMode)runMode;

/**
 优先级，默认为 ThingLaunchTaskPriority_Default
 */
+ (ThingLaunchTaskPriority)priority;

@end
