//
//  ThingMatterMultipleFabricPasscodeModel.h
//  Pods
//
//  Created by 萧然 on 2022/7/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingMatterMultipleFabricPasscodeModel : NSObject

/**
         * 可用的 Fabric 数量
         */
@property (nonatomic, assign)NSUInteger limitCount;
/**
         * Setup Code，范围 000000001-99999998
*/
@property (nonatomic, assign)NSUInteger passcode;
/**
        * PBKDF_Iterations，范围 1000~100000
        */
@property (nonatomic, assign)NSUInteger iteration;

       /**
        * passcode过期时间
        */
@property (nonatomic, assign)NSUInteger expired;

       /**
        * 配网窗口打开持续时间，180~900，单位s
        */
@property (nonatomic, assign)NSUInteger duration;

       /**
        * 设备发现标识符  0x000-0xfff
        */
@property (nonatomic, assign)NSUInteger  discriminator;
       /**
        * 二维码版本
        */
@property (nonatomic, assign)NSUInteger  version;
       /**
        * matter vid
        */
@property (nonatomic, assign)NSUInteger  vendorId;
       /**
        * matter pid
        */
@property (nonatomic, assign)NSUInteger  pid;
/**
         * 设备发现能力值
         */
@property (nonatomic, assign)NSUInteger  discoveryCapabilities;


@end

NS_ASSUME_NONNULL_END
