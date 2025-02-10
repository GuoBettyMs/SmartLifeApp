//
//  ThingModuleRouteRegisterProtocol.h
//  ThingModuleManager
//
//  Created by ThingInc on 2018/8/30.
//

#import <Foundation/Foundation.h>

/// Same as EAnnotationPriority
typedef enum {
    ThingModuleRoutePriorityMin = -1024,
    ThingModuleRoutePriorityLow = -16,
    ThingModuleRoutePriorityBase = 0,
    ThingModuleRoutePriorityHigher = 16,
    ThingModuleRoutePriorityMax = 1024,
} ThingModuleRoutePriority;

@protocol ThingModuleRouteRegisterProtocol <NSObject>

@optional
// 注册路由
- (NSArray<NSString *> *)registModuleRoutes;

/*
 为路由表注册优先级 优先级越高，会被优先路由
 eg:
 @{
    @"ThingPageName": @(ThingModuleRoutePriorityBase)
 }
 */
- (NSDictionary<NSString *, NSNumber *> *)registPriorityForRoutes;

// 处理路由事件
- (BOOL)handleRouteWithScheme:(NSString *)scheme
                         host:(NSString *)host
                         path:(NSString *)path
                       params:(NSDictionary *)params;
// 处理路由事件
- (BOOL)handleRouteWithScheme:(NSString *)scheme
                         host:(NSString *)host
                         path:(NSString *)path
                       params:(NSDictionary *)params
                     callBack:(void(^)(NSDictionary *result))callBack;

@end
