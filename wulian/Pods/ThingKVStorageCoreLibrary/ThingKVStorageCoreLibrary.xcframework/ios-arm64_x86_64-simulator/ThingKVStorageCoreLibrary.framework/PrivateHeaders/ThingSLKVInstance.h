//
//  ThingSLKVInstance.h
//  ThingKVStorageLibrary
//
//  Created by tusu on 2019/2/13.
//

#import <Foundation/Foundation.h>
#import <MMKV/MMKV.h>

@interface ThingSLKVInstance : NSObject
/**
 * MMKV 实例
 */
@property (nonatomic, readonly) MMKV *kvInstance;
/**
 * MMKV 废弃实例
 */
@property (nonatomic, readonly) MMKV *deprecated_kvInstance;
/**
 * 实例方法
 */
+ (instancetype)defaultInstance;

/// 创建操作实例【只适用于group共享存储】（初始化，APP至少调用一次，主线程调用）
/// @param uuid 标识
/// @param groupIdentifier 分组标识
/// 注意：groupIdentifier适用于同一个group内的多APP/Extension之间进行数据共享
/// 当groupIdentifier为nil时为默认APP沙箱存储
/// 当groupIdentifier不为nil时为group的共享存储
+ (instancetype)groupInstanceWithUuid:(NSString * __nonnull)uuid groupIdentifier:(NSString * __nonnull)groupIdentifier;

/// 创建内部kv实例
/// @param uuid 标识符
- (void)createMMKVInstance:(NSString *)uuid;

@end
