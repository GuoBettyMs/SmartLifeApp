/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#import <Water/WTLDefines.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterAttributeValuePair : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable attributeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable attributeId WTL_DEPRECATED(
    "Please use attributeID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull attributeValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterExtensionFieldSet : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull clusterID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull clusterId WTL_DEPRECATED(
    "Please use clusterID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull attributeValueList API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE( macos(13.1), watchos(9.2), tvos(16.2))
@interface WTLDescriptorClusterDeviceTypeStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull deviceType API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull type WTL_DEPRECATED(
    "Please use deviceType", ios(16.2, 16.4), macos(13.1, 13.3), watchos(9.2, 9.4), tvos(16.2, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull revision API_AVAILABLE( macos(13.1), watchos(9.2), tvos(16.2));
@end

WTL_DEPRECATED(
    "Please use WTLDescriptorClusterDeviceTypeStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLDescriptorClusterDeviceType : WTLDescriptorClusterDeviceTypeStruct
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLBindingClusterTargetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable node API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable group API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable endpoint API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable cluster API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAccessControlClusterTarget : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable cluster API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable endpoint API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable deviceType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLAccessControlClusterAccessControlEntryStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull privilege API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull authMode API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable subjects API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable targets API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLAccessControlClusterAccessControlEntryStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLAccessControlClusterAccessControlEntry : WTLAccessControlClusterAccessControlEntryStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLAccessControlClusterAccessControlExtensionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull data API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLAccessControlClusterAccessControlExtensionStruct",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLAccessControlClusterExtensionEntry : WTLAccessControlClusterAccessControlExtensionStruct
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAccessControlClusterAccessControlEntryChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable adminNodeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable adminPasscodeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull changeType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) WTLAccessControlClusterAccessControlEntryStruct * _Nullable latestValue API_AVAILABLE(
    macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAccessControlClusterAccessControlExtensionChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable adminNodeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable adminPasscodeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull changeType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) WTLAccessControlClusterAccessControlExtensionStruct * _Nullable latestValue API_AVAILABLE(
    macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterActionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull type API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull endpointListID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull supportedCommands API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull state API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterEndpointListStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull endpointListID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull type API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull endpoints API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterStateChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy, getter=getNewState)
    NSNumber * _Nonnull newState API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterActionFailedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy, getter=getNewState)
    NSNumber * _Nonnull newState API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull error API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBasicInformationClusterCapabilityMinimaStruct : NSObject <NSCopying>
@property (nonatomic, copy)
    NSNumber * _Nonnull caseSessionsPerFabric API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSNumber * _Nonnull subscriptionsPerFabric API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLBasicInformationClusterCapabilityMinimaStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLBasicClusterCapabilityMinimaStruct : WTLBasicInformationClusterCapabilityMinimaStruct
@end
WTL_NEWLY_AVAILABLE
@interface WTLBasicInformationClusterProductAppearanceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull finish WTL_NEWLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable primaryColor WTL_NEWLY_AVAILABLE;
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBasicInformationClusterStartUpEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLBasicInformationClusterStartUpEvent",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLBasicClusterStartUpEvent : WTLBasicInformationClusterStartUpEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBasicInformationClusterShutDownEvent : NSObject <NSCopying>
@end

WTL_DEPRECATED(
    "Please use WTLBasicInformationClusterShutDownEvent",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLBasicClusterShutDownEvent : WTLBasicInformationClusterShutDownEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBasicInformationClusterLeaveEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLBasicInformationClusterLeaveEvent",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLBasicClusterLeaveEvent : WTLBasicInformationClusterLeaveEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBasicInformationClusterReachableChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull reachableNewValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLBasicInformationClusterReachableChangedEvent",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLBasicClusterReachableChangedEvent : WTLBasicInformationClusterReachableChangedEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateRequestorClusterProviderLocation : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull providerNodeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull endpoint API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateRequestorClusterProviderLocation",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateRequestorClusterProviderLocation : WTLOTASoftwareUpdateRequestorClusterProviderLocation
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateRequestorClusterStateTransitionEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull previousState API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy, getter=getNewState)
    NSNumber * _Nonnull newState API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull reason API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSNumber * _Nullable targetSoftwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateRequestorClusterStateTransitionEvent",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateRequestorClusterStateTransitionEvent : WTLOTASoftwareUpdateRequestorClusterStateTransitionEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateRequestorClusterVersionAppliedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull productID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateRequestorClusterVersionAppliedEvent",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateRequestorClusterVersionAppliedEvent : WTLOTASoftwareUpdateRequestorClusterVersionAppliedEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateRequestorClusterDownloadErrorEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull bytesDownloaded API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable progressPercent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable platformCode API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateRequestorClusterDownloadErrorEvent",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateRequestorClusterDownloadErrorEvent : WTLOTASoftwareUpdateRequestorClusterDownloadErrorEvent
@end

WTL_DEPRECATED("This struct is unused and will be removed",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLPowerSourceClusterBatChargeFaultChangeType : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current WTL_DEPRECATED("Please use WTLPowerSourceClusterBatChargeFaultChangeType",
     macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous WTL_DEPRECATED("Please use WTLPowerSourceClusterBatChargeFaultChangeType",
     macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("This struct is unused and will be removed",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLPowerSourceClusterBatFaultChangeType : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current WTL_DEPRECATED(
    "Please use WTLPowerSourceClusterBatFaultChangeType",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous WTL_DEPRECATED(
    "Please use WTLPowerSourceClusterBatFaultChangeType",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("This struct is unused and will be removed",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLPowerSourceClusterWiredFaultChangeType : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current WTL_DEPRECATED("Please use WTLPowerSourceClusterWiredFaultChangeType",
     macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous WTL_DEPRECATED("Please use WTLPowerSourceClusterWiredFaultChangeType",
     macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLPowerSourceClusterWiredFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLPowerSourceClusterBatFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLPowerSourceClusterBatChargeFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull previous API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralCommissioningClusterBasicCommissioningInfo : NSObject <NSCopying>
@property (nonatomic, copy)
    NSNumber * _Nonnull failSafeExpiryLengthSeconds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy)
    NSNumber * _Nonnull maxCumulativeFailsafeSeconds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterNetworkInfo : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull networkID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull connected API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterThreadInterfaceScanResult : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull panId API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull extendedPanId API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull networkName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull channel API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull version API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nonnull extendedAddress API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull rssi API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull lqi API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterWiFiInterfaceScanResult : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull security API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nonnull ssid API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nonnull bssid API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull channel API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull wiFiBand API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull rssi API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLGeneralDiagnosticsClusterNetworkInterface : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull isOperational API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSNumber * _Nullable offPremiseServicesReachableIPv4 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSNumber * _Nullable offPremiseServicesReachableIPv6 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSData * _Nonnull hardwareAddress API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull iPv4Addresses API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull iPv6Addresses API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull type API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLGeneralDiagnosticsClusterNetworkInterface",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLGeneralDiagnosticsClusterNetworkInterfaceType : WTLGeneralDiagnosticsClusterNetworkInterface
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralDiagnosticsClusterHardwareFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull previous API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralDiagnosticsClusterRadioFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull previous API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralDiagnosticsClusterNetworkFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull previous API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralDiagnosticsClusterBootReasonEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull bootReason API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLSoftwareDiagnosticsClusterThreadMetricsStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull id API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable name API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackFreeCurrent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackFreeMinimum API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable stackSize API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLSoftwareDiagnosticsClusterThreadMetricsStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLSoftwareDiagnosticsClusterThreadMetrics : WTLSoftwareDiagnosticsClusterThreadMetricsStruct
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSoftwareDiagnosticsClusterSoftwareFaultEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull id API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nullable name API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable faultRecording API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThreadNetworkDiagnosticsClusterNeighborTable : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull extAddress API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull age API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull rloc16 API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull linkFrameCounter API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull mleFrameCounter API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull lqi API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable averageRssi API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable lastRssi API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull frameErrorRate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull messageErrorRate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull rxOnWhenIdle API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fullThreadDevice API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fullNetworkData API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull isChild API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject <NSCopying>
@property (nonatomic, copy)
    NSNumber * _Nonnull activeTimestampPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy)
    NSNumber * _Nonnull pendingTimestampPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull masterKeyPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull networkNamePresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull extendedPanIdPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
    ;
@property (nonatomic, copy)
    NSNumber * _Nonnull meshLocalPrefixPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull delayPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull panIdPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull channelPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull pskcPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy)
    NSNumber * _Nonnull securityPolicyPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull channelMaskPresent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThreadNetworkDiagnosticsClusterRouteTable : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull extAddress API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull rloc16 API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull routerId API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull nextHop API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull pathCost API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull lqiIn API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull lqiOut API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull age API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull allocated API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull linkEstablished API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThreadNetworkDiagnosticsClusterSecurityPolicy : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull rotationTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull flags API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThreadNetworkDiagnosticsClusterConnectionStatusEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull connectionStatus API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThreadNetworkDiagnosticsClusterNetworkFaultChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull current API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull previous API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWiFiNetworkDiagnosticsClusterDisconnectionEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull reasonCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWiFiNetworkDiagnosticsClusterAssociationFailureEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull associationFailure API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWiFiNetworkDiagnosticsClusterConnectionStatusEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull connectionStatus API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5))
@interface WTLTimeSynchronizationClusterDSTOffsetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull offset API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));
@property (nonatomic, copy) NSNumber * _Nonnull validStarting API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));
@property (nonatomic, copy) NSNumber * _Nonnull validUntil API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));
@end

WTL_DEPRECATED("Please use WTLTimeSynchronizationClusterDSTOffsetStruct", macos(13.0, 13.4), watchos(9.1, 9.5),
    tvos(16.1, 16.5))
@interface WTLTimeSynchronizationClusterDstOffsetType : WTLTimeSynchronizationClusterDSTOffsetStruct
@end
API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5))
@interface WTLTimeSynchronizationClusterTimeZoneStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull offset API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));
@property (nonatomic, copy) NSNumber * _Nonnull validAt API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));
@property (nonatomic, copy) NSString * _Nullable name API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));
@end

WTL_DEPRECATED("Please use WTLTimeSynchronizationClusterTimeZoneStruct", macos(13.0, 13.4), watchos(9.1, 9.5),
    tvos(16.1, 16.5))
@interface WTLTimeSynchronizationClusterTimeZoneType : WTLTimeSynchronizationClusterTimeZoneStruct
@end

WTL_NEWLY_AVAILABLE
@interface WTLBridgedDeviceBasicInformationClusterProductAppearanceStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull finish WTL_NEWLY_AVAILABLE;
@property (nonatomic, copy) NSNumber * _Nullable primaryColor WTL_NEWLY_AVAILABLE;
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBridgedDeviceBasicInformationClusterStartUpEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLBridgedDeviceBasicClusterStartUpEvent : WTLBridgedDeviceBasicInformationClusterStartUpEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBridgedDeviceBasicInformationClusterShutDownEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLBridgedDeviceBasicClusterShutDownEvent : WTLBridgedDeviceBasicInformationClusterShutDownEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBridgedDeviceBasicInformationClusterLeaveEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLBridgedDeviceBasicClusterLeaveEvent : WTLBridgedDeviceBasicInformationClusterLeaveEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLBridgedDeviceBasicInformationClusterReachableChangedEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull reachableNewValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLBridgedDeviceBasicClusterReachableChangedEvent : WTLBridgedDeviceBasicInformationClusterReachableChangedEvent
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSwitchClusterSwitchLatchedEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getNewPosition)
    NSNumber * _Nonnull newPosition API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSwitchClusterInitialPressEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getNewPosition)
    NSNumber * _Nonnull newPosition API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSwitchClusterLongPressEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getNewPosition)
    NSNumber * _Nonnull newPosition API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSwitchClusterShortReleaseEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull previousPosition API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSwitchClusterLongReleaseEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull previousPosition API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSwitchClusterMultiPressOngoingEvent : NSObject <NSCopying>
@property (nonatomic, copy, getter=getNewPosition)
    NSNumber * _Nonnull newPosition API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy)
    NSNumber * _Nonnull currentNumberOfPressesCounted API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSwitchClusterMultiPressCompleteEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull previousPosition API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy, getter=getNewPosition) NSNumber * _Nonnull newPosition WTL_DEPRECATED(
    "Please use previousPosition",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@property (nonatomic, copy)
    NSNumber * _Nonnull totalNumberOfPressesCounted API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOperationalCredentialsClusterFabricDescriptorStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull rootPublicKey API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull vendorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull vendorId WTL_DEPRECATED(
    "Please use vendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricId WTL_DEPRECATED(
    "Please use fabricID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSNumber * _Nonnull nodeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull nodeId WTL_DEPRECATED(
    "Please use nodeID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSString * _Nonnull label API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLOperationalCredentialsClusterFabricDescriptorStruct",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOperationalCredentialsClusterFabricDescriptor : WTLOperationalCredentialsClusterFabricDescriptorStruct
@end
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterNOCStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSData * _Nonnull noc API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable icac API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterGroupInfoMapStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull groupId API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull endpoints API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nullable groupName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterGroupKeyMapStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull groupId API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull groupKeySetID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterGroupKeySetStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull groupKeySetID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy)
    NSNumber * _Nonnull groupKeySecurityPolicy API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable epochKey0 API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable epochStartTime0 API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable epochKey1 API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable epochStartTime1 API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSData * _Nullable epochKey2 API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable epochStartTime2 API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLFixedLabelClusterLabelStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull value API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLUserLabelClusterLabelStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSString * _Nonnull value API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLBooleanStateClusterStateChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull stateValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLModeSelectClusterSemanticTagStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull mfgCode API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull value API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLModeSelectClusterSemanticTagStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLModeSelectClusterSemanticTag : WTLModeSelectClusterSemanticTagStruct
@end
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLModeSelectClusterModeOptionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull label API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull mode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nonnull semanticTags API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLDoorLockClusterCredentialStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull credentialType API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull credentialIndex API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLDoorLockClusterCredentialStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLDoorLockClusterDlCredential : WTLDoorLockClusterCredentialStruct
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterDoorLockAlarmEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull alarmCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterDoorStateChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull doorState API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterLockOperationEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull lockOperationType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull operationSource API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable sourceNode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nullable credentials API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterLockOperationErrorEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull lockOperationType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull operationSource API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull operationError API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable sourceNode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSArray * _Nullable credentials API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterLockUserChangeEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull lockDataType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull dataOperationType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nonnull operationSource API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable sourceNode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable dataIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterSupplyVoltageLowEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterSupplyVoltageHighEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterPowerMissingPhaseEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterSystemPressureLowEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterSystemPressureHighEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterDryRunningEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterMotorTemperatureHighEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterPumpMotorFatalFailureEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterElectronicTemperatureHighEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterPumpBlockedEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterSensorFailureEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterElectronicNonFatalFailureEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterElectronicFatalFailureEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterGeneralFaultEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterLeakageEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterAirDetectionEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLPumpConfigurationAndControlClusterTurbineOperationEvent : NSObject <NSCopying>
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThermostatClusterThermostatScheduleTransition : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable heatSetpoint API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@property (nonatomic, copy) NSNumber * _Nullable coolSetpoint API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLChannelClusterChannelInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull majorNumber API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull minorNumber API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable name API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable callSign API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable affiliateCallSign API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLChannelClusterChannelInfoStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLChannelClusterChannelInfo : WTLChannelClusterChannelInfoStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLChannelClusterLineupInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull operatorName API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable lineupName API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable postalCode API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull lineupInfoType API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLChannelClusterLineupInfoStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLChannelClusterLineupInfo : WTLChannelClusterLineupInfoStruct
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLTargetNavigatorClusterTargetInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull identifier API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLTargetNavigatorClusterTargetInfoStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTargetNavigatorClusterTargetInfo : WTLTargetNavigatorClusterTargetInfoStruct
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLMediaPlaybackClusterPlaybackPositionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull updatedAt API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable position API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLMediaPlaybackClusterPlaybackPositionStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLMediaPlaybackClusterPlaybackPosition : WTLMediaPlaybackClusterPlaybackPositionStruct
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLMediaInputClusterInputInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull index API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull inputType API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull descriptionString API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLMediaInputClusterInputInfoStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLMediaInputClusterInputInfo : WTLMediaInputClusterInputInfoStruct
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLContentLauncherClusterDimensionStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull width API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull height API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull metric API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLContentLauncherClusterDimensionStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLContentLauncherClusterDimension : WTLContentLauncherClusterDimensionStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLContentLauncherClusterAdditionalInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull value API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLContentLauncherClusterAdditionalInfoStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLContentLauncherClusterAdditionalInfo : WTLContentLauncherClusterAdditionalInfoStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLContentLauncherClusterParameterStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull type API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull value API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable externalIDList API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLContentLauncherClusterParameterStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLContentLauncherClusterParameter : WTLContentLauncherClusterParameterStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLContentLauncherClusterContentSearchStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull parameterList API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLContentLauncherClusterContentSearchStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLContentLauncherClusterContentSearch : WTLContentLauncherClusterContentSearchStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLContentLauncherClusterStyleInformationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nullable imageURL API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable imageUrl WTL_DEPRECATED(
    "Please use imageURL", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSString * _Nullable color API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    WTLContentLauncherClusterDimensionStruct * _Nullable size API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLContentLauncherClusterStyleInformationStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLContentLauncherClusterStyleInformation : WTLContentLauncherClusterStyleInformationStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLContentLauncherClusterBrandingInformationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSString * _Nonnull providerName API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) WTLContentLauncherClusterStyleInformationStruct * _Nullable background API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) WTLContentLauncherClusterStyleInformationStruct * _Nullable logo API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) WTLContentLauncherClusterStyleInformationStruct * _Nullable progressBar API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) WTLContentLauncherClusterStyleInformationStruct * _Nullable splash API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) WTLContentLauncherClusterStyleInformationStruct * _Nullable waterMark API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLContentLauncherClusterBrandingInformationStruct",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLContentLauncherClusterBrandingInformation : WTLContentLauncherClusterBrandingInformationStruct
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLAudioOutputClusterOutputInfoStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull index API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull outputType API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLAudioOutputClusterOutputInfoStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLAudioOutputClusterOutputInfo : WTLAudioOutputClusterOutputInfoStruct
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLApplicationLauncherClusterApplicationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull catalogVendorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull catalogVendorId WTL_DEPRECATED(
    "Please use catalogVendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSString * _Nonnull applicationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull applicationId WTL_DEPRECATED(
    "Please use applicationID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@end

WTL_DEPRECATED("Please use WTLApplicationLauncherClusterApplicationStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLApplicationLauncherClusterApplication : WTLApplicationLauncherClusterApplicationStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLApplicationLauncherClusterApplicationEPStruct : NSObject <NSCopying>
@property (nonatomic, copy) WTLApplicationLauncherClusterApplicationStruct * _Nonnull application API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable endpoint API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLApplicationLauncherClusterApplicationEPStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLApplicationLauncherClusterApplicationEP : WTLApplicationLauncherClusterApplicationEPStruct
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLApplicationBasicClusterApplicationStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull catalogVendorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull catalogVendorId WTL_DEPRECATED(
    "Please use catalogVendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@property (nonatomic, copy) NSString * _Nonnull applicationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull applicationId WTL_DEPRECATED(
    "Please use applicationID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@end

WTL_DEPRECATED("Please use WTLApplicationBasicClusterApplicationStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLApplicationBasicClusterApplicationBasicApplication : WTLApplicationBasicClusterApplicationStruct
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterSimpleStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull a API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull c API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSData * _Nonnull d API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nonnull e API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull f API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull g API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull h API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterSimpleStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterSimpleStruct : WTLUnitTestingClusterSimpleStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestFabricScoped : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull fabricSensitiveInt8u API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    ;
@property (nonatomic, copy)
    NSNumber * _Nullable optionalFabricSensitiveInt8u API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSNumber * _Nullable nullableFabricSensitiveInt8u API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSNumber * _Nullable nullableOptionalFabricSensitiveInt8u API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSString * _Nonnull fabricSensitiveCharString API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) WTLUnitTestingClusterSimpleStruct * _Nonnull fabricSensitiveStruct API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSArray * _Nonnull fabricSensitiveInt8uList API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterTestFabricScoped",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestFabricScoped : WTLUnitTestingClusterTestFabricScoped
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterNullablesAndOptionalsStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nullable nullableInt API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable optionalInt API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nullable nullableOptionalInt API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    ;
@property (nonatomic, copy) NSString * _Nullable nullableString API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSString * _Nullable optionalString API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    NSString * _Nullable nullableOptionalString API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    WTLUnitTestingClusterSimpleStruct * _Nullable nullableStruct API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    WTLUnitTestingClusterSimpleStruct * _Nullable optionalStruct API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) WTLUnitTestingClusterSimpleStruct * _Nullable nullableOptionalStruct API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable nullableList API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable optionalList API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nullable nullableOptionalList API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    ;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterNullablesAndOptionalsStruct",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterNullablesAndOptionalsStruct : WTLUnitTestingClusterNullablesAndOptionalsStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterNestedStruct : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull a API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    WTLUnitTestingClusterSimpleStruct * _Nonnull c API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterNestedStruct",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterNestedStruct : WTLUnitTestingClusterNestedStruct
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterNestedStructList : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull a API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull b API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    WTLUnitTestingClusterSimpleStruct * _Nonnull c API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull d API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull e API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull f API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull g API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterNestedStructList",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterNestedStructList : WTLUnitTestingClusterNestedStructList
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterDoubleNestedStructList : NSObject <NSCopying>
@property (nonatomic, copy) NSArray * _Nonnull a API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterDoubleNestedStructList",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterDoubleNestedStructList : WTLUnitTestingClusterDoubleNestedStructList
@end
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestListStructOctet : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull member1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSData * _Nonnull member2 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterTestListStructOctet",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestListStructOctet : WTLUnitTestingClusterTestListStructOctet
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestEventEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull arg2 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSNumber * _Nonnull arg3 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy)
    WTLUnitTestingClusterSimpleStruct * _Nonnull arg4 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull arg5 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@property (nonatomic, copy) NSArray * _Nonnull arg6 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterTestEventEvent",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestEventEvent : WTLUnitTestingClusterTestEventEvent
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestFabricScopedEventEvent : NSObject <NSCopying>
@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestFabricScopedEventEvent",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestFabricScopedEventEvent : WTLUnitTestingClusterTestFabricScopedEventEvent
@end

NS_ASSUME_NONNULL_END
