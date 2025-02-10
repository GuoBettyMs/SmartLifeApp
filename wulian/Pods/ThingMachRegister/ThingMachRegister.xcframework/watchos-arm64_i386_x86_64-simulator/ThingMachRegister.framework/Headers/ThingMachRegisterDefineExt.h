//
//  ThingMachRegisterDefineExt.h
//  ThingMachRegister
//
//  Created by wzm on 2024/3/4.
//
#import "ThingMachRegisterDefine.h"
#import "ThingMachRegisterManager.h"

/// 即插即拔的注册，使用Mach-O方式，支持 通用、结果过滤 两种注册，线程安全
///
/// 1. 通用注册：
/// 注册类存在唯一键值 type + Key + priority；默认 priority 值为  0，当 type + Key  相等时，则只会生效高优先级 priority 注册
/// _ThingMachRegister 使用 [[className alloc] init] 创建注册类实例；如果希望自定义实例创建方法，比如返回单例，可以使用 _ThingMachRegisterBlock 自定义
///
/// 业务使用时，业务模块可以声明一些自己的快捷方法，比如（MyType 模块）:
/// Case A 普通注册：
///     // 声明 注册类的快捷操作
///     #define _MyMachRegister(Key, className)  _ThingMachRegister(MyType, Key, className)
///
///     // 声明 获取一个实例的快捷操作
///     #define _MyMachRegisterFetch(Key)  _ThingMachRegisterFetch(MyType, Key)
///
///     // 使用
///     注册：_MyMachRegister(myKey, myClassName);
///     获取：id myClassInstance = _MyMachRegisterFetch(myKey);
///     获取：id myClassInstance = [[ThingMachRegisterManager shareInstance] generateWithType:@"MyType" key:@"myKey"];
///
/// Case B 注册有协议（ThingMyProtocol）的类:
///     // 声明 注册有协议类的快捷操作
///     #define _MyMachRegisterWithProtocol(Key, className) \
///     _ThingMachRegisterWithCreator(MyProtocolType, Key, className, \
///     (^id<ThingMyProtocol>(NSString * t, NSString * k, NSUInteger p, id defaultV) { \
///         return [[className alloc] init];\
///     }))
///
/// 2. 结果兜底过滤：
/// 当需要对一个类别的通用注册结果做过滤时，比如空兜底、满足协议判断等，可以对该类别使用结果过滤
///
/// 使用：
///     _ThingMachRegisterFilter(MyProtocolType,  (^id _Nonnull (NSString * type, NSString * key, NSUInteger p, id defaultV) {
///         return [defaultV conformsToProtocol:@protocol(ThingMyProtocol)] ? result : nil;
///     }));
///
/// 3. 注意:
///   因为我们会使用 "_" 作为链接符， 所以不建议 type 、 Key里使用  "_" 。

#ifndef H_ThingMachRegisterExt
#define H_ThingMachRegisterExt

/// 快捷注册
#define _ThingMachRegister(type, Key, className) \
_ThingMachRegisterBlock(type, Key, 0,\
(^Class _Nullable (NSString * t, NSString * k, NSUInteger p) { \
return className.class;\
}),\
(^id _Nonnull (NSString * t, NSString * k, NSUInteger p, id defaultV) { \
return [[className alloc] init];\
}))

/// 个性化注册
#define _ThingMachRegisterWithCreator(type, Key, className, creatorBlock) \
_ThingMachRegisterBlock(type, Key, 0,\
(^Class _Nullable (NSString * t, NSString * k, NSUInteger p) { \
return className.class;\
}),\
(creatorBlock))

/// 获取注册类的实例
#define _ThingMachRegisterFetch(type, Key) [[ThingMachRegisterManager shareInstance] generateWithType:@#type key:@#Key]
#endif
