//
//  ThingMachRegisterManager.h
//  ThingMachRegister
//
//  Created by wzm on 2022/7/11.
//

#import <Foundation/Foundation.h>
#import "ThingMachRegisterDefine.h"

NS_ASSUME_NONNULL_BEGIN
@interface ThingMachRegisterItem : NSObject
@property (nonatomic, assign) NSUInteger priority;
@property (nonatomic, strong) NSString * type;
@property (nonatomic, strong) NSString * Key;

- (nullable Class)registerClass; // 返回关联的类
- (nullable id)generate:(nullable id)defaultValue; // 返回实实例象
@end

@interface ThingMachRegisterType : NSObject
@property (nonatomic, strong) NSMutableDictionary<NSString *, ThingMachRegisterItem *> * itemMap; //最大优先级的注册实例
@property (nonatomic, strong) NSMutableArray<ThingMachRegisterItem *> * itemList;//所有优先级的注册实例


/// 获取所有注册的节点
/// - Parameter Key: 节点key
- (NSArray<ThingMachRegisterItem *> *)registerItemListWithKey:(NSString *)Key;
@end


/// 线程安全
@interface ThingMachRegisterManager : NSObject
+ (ThingMachRegisterManager *)shareInstance;

// 获取注册的优先级最大的类
- (nullable Class)classWithType:(NSString *)type
                            key:(NSString *)key;

// 运行注册主体，获取优先级最大的实例值
- (nullable id)generateWithType:(NSString *)type
                            key:(NSString *)key;

// 注册是否存在
- (BOOL)exsitWithType:(NSString *)type
                  key:(NSString *)key;

// 获取指定类型下注册的信息
- (nullable ThingMachRegisterType *)registerModelWithType:(NSString *)type;

//用以统计多少代码使用了此种收集方式
- (void)trackerRegisterResultWithType:(NSString *)type count:(NSInteger)count deprecated:(BOOL)deprecated;
- (void)fetchDeprecatedRegisterResultWithComplete:(void (^)(NSDictionary<NSString *, NSNumber *> * map))block;
@end

NS_ASSUME_NONNULL_END
