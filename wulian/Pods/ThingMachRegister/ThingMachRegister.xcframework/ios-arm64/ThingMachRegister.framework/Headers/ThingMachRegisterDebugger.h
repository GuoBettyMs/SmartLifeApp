//
//  ThingMachRegisterDebugger.h
//  ThingMachRegister
//
//  Created by wzm on 2023/7/31.
//

#import <Foundation/Foundation.h>
#import "ThingMachRegisterDefine.h"

#ifndef D_ThingMachRegisterDebugger
#define D_ThingMachRegisterDebugger

#ifdef DEBUG
#define _ThingDebug (1)
#endif

#ifdef _ThingDebug
/// 添加<测试代码>：
/// 可以在 函数内 任意地方注册类型为 <_ThingDebugCodeType> 的<测试代码>，为了区分注册方，需要使用者指定 <package>（模块名） 和  <name> （代码名）
/// 我们使用  <package>_<name> 方式拼接<测试代码>的 <debugID>，所以多段<测试代码>可以有相同 <debugID>, 每个 <debugID> 对应一个 <代码开关>
/// 业务方可以使用 <ThingMachRegisterDebugger> 获取<测试代码>的配置 <ThingMachRegisterDebugCode> ，执行查询、修改 <代码开关> 开关状态
/// 在App运行到<测试代码>时，会判断当前 <debugID> 对应的 <代码开关> 状态决定是否会执行，开关打开时，<测试代码>会立即同步执行，否则直接跳过
/// 注意：应仅由测试工具修改开关状态，为了不影响性能，不考虑线程安全问题
/// Example：
///
///     - (void)testFunc {
///         _ThingDebugCode(package, name, {
///             NSLog(@"I believe that there is a hero living in everyone's heart.");
///         });
///     }
///
#define _ThingDebugCode(Package, Name, Code) __ThingDebugCode(_ThingDebugCodeType, Package, Name, __LINE__, Code)

#define __ThingDebugCode(Type, Package, Name, Line, Code) \
_ThingMachRegisterBase(Type, \
Package##_##Name, \
Line, \
(^Class _Nullable (NSString * t, NSString * k, NSUInteger p) { \
return ThingMachRegisterDebugCode.class;\
}),\
(^ThingMachRegisterDebugCode * _Nonnull (NSString * t, NSString * k, NSUInteger p, id defaultV) { \
ThingMachRegisterDebugCode * item = [[ThingMachRegisterDebugCode alloc] init]; \
item.package = @#Package; \
item.name = @#Name; \
return item; \
}) \
) /*注册收集key*/ \
if ([ThingMachRegisterDebugger debugCodeIsOpenWithPackage:@#Package name:@#Name]){ \
Code \
}

/// 添加<测试Block>：
/// 可以在 文件内 任意地方注册类型为 <_ThingDebugBlockType> 的 <测试Block>，为了区分注册方，需要使用者指定 <package>（模块名） 和  <name> （代码名）
/// 我们使用  <package>_<name> 方式拼接<测试代码>的 <debugID>，所以多段<测试代码>可以有相同 <debugID>,  执行 <debugID> 代码时，依次执行所有<测试Block>
/// 业务方可以使用 <ThingMachRegisterDebugger> 获取<测试Block>的配置 <ThingMachRegisterDebugBlock>，并决定执行<测试Block>
/// 注意：<测试Block>应由调试工具主动调用，并由测试工具决定执行线程，注意线程安全问题
/// 注意：由于启动时就已经生成注册列表，比实例变量创建时机都早，所以不能访问 self 等实例变量
/// Example：
///
///     _ThingDebugBlock(package, name, {
///         NSLog(@"The thing that I have been searching for throughout my life is right next to you.");
///     });
///     - (void)testFunc {
///     }
///
#define _ThingDebugBlock(Package, Name, Block) __ThingDebugBlock(_ThingDebugBlockType, Package, Name, Block)

#define __ThingDebugBlock(Type, Package, Name, Block) \
_ThingMachRegisterBase(Type, \
Package##_##Name, \
0, \
(^Class _Nullable (NSString * t, NSString * k, NSUInteger p) { \
return ThingMachRegisterDebugBlock.class;\
}),\
(^ThingMachRegisterDebugBlock * _Nonnull (NSString * t, NSString * k, NSUInteger p, id defaultV) { \
ThingMachRegisterDebugBlock * item = [[ThingMachRegisterDebugBlock alloc] init]; \
item.package = @#Package; \
item.name = @#Name; \
item.block = ^(void){Block}; \
return item; \
}) \
)

#else

#define _ThingDebugCode(Package, Name, Code)
#define _ThingDebugBlock(Package, Name, Block)

#endif // if _ThingDebug

#endif // if D_ThingMachRegisterDebugger

NS_ASSUME_NONNULL_BEGIN


@interface ThingMachRegisterDebugConfig : NSObject
@property (nonatomic, strong, readonly) NSString * debugID; //唯一ID
@property (nonatomic, strong) NSString * package;
@property (nonatomic, strong) NSString * name;
@end

#define _ThingDebugCodeType _DCode_
#define _ThingDebugCodeTypeStr @"_DCode_"
@interface ThingMachRegisterDebugCode : ThingMachRegisterDebugConfig
@property (nonatomic, assign) BOOL open;
@end

#define _ThingDebugBlockType _DBlock_
#define _ThingDebugBlockTypeStr @"_DBlock_"
@interface ThingMachRegisterDebugBlock : ThingMachRegisterDebugConfig
@property (nonatomic, copy, nullable) void (^block)(void);
@end

extern NSString * const sThingMachRegisterDebugCodResetAllStatus;

@interface ThingMachRegisterDebugger : NSObject

#pragma mark - DebugCode
/// 所有<测试代码>的配置
+ (nullable NSArray<__kindof ThingMachRegisterDebugCode *> *)allDebugCode;
/// 获取<测试代码>配置
+ (nullable ThingMachRegisterDebugCode *)debugCodeWithPackage:(NSString *)package
                                                         name:(NSString *)name;
/// 保存<测试代码>状态到缓存
+ (void)saveDebugCodeStatusCache;
/// 查询<测试代码>状态
+ (BOOL)debugCodeIsOpenWithPackage:(NSString *)package
                              name:(NSString *)name;

#pragma mark - DebugBlock
/// 所有<测试Block>的配置
+ (nullable NSArray<__kindof ThingMachRegisterDebugBlock *> *)allDebugBlock;
/// 获取<测试Block>配置
+ (nullable NSArray<ThingMachRegisterDebugBlock *> *)debugBlockWithPackage:(NSString *)package
                                                                      name:(NSString *)name;
@end
NS_ASSUME_NONNULL_END
