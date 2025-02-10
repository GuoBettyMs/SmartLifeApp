//
//  ThingMachRegisterDefine.h
//  ThingMachRegister
//
//  Created by wzm on 2022/7/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


#ifndef H_ThingMachRegisterDefine
#define H_ThingMachRegisterDefine

#define _THING_MACH_SECTION __attribute__((used, section("__DATA, _ThingMOV3_") ))
#define _ThingMachRegisterBlockSectionNameV3 "_ThingMOV3_" // 这个定义一定不能动

typedef Class _Nullable (^_ThingMachRegisterClassBlock)(NSString * t, NSString * k, NSUInteger p);
typedef id _Nullable (^_ThingMachRegisterCreatorBlock)(NSString * t, NSString * k, NSUInteger p, id defaultValue);

typedef struct __attribute__((aligned(64))){ //Address Sanitizer 开启时, 需要强制指定align
    NSUInteger priority; //高优先级会覆盖低优先级
    const char * type;
    const char * Key;
    _ThingMachRegisterClassBlock classBlock;
    _ThingMachRegisterCreatorBlock creatorBlock;
} _ThingMachRegisterBlockStructV3;

/// 注册类别的兜底处理，会在该类别实例获取时调用，用在协议检查、空处理等
#define _ThingMachRegisterFilter(type, creatorBlock)  \
_ThingMachRegisterBlock(__ThingMRFilterType__, type, 0,\
NULL,\
(creatorBlock)\
)

/// 基础注册  + 防重复定义，不适用于代码段内
#define _ThingMachRegisterBlock(type, Key, priority, classBlock, creatorBlock) \
_ThingMachRegisterBase(type, Key, priority, classBlock, creatorBlock); \
@interface __ThingMachRC_##type##_##Key##_##priority : NSObject /*检测重名、加强注册*/ \
@end \
@implementation __ThingMachRC_##type##_##Key##_##priority \
@end

/// 基础注册，可以用在任意地方（建议放在 .m 文件内）
/// type：类型
/// Key：该类型下唯一id
/// priority：优先级，注册类存在唯一键值 type + Key + priority；type + Key  相等时，则只会生效高优先级 priority 注册
/// classBlock：返回注册的类
/// instanceBlock：返回注册的类的一个实例
#define _ThingMachRegisterBase(type, Key, priority, classBlock, creatorBlock) \
static _ThingMachRegisterBlockStructV3 _ThingMachRS_##type##_##Key##_##priority _THING_MACH_SECTION = { \
priority, \
#type, \
#Key, \
(classBlock), \
(creatorBlock) \
};
#endif


NS_ASSUME_NONNULL_END
