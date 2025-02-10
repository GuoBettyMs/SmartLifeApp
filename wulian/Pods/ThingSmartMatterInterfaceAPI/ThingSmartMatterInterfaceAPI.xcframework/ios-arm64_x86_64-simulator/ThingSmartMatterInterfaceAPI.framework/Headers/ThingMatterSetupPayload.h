//
//  ThingMatterSetupPayload.h
//  ThingSmartMatterInterfaceAPI
//
//  Created by huangjj on 2022/7/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, ThingSmartMatterDeviceBoardingType){
    kSmartMatterDeviceBoardingTypePairing = 0,   //Pairing Device
    kSmartMatterDeviceBoardingTypeSharing = 1    //Sharing Device
};

typedef NS_ENUM(NSUInteger, ThingSmartMatterRendezvousFlags) {
    ThingSmartMatterRendezvousNone = 0, // Device does not support any method for rendezvous
    ThingSmartMatterRendezvousSoftAP = 1 << 0, // Device supports WiFi softAP
    ThingSmartMatterRendezvousBLE = 1 << 1, // Device supports BLE
    ThingSmartMatterRendezvousOnNetwork = 1 << 2, // Device supports On Network setup

    ThingSmartMatterRendezvousAllMask = ThingSmartMatterRendezvousSoftAP | ThingSmartMatterRendezvousBLE | ThingSmartMatterRendezvousOnNetwork,
};

typedef NS_ENUM(NSUInteger, ThingSmartMatterRoutingType){
    ThingSmartMatterRoutingTypeThing             = 0,
    ThingSmartMatterRoutingTypeSupport           = 1,
    ThingSmartMatterRoutingTypeShare             = 2,
};


@interface ThingMatterSetupPayload : NSObject

@property (nonatomic, strong) NSNumber * version; //配网协议版本
@property (nonatomic, strong) NSNumber * vendorID; //厂商信息
@property (nonatomic, strong) NSNumber * productID; // Matter 设备产品ID,非 Thing 系产品ID(可能一致,也可能不一致)
@property (nonatomic, strong) NSNumber * discriminator; //设备标识符,有重复几率,无法准确作为唯一标识
@property (nonatomic, strong) NSString * serialNumber;  // 序列号,配网之后可获取
@property (nonatomic, strong) NSNumber * setUpPINCode;
@property (nonatomic, strong) NSString * devId;  //Thing分享(Fabric)流程可获取标识

@property (nonatomic, assign) ThingSmartMatterRendezvousFlags rendezvousInformation;
@property (nonatomic, assign) NSInteger accessType; // 0:ThingMatter 1:三方Matter
@property (nonatomic, strong) NSString *thingProductId;

@property (nonatomic, assign) ThingSmartMatterDeviceBoardingType boardingType;

@property (nonatomic, assign) ThingSmartMatterRoutingType routingType;

@property (nonatomic, strong) id originalPayload;  /// 原始模型

@end


NS_ASSUME_NONNULL_END
