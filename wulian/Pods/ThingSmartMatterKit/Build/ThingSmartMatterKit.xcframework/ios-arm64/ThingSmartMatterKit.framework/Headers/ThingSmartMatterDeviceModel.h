//
// ThingSmartMatterDeviceModel.h
// ThingSmartMatterKit
//
// Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)
//
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WTLBaseDevice,ThingSmartMatterNetworkScannedModel;

@interface ThingSmartMatterDeviceModel : NSObject

/// Matter node model.
@property (nonatomic, strong, nullable) ThingSmartMatterDeviceNodeModel *nodeModel;

/// Setup payload.
@property (nonatomic, strong, nullable) ThingSmartMatterSetupPayload *payload;

/// Chip Device object.
@property (nonatomic, strong, nullable) WTLBaseDevice *chipDevice;

/// Thing device model.
@property (nonatomic, strong, nullable) ThingSmartDeviceModel *deviceModel;

/// Matter device type.
@property (nonatomic, assign) ThingSmartMatterDeviceType matterType;

/// Pair routing type.
@property (nonatomic, assign) ThingMatterRoutingType routingType;

/// Thing product id.
@property (nonatomic, strong) NSString *thingProductId;

/// Is origin matter or thing matter device.
@property (nonatomic, assign) BOOL isOrigin;

/// Matter device node id.
@property (nonatomic, assign) long long nodeId;

/// Online status.
@property (nonatomic, assign) BOOL isOnline;

/// Space id. (aka home id)
@property (nonatomic, assign) long long spaceId;

/// Admin node id.
@property (nonatomic, assign) long long adminNodeId;

/// Admin fabric id.
@property (nonatomic, assign) long long adminFabricId;

/// Controlable.
@property (nonatomic, assign) BOOL control;

/// if yes, means scan no thread network
@property (nonatomic, assign) BOOL withoutThread;

@property (nonatomic, strong) NSString *uuid;

@property (nonatomic, strong) NSString *operationalDeviceName;

@property (nonatomic, strong) NSString *softVersion;

@property (nonatomic, assign) BOOL isShareMatter;

/// this is scaned gatewayId. if you set gatewayid in connectDeviceWithConnectDeviceBuilder, this gateway will equal to the gateway id you set.
/// If you do not set any gatewayid and withoutThread is true, this "gatewayId" will be nill. You can set gateway id with commissionModel in interface "commissionDevice:commissionModel:"
@property (nonatomic, strong) NSString *gatewayId;
/// Cat, only use for gateway
@property (nonatomic, strong) NSArray <NSNumber *> *cats;

@property (nonatomic, strong) NSString *originNamel;

@property (nonatomic, strong) NSNumber *powerSourceFeature;

@property (nonatomic, assign) BOOL shouldRejectShare;

@property (nonatomic, strong) NSArray<ThingSmartMatterNetworkScannedModel *> *availableWIFIList;

- (instancetype)initWithPayload:(ThingSmartMatterSetupPayload *)payload;

@end

NS_ASSUME_NONNULL_END
