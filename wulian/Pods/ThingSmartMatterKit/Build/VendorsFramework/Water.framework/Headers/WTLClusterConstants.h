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
#import <stdint.h>

#pragma mark - Clusters IDs

typedef NS_ENUM(uint32_t, WTLClusterIDType) {
    WTLClusterIdentifyID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeIdentifyID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterGroupsID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeGroupsID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterScenesID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeScenesID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterOnOffID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeOnOffID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterOnOffSwitchConfigurationID WTL_DEPRECATED("Please use WTLClusterIDTypeOnOffSwitchConfigurationID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterLevelControlID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeLevelControlID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterBinaryInputBasicID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeBinaryInputBasicID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterPulseWidthModulationID WTL_DEPRECATED("Please use WTLClusterIDTypePulseWidthModulationID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001C,
    WTLClusterDescriptorID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeDescriptorID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001D,
    WTLClusterBindingID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeBindingID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001E,
    WTLClusterAccessControlID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeAccessControlID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001F,
    WTLClusterActionsID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeActionsID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000025,
    WTLClusterBasicID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeBasicInformationID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000028,
    WTLClusterOtaSoftwareUpdateProviderID WTL_DEPRECATED("Please use WTLClusterIDTypeOTASoftwareUpdateProviderID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000029,
    WTLClusterOtaSoftwareUpdateRequestorID WTL_DEPRECATED("Please use WTLClusterIDTypeOTASoftwareUpdateRequestorID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002A,
    WTLClusterLocalizationConfigurationID WTL_DEPRECATED("Please use WTLClusterIDTypeLocalizationConfigurationID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002B,
    WTLClusterTimeFormatLocalizationID WTL_DEPRECATED("Please use WTLClusterIDTypeTimeFormatLocalizationID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002C,
    WTLClusterUnitLocalizationID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeUnitLocalizationID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002D,
    WTLClusterPowerSourceConfigurationID WTL_DEPRECATED("Please use WTLClusterIDTypePowerSourceConfigurationID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002E,
    WTLClusterPowerSourceID WTL_DEPRECATED(
        "Please use WTLClusterIDTypePowerSourceID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002F,
    WTLClusterGeneralCommissioningID WTL_DEPRECATED("Please use WTLClusterIDTypeGeneralCommissioningID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000030,
    WTLClusterNetworkCommissioningID WTL_DEPRECATED("Please use WTLClusterIDTypeNetworkCommissioningID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000031,
    WTLClusterDiagnosticLogsID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeDiagnosticLogsID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000032,
    WTLClusterGeneralDiagnosticsID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeGeneralDiagnosticsID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000033,
    WTLClusterSoftwareDiagnosticsID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeSoftwareDiagnosticsID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000034,
    WTLClusterThreadNetworkDiagnosticsID WTL_DEPRECATED("Please use WTLClusterIDTypeThreadNetworkDiagnosticsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000035,
    WTLClusterWiFiNetworkDiagnosticsID WTL_DEPRECATED("Please use WTLClusterIDTypeWiFiNetworkDiagnosticsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000036,
    WTLClusterEthernetNetworkDiagnosticsID WTL_DEPRECATED("Please use WTLClusterIDTypeEthernetNetworkDiagnosticsID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000037,
    WTLClusterTimeSynchronizationID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeTimeSynchronizationID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000038,
    WTLClusterBridgedDeviceBasicID WTL_DEPRECATED("Please use WTLClusterIDTypeBridgedDeviceBasicInformationID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000039,
    WTLClusterSwitchID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeSwitchID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003B,
    WTLClusterAdministratorCommissioningID WTL_DEPRECATED("Please use WTLClusterIDTypeAdministratorCommissioningID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003C,
    WTLClusterOperationalCredentialsID WTL_DEPRECATED("Please use WTLClusterIDTypeOperationalCredentialsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003E,
    WTLClusterGroupKeyManagementID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeGroupKeyManagementID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003F,
    WTLClusterFixedLabelID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeFixedLabelID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000040,
    WTLClusterUserLabelID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeUserLabelID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000041,
    WTLClusterProxyConfigurationID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeProxyConfigurationID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000042,
    WTLClusterProxyDiscoveryID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeProxyDiscoveryID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000043,
    WTLClusterProxyValidID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeProxyValidID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000044,
    WTLClusterBooleanStateID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeBooleanStateID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000045,
    WTLClusterModeSelectID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeModeSelectID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000050,
    WTLClusterDoorLockID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeDoorLockID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000101,
    WTLClusterWindowCoveringID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeWindowCoveringID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000102,
    WTLClusterBarrierControlID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeBarrierControlID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000103,
    WTLClusterPumpConfigurationAndControlID WTL_DEPRECATED("Please use WTLClusterIDTypePumpConfigurationAndControlID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000200,
    WTLClusterThermostatID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeThermostatID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000201,
    WTLClusterFanControlID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeFanControlID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000202,
    WTLClusterThermostatUserInterfaceConfigurationID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeThermostatUserInterfaceConfigurationID",  macos(13.0, 13.3), watchos(9.1, 9.4),
        tvos(16.1, 16.4))
    = 0x00000204,
    WTLClusterColorControlID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeColorControlID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000300,
    WTLClusterBallastConfigurationID WTL_DEPRECATED("Please use WTLClusterIDTypeBallastConfigurationID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000301,
    WTLClusterIlluminanceMeasurementID WTL_DEPRECATED("Please use WTLClusterIDTypeIlluminanceMeasurementID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000400,
    WTLClusterTemperatureMeasurementID WTL_DEPRECATED("Please use WTLClusterIDTypeTemperatureMeasurementID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000402,
    WTLClusterPressureMeasurementID WTL_DEPRECATED(
        "Please use WTLClusterIDTypePressureMeasurementID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000403,
    WTLClusterFlowMeasurementID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeFlowMeasurementID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000404,
    WTLClusterRelativeHumidityMeasurementID WTL_DEPRECATED("Please use WTLClusterIDTypeRelativeHumidityMeasurementID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000405,
    WTLClusterOccupancySensingID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeOccupancySensingID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000406,
    WTLClusterWakeOnLanID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeWakeOnLANID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000503,
    WTLClusterChannelID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeChannelID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000504,
    WTLClusterTargetNavigatorID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeTargetNavigatorID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000505,
    WTLClusterMediaPlaybackID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeMediaPlaybackID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000506,
    WTLClusterMediaInputID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeMediaInputID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000507,
    WTLClusterLowPowerID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeLowPowerID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000508,
    WTLClusterKeypadInputID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeKeypadInputID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000509,
    WTLClusterContentLauncherID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeContentLauncherID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050A,
    WTLClusterAudioOutputID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeAudioOutputID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050B,
    WTLClusterApplicationLauncherID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeApplicationLauncherID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050C,
    WTLClusterApplicationBasicID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeApplicationBasicID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050D,
    WTLClusterAccountLoginID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeAccountLoginID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050E,
    WTLClusterElectricalMeasurementID WTL_DEPRECATED("Please use WTLClusterIDTypeElectricalMeasurementID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000B04,
    WTLClusterTestClusterID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeUnitTestingID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0xFFF1FC05,
    WTLClusterFaultInjectionID WTL_DEPRECATED(
        "Please use WTLClusterIDTypeFaultInjectionID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0xFFF1FC06,
    WTLClusterIDTypeIdentifyID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000003,
    WTLClusterIDTypeGroupsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000004,
    WTLClusterIDTypeScenesID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000005,
    WTLClusterIDTypeOnOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000006,
    WTLClusterIDTypeOnOffSwitchConfigurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000007,
    WTLClusterIDTypeLevelControlID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000008,
    WTLClusterIDTypeBinaryInputBasicID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000000F,
    WTLClusterIDTypePulseWidthModulationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000001C,
    WTLClusterIDTypeDescriptorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000001D,
    WTLClusterIDTypeBindingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000001E,
    WTLClusterIDTypeAccessControlID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000001F,
    WTLClusterIDTypeActionsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000025,
    WTLClusterIDTypeBasicInformationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000028,
    WTLClusterIDTypeOTASoftwareUpdateProviderID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000029,
    WTLClusterIDTypeOTASoftwareUpdateRequestorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000002A,
    WTLClusterIDTypeLocalizationConfigurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000002B,
    WTLClusterIDTypeTimeFormatLocalizationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000002C,
    WTLClusterIDTypeUnitLocalizationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000002D,
    WTLClusterIDTypePowerSourceConfigurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000002E,
    WTLClusterIDTypePowerSourceID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000002F,
    WTLClusterIDTypeGeneralCommissioningID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000030,
    WTLClusterIDTypeNetworkCommissioningID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000031,
    WTLClusterIDTypeDiagnosticLogsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000032,
    WTLClusterIDTypeGeneralDiagnosticsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000033,
    WTLClusterIDTypeSoftwareDiagnosticsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000034,
    WTLClusterIDTypeThreadNetworkDiagnosticsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000035,
    WTLClusterIDTypeWiFiNetworkDiagnosticsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000036,
    WTLClusterIDTypeEthernetNetworkDiagnosticsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000037,
    WTLClusterIDTypeTimeSynchronizationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000038,
    WTLClusterIDTypeBridgedDeviceBasicInformationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000039,
    WTLClusterIDTypeSwitchID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000003B,
    WTLClusterIDTypeAdministratorCommissioningID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000003C,
    WTLClusterIDTypeOperationalCredentialsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000003E,
    WTLClusterIDTypeGroupKeyManagementID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000003F,
    WTLClusterIDTypeFixedLabelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000040,
    WTLClusterIDTypeUserLabelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000041,
    WTLClusterIDTypeProxyConfigurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000042,
    WTLClusterIDTypeProxyDiscoveryID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000043,
    WTLClusterIDTypeProxyValidID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000044,
    WTLClusterIDTypeBooleanStateID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000045,
    WTLClusterIDTypeModeSelectID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000050,
    WTLClusterIDTypeDoorLockID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000101,
    WTLClusterIDTypeWindowCoveringID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000102,
    WTLClusterIDTypeBarrierControlID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000103,
    WTLClusterIDTypePumpConfigurationAndControlID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000200,
    WTLClusterIDTypeThermostatID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000201,
    WTLClusterIDTypeFanControlID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000202,
    WTLClusterIDTypeThermostatUserInterfaceConfigurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000204,
    WTLClusterIDTypeColorControlID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000300,
    WTLClusterIDTypeBallastConfigurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000301,
    WTLClusterIDTypeIlluminanceMeasurementID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000400,
    WTLClusterIDTypeTemperatureMeasurementID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000402,
    WTLClusterIDTypePressureMeasurementID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000403,
    WTLClusterIDTypeFlowMeasurementID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000404,
    WTLClusterIDTypeRelativeHumidityMeasurementID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000405,
    WTLClusterIDTypeOccupancySensingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000406,
    WTLClusterIDTypeWakeOnLANID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000503,
    WTLClusterIDTypeChannelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000504,
    WTLClusterIDTypeTargetNavigatorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000505,
    WTLClusterIDTypeMediaPlaybackID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000506,
    WTLClusterIDTypeMediaInputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000507,
    WTLClusterIDTypeLowPowerID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000508,
    WTLClusterIDTypeKeypadInputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000509,
    WTLClusterIDTypeContentLauncherID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000050A,
    WTLClusterIDTypeAudioOutputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000050B,
    WTLClusterIDTypeApplicationLauncherID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000050C,
    WTLClusterIDTypeApplicationBasicID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000050D,
    WTLClusterIDTypeAccountLoginID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000050E,
    WTLClusterIDTypeElectricalMeasurementID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000B04,
    WTLClusterIDTypeUnitTestingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0xFFF1FC05,
    WTLClusterIDTypeFaultInjectionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0xFFF1FC06,
};

#pragma mark - Attributes IDs

typedef NS_ENUM(uint32_t, WTLAttributeIDType) {
    // Deprecated global attribute names
    WTLClusterGlobalAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID",  macos(13.0, 13.3), watchos(9.1, 9.4),
        tvos(16.1, 16.4))
    = 0x0000FFF8,
    WTLClusterGlobalAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID",  macos(13.0, 13.3), watchos(9.1, 9.4),
        tvos(16.1, 16.4))
    = 0x0000FFF9,
    WTLClusterGlobalAttributeAttributeListID WTL_DEPRECATED("Please use WTLAttributeIDTypeGlobalAttributeAttributeListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000FFFB,
    WTLClusterGlobalAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeGlobalAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000FFFC,
    WTLClusterGlobalAttributeClusterRevisionID WTL_DEPRECATED("Please use WTLAttributeIDTypeGlobalAttributeClusterRevisionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000FFFD,

    // Global attributes
    WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000FFF8,
    WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000FFF9,
    WTLAttributeIDTypeGlobalAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000FFFB,
    WTLAttributeIDTypeGlobalAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000FFFC,
    WTLAttributeIDTypeGlobalAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000FFFD,

    // Cluster Identify deprecated attribute names
    WTLClusterIdentifyAttributeIdentifyTimeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterIdentifyAttributeIdentifyTimeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterIdentifyAttributeIdentifyTypeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterIdentifyAttributeIdentifyTypeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterIdentifyAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIdentifyAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterIdentifyAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIdentifyAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterIdentifyAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIdentifyAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterIdentifyAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterIdentifyAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterIdentifyAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIdentifyAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Identify attributes
    WTLAttributeIDTypeClusterIdentifyAttributeIdentifyTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterIdentifyAttributeIdentifyTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterIdentifyAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterIdentifyAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterIdentifyAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterIdentifyAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterIdentifyAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Groups deprecated attribute names
    WTLClusterGroupsAttributeNameSupportID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterGroupsAttributeNameSupportID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGroupsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupsAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterGroupsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupsAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterGroupsAttributeAttributeListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterGroupsAttributeAttributeListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterGroupsAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterGroupsAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterGroupsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupsAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Groups attributes
    WTLAttributeIDTypeClusterGroupsAttributeNameSupportID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterGroupsAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterGroupsAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterGroupsAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterGroupsAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterGroupsAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Scenes deprecated attribute names
    WTLClusterScenesAttributeSceneCountID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterScenesAttributeSceneCountID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterScenesAttributeCurrentSceneID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterScenesAttributeCurrentSceneID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterScenesAttributeCurrentGroupID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterScenesAttributeCurrentGroupID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterScenesAttributeSceneValidID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterScenesAttributeSceneValidID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterScenesAttributeNameSupportID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterScenesAttributeNameSupportID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterScenesAttributeLastConfiguredByID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterScenesAttributeLastConfiguredByID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterScenesAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterScenesAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterScenesAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterScenesAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterScenesAttributeAttributeListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterScenesAttributeAttributeListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterScenesAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterScenesAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterScenesAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterScenesAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Scenes attributes
    WTLAttributeIDTypeClusterScenesAttributeSceneCountID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterScenesAttributeCurrentSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterScenesAttributeCurrentGroupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterScenesAttributeSceneValidID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterScenesAttributeNameSupportID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterScenesAttributeLastConfiguredByID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterScenesAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterScenesAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterScenesAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterScenesAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterScenesAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster OnOff deprecated attribute names
    WTLClusterOnOffAttributeOnOffID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterOnOffAttributeOnOffID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOnOffAttributeGlobalSceneControlID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffAttributeGlobalSceneControlID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004000,
    WTLClusterOnOffAttributeOnTimeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterOnOffAttributeOnTimeID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004001,
    WTLClusterOnOffAttributeOffWaitTimeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterOnOffAttributeOffWaitTimeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004002,
    WTLClusterOnOffAttributeStartUpOnOffID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterOnOffAttributeStartUpOnOffID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004003,
    WTLClusterOnOffAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterOnOffAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterOnOffAttributeAttributeListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterOnOffAttributeAttributeListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterOnOffAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterOnOffAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterOnOffAttributeClusterRevisionID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterOnOffAttributeClusterRevisionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster OnOff attributes
    WTLAttributeIDTypeClusterOnOffAttributeOnOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLAttributeIDTypeClusterOnOffAttributeGlobalSceneControlID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004000,
    WTLAttributeIDTypeClusterOnOffAttributeOnTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00004001,
    WTLAttributeIDTypeClusterOnOffAttributeOffWaitTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004002,
    WTLAttributeIDTypeClusterOnOffAttributeStartUpOnOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004003,
    WTLAttributeIDTypeClusterOnOffAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterOnOffAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterOnOffAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterOnOffAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterOnOffAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster OnOffSwitchConfiguration deprecated attribute names
    WTLClusterOnOffSwitchConfigurationAttributeSwitchTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeSwitchTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOnOffSwitchConfigurationAttributeSwitchActionsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeSwitchActionsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterOnOffSwitchConfigurationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterOnOffSwitchConfigurationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterOnOffSwitchConfigurationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterOnOffSwitchConfigurationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterOnOffSwitchConfigurationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster OnOffSwitchConfiguration attributes
    WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeSwitchTypeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeSwitchActionsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterOnOffSwitchConfigurationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster LevelControl deprecated attribute names
    WTLClusterLevelControlAttributeCurrentLevelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeCurrentLevelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterLevelControlAttributeRemainingTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeRemainingTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterLevelControlAttributeMinLevelID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterLevelControlAttributeMinLevelID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterLevelControlAttributeMaxLevelID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterLevelControlAttributeMaxLevelID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterLevelControlAttributeCurrentFrequencyID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeCurrentFrequencyID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterLevelControlAttributeMinFrequencyID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeMinFrequencyID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterLevelControlAttributeMaxFrequencyID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeMaxFrequencyID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterLevelControlAttributeOptionsID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterLevelControlAttributeOptionsID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterLevelControlAttributeOnOffTransitionTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeOnOffTransitionTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterLevelControlAttributeOnLevelID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterLevelControlAttributeOnLevelID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterLevelControlAttributeOnTransitionTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeOnTransitionTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterLevelControlAttributeOffTransitionTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeOffTransitionTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterLevelControlAttributeDefaultMoveRateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeDefaultMoveRateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterLevelControlAttributeStartUpCurrentLevelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeStartUpCurrentLevelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004000,
    WTLClusterLevelControlAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterLevelControlAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterLevelControlAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterLevelControlAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterLevelControlAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLevelControlAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster LevelControl attributes
    WTLAttributeIDTypeClusterLevelControlAttributeCurrentLevelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterLevelControlAttributeRemainingTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterLevelControlAttributeMinLevelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterLevelControlAttributeMaxLevelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterLevelControlAttributeCurrentFrequencyID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterLevelControlAttributeMinFrequencyID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterLevelControlAttributeMaxFrequencyID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterLevelControlAttributeOptionsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLAttributeIDTypeClusterLevelControlAttributeOnOffTransitionTimeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterLevelControlAttributeOnLevelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterLevelControlAttributeOnTransitionTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterLevelControlAttributeOffTransitionTimeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterLevelControlAttributeDefaultMoveRateID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterLevelControlAttributeStartUpCurrentLevelID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004000,
    WTLAttributeIDTypeClusterLevelControlAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterLevelControlAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterLevelControlAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterLevelControlAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterLevelControlAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster BinaryInputBasic deprecated attribute names
    WTLClusterBinaryInputBasicAttributeActiveTextID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeActiveTextID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterBinaryInputBasicAttributeDescriptionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeDescriptionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001C,
    WTLClusterBinaryInputBasicAttributeInactiveTextID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeInactiveTextID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002E,
    WTLClusterBinaryInputBasicAttributeOutOfServiceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeOutOfServiceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000051,
    WTLClusterBinaryInputBasicAttributePolarityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributePolarityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000054,
    WTLClusterBinaryInputBasicAttributePresentValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributePresentValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000055,
    WTLClusterBinaryInputBasicAttributeReliabilityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeReliabilityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000067,
    WTLClusterBinaryInputBasicAttributeStatusFlagsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeStatusFlagsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000006F,
    WTLClusterBinaryInputBasicAttributeApplicationTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeApplicationTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000100,
    WTLClusterBinaryInputBasicAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterBinaryInputBasicAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterBinaryInputBasicAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterBinaryInputBasicAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterBinaryInputBasicAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBinaryInputBasicAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster BinaryInputBasic attributes
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeActiveTextID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeDescriptionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001C,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeInactiveTextID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002E,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeOutOfServiceID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000051,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributePolarityID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000054,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributePresentValueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000055,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeReliabilityID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000067,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeStatusFlagsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000006F,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeApplicationTypeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000100,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterBinaryInputBasicAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster PulseWidthModulation deprecated attribute names
    WTLClusterPulseWidthModulationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPulseWidthModulationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterPulseWidthModulationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPulseWidthModulationAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterPulseWidthModulationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPulseWidthModulationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterPulseWidthModulationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPulseWidthModulationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterPulseWidthModulationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPulseWidthModulationAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster PulseWidthModulation attributes
    WTLAttributeIDTypeClusterPulseWidthModulationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterPulseWidthModulationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterPulseWidthModulationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterPulseWidthModulationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterPulseWidthModulationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Descriptor deprecated attribute names
    WTLClusterDescriptorAttributeDeviceTypeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDescriptorAttributeDeviceTypeListID", ios(16.2, 16.4), macos(13.1, 13.3),
        watchos(9.2, 9.4), tvos(16.2, 16.4))
    = 0x00000000,
    WTLClusterDescriptorAttributeDeviceListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDescriptorAttributeDeviceTypeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterDescriptorAttributeServerListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDescriptorAttributeServerListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterDescriptorAttributeClientListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDescriptorAttributeClientListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterDescriptorAttributePartsListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDescriptorAttributePartsListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterDescriptorAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDescriptorAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterDescriptorAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDescriptorAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterDescriptorAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDescriptorAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterDescriptorAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDescriptorAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterDescriptorAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDescriptorAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Descriptor attributes
    WTLAttributeIDTypeClusterDescriptorAttributeDeviceTypeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterDescriptorAttributeServerListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterDescriptorAttributeClientListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterDescriptorAttributePartsListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterDescriptorAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterDescriptorAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterDescriptorAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterDescriptorAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterDescriptorAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Binding deprecated attribute names
    WTLClusterBindingAttributeBindingID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBindingAttributeBindingID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterBindingAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBindingAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterBindingAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBindingAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterBindingAttributeAttributeListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBindingAttributeAttributeListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterBindingAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBindingAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterBindingAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBindingAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Binding attributes
    WTLAttributeIDTypeClusterBindingAttributeBindingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLAttributeIDTypeClusterBindingAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterBindingAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterBindingAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterBindingAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterBindingAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster AccessControl deprecated attribute names
    WTLClusterAccessControlAttributeAclID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterAccessControlAttributeACLID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterAccessControlAttributeExtensionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeExtensionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterAccessControlAttributeSubjectsPerAccessControlEntryID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeSubjectsPerAccessControlEntryID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterAccessControlAttributeTargetsPerAccessControlEntryID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeTargetsPerAccessControlEntryID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterAccessControlAttributeAccessControlEntriesPerFabricID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeAccessControlEntriesPerFabricID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterAccessControlAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterAccessControlAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterAccessControlAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterAccessControlAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterAccessControlAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccessControlAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster AccessControl attributes
    WTLAttributeIDTypeClusterAccessControlAttributeACLID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterAccessControlAttributeExtensionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterAccessControlAttributeSubjectsPerAccessControlEntryID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterAccessControlAttributeTargetsPerAccessControlEntryID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterAccessControlAttributeAccessControlEntriesPerFabricID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterAccessControlAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterAccessControlAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterAccessControlAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterAccessControlAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterAccessControlAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Actions deprecated attribute names
    WTLClusterActionsAttributeActionListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterActionsAttributeActionListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterActionsAttributeEndpointListsID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterActionsAttributeEndpointListsID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterActionsAttributeSetupURLID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterActionsAttributeSetupURLID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterActionsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterActionsAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterActionsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterActionsAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterActionsAttributeAttributeListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterActionsAttributeAttributeListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterActionsAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterActionsAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterActionsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterActionsAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Actions attributes
    WTLAttributeIDTypeClusterActionsAttributeActionListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterActionsAttributeEndpointListsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterActionsAttributeSetupURLID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterActionsAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterActionsAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterActionsAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterActionsAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterActionsAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Basic deprecated attribute names
    WTLClusterBasicAttributeDataModelRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeDataModelRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterBasicAttributeVendorNameID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeVendorNameID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterBasicAttributeVendorIDID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeVendorIDID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterBasicAttributeProductNameID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeProductNameID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterBasicAttributeProductIDID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeProductIDID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterBasicAttributeNodeLabelID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeNodeLabelID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterBasicAttributeLocationID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeLocationID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterBasicAttributeHardwareVersionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeHardwareVersionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterBasicAttributeHardwareVersionStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeHardwareVersionStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterBasicAttributeSoftwareVersionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeSoftwareVersionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterBasicAttributeSoftwareVersionStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeSoftwareVersionStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterBasicAttributeManufacturingDateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeManufacturingDateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterBasicAttributePartNumberID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributePartNumberID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterBasicAttributeProductURLID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeProductURLID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterBasicAttributeProductLabelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeProductLabelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterBasicAttributeSerialNumberID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeSerialNumberID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterBasicAttributeLocalConfigDisabledID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeLocalConfigDisabledID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterBasicAttributeReachableID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeReachableID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterBasicAttributeUniqueIDID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeUniqueIDID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterBasicAttributeCapabilityMinimaID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeCapabilityMinimaID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterBasicAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterBasicAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterBasicAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterBasicAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterBasicInformationAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterBasicAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBasicInformationAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster BasicInformation attributes
    WTLAttributeIDTypeClusterBasicInformationAttributeDataModelRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterBasicInformationAttributeVendorNameID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterBasicInformationAttributeVendorIDID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterBasicInformationAttributeProductNameID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterBasicInformationAttributeProductIDID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterBasicInformationAttributeNodeLabelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterBasicInformationAttributeLocationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterBasicInformationAttributeHardwareVersionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterBasicInformationAttributeHardwareVersionStringID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterBasicInformationAttributeSoftwareVersionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterBasicInformationAttributeSoftwareVersionStringID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterBasicInformationAttributeManufacturingDateID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLAttributeIDTypeClusterBasicInformationAttributePartNumberID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLAttributeIDTypeClusterBasicInformationAttributeProductURLID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLAttributeIDTypeClusterBasicInformationAttributeProductLabelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLAttributeIDTypeClusterBasicInformationAttributeSerialNumberID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLAttributeIDTypeClusterBasicInformationAttributeLocalConfigDisabledID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterBasicInformationAttributeReachableID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterBasicInformationAttributeUniqueIDID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterBasicInformationAttributeCapabilityMinimaID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterBasicInformationAttributeProductAppearanceID WTL_NEWLY_AVAILABLE = 0x00000014,
    WTLAttributeIDTypeClusterBasicInformationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterBasicInformationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterBasicInformationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterBasicInformationAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterBasicInformationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster OtaSoftwareUpdateProvider deprecated attribute names
    WTLClusterOtaSoftwareUpdateProviderAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterOtaSoftwareUpdateProviderAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterOtaSoftwareUpdateProviderAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterOtaSoftwareUpdateProviderAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterOtaSoftwareUpdateProviderAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster OTASoftwareUpdateProvider attributes
    WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterOTASoftwareUpdateProviderAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster OtaSoftwareUpdateRequestor deprecated attribute names
    WTLClusterOtaSoftwareUpdateRequestorAttributeDefaultOtaProvidersID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeDefaultOTAProvidersID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOtaSoftwareUpdateRequestorAttributeUpdatePossibleID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeUpdatePossibleID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterOtaSoftwareUpdateRequestorAttributeUpdateStateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeUpdateStateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterOtaSoftwareUpdateRequestorAttributeUpdateStateProgressID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeUpdateStateProgressID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterOtaSoftwareUpdateRequestorAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterOtaSoftwareUpdateRequestorAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterOtaSoftwareUpdateRequestorAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeAttributeListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterOtaSoftwareUpdateRequestorAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterOtaSoftwareUpdateRequestorAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster OTASoftwareUpdateRequestor attributes
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeDefaultOTAProvidersID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeUpdatePossibleID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeUpdateStateID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeUpdateStateProgressID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterOTASoftwareUpdateRequestorAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster LocalizationConfiguration deprecated attribute names
    WTLClusterLocalizationConfigurationAttributeActiveLocaleID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLocalizationConfigurationAttributeActiveLocaleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterLocalizationConfigurationAttributeSupportedLocalesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLocalizationConfigurationAttributeSupportedLocalesID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterLocalizationConfigurationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLocalizationConfigurationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterLocalizationConfigurationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLocalizationConfigurationAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterLocalizationConfigurationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLocalizationConfigurationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterLocalizationConfigurationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLocalizationConfigurationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterLocalizationConfigurationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLocalizationConfigurationAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster LocalizationConfiguration attributes
    WTLAttributeIDTypeClusterLocalizationConfigurationAttributeActiveLocaleID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterLocalizationConfigurationAttributeSupportedLocalesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterLocalizationConfigurationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterLocalizationConfigurationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterLocalizationConfigurationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterLocalizationConfigurationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterLocalizationConfigurationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster TimeFormatLocalization deprecated attribute names
    WTLClusterTimeFormatLocalizationAttributeHourFormatID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeHourFormatID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterTimeFormatLocalizationAttributeActiveCalendarTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeActiveCalendarTypeID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterTimeFormatLocalizationAttributeSupportedCalendarTypesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeSupportedCalendarTypesID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterTimeFormatLocalizationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterTimeFormatLocalizationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterTimeFormatLocalizationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterTimeFormatLocalizationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterTimeFormatLocalizationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster TimeFormatLocalization attributes
    WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeHourFormatID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeActiveCalendarTypeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeSupportedCalendarTypesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterTimeFormatLocalizationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster UnitLocalization deprecated attribute names
    WTLClusterUnitLocalizationAttributeTemperatureUnitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitLocalizationAttributeTemperatureUnitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterUnitLocalizationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitLocalizationAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterUnitLocalizationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitLocalizationAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterUnitLocalizationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitLocalizationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterUnitLocalizationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitLocalizationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterUnitLocalizationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitLocalizationAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster UnitLocalization attributes
    WTLAttributeIDTypeClusterUnitLocalizationAttributeTemperatureUnitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterUnitLocalizationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterUnitLocalizationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterUnitLocalizationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterUnitLocalizationAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterUnitLocalizationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster PowerSourceConfiguration deprecated attribute names
    WTLClusterPowerSourceConfigurationAttributeSourcesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeSourcesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterPowerSourceConfigurationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterPowerSourceConfigurationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterPowerSourceConfigurationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterPowerSourceConfigurationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterPowerSourceConfigurationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster PowerSourceConfiguration attributes
    WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeSourcesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterPowerSourceConfigurationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster PowerSource deprecated attribute names
    WTLClusterPowerSourceAttributeStatusID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterPowerSourceAttributeStatusID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterPowerSourceAttributeOrderID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterPowerSourceAttributeOrderID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterPowerSourceAttributeDescriptionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeDescriptionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterPowerSourceAttributeWiredAssessedInputVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeWiredAssessedInputVoltageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterPowerSourceAttributeWiredAssessedInputFrequencyID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeWiredAssessedInputFrequencyID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterPowerSourceAttributeWiredCurrentTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeWiredCurrentTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterPowerSourceAttributeWiredAssessedCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeWiredAssessedCurrentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterPowerSourceAttributeWiredNominalVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeWiredNominalVoltageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterPowerSourceAttributeWiredMaximumCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeWiredMaximumCurrentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterPowerSourceAttributeWiredPresentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeWiredPresentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterPowerSourceAttributeActiveWiredFaultsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeActiveWiredFaultsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterPowerSourceAttributeBatVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatVoltageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterPowerSourceAttributeBatPercentRemainingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatPercentRemainingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterPowerSourceAttributeBatTimeRemainingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatTimeRemainingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterPowerSourceAttributeBatChargeLevelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatChargeLevelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterPowerSourceAttributeBatReplacementNeededID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatReplacementNeededID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterPowerSourceAttributeBatReplaceabilityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatReplaceabilityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterPowerSourceAttributeBatPresentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatPresentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterPowerSourceAttributeActiveBatFaultsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeActiveBatFaultsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterPowerSourceAttributeBatReplacementDescriptionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatReplacementDescriptionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterPowerSourceAttributeBatCommonDesignationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatCommonDesignationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterPowerSourceAttributeBatANSIDesignationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatANSIDesignationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,
    WTLClusterPowerSourceAttributeBatIECDesignationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatIECDesignationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000016,
    WTLClusterPowerSourceAttributeBatApprovedChemistryID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatApprovedChemistryID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000017,
    WTLClusterPowerSourceAttributeBatCapacityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatCapacityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000018,
    WTLClusterPowerSourceAttributeBatQuantityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatQuantityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000019,
    WTLClusterPowerSourceAttributeBatChargeStateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatChargeStateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001A,
    WTLClusterPowerSourceAttributeBatTimeToFullChargeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatTimeToFullChargeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001B,
    WTLClusterPowerSourceAttributeBatFunctionalWhileChargingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatFunctionalWhileChargingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001C,
    WTLClusterPowerSourceAttributeBatChargingCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeBatChargingCurrentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001D,
    WTLClusterPowerSourceAttributeActiveBatChargeFaultsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeActiveBatChargeFaultsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001E,
    WTLClusterPowerSourceAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterPowerSourceAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterPowerSourceAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterPowerSourceAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterPowerSourceAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPowerSourceAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster PowerSource attributes
    WTLAttributeIDTypeClusterPowerSourceAttributeStatusID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterPowerSourceAttributeOrderID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterPowerSourceAttributeDescriptionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterPowerSourceAttributeWiredAssessedInputVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterPowerSourceAttributeWiredAssessedInputFrequencyID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterPowerSourceAttributeWiredCurrentTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterPowerSourceAttributeWiredAssessedCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterPowerSourceAttributeWiredNominalVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterPowerSourceAttributeWiredMaximumCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterPowerSourceAttributeWiredPresentID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterPowerSourceAttributeActiveWiredFaultsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatVoltageID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatPercentRemainingID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatTimeRemainingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatChargeLevelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatReplacementNeededID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatReplaceabilityID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatPresentID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterPowerSourceAttributeActiveBatFaultsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatReplacementDescriptionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatCommonDesignationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatANSIDesignationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatIECDesignationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000016,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatApprovedChemistryID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000017,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatCapacityID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000018,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatQuantityID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000019,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatChargeStateID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001A,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatTimeToFullChargeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001B,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatFunctionalWhileChargingID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001C,
    WTLAttributeIDTypeClusterPowerSourceAttributeBatChargingCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001D,
    WTLAttributeIDTypeClusterPowerSourceAttributeActiveBatChargeFaultsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001E,
    WTLAttributeIDTypeClusterPowerSourceAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterPowerSourceAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterPowerSourceAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterPowerSourceAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterPowerSourceAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster GeneralCommissioning deprecated attribute names
    WTLClusterGeneralCommissioningAttributeBreadcrumbID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeBreadcrumbID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGeneralCommissioningAttributeBasicCommissioningInfoID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeBasicCommissioningInfoID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterGeneralCommissioningAttributeRegulatoryConfigID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeRegulatoryConfigID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterGeneralCommissioningAttributeLocationCapabilityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeLocationCapabilityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterGeneralCommissioningAttributeSupportsConcurrentConnectionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeSupportsConcurrentConnectionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterGeneralCommissioningAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterGeneralCommissioningAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterGeneralCommissioningAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterGeneralCommissioningAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterGeneralCommissioningAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralCommissioningAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster GeneralCommissioning attributes
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeBreadcrumbID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeBasicCommissioningInfoID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeRegulatoryConfigID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeLocationCapabilityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeSupportsConcurrentConnectionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterGeneralCommissioningAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster NetworkCommissioning deprecated attribute names
    WTLClusterNetworkCommissioningAttributeMaxNetworksID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeMaxNetworksID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterNetworkCommissioningAttributeNetworksID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeNetworksID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterNetworkCommissioningAttributeScanMaxTimeSecondsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeScanMaxTimeSecondsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterNetworkCommissioningAttributeConnectMaxTimeSecondsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeConnectMaxTimeSecondsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterNetworkCommissioningAttributeInterfaceEnabledID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeInterfaceEnabledID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterNetworkCommissioningAttributeLastNetworkingStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeLastNetworkingStatusID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterNetworkCommissioningAttributeLastNetworkIDID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeLastNetworkIDID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterNetworkCommissioningAttributeLastConnectErrorValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeLastConnectErrorValueID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterNetworkCommissioningAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterNetworkCommissioningAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterNetworkCommissioningAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterNetworkCommissioningAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterNetworkCommissioningAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterNetworkCommissioningAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster NetworkCommissioning attributes
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeMaxNetworksID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeNetworksID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeScanMaxTimeSecondsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeConnectMaxTimeSecondsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeInterfaceEnabledID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeLastNetworkingStatusID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeLastNetworkIDID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeLastConnectErrorValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterNetworkCommissioningAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster DiagnosticLogs deprecated attribute names
    WTLClusterDiagnosticLogsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDiagnosticLogsAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterDiagnosticLogsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDiagnosticLogsAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterDiagnosticLogsAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDiagnosticLogsAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterDiagnosticLogsAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDiagnosticLogsAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterDiagnosticLogsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDiagnosticLogsAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster DiagnosticLogs attributes
    WTLAttributeIDTypeClusterDiagnosticLogsAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterDiagnosticLogsAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterDiagnosticLogsAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterDiagnosticLogsAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterDiagnosticLogsAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster GeneralDiagnostics deprecated attribute names
    WTLClusterGeneralDiagnosticsAttributeNetworkInterfacesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeNetworkInterfacesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGeneralDiagnosticsAttributeRebootCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeRebootCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterGeneralDiagnosticsAttributeUpTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeUpTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterGeneralDiagnosticsAttributeTotalOperationalHoursID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeTotalOperationalHoursID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterGeneralDiagnosticsAttributeBootReasonsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeBootReasonID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterGeneralDiagnosticsAttributeActiveHardwareFaultsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeActiveHardwareFaultsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterGeneralDiagnosticsAttributeActiveRadioFaultsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeActiveRadioFaultsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterGeneralDiagnosticsAttributeActiveNetworkFaultsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeActiveNetworkFaultsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterGeneralDiagnosticsAttributeTestEventTriggersEnabledID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeTestEventTriggersEnabledID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterGeneralDiagnosticsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterGeneralDiagnosticsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterGeneralDiagnosticsAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterGeneralDiagnosticsAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterGeneralDiagnosticsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster GeneralDiagnostics attributes
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeNetworkInterfacesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeRebootCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeUpTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeTotalOperationalHoursID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeBootReasonID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeActiveHardwareFaultsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeActiveRadioFaultsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeActiveNetworkFaultsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeTestEventTriggersEnabledID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterGeneralDiagnosticsAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster SoftwareDiagnostics deprecated attribute names
    WTLClusterSoftwareDiagnosticsAttributeThreadMetricsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeThreadMetricsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterSoftwareDiagnosticsAttributeCurrentHeapFreeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeCurrentHeapFreeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterSoftwareDiagnosticsAttributeCurrentHeapUsedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeCurrentHeapUsedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterSoftwareDiagnosticsAttributeCurrentHeapHighWatermarkID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeCurrentHeapHighWatermarkID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterSoftwareDiagnosticsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterSoftwareDiagnosticsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterSoftwareDiagnosticsAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterSoftwareDiagnosticsAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterSoftwareDiagnosticsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster SoftwareDiagnostics attributes
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeThreadMetricsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeCurrentHeapFreeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeCurrentHeapUsedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeCurrentHeapHighWatermarkID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterSoftwareDiagnosticsAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ThreadNetworkDiagnostics deprecated attribute names
    WTLClusterThreadNetworkDiagnosticsAttributeChannelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeChannelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterThreadNetworkDiagnosticsAttributeRoutingRoleID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRoutingRoleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterThreadNetworkDiagnosticsAttributeNetworkNameID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeNetworkNameID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterThreadNetworkDiagnosticsAttributePanIdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributePanIdID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterThreadNetworkDiagnosticsAttributeExtendedPanIdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeExtendedPanIdID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterThreadNetworkDiagnosticsAttributeMeshLocalPrefixID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeMeshLocalPrefixID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterThreadNetworkDiagnosticsAttributeOverrunCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeOverrunCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterThreadNetworkDiagnosticsAttributeNeighborTableListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeNeighborTableID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterThreadNetworkDiagnosticsAttributeRouteTableListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRouteTableID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterThreadNetworkDiagnosticsAttributePartitionIdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributePartitionIdID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterThreadNetworkDiagnosticsAttributeWeightingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeWeightingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterThreadNetworkDiagnosticsAttributeDataVersionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeDataVersionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterThreadNetworkDiagnosticsAttributeStableDataVersionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeStableDataVersionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterThreadNetworkDiagnosticsAttributeLeaderRouterIdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeLeaderRouterIdID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterThreadNetworkDiagnosticsAttributeDetachedRoleCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeDetachedRoleCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterThreadNetworkDiagnosticsAttributeChildRoleCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeChildRoleCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterThreadNetworkDiagnosticsAttributeRouterRoleCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRouterRoleCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterThreadNetworkDiagnosticsAttributeLeaderRoleCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeLeaderRoleCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterThreadNetworkDiagnosticsAttributeAttachAttemptCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeAttachAttemptCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterThreadNetworkDiagnosticsAttributePartitionIdChangeCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributePartitionIdChangeCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterThreadNetworkDiagnosticsAttributeBetterPartitionAttachAttemptCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeBetterPartitionAttachAttemptCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterThreadNetworkDiagnosticsAttributeParentChangeCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeParentChangeCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,
    WTLClusterThreadNetworkDiagnosticsAttributeTxTotalCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxTotalCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000016,
    WTLClusterThreadNetworkDiagnosticsAttributeTxUnicastCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxUnicastCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000017,
    WTLClusterThreadNetworkDiagnosticsAttributeTxBroadcastCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxBroadcastCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000018,
    WTLClusterThreadNetworkDiagnosticsAttributeTxAckRequestedCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxAckRequestedCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000019,
    WTLClusterThreadNetworkDiagnosticsAttributeTxAckedCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxAckedCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001A,
    WTLClusterThreadNetworkDiagnosticsAttributeTxNoAckRequestedCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxNoAckRequestedCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001B,
    WTLClusterThreadNetworkDiagnosticsAttributeTxDataCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxDataCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001C,
    WTLClusterThreadNetworkDiagnosticsAttributeTxDataPollCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxDataPollCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001D,
    WTLClusterThreadNetworkDiagnosticsAttributeTxBeaconCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxBeaconCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001E,
    WTLClusterThreadNetworkDiagnosticsAttributeTxBeaconRequestCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxBeaconRequestCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001F,
    WTLClusterThreadNetworkDiagnosticsAttributeTxOtherCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxOtherCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000020,
    WTLClusterThreadNetworkDiagnosticsAttributeTxRetryCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxRetryCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000021,
    WTLClusterThreadNetworkDiagnosticsAttributeTxDirectMaxRetryExpiryCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxDirectMaxRetryExpiryCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000022,
    WTLClusterThreadNetworkDiagnosticsAttributeTxIndirectMaxRetryExpiryCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxIndirectMaxRetryExpiryCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000023,
    WTLClusterThreadNetworkDiagnosticsAttributeTxErrCcaCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxErrCcaCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000024,
    WTLClusterThreadNetworkDiagnosticsAttributeTxErrAbortCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxErrAbortCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000025,
    WTLClusterThreadNetworkDiagnosticsAttributeTxErrBusyChannelCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxErrBusyChannelCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000026,
    WTLClusterThreadNetworkDiagnosticsAttributeRxTotalCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxTotalCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000027,
    WTLClusterThreadNetworkDiagnosticsAttributeRxUnicastCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxUnicastCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000028,
    WTLClusterThreadNetworkDiagnosticsAttributeRxBroadcastCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxBroadcastCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000029,
    WTLClusterThreadNetworkDiagnosticsAttributeRxDataCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxDataCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002A,
    WTLClusterThreadNetworkDiagnosticsAttributeRxDataPollCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxDataPollCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002B,
    WTLClusterThreadNetworkDiagnosticsAttributeRxBeaconCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxBeaconCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002C,
    WTLClusterThreadNetworkDiagnosticsAttributeRxBeaconRequestCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxBeaconRequestCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002D,
    WTLClusterThreadNetworkDiagnosticsAttributeRxOtherCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxOtherCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002E,
    WTLClusterThreadNetworkDiagnosticsAttributeRxAddressFilteredCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxAddressFilteredCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002F,
    WTLClusterThreadNetworkDiagnosticsAttributeRxDestAddrFilteredCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxDestAddrFilteredCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000030,
    WTLClusterThreadNetworkDiagnosticsAttributeRxDuplicatedCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxDuplicatedCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000031,
    WTLClusterThreadNetworkDiagnosticsAttributeRxErrNoFrameCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrNoFrameCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000032,
    WTLClusterThreadNetworkDiagnosticsAttributeRxErrUnknownNeighborCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrUnknownNeighborCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000033,
    WTLClusterThreadNetworkDiagnosticsAttributeRxErrInvalidSrcAddrCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrInvalidSrcAddrCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000034,
    WTLClusterThreadNetworkDiagnosticsAttributeRxErrSecCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrSecCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000035,
    WTLClusterThreadNetworkDiagnosticsAttributeRxErrFcsCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrFcsCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000036,
    WTLClusterThreadNetworkDiagnosticsAttributeRxErrOtherCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrOtherCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000037,
    WTLClusterThreadNetworkDiagnosticsAttributeActiveTimestampID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeActiveTimestampID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000038,
    WTLClusterThreadNetworkDiagnosticsAttributePendingTimestampID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributePendingTimestampID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000039,
    WTLClusterThreadNetworkDiagnosticsAttributeDelayID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeDelayID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003A,
    WTLClusterThreadNetworkDiagnosticsAttributeSecurityPolicyID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeSecurityPolicyID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003B,
    WTLClusterThreadNetworkDiagnosticsAttributeChannelPage0MaskID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeChannelPage0MaskID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003C,
    WTLClusterThreadNetworkDiagnosticsAttributeOperationalDatasetComponentsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeOperationalDatasetComponentsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003D,
    WTLClusterThreadNetworkDiagnosticsAttributeActiveNetworkFaultsListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeActiveNetworkFaultsListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003E,
    WTLClusterThreadNetworkDiagnosticsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterThreadNetworkDiagnosticsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterThreadNetworkDiagnosticsAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterThreadNetworkDiagnosticsAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterThreadNetworkDiagnosticsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ThreadNetworkDiagnostics attributes
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeChannelID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRoutingRoleID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeNetworkNameID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributePanIdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeExtendedPanIdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeMeshLocalPrefixID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeOverrunCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeNeighborTableID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRouteTableID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributePartitionIdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeWeightingID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeDataVersionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeStableDataVersionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeLeaderRouterIdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeDetachedRoleCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeChildRoleCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRouterRoleCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeLeaderRoleCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeAttachAttemptCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributePartitionIdChangeCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeBetterPartitionAttachAttemptCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeParentChangeCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxTotalCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000016,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxUnicastCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000017,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxBroadcastCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000018,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxAckRequestedCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000019,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxAckedCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001A,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxNoAckRequestedCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001B,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxDataCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001C,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxDataPollCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001D,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxBeaconCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001E,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxBeaconRequestCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001F,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxOtherCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000020,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxRetryCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000021,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxDirectMaxRetryExpiryCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000022,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxIndirectMaxRetryExpiryCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000023,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxErrCcaCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000024,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxErrAbortCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000025,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeTxErrBusyChannelCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000026,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxTotalCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000027,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxUnicastCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000028,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxBroadcastCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000029,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxDataCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002A,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxDataPollCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002B,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxBeaconCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002C,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxBeaconRequestCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002D,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxOtherCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002E,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxAddressFilteredCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002F,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxDestAddrFilteredCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000030,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxDuplicatedCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000031,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrNoFrameCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000032,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrUnknownNeighborCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000033,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrInvalidSrcAddrCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000034,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrSecCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000035,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrFcsCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000036,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeRxErrOtherCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000037,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeActiveTimestampID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000038,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributePendingTimestampID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000039,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeDelayID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003A,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeSecurityPolicyID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003B,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeChannelPage0MaskID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003C,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeOperationalDatasetComponentsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003D,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeActiveNetworkFaultsListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003E,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterThreadNetworkDiagnosticsAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster WiFiNetworkDiagnostics deprecated attribute names
    WTLClusterWiFiNetworkDiagnosticsAttributeBssidID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeBSSIDID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterWiFiNetworkDiagnosticsAttributeSecurityTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeSecurityTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterWiFiNetworkDiagnosticsAttributeWiFiVersionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeWiFiVersionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterWiFiNetworkDiagnosticsAttributeChannelNumberID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeChannelNumberID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterWiFiNetworkDiagnosticsAttributeRssiID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeRSSIID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterWiFiNetworkDiagnosticsAttributeBeaconLostCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeBeaconLostCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterWiFiNetworkDiagnosticsAttributeBeaconRxCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeBeaconRxCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterWiFiNetworkDiagnosticsAttributePacketMulticastRxCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributePacketMulticastRxCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterWiFiNetworkDiagnosticsAttributePacketMulticastTxCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributePacketMulticastTxCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterWiFiNetworkDiagnosticsAttributePacketUnicastRxCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributePacketUnicastRxCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterWiFiNetworkDiagnosticsAttributePacketUnicastTxCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributePacketUnicastTxCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterWiFiNetworkDiagnosticsAttributeCurrentMaxRateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeCurrentMaxRateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterWiFiNetworkDiagnosticsAttributeOverrunCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeOverrunCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterWiFiNetworkDiagnosticsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterWiFiNetworkDiagnosticsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterWiFiNetworkDiagnosticsAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterWiFiNetworkDiagnosticsAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterWiFiNetworkDiagnosticsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster WiFiNetworkDiagnostics attributes
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeBSSIDID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeSecurityTypeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeWiFiVersionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeChannelNumberID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeRSSIID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeBeaconLostCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeBeaconRxCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributePacketMulticastRxCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributePacketMulticastTxCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributePacketUnicastRxCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributePacketUnicastTxCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeCurrentMaxRateID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeOverrunCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterWiFiNetworkDiagnosticsAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster EthernetNetworkDiagnostics deprecated attribute names
    WTLClusterEthernetNetworkDiagnosticsAttributePHYRateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributePHYRateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterEthernetNetworkDiagnosticsAttributeFullDuplexID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeFullDuplexID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterEthernetNetworkDiagnosticsAttributePacketRxCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributePacketRxCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterEthernetNetworkDiagnosticsAttributePacketTxCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributePacketTxCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterEthernetNetworkDiagnosticsAttributeTxErrCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeTxErrCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterEthernetNetworkDiagnosticsAttributeCollisionCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeCollisionCountID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterEthernetNetworkDiagnosticsAttributeOverrunCountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeOverrunCountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterEthernetNetworkDiagnosticsAttributeCarrierDetectID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeCarrierDetectID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterEthernetNetworkDiagnosticsAttributeTimeSinceResetID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeTimeSinceResetID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterEthernetNetworkDiagnosticsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterEthernetNetworkDiagnosticsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterEthernetNetworkDiagnosticsAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeAttributeListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterEthernetNetworkDiagnosticsAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterEthernetNetworkDiagnosticsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster EthernetNetworkDiagnostics attributes
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributePHYRateID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeFullDuplexID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributePacketRxCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributePacketTxCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeTxErrCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeCollisionCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeOverrunCountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeCarrierDetectID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeTimeSinceResetID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterEthernetNetworkDiagnosticsAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster TimeSynchronization deprecated attribute names
    WTLClusterTimeSynchronizationAttributeUTCTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeUTCTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterTimeSynchronizationAttributeGranularityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeGranularityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterTimeSynchronizationAttributeTimeSourceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeTimeSourceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterTimeSynchronizationAttributeTrustedTimeNodeIdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeTrustedTimeNodeIdID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterTimeSynchronizationAttributeDefaultNtpID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeDefaultNtpID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterTimeSynchronizationAttributeTimeZoneID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeTimeZoneID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterTimeSynchronizationAttributeDstOffsetID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeDSTOffsetID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterTimeSynchronizationAttributeLocalTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeLocalTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterTimeSynchronizationAttributeTimeZoneDatabaseID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeTimeZoneDatabaseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterTimeSynchronizationAttributeNtpServerPortID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeNtpServerPortID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterTimeSynchronizationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterTimeSynchronizationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterTimeSynchronizationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterTimeSynchronizationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterTimeSynchronizationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTimeSynchronizationAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster TimeSynchronization attributes
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeUTCTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeGranularityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeTimeSourceID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeTrustedTimeNodeIdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeDefaultNtpID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeTimeZoneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeDSTOffsetID API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5))
    = 0x00000006,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeDstOffsetID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeTimeSynchronizationAttributeDSTOffsetID", ios(16.4, 16.5), macos(13.3, 13.4),
        watchos(9.4, 9.5), tvos(16.4, 16.5))
    = WTLAttributeIDTypeClusterTimeSynchronizationAttributeDSTOffsetID,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeLocalTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeTimeZoneDatabaseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeNtpServerPortID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterTimeSynchronizationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster BridgedDeviceBasic deprecated attribute names
    WTLClusterBridgedDeviceBasicAttributeVendorNameID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeVendorNameID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterBridgedDeviceBasicAttributeVendorIDID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeVendorIDID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterBridgedDeviceBasicAttributeProductNameID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeProductNameID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterBridgedDeviceBasicAttributeNodeLabelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeNodeLabelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterBridgedDeviceBasicAttributeHardwareVersionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeHardwareVersionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterBridgedDeviceBasicAttributeHardwareVersionStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeHardwareVersionStringID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterBridgedDeviceBasicAttributeSoftwareVersionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeSoftwareVersionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterBridgedDeviceBasicAttributeSoftwareVersionStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeSoftwareVersionStringID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterBridgedDeviceBasicAttributeManufacturingDateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeManufacturingDateID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterBridgedDeviceBasicAttributePartNumberID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributePartNumberID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterBridgedDeviceBasicAttributeProductURLID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeProductURLID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterBridgedDeviceBasicAttributeProductLabelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeProductLabelID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterBridgedDeviceBasicAttributeSerialNumberID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeSerialNumberID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterBridgedDeviceBasicAttributeReachableID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeReachableID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterBridgedDeviceBasicAttributeUniqueIDID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeUniqueIDID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterBridgedDeviceBasicAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterBridgedDeviceBasicAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterBridgedDeviceBasicAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeAttributeListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterBridgedDeviceBasicAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeFeatureMapID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterBridgedDeviceBasicAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster BridgedDeviceBasicInformation attributes
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeVendorNameID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeVendorIDID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeProductNameID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeNodeLabelID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeHardwareVersionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeHardwareVersionStringID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeSoftwareVersionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeSoftwareVersionStringID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeManufacturingDateID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributePartNumberID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeProductURLID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeProductLabelID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeSerialNumberID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeReachableID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeUniqueIDID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeProductAppearanceID WTL_NEWLY_AVAILABLE = 0x00000014,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterBridgedDeviceBasicInformationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Switch deprecated attribute names
    WTLClusterSwitchAttributeNumberOfPositionsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSwitchAttributeNumberOfPositionsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterSwitchAttributeCurrentPositionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSwitchAttributeCurrentPositionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterSwitchAttributeMultiPressMaxID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterSwitchAttributeMultiPressMaxID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterSwitchAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSwitchAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterSwitchAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSwitchAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterSwitchAttributeAttributeListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterSwitchAttributeAttributeListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterSwitchAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterSwitchAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterSwitchAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterSwitchAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Switch attributes
    WTLAttributeIDTypeClusterSwitchAttributeNumberOfPositionsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterSwitchAttributeCurrentPositionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterSwitchAttributeMultiPressMaxID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterSwitchAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterSwitchAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterSwitchAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterSwitchAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterSwitchAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster AdministratorCommissioning deprecated attribute names
    WTLClusterAdministratorCommissioningAttributeWindowStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAdministratorCommissioningAttributeWindowStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterAdministratorCommissioningAttributeAdminFabricIndexID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAdministratorCommissioningAttributeAdminFabricIndexID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterAdministratorCommissioningAttributeAdminVendorIdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAdministratorCommissioningAttributeAdminVendorIdID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterAdministratorCommissioningAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAdministratorCommissioningAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterAdministratorCommissioningAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAdministratorCommissioningAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterAdministratorCommissioningAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAdministratorCommissioningAttributeAttributeListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterAdministratorCommissioningAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAdministratorCommissioningAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterAdministratorCommissioningAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAdministratorCommissioningAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster AdministratorCommissioning attributes
    WTLAttributeIDTypeClusterAdministratorCommissioningAttributeWindowStatusID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterAdministratorCommissioningAttributeAdminFabricIndexID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterAdministratorCommissioningAttributeAdminVendorIdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterAdministratorCommissioningAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterAdministratorCommissioningAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterAdministratorCommissioningAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterAdministratorCommissioningAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterAdministratorCommissioningAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster OperationalCredentials deprecated attribute names
    WTLClusterOperationalCredentialsAttributeNOCsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeNOCsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOperationalCredentialsAttributeFabricsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeFabricsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterOperationalCredentialsAttributeSupportedFabricsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeSupportedFabricsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterOperationalCredentialsAttributeCommissionedFabricsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeCommissionedFabricsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterOperationalCredentialsAttributeTrustedRootCertificatesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeTrustedRootCertificatesID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterOperationalCredentialsAttributeCurrentFabricIndexID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeCurrentFabricIndexID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterOperationalCredentialsAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterOperationalCredentialsAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterOperationalCredentialsAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterOperationalCredentialsAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterOperationalCredentialsAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOperationalCredentialsAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster OperationalCredentials attributes
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeNOCsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeFabricsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeSupportedFabricsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeCommissionedFabricsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeTrustedRootCertificatesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeCurrentFabricIndexID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterOperationalCredentialsAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster GroupKeyManagement deprecated attribute names
    WTLClusterGroupKeyManagementAttributeGroupKeyMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeGroupKeyMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGroupKeyManagementAttributeGroupTableID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeGroupTableID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterGroupKeyManagementAttributeMaxGroupsPerFabricID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeMaxGroupsPerFabricID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterGroupKeyManagementAttributeMaxGroupKeysPerFabricID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeMaxGroupKeysPerFabricID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterGroupKeyManagementAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterGroupKeyManagementAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterGroupKeyManagementAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterGroupKeyManagementAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterGroupKeyManagementAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterGroupKeyManagementAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster GroupKeyManagement attributes
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeGroupKeyMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeGroupTableID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeMaxGroupsPerFabricID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeMaxGroupKeysPerFabricID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterGroupKeyManagementAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster FixedLabel deprecated attribute names
    WTLClusterFixedLabelAttributeLabelListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterFixedLabelAttributeLabelListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterFixedLabelAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFixedLabelAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterFixedLabelAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFixedLabelAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterFixedLabelAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFixedLabelAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterFixedLabelAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterFixedLabelAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterFixedLabelAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFixedLabelAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster FixedLabel attributes
    WTLAttributeIDTypeClusterFixedLabelAttributeLabelListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterFixedLabelAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterFixedLabelAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterFixedLabelAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterFixedLabelAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterFixedLabelAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster UserLabel deprecated attribute names
    WTLClusterUserLabelAttributeLabelListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUserLabelAttributeLabelListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterUserLabelAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUserLabelAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterUserLabelAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUserLabelAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterUserLabelAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUserLabelAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterUserLabelAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUserLabelAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterUserLabelAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUserLabelAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster UserLabel attributes
    WTLAttributeIDTypeClusterUserLabelAttributeLabelListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterUserLabelAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterUserLabelAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterUserLabelAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterUserLabelAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterUserLabelAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ProxyConfiguration deprecated attribute names
    WTLClusterProxyConfigurationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyConfigurationAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterProxyConfigurationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyConfigurationAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterProxyConfigurationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyConfigurationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterProxyConfigurationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyConfigurationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterProxyConfigurationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyConfigurationAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ProxyConfiguration attributes
    WTLAttributeIDTypeClusterProxyConfigurationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterProxyConfigurationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterProxyConfigurationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterProxyConfigurationAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterProxyConfigurationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ProxyDiscovery deprecated attribute names
    WTLClusterProxyDiscoveryAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyDiscoveryAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterProxyDiscoveryAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyDiscoveryAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterProxyDiscoveryAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyDiscoveryAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterProxyDiscoveryAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyDiscoveryAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterProxyDiscoveryAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyDiscoveryAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ProxyDiscovery attributes
    WTLAttributeIDTypeClusterProxyDiscoveryAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterProxyDiscoveryAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterProxyDiscoveryAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterProxyDiscoveryAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterProxyDiscoveryAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ProxyValid deprecated attribute names
    WTLClusterProxyValidAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyValidAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterProxyValidAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyValidAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterProxyValidAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyValidAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterProxyValidAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterProxyValidAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterProxyValidAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterProxyValidAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ProxyValid attributes
    WTLAttributeIDTypeClusterProxyValidAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterProxyValidAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterProxyValidAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterProxyValidAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterProxyValidAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster BooleanState deprecated attribute names
    WTLClusterBooleanStateAttributeStateValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBooleanStateAttributeStateValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterBooleanStateAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBooleanStateAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterBooleanStateAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBooleanStateAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterBooleanStateAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBooleanStateAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterBooleanStateAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBooleanStateAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterBooleanStateAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBooleanStateAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster BooleanState attributes
    WTLAttributeIDTypeClusterBooleanStateAttributeStateValueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterBooleanStateAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterBooleanStateAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterBooleanStateAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterBooleanStateAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterBooleanStateAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ModeSelect deprecated attribute names
    WTLClusterModeSelectAttributeDescriptionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeDescriptionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterModeSelectAttributeStandardNamespaceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeStandardNamespaceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterModeSelectAttributeSupportedModesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeSupportedModesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterModeSelectAttributeCurrentModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeCurrentModeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterModeSelectAttributeStartUpModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeStartUpModeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterModeSelectAttributeOnModeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterModeSelectAttributeOnModeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterModeSelectAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterModeSelectAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterModeSelectAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterModeSelectAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterModeSelectAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterModeSelectAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterModeSelectAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ModeSelect attributes
    WTLAttributeIDTypeClusterModeSelectAttributeDescriptionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterModeSelectAttributeStandardNamespaceID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterModeSelectAttributeSupportedModesID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterModeSelectAttributeCurrentModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterModeSelectAttributeStartUpModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterModeSelectAttributeOnModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterModeSelectAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterModeSelectAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterModeSelectAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterModeSelectAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterModeSelectAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster DoorLock deprecated attribute names
    WTLClusterDoorLockAttributeLockStateID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDoorLockAttributeLockStateID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterDoorLockAttributeLockTypeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDoorLockAttributeLockTypeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterDoorLockAttributeActuatorEnabledID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeActuatorEnabledID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterDoorLockAttributeDoorStateID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDoorLockAttributeDoorStateID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterDoorLockAttributeDoorOpenEventsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeDoorOpenEventsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterDoorLockAttributeDoorClosedEventsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeDoorClosedEventsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterDoorLockAttributeOpenPeriodID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDoorLockAttributeOpenPeriodID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterDoorLockAttributeNumberOfTotalUsersSupportedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeNumberOfTotalUsersSupportedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterDoorLockAttributeNumberOfPINUsersSupportedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeNumberOfPINUsersSupportedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterDoorLockAttributeNumberOfRFIDUsersSupportedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeNumberOfRFIDUsersSupportedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterDoorLockAttributeNumberOfWeekDaySchedulesSupportedPerUserID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeNumberOfWeekDaySchedulesSupportedPerUserID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterDoorLockAttributeNumberOfYearDaySchedulesSupportedPerUserID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeNumberOfYearDaySchedulesSupportedPerUserID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,
    WTLClusterDoorLockAttributeNumberOfHolidaySchedulesSupportedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeNumberOfHolidaySchedulesSupportedID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000016,
    WTLClusterDoorLockAttributeMaxPINCodeLengthID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeMaxPINCodeLengthID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000017,
    WTLClusterDoorLockAttributeMinPINCodeLengthID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeMinPINCodeLengthID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000018,
    WTLClusterDoorLockAttributeMaxRFIDCodeLengthID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeMaxRFIDCodeLengthID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000019,
    WTLClusterDoorLockAttributeMinRFIDCodeLengthID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeMinRFIDCodeLengthID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001A,
    WTLClusterDoorLockAttributeCredentialRulesSupportID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeCredentialRulesSupportID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001B,
    WTLClusterDoorLockAttributeNumberOfCredentialsSupportedPerUserID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeNumberOfCredentialsSupportedPerUserID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001C,
    WTLClusterDoorLockAttributeLanguageID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDoorLockAttributeLanguageID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000021,
    WTLClusterDoorLockAttributeLEDSettingsID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDoorLockAttributeLEDSettingsID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000022,
    WTLClusterDoorLockAttributeAutoRelockTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeAutoRelockTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000023,
    WTLClusterDoorLockAttributeSoundVolumeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDoorLockAttributeSoundVolumeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000024,
    WTLClusterDoorLockAttributeOperatingModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeOperatingModeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000025,
    WTLClusterDoorLockAttributeSupportedOperatingModesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeSupportedOperatingModesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000026,
    WTLClusterDoorLockAttributeDefaultConfigurationRegisterID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeDefaultConfigurationRegisterID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000027,
    WTLClusterDoorLockAttributeEnableLocalProgrammingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeEnableLocalProgrammingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000028,
    WTLClusterDoorLockAttributeEnableOneTouchLockingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeEnableOneTouchLockingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000029,
    WTLClusterDoorLockAttributeEnableInsideStatusLEDID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeEnableInsideStatusLEDID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002A,
    WTLClusterDoorLockAttributeEnablePrivacyModeButtonID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeEnablePrivacyModeButtonID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002B,
    WTLClusterDoorLockAttributeLocalProgrammingFeaturesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeLocalProgrammingFeaturesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002C,
    WTLClusterDoorLockAttributeWrongCodeEntryLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeWrongCodeEntryLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000030,
    WTLClusterDoorLockAttributeUserCodeTemporaryDisableTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeUserCodeTemporaryDisableTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000031,
    WTLClusterDoorLockAttributeSendPINOverTheAirID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeSendPINOverTheAirID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000032,
    WTLClusterDoorLockAttributeRequirePINforRemoteOperationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeRequirePINforRemoteOperationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000033,
    WTLClusterDoorLockAttributeExpiringUserTimeoutID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeExpiringUserTimeoutID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000035,
    WTLClusterDoorLockAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterDoorLockAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterDoorLockAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterDoorLockAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterDoorLockAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterDoorLockAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterDoorLockAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster DoorLock attributes
    WTLAttributeIDTypeClusterDoorLockAttributeLockStateID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterDoorLockAttributeLockTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterDoorLockAttributeActuatorEnabledID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterDoorLockAttributeDoorStateID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterDoorLockAttributeDoorOpenEventsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterDoorLockAttributeDoorClosedEventsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterDoorLockAttributeOpenPeriodID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterDoorLockAttributeNumberOfTotalUsersSupportedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterDoorLockAttributeNumberOfPINUsersSupportedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterDoorLockAttributeNumberOfRFIDUsersSupportedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterDoorLockAttributeNumberOfWeekDaySchedulesSupportedPerUserID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterDoorLockAttributeNumberOfYearDaySchedulesSupportedPerUserID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,
    WTLAttributeIDTypeClusterDoorLockAttributeNumberOfHolidaySchedulesSupportedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000016,
    WTLAttributeIDTypeClusterDoorLockAttributeMaxPINCodeLengthID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000017,
    WTLAttributeIDTypeClusterDoorLockAttributeMinPINCodeLengthID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000018,
    WTLAttributeIDTypeClusterDoorLockAttributeMaxRFIDCodeLengthID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000019,
    WTLAttributeIDTypeClusterDoorLockAttributeMinRFIDCodeLengthID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001A,
    WTLAttributeIDTypeClusterDoorLockAttributeCredentialRulesSupportID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001B,
    WTLAttributeIDTypeClusterDoorLockAttributeNumberOfCredentialsSupportedPerUserID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001C,
    WTLAttributeIDTypeClusterDoorLockAttributeLanguageID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000021,
    WTLAttributeIDTypeClusterDoorLockAttributeLEDSettingsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000022,
    WTLAttributeIDTypeClusterDoorLockAttributeAutoRelockTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000023,
    WTLAttributeIDTypeClusterDoorLockAttributeSoundVolumeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000024,
    WTLAttributeIDTypeClusterDoorLockAttributeOperatingModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000025,
    WTLAttributeIDTypeClusterDoorLockAttributeSupportedOperatingModesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000026,
    WTLAttributeIDTypeClusterDoorLockAttributeDefaultConfigurationRegisterID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000027,
    WTLAttributeIDTypeClusterDoorLockAttributeEnableLocalProgrammingID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000028,
    WTLAttributeIDTypeClusterDoorLockAttributeEnableOneTouchLockingID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000029,
    WTLAttributeIDTypeClusterDoorLockAttributeEnableInsideStatusLEDID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002A,
    WTLAttributeIDTypeClusterDoorLockAttributeEnablePrivacyModeButtonID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002B,
    WTLAttributeIDTypeClusterDoorLockAttributeLocalProgrammingFeaturesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002C,
    WTLAttributeIDTypeClusterDoorLockAttributeWrongCodeEntryLimitID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000030,
    WTLAttributeIDTypeClusterDoorLockAttributeUserCodeTemporaryDisableTimeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000031,
    WTLAttributeIDTypeClusterDoorLockAttributeSendPINOverTheAirID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000032,
    WTLAttributeIDTypeClusterDoorLockAttributeRequirePINforRemoteOperationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000033,
    WTLAttributeIDTypeClusterDoorLockAttributeExpiringUserTimeoutID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000035,
    WTLAttributeIDTypeClusterDoorLockAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterDoorLockAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterDoorLockAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterDoorLockAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterDoorLockAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster WindowCovering deprecated attribute names
    WTLClusterWindowCoveringAttributeTypeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterWindowCoveringAttributeTypeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterWindowCoveringAttributePhysicalClosedLimitLiftID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributePhysicalClosedLimitLiftID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterWindowCoveringAttributePhysicalClosedLimitTiltID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributePhysicalClosedLimitTiltID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterWindowCoveringAttributeCurrentPositionLiftID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionLiftID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterWindowCoveringAttributeCurrentPositionTiltID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionTiltID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterWindowCoveringAttributeNumberOfActuationsLiftID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeNumberOfActuationsLiftID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterWindowCoveringAttributeNumberOfActuationsTiltID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeNumberOfActuationsTiltID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterWindowCoveringAttributeConfigStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeConfigStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterWindowCoveringAttributeCurrentPositionLiftPercentageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionLiftPercentageID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterWindowCoveringAttributeCurrentPositionTiltPercentageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionTiltPercentageID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterWindowCoveringAttributeOperationalStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeOperationalStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterWindowCoveringAttributeTargetPositionLiftPercent100thsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeTargetPositionLiftPercent100thsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterWindowCoveringAttributeTargetPositionTiltPercent100thsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeTargetPositionTiltPercent100thsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterWindowCoveringAttributeEndProductTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeEndProductTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterWindowCoveringAttributeCurrentPositionLiftPercent100thsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionLiftPercent100thsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterWindowCoveringAttributeCurrentPositionTiltPercent100thsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionTiltPercent100thsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterWindowCoveringAttributeInstalledOpenLimitLiftID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeInstalledOpenLimitLiftID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterWindowCoveringAttributeInstalledClosedLimitLiftID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeInstalledClosedLimitLiftID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterWindowCoveringAttributeInstalledOpenLimitTiltID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeInstalledOpenLimitTiltID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterWindowCoveringAttributeInstalledClosedLimitTiltID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeInstalledClosedLimitTiltID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterWindowCoveringAttributeModeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterWindowCoveringAttributeModeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000017,
    WTLClusterWindowCoveringAttributeSafetyStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeSafetyStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001A,
    WTLClusterWindowCoveringAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterWindowCoveringAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterWindowCoveringAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterWindowCoveringAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterWindowCoveringAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWindowCoveringAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster WindowCovering attributes
    WTLAttributeIDTypeClusterWindowCoveringAttributeTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterWindowCoveringAttributePhysicalClosedLimitLiftID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterWindowCoveringAttributePhysicalClosedLimitTiltID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionLiftID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionTiltID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterWindowCoveringAttributeNumberOfActuationsLiftID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterWindowCoveringAttributeNumberOfActuationsTiltID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterWindowCoveringAttributeConfigStatusID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionLiftPercentageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionTiltPercentageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterWindowCoveringAttributeOperationalStatusID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterWindowCoveringAttributeTargetPositionLiftPercent100thsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLAttributeIDTypeClusterWindowCoveringAttributeTargetPositionTiltPercent100thsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLAttributeIDTypeClusterWindowCoveringAttributeEndProductTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionLiftPercent100thsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLAttributeIDTypeClusterWindowCoveringAttributeCurrentPositionTiltPercent100thsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLAttributeIDTypeClusterWindowCoveringAttributeInstalledOpenLimitLiftID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterWindowCoveringAttributeInstalledClosedLimitLiftID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterWindowCoveringAttributeInstalledOpenLimitTiltID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterWindowCoveringAttributeInstalledClosedLimitTiltID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterWindowCoveringAttributeModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000017,
    WTLAttributeIDTypeClusterWindowCoveringAttributeSafetyStatusID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001A,
    WTLAttributeIDTypeClusterWindowCoveringAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterWindowCoveringAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterWindowCoveringAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterWindowCoveringAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterWindowCoveringAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster BarrierControl deprecated attribute names
    WTLClusterBarrierControlAttributeBarrierMovingStateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierMovingStateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterBarrierControlAttributeBarrierSafetyStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierSafetyStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterBarrierControlAttributeBarrierCapabilitiesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierCapabilitiesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterBarrierControlAttributeBarrierOpenEventsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierOpenEventsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterBarrierControlAttributeBarrierCloseEventsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierCloseEventsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterBarrierControlAttributeBarrierCommandOpenEventsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierCommandOpenEventsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterBarrierControlAttributeBarrierCommandCloseEventsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierCommandCloseEventsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterBarrierControlAttributeBarrierOpenPeriodID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierOpenPeriodID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterBarrierControlAttributeBarrierClosePeriodID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierClosePeriodID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterBarrierControlAttributeBarrierPositionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeBarrierPositionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterBarrierControlAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterBarrierControlAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterBarrierControlAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterBarrierControlAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterBarrierControlAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBarrierControlAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster BarrierControl attributes
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierMovingStateID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierSafetyStatusID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierCapabilitiesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierOpenEventsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierCloseEventsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierCommandOpenEventsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierCommandCloseEventsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierOpenPeriodID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierClosePeriodID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterBarrierControlAttributeBarrierPositionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterBarrierControlAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterBarrierControlAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterBarrierControlAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterBarrierControlAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterBarrierControlAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster PumpConfigurationAndControl deprecated attribute names
    WTLClusterPumpConfigurationAndControlAttributeMaxPressureID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxPressureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterPumpConfigurationAndControlAttributeMaxSpeedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxSpeedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterPumpConfigurationAndControlAttributeMaxFlowID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxFlowID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterPumpConfigurationAndControlAttributeMinConstPressureID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinConstPressureID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterPumpConfigurationAndControlAttributeMaxConstPressureID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxConstPressureID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterPumpConfigurationAndControlAttributeMinCompPressureID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinCompPressureID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterPumpConfigurationAndControlAttributeMaxCompPressureID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxCompPressureID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterPumpConfigurationAndControlAttributeMinConstSpeedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinConstSpeedID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterPumpConfigurationAndControlAttributeMaxConstSpeedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxConstSpeedID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterPumpConfigurationAndControlAttributeMinConstFlowID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinConstFlowID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterPumpConfigurationAndControlAttributeMaxConstFlowID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxConstFlowID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterPumpConfigurationAndControlAttributeMinConstTempID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinConstTempID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterPumpConfigurationAndControlAttributeMaxConstTempID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxConstTempID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterPumpConfigurationAndControlAttributePumpStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributePumpStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterPumpConfigurationAndControlAttributeEffectiveOperationModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeEffectiveOperationModeID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterPumpConfigurationAndControlAttributeEffectiveControlModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeEffectiveControlModeID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterPumpConfigurationAndControlAttributeCapacityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeCapacityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterPumpConfigurationAndControlAttributeSpeedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeSpeedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterPumpConfigurationAndControlAttributeLifetimeRunningHoursID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeLifetimeRunningHoursID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,
    WTLClusterPumpConfigurationAndControlAttributePowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributePowerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000016,
    WTLClusterPumpConfigurationAndControlAttributeLifetimeEnergyConsumedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeLifetimeEnergyConsumedID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000017,
    WTLClusterPumpConfigurationAndControlAttributeOperationModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeOperationModeID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000020,
    WTLClusterPumpConfigurationAndControlAttributeControlModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeControlModeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000021,
    WTLClusterPumpConfigurationAndControlAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterPumpConfigurationAndControlAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterPumpConfigurationAndControlAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeAttributeListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterPumpConfigurationAndControlAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterPumpConfigurationAndControlAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster PumpConfigurationAndControl attributes
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxPressureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxSpeedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxFlowID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinConstPressureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxConstPressureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinCompPressureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxCompPressureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinConstSpeedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxConstSpeedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinConstFlowID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxConstFlowID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMinConstTempID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeMaxConstTempID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributePumpStatusID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeEffectiveOperationModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeEffectiveControlModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeCapacityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeSpeedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeLifetimeRunningHoursID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributePowerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000016,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeLifetimeEnergyConsumedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000017,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeOperationModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000020,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeControlModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000021,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterPumpConfigurationAndControlAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Thermostat deprecated attribute names
    WTLClusterThermostatAttributeLocalTemperatureID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeLocalTemperatureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterThermostatAttributeOutdoorTemperatureID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeOutdoorTemperatureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterThermostatAttributeOccupancyID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterThermostatAttributeOccupancyID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterThermostatAttributeAbsMinHeatSetpointLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeAbsMinHeatSetpointLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterThermostatAttributeAbsMaxHeatSetpointLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeAbsMaxHeatSetpointLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterThermostatAttributeAbsMinCoolSetpointLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeAbsMinCoolSetpointLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterThermostatAttributeAbsMaxCoolSetpointLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeAbsMaxCoolSetpointLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterThermostatAttributePICoolingDemandID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributePICoolingDemandID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterThermostatAttributePIHeatingDemandID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributePIHeatingDemandID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterThermostatAttributeHVACSystemTypeConfigurationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeHVACSystemTypeConfigurationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterThermostatAttributeLocalTemperatureCalibrationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeLocalTemperatureCalibrationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterThermostatAttributeOccupiedCoolingSetpointID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeOccupiedCoolingSetpointID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterThermostatAttributeOccupiedHeatingSetpointID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeOccupiedHeatingSetpointID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterThermostatAttributeUnoccupiedCoolingSetpointID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedCoolingSetpointID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterThermostatAttributeUnoccupiedHeatingSetpointID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedHeatingSetpointID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterThermostatAttributeMinHeatSetpointLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeMinHeatSetpointLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,
    WTLClusterThermostatAttributeMaxHeatSetpointLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeMaxHeatSetpointLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000016,
    WTLClusterThermostatAttributeMinCoolSetpointLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeMinCoolSetpointLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000017,
    WTLClusterThermostatAttributeMaxCoolSetpointLimitID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeMaxCoolSetpointLimitID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000018,
    WTLClusterThermostatAttributeMinSetpointDeadBandID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeMinSetpointDeadBandID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000019,
    WTLClusterThermostatAttributeRemoteSensingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeRemoteSensingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001A,
    WTLClusterThermostatAttributeControlSequenceOfOperationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeControlSequenceOfOperationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001B,
    WTLClusterThermostatAttributeSystemModeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterThermostatAttributeSystemModeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001C,
    WTLClusterThermostatAttributeThermostatRunningModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeThermostatRunningModeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001E,
    WTLClusterThermostatAttributeStartOfWeekID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeStartOfWeekID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000020,
    WTLClusterThermostatAttributeNumberOfWeeklyTransitionsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeNumberOfWeeklyTransitionsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000021,
    WTLClusterThermostatAttributeNumberOfDailyTransitionsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeNumberOfDailyTransitionsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000022,
    WTLClusterThermostatAttributeTemperatureSetpointHoldID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeTemperatureSetpointHoldID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000023,
    WTLClusterThermostatAttributeTemperatureSetpointHoldDurationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeTemperatureSetpointHoldDurationID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000024,
    WTLClusterThermostatAttributeThermostatProgrammingOperationModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeThermostatProgrammingOperationModeID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000025,
    WTLClusterThermostatAttributeThermostatRunningStateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeThermostatRunningStateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000029,
    WTLClusterThermostatAttributeSetpointChangeSourceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeSetpointChangeSourceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000030,
    WTLClusterThermostatAttributeSetpointChangeAmountID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeSetpointChangeAmountID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000031,
    WTLClusterThermostatAttributeSetpointChangeSourceTimestampID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeSetpointChangeSourceTimestampID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000032,
    WTLClusterThermostatAttributeOccupiedSetbackID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeOccupiedSetbackID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000034,
    WTLClusterThermostatAttributeOccupiedSetbackMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeOccupiedSetbackMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000035,
    WTLClusterThermostatAttributeOccupiedSetbackMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeOccupiedSetbackMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000036,
    WTLClusterThermostatAttributeUnoccupiedSetbackID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedSetbackID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000037,
    WTLClusterThermostatAttributeUnoccupiedSetbackMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedSetbackMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000038,
    WTLClusterThermostatAttributeUnoccupiedSetbackMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedSetbackMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000039,
    WTLClusterThermostatAttributeEmergencyHeatDeltaID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeEmergencyHeatDeltaID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003A,
    WTLClusterThermostatAttributeACTypeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterThermostatAttributeACTypeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000040,
    WTLClusterThermostatAttributeACCapacityID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterThermostatAttributeACCapacityID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000041,
    WTLClusterThermostatAttributeACRefrigerantTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeACRefrigerantTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000042,
    WTLClusterThermostatAttributeACCompressorTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeACCompressorTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000043,
    WTLClusterThermostatAttributeACErrorCodeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeACErrorCodeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000044,
    WTLClusterThermostatAttributeACLouverPositionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeACLouverPositionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000045,
    WTLClusterThermostatAttributeACCoilTemperatureID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeACCoilTemperatureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000046,
    WTLClusterThermostatAttributeACCapacityformatID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeACCapacityformatID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000047,
    WTLClusterThermostatAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterThermostatAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterThermostatAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterThermostatAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterThermostatAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterThermostatAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Thermostat attributes
    WTLAttributeIDTypeClusterThermostatAttributeLocalTemperatureID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterThermostatAttributeOutdoorTemperatureID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterThermostatAttributeOccupancyID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterThermostatAttributeAbsMinHeatSetpointLimitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterThermostatAttributeAbsMaxHeatSetpointLimitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterThermostatAttributeAbsMinCoolSetpointLimitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterThermostatAttributeAbsMaxCoolSetpointLimitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterThermostatAttributePICoolingDemandID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterThermostatAttributePIHeatingDemandID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterThermostatAttributeHVACSystemTypeConfigurationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterThermostatAttributeLocalTemperatureCalibrationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterThermostatAttributeOccupiedCoolingSetpointID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterThermostatAttributeOccupiedHeatingSetpointID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedCoolingSetpointID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedHeatingSetpointID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterThermostatAttributeMinHeatSetpointLimitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,
    WTLAttributeIDTypeClusterThermostatAttributeMaxHeatSetpointLimitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000016,
    WTLAttributeIDTypeClusterThermostatAttributeMinCoolSetpointLimitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000017,
    WTLAttributeIDTypeClusterThermostatAttributeMaxCoolSetpointLimitID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000018,
    WTLAttributeIDTypeClusterThermostatAttributeMinSetpointDeadBandID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000019,
    WTLAttributeIDTypeClusterThermostatAttributeRemoteSensingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001A,
    WTLAttributeIDTypeClusterThermostatAttributeControlSequenceOfOperationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001B,
    WTLAttributeIDTypeClusterThermostatAttributeSystemModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001C,
    WTLAttributeIDTypeClusterThermostatAttributeThermostatRunningModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001E,
    WTLAttributeIDTypeClusterThermostatAttributeStartOfWeekID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000020,
    WTLAttributeIDTypeClusterThermostatAttributeNumberOfWeeklyTransitionsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000021,
    WTLAttributeIDTypeClusterThermostatAttributeNumberOfDailyTransitionsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000022,
    WTLAttributeIDTypeClusterThermostatAttributeTemperatureSetpointHoldID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000023,
    WTLAttributeIDTypeClusterThermostatAttributeTemperatureSetpointHoldDurationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000024,
    WTLAttributeIDTypeClusterThermostatAttributeThermostatProgrammingOperationModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000025,
    WTLAttributeIDTypeClusterThermostatAttributeThermostatRunningStateID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000029,
    WTLAttributeIDTypeClusterThermostatAttributeSetpointChangeSourceID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000030,
    WTLAttributeIDTypeClusterThermostatAttributeSetpointChangeAmountID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000031,
    WTLAttributeIDTypeClusterThermostatAttributeSetpointChangeSourceTimestampID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000032,
    WTLAttributeIDTypeClusterThermostatAttributeOccupiedSetbackID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000034,
    WTLAttributeIDTypeClusterThermostatAttributeOccupiedSetbackMinID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000035,
    WTLAttributeIDTypeClusterThermostatAttributeOccupiedSetbackMaxID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000036,
    WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedSetbackID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000037,
    WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedSetbackMinID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000038,
    WTLAttributeIDTypeClusterThermostatAttributeUnoccupiedSetbackMaxID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000039,
    WTLAttributeIDTypeClusterThermostatAttributeEmergencyHeatDeltaID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003A,
    WTLAttributeIDTypeClusterThermostatAttributeACTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000040,
    WTLAttributeIDTypeClusterThermostatAttributeACCapacityID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000041,
    WTLAttributeIDTypeClusterThermostatAttributeACRefrigerantTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000042,
    WTLAttributeIDTypeClusterThermostatAttributeACCompressorTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000043,
    WTLAttributeIDTypeClusterThermostatAttributeACErrorCodeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000044,
    WTLAttributeIDTypeClusterThermostatAttributeACLouverPositionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000045,
    WTLAttributeIDTypeClusterThermostatAttributeACCoilTemperatureID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000046,
    WTLAttributeIDTypeClusterThermostatAttributeACCapacityformatID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000047,
    WTLAttributeIDTypeClusterThermostatAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterThermostatAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterThermostatAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterThermostatAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterThermostatAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster FanControl deprecated attribute names
    WTLClusterFanControlAttributeFanModeID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterFanControlAttributeFanModeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterFanControlAttributeFanModeSequenceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeFanModeSequenceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterFanControlAttributePercentSettingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributePercentSettingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterFanControlAttributePercentCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributePercentCurrentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterFanControlAttributeSpeedMaxID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterFanControlAttributeSpeedMaxID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterFanControlAttributeSpeedSettingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeSpeedSettingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterFanControlAttributeSpeedCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeSpeedCurrentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterFanControlAttributeRockSupportID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeRockSupportID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterFanControlAttributeRockSettingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeRockSettingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterFanControlAttributeWindSupportID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeWindSupportID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterFanControlAttributeWindSettingID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeWindSettingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterFanControlAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterFanControlAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterFanControlAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterFanControlAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterFanControlAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterFanControlAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFanControlAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster FanControl attributes
    WTLAttributeIDTypeClusterFanControlAttributeFanModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterFanControlAttributeFanModeSequenceID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterFanControlAttributePercentSettingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterFanControlAttributePercentCurrentID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterFanControlAttributeSpeedMaxID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterFanControlAttributeSpeedSettingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterFanControlAttributeSpeedCurrentID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterFanControlAttributeRockSupportID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterFanControlAttributeRockSettingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterFanControlAttributeWindSupportID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterFanControlAttributeWindSettingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterFanControlAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterFanControlAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterFanControlAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterFanControlAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterFanControlAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ThermostatUserInterfaceConfiguration deprecated attribute names
    WTLClusterThermostatUserInterfaceConfigurationAttributeTemperatureDisplayModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeTemperatureDisplayModeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterThermostatUserInterfaceConfigurationAttributeKeypadLockoutID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeKeypadLockoutID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterThermostatUserInterfaceConfigurationAttributeScheduleProgrammingVisibilityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeScheduleProgrammingVisibilityID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterThermostatUserInterfaceConfigurationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterThermostatUserInterfaceConfigurationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterThermostatUserInterfaceConfigurationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeAttributeListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterThermostatUserInterfaceConfigurationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeFeatureMapID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterThermostatUserInterfaceConfigurationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ThermostatUserInterfaceConfiguration attributes
    WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeTemperatureDisplayModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeKeypadLockoutID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeScheduleProgrammingVisibilityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterThermostatUserInterfaceConfigurationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ColorControl deprecated attribute names
    WTLClusterColorControlAttributeCurrentHueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeCurrentHueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterColorControlAttributeCurrentSaturationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeCurrentSaturationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterColorControlAttributeRemainingTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeRemainingTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterColorControlAttributeCurrentXID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterColorControlAttributeCurrentXID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterColorControlAttributeCurrentYID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterColorControlAttributeCurrentYID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterColorControlAttributeDriftCompensationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeDriftCompensationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterColorControlAttributeCompensationTextID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeCompensationTextID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterColorControlAttributeColorTemperatureMiredsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorTemperatureMiredsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterColorControlAttributeColorModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorModeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterColorControlAttributeOptionsID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterColorControlAttributeOptionsID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterColorControlAttributeNumberOfPrimariesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeNumberOfPrimariesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterColorControlAttributePrimary1XID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary1XID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterColorControlAttributePrimary1YID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary1YID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterColorControlAttributePrimary1IntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary1IntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterColorControlAttributePrimary2XID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary2XID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,
    WTLClusterColorControlAttributePrimary2YID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary2YID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000016,
    WTLClusterColorControlAttributePrimary2IntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary2IntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000017,
    WTLClusterColorControlAttributePrimary3XID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary3XID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000019,
    WTLClusterColorControlAttributePrimary3YID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary3YID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001A,
    WTLClusterColorControlAttributePrimary3IntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary3IntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001B,
    WTLClusterColorControlAttributePrimary4XID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary4XID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000020,
    WTLClusterColorControlAttributePrimary4YID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary4YID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000021,
    WTLClusterColorControlAttributePrimary4IntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary4IntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000022,
    WTLClusterColorControlAttributePrimary5XID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary5XID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000024,
    WTLClusterColorControlAttributePrimary5YID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary5YID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000025,
    WTLClusterColorControlAttributePrimary5IntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary5IntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000026,
    WTLClusterColorControlAttributePrimary6XID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary6XID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000028,
    WTLClusterColorControlAttributePrimary6YID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary6YID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000029,
    WTLClusterColorControlAttributePrimary6IntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributePrimary6IntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002A,
    WTLClusterColorControlAttributeWhitePointXID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeWhitePointXID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000030,
    WTLClusterColorControlAttributeWhitePointYID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeWhitePointYID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000031,
    WTLClusterColorControlAttributeColorPointRXID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointRXID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000032,
    WTLClusterColorControlAttributeColorPointRYID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointRYID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000033,
    WTLClusterColorControlAttributeColorPointRIntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointRIntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000034,
    WTLClusterColorControlAttributeColorPointGXID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointGXID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000036,
    WTLClusterColorControlAttributeColorPointGYID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointGYID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000037,
    WTLClusterColorControlAttributeColorPointGIntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointGIntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000038,
    WTLClusterColorControlAttributeColorPointBXID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointBXID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003A,
    WTLClusterColorControlAttributeColorPointBYID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointBYID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003B,
    WTLClusterColorControlAttributeColorPointBIntensityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorPointBIntensityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000003C,
    WTLClusterColorControlAttributeEnhancedCurrentHueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeEnhancedCurrentHueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004000,
    WTLClusterColorControlAttributeEnhancedColorModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeEnhancedColorModeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004001,
    WTLClusterColorControlAttributeColorLoopActiveID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorLoopActiveID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004002,
    WTLClusterColorControlAttributeColorLoopDirectionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorLoopDirectionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004003,
    WTLClusterColorControlAttributeColorLoopTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorLoopTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004004,
    WTLClusterColorControlAttributeColorLoopStartEnhancedHueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorLoopStartEnhancedHueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004005,
    WTLClusterColorControlAttributeColorLoopStoredEnhancedHueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorLoopStoredEnhancedHueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004006,
    WTLClusterColorControlAttributeColorCapabilitiesID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorCapabilitiesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400A,
    WTLClusterColorControlAttributeColorTempPhysicalMinMiredsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorTempPhysicalMinMiredsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400B,
    WTLClusterColorControlAttributeColorTempPhysicalMaxMiredsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeColorTempPhysicalMaxMiredsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400C,
    WTLClusterColorControlAttributeCoupleColorTempToLevelMinMiredsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeCoupleColorTempToLevelMinMiredsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400D,
    WTLClusterColorControlAttributeStartUpColorTemperatureMiredsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeStartUpColorTemperatureMiredsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004010,
    WTLClusterColorControlAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterColorControlAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterColorControlAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterColorControlAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterColorControlAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterColorControlAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ColorControl attributes
    WTLAttributeIDTypeClusterColorControlAttributeCurrentHueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterColorControlAttributeCurrentSaturationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterColorControlAttributeRemainingTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterColorControlAttributeCurrentXID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterColorControlAttributeCurrentYID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterColorControlAttributeDriftCompensationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterColorControlAttributeCompensationTextID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterColorControlAttributeColorTemperatureMiredsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterColorControlAttributeColorModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterColorControlAttributeOptionsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLAttributeIDTypeClusterColorControlAttributeNumberOfPrimariesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterColorControlAttributePrimary1XID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterColorControlAttributePrimary1YID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterColorControlAttributePrimary1IntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterColorControlAttributePrimary2XID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,
    WTLAttributeIDTypeClusterColorControlAttributePrimary2YID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000016,
    WTLAttributeIDTypeClusterColorControlAttributePrimary2IntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000017,
    WTLAttributeIDTypeClusterColorControlAttributePrimary3XID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000019,
    WTLAttributeIDTypeClusterColorControlAttributePrimary3YID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001A,
    WTLAttributeIDTypeClusterColorControlAttributePrimary3IntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001B,
    WTLAttributeIDTypeClusterColorControlAttributePrimary4XID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000020,
    WTLAttributeIDTypeClusterColorControlAttributePrimary4YID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000021,
    WTLAttributeIDTypeClusterColorControlAttributePrimary4IntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000022,
    WTLAttributeIDTypeClusterColorControlAttributePrimary5XID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000024,
    WTLAttributeIDTypeClusterColorControlAttributePrimary5YID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000025,
    WTLAttributeIDTypeClusterColorControlAttributePrimary5IntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000026,
    WTLAttributeIDTypeClusterColorControlAttributePrimary6XID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000028,
    WTLAttributeIDTypeClusterColorControlAttributePrimary6YID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000029,
    WTLAttributeIDTypeClusterColorControlAttributePrimary6IntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002A,
    WTLAttributeIDTypeClusterColorControlAttributeWhitePointXID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000030,
    WTLAttributeIDTypeClusterColorControlAttributeWhitePointYID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000031,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointRXID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000032,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointRYID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000033,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointRIntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000034,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointGXID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000036,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointGYID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000037,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointGIntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000038,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointBXID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003A,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointBYID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003B,
    WTLAttributeIDTypeClusterColorControlAttributeColorPointBIntensityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000003C,
    WTLAttributeIDTypeClusterColorControlAttributeEnhancedCurrentHueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004000,
    WTLAttributeIDTypeClusterColorControlAttributeEnhancedColorModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004001,
    WTLAttributeIDTypeClusterColorControlAttributeColorLoopActiveID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004002,
    WTLAttributeIDTypeClusterColorControlAttributeColorLoopDirectionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004003,
    WTLAttributeIDTypeClusterColorControlAttributeColorLoopTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004004,
    WTLAttributeIDTypeClusterColorControlAttributeColorLoopStartEnhancedHueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004005,
    WTLAttributeIDTypeClusterColorControlAttributeColorLoopStoredEnhancedHueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004006,
    WTLAttributeIDTypeClusterColorControlAttributeColorCapabilitiesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400A,
    WTLAttributeIDTypeClusterColorControlAttributeColorTempPhysicalMinMiredsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400B,
    WTLAttributeIDTypeClusterColorControlAttributeColorTempPhysicalMaxMiredsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400C,
    WTLAttributeIDTypeClusterColorControlAttributeCoupleColorTempToLevelMinMiredsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400D,
    WTLAttributeIDTypeClusterColorControlAttributeStartUpColorTemperatureMiredsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004010,
    WTLAttributeIDTypeClusterColorControlAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterColorControlAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterColorControlAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterColorControlAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterColorControlAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster BallastConfiguration deprecated attribute names
    WTLClusterBallastConfigurationAttributePhysicalMinLevelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributePhysicalMinLevelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterBallastConfigurationAttributePhysicalMaxLevelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributePhysicalMaxLevelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterBallastConfigurationAttributeBallastStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeBallastStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterBallastConfigurationAttributeMinLevelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeMinLevelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterBallastConfigurationAttributeMaxLevelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeMaxLevelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterBallastConfigurationAttributeIntrinsicBalanceFactorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeIntrinsicBallastFactorID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterBallastConfigurationAttributeBallastFactorAdjustmentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeBallastFactorAdjustmentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,
    WTLClusterBallastConfigurationAttributeLampQuantityID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeLampQuantityID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000020,
    WTLClusterBallastConfigurationAttributeLampTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeLampTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000030,
    WTLClusterBallastConfigurationAttributeLampManufacturerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeLampManufacturerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000031,
    WTLClusterBallastConfigurationAttributeLampRatedHoursID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeLampRatedHoursID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000032,
    WTLClusterBallastConfigurationAttributeLampBurnHoursID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeLampBurnHoursID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000033,
    WTLClusterBallastConfigurationAttributeLampAlarmModeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeLampAlarmModeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000034,
    WTLClusterBallastConfigurationAttributeLampBurnHoursTripPointID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeLampBurnHoursTripPointID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000035,
    WTLClusterBallastConfigurationAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterBallastConfigurationAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterBallastConfigurationAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterBallastConfigurationAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterBallastConfigurationAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterBallastConfigurationAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster BallastConfiguration attributes
    WTLAttributeIDTypeClusterBallastConfigurationAttributePhysicalMinLevelID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterBallastConfigurationAttributePhysicalMaxLevelID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeBallastStatusID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeMinLevelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeMaxLevelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeIntrinsicBallastFactorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeBallastFactorAdjustmentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeLampQuantityID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000020,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeLampTypeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000030,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeLampManufacturerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000031,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeLampRatedHoursID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000032,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeLampBurnHoursID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000033,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeLampAlarmModeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000034,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeLampBurnHoursTripPointID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000035,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterBallastConfigurationAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster IlluminanceMeasurement deprecated attribute names
    WTLClusterIlluminanceMeasurementAttributeMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterIlluminanceMeasurementAttributeMinMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeMinMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterIlluminanceMeasurementAttributeMaxMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeMaxMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterIlluminanceMeasurementAttributeToleranceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeToleranceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterIlluminanceMeasurementAttributeLightSensorTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeLightSensorTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterIlluminanceMeasurementAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterIlluminanceMeasurementAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterIlluminanceMeasurementAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterIlluminanceMeasurementAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterIlluminanceMeasurementAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster IlluminanceMeasurement attributes
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeMinMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeMaxMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeToleranceID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeLightSensorTypeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterIlluminanceMeasurementAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster TemperatureMeasurement deprecated attribute names
    WTLClusterTemperatureMeasurementAttributeMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterTemperatureMeasurementAttributeMinMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeMinMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterTemperatureMeasurementAttributeMaxMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeMaxMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterTemperatureMeasurementAttributeToleranceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeToleranceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterTemperatureMeasurementAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterTemperatureMeasurementAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterTemperatureMeasurementAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterTemperatureMeasurementAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterTemperatureMeasurementAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTemperatureMeasurementAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster TemperatureMeasurement attributes
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeMinMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeMaxMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeToleranceID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterTemperatureMeasurementAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster PressureMeasurement deprecated attribute names
    WTLClusterPressureMeasurementAttributeMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterPressureMeasurementAttributeMinMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeMinMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterPressureMeasurementAttributeMaxMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeMaxMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterPressureMeasurementAttributeToleranceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeToleranceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterPressureMeasurementAttributeScaledValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeScaledValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterPressureMeasurementAttributeMinScaledValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeMinScaledValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterPressureMeasurementAttributeMaxScaledValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeMaxScaledValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterPressureMeasurementAttributeScaledToleranceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeScaledToleranceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterPressureMeasurementAttributeScaleID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeScaleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterPressureMeasurementAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterPressureMeasurementAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterPressureMeasurementAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterPressureMeasurementAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterPressureMeasurementAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterPressureMeasurementAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster PressureMeasurement attributes
    WTLAttributeIDTypeClusterPressureMeasurementAttributeMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeMinMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeMaxMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeToleranceID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeScaledValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeMinScaledValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeMaxScaledValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeScaledToleranceID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeScaleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterPressureMeasurementAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster FlowMeasurement deprecated attribute names
    WTLClusterFlowMeasurementAttributeMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterFlowMeasurementAttributeMinMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeMinMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterFlowMeasurementAttributeMaxMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeMaxMeasuredValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterFlowMeasurementAttributeToleranceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeToleranceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterFlowMeasurementAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterFlowMeasurementAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterFlowMeasurementAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterFlowMeasurementAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterFlowMeasurementAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFlowMeasurementAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster FlowMeasurement attributes
    WTLAttributeIDTypeClusterFlowMeasurementAttributeMeasuredValueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterFlowMeasurementAttributeMinMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterFlowMeasurementAttributeMaxMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterFlowMeasurementAttributeToleranceID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterFlowMeasurementAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterFlowMeasurementAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterFlowMeasurementAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterFlowMeasurementAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterFlowMeasurementAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster RelativeHumidityMeasurement deprecated attribute names
    WTLClusterRelativeHumidityMeasurementAttributeMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeMeasuredValueID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterRelativeHumidityMeasurementAttributeMinMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeMinMeasuredValueID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterRelativeHumidityMeasurementAttributeMaxMeasuredValueID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeMaxMeasuredValueID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterRelativeHumidityMeasurementAttributeToleranceID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeToleranceID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterRelativeHumidityMeasurementAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterRelativeHumidityMeasurementAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterRelativeHumidityMeasurementAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeAttributeListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterRelativeHumidityMeasurementAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterRelativeHumidityMeasurementAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeClusterRevisionID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster RelativeHumidityMeasurement attributes
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeMinMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeMaxMeasuredValueID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeToleranceID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterRelativeHumidityMeasurementAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster OccupancySensing deprecated attribute names
    WTLClusterOccupancySensingAttributeOccupancyID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeOccupancyID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOccupancySensingAttributeOccupancySensorTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeOccupancySensorTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterOccupancySensingAttributeOccupancySensorTypeBitmapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeOccupancySensorTypeBitmapID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterOccupancySensingAttributePirOccupiedToUnoccupiedDelayID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributePIROccupiedToUnoccupiedDelayID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterOccupancySensingAttributePirUnoccupiedToOccupiedDelayID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributePIRUnoccupiedToOccupiedDelayID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterOccupancySensingAttributePirUnoccupiedToOccupiedThresholdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributePIRUnoccupiedToOccupiedThresholdID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterOccupancySensingAttributeUltrasonicOccupiedToUnoccupiedDelayID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeUltrasonicOccupiedToUnoccupiedDelayID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000020,
    WTLClusterOccupancySensingAttributeUltrasonicUnoccupiedToOccupiedDelayID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeUltrasonicUnoccupiedToOccupiedDelayID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000021,
    WTLClusterOccupancySensingAttributeUltrasonicUnoccupiedToOccupiedThresholdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeUltrasonicUnoccupiedToOccupiedThresholdID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000022,
    WTLClusterOccupancySensingAttributePhysicalContactOccupiedToUnoccupiedDelayID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributePhysicalContactOccupiedToUnoccupiedDelayID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000030,
    WTLClusterOccupancySensingAttributePhysicalContactUnoccupiedToOccupiedDelayID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributePhysicalContactUnoccupiedToOccupiedDelayID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000031,
    WTLClusterOccupancySensingAttributePhysicalContactUnoccupiedToOccupiedThresholdID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributePhysicalContactUnoccupiedToOccupiedThresholdID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000032,
    WTLClusterOccupancySensingAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterOccupancySensingAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterOccupancySensingAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterOccupancySensingAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterOccupancySensingAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterOccupancySensingAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster OccupancySensing attributes
    WTLAttributeIDTypeClusterOccupancySensingAttributeOccupancyID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterOccupancySensingAttributeOccupancySensorTypeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterOccupancySensingAttributeOccupancySensorTypeBitmapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterOccupancySensingAttributePIROccupiedToUnoccupiedDelayID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterOccupancySensingAttributePIRUnoccupiedToOccupiedDelayID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterOccupancySensingAttributePIRUnoccupiedToOccupiedThresholdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterOccupancySensingAttributeUltrasonicOccupiedToUnoccupiedDelayID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000020,
    WTLAttributeIDTypeClusterOccupancySensingAttributeUltrasonicUnoccupiedToOccupiedDelayID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000021,
    WTLAttributeIDTypeClusterOccupancySensingAttributeUltrasonicUnoccupiedToOccupiedThresholdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000022,
    WTLAttributeIDTypeClusterOccupancySensingAttributePhysicalContactOccupiedToUnoccupiedDelayID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000030,
    WTLAttributeIDTypeClusterOccupancySensingAttributePhysicalContactUnoccupiedToOccupiedDelayID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000031,
    WTLAttributeIDTypeClusterOccupancySensingAttributePhysicalContactUnoccupiedToOccupiedThresholdID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000032,
    WTLAttributeIDTypeClusterOccupancySensingAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterOccupancySensingAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterOccupancySensingAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterOccupancySensingAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterOccupancySensingAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster WakeOnLan deprecated attribute names
    WTLClusterWakeOnLanAttributeMACAddressID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterWakeOnLANAttributeMACAddressID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterWakeOnLanAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWakeOnLANAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterWakeOnLanAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWakeOnLANAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterWakeOnLanAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWakeOnLANAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterWakeOnLanAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterWakeOnLANAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterWakeOnLanAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterWakeOnLANAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster WakeOnLAN attributes
    WTLAttributeIDTypeClusterWakeOnLANAttributeMACAddressID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterWakeOnLANAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterWakeOnLANAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterWakeOnLANAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterWakeOnLANAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterWakeOnLANAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster Channel deprecated attribute names
    WTLClusterChannelAttributeChannelListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterChannelAttributeChannelListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterChannelAttributeLineupID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterChannelAttributeLineupID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterChannelAttributeCurrentChannelID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterChannelAttributeCurrentChannelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterChannelAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterChannelAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterChannelAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterChannelAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterChannelAttributeAttributeListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterChannelAttributeAttributeListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterChannelAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterChannelAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterChannelAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterChannelAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster Channel attributes
    WTLAttributeIDTypeClusterChannelAttributeChannelListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterChannelAttributeLineupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLAttributeIDTypeClusterChannelAttributeCurrentChannelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterChannelAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterChannelAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterChannelAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterChannelAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterChannelAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster TargetNavigator deprecated attribute names
    WTLClusterTargetNavigatorAttributeTargetListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTargetNavigatorAttributeTargetListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterTargetNavigatorAttributeCurrentTargetID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTargetNavigatorAttributeCurrentTargetID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterTargetNavigatorAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTargetNavigatorAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterTargetNavigatorAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTargetNavigatorAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterTargetNavigatorAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTargetNavigatorAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterTargetNavigatorAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTargetNavigatorAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterTargetNavigatorAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterTargetNavigatorAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster TargetNavigator attributes
    WTLAttributeIDTypeClusterTargetNavigatorAttributeTargetListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterTargetNavigatorAttributeCurrentTargetID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterTargetNavigatorAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterTargetNavigatorAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterTargetNavigatorAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterTargetNavigatorAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterTargetNavigatorAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster MediaPlayback deprecated attribute names
    WTLClusterMediaPlaybackAttributeCurrentStateID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeCurrentStateID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterMediaPlaybackAttributeStartTimeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeStartTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterMediaPlaybackAttributeDurationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeDurationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterMediaPlaybackAttributeSampledPositionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeSampledPositionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterMediaPlaybackAttributePlaybackSpeedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributePlaybackSpeedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterMediaPlaybackAttributeSeekRangeEndID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeSeekRangeEndID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterMediaPlaybackAttributeSeekRangeStartID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeSeekRangeStartID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterMediaPlaybackAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterMediaPlaybackAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterMediaPlaybackAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterMediaPlaybackAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterMediaPlaybackAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaPlaybackAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster MediaPlayback attributes
    WTLAttributeIDTypeClusterMediaPlaybackAttributeCurrentStateID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeStartTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeDurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeSampledPositionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterMediaPlaybackAttributePlaybackSpeedID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeSeekRangeEndID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeSeekRangeStartID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterMediaPlaybackAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster MediaInput deprecated attribute names
    WTLClusterMediaInputAttributeInputListID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterMediaInputAttributeInputListID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterMediaInputAttributeCurrentInputID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaInputAttributeCurrentInputID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterMediaInputAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaInputAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterMediaInputAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaInputAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterMediaInputAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaInputAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterMediaInputAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterMediaInputAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterMediaInputAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterMediaInputAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster MediaInput attributes
    WTLAttributeIDTypeClusterMediaInputAttributeInputListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterMediaInputAttributeCurrentInputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterMediaInputAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterMediaInputAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterMediaInputAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterMediaInputAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterMediaInputAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster LowPower deprecated attribute names
    WTLClusterLowPowerAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLowPowerAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterLowPowerAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLowPowerAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterLowPowerAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLowPowerAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterLowPowerAttributeFeatureMapID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterLowPowerAttributeFeatureMapID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterLowPowerAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterLowPowerAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster LowPower attributes
    WTLAttributeIDTypeClusterLowPowerAttributeGeneratedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterLowPowerAttributeAcceptedCommandListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterLowPowerAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterLowPowerAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterLowPowerAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster KeypadInput deprecated attribute names
    WTLClusterKeypadInputAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterKeypadInputAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterKeypadInputAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterKeypadInputAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterKeypadInputAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterKeypadInputAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterKeypadInputAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterKeypadInputAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterKeypadInputAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterKeypadInputAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster KeypadInput attributes
    WTLAttributeIDTypeClusterKeypadInputAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterKeypadInputAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterKeypadInputAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterKeypadInputAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterKeypadInputAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ContentLauncher deprecated attribute names
    WTLClusterContentLauncherAttributeAcceptHeaderID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterContentLauncherAttributeAcceptHeaderID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterContentLauncherAttributeSupportedStreamingProtocolsID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterContentLauncherAttributeSupportedStreamingProtocolsID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterContentLauncherAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterContentLauncherAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterContentLauncherAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterContentLauncherAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterContentLauncherAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterContentLauncherAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterContentLauncherAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterContentLauncherAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterContentLauncherAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterContentLauncherAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ContentLauncher attributes
    WTLAttributeIDTypeClusterContentLauncherAttributeAcceptHeaderID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterContentLauncherAttributeSupportedStreamingProtocolsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterContentLauncherAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterContentLauncherAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterContentLauncherAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterContentLauncherAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterContentLauncherAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster AudioOutput deprecated attribute names
    WTLClusterAudioOutputAttributeOutputListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAudioOutputAttributeOutputListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterAudioOutputAttributeCurrentOutputID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAudioOutputAttributeCurrentOutputID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterAudioOutputAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAudioOutputAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterAudioOutputAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAudioOutputAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterAudioOutputAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAudioOutputAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterAudioOutputAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAudioOutputAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterAudioOutputAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAudioOutputAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster AudioOutput attributes
    WTLAttributeIDTypeClusterAudioOutputAttributeOutputListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterAudioOutputAttributeCurrentOutputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterAudioOutputAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterAudioOutputAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterAudioOutputAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterAudioOutputAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterAudioOutputAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ApplicationLauncher deprecated attribute names
    WTLClusterApplicationLauncherAttributeCatalogListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationLauncherAttributeCatalogListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterApplicationLauncherAttributeCurrentAppID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationLauncherAttributeCurrentAppID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterApplicationLauncherAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationLauncherAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterApplicationLauncherAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationLauncherAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterApplicationLauncherAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationLauncherAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterApplicationLauncherAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationLauncherAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterApplicationLauncherAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationLauncherAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ApplicationLauncher attributes
    WTLAttributeIDTypeClusterApplicationLauncherAttributeCatalogListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterApplicationLauncherAttributeCurrentAppID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterApplicationLauncherAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterApplicationLauncherAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterApplicationLauncherAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterApplicationLauncherAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterApplicationLauncherAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ApplicationBasic deprecated attribute names
    WTLClusterApplicationBasicAttributeVendorNameID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeVendorNameID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterApplicationBasicAttributeVendorIDID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeVendorIDID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterApplicationBasicAttributeApplicationNameID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeApplicationNameID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterApplicationBasicAttributeProductIDID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeProductIDID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterApplicationBasicAttributeApplicationID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeApplicationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterApplicationBasicAttributeStatusID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterApplicationBasicAttributeApplicationVersionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeApplicationVersionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterApplicationBasicAttributeAllowedVendorListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeAllowedVendorListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterApplicationBasicAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterApplicationBasicAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterApplicationBasicAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterApplicationBasicAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterApplicationBasicAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterApplicationBasicAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ApplicationBasic attributes
    WTLAttributeIDTypeClusterApplicationBasicAttributeVendorNameID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterApplicationBasicAttributeVendorIDID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterApplicationBasicAttributeApplicationNameID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterApplicationBasicAttributeProductIDID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterApplicationBasicAttributeApplicationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterApplicationBasicAttributeStatusID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterApplicationBasicAttributeApplicationVersionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterApplicationBasicAttributeAllowedVendorListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterApplicationBasicAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterApplicationBasicAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterApplicationBasicAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterApplicationBasicAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterApplicationBasicAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster AccountLogin deprecated attribute names
    WTLClusterAccountLoginAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccountLoginAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterAccountLoginAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccountLoginAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterAccountLoginAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccountLoginAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterAccountLoginAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccountLoginAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterAccountLoginAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterAccountLoginAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster AccountLogin attributes
    WTLAttributeIDTypeClusterAccountLoginAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterAccountLoginAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterAccountLoginAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterAccountLoginAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterAccountLoginAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster ElectricalMeasurement deprecated attribute names
    WTLClusterElectricalMeasurementAttributeMeasurementTypeID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasurementTypeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterElectricalMeasurementAttributeDcVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000100,
    WTLClusterElectricalMeasurementAttributeDcVoltageMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000101,
    WTLClusterElectricalMeasurementAttributeDcVoltageMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000102,
    WTLClusterElectricalMeasurementAttributeDcCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000103,
    WTLClusterElectricalMeasurementAttributeDcCurrentMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000104,
    WTLClusterElectricalMeasurementAttributeDcCurrentMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000105,
    WTLClusterElectricalMeasurementAttributeDcPowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000106,
    WTLClusterElectricalMeasurementAttributeDcPowerMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000107,
    WTLClusterElectricalMeasurementAttributeDcPowerMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000108,
    WTLClusterElectricalMeasurementAttributeDcVoltageMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageMultiplierID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000200,
    WTLClusterElectricalMeasurementAttributeDcVoltageDivisorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageDivisorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000201,
    WTLClusterElectricalMeasurementAttributeDcCurrentMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentMultiplierID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000202,
    WTLClusterElectricalMeasurementAttributeDcCurrentDivisorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentDivisorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000203,
    WTLClusterElectricalMeasurementAttributeDcPowerMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerMultiplierID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000204,
    WTLClusterElectricalMeasurementAttributeDcPowerDivisorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerDivisorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000205,
    WTLClusterElectricalMeasurementAttributeAcFrequencyID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000300,
    WTLClusterElectricalMeasurementAttributeAcFrequencyMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000301,
    WTLClusterElectricalMeasurementAttributeAcFrequencyMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000302,
    WTLClusterElectricalMeasurementAttributeNeutralCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeNeutralCurrentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000303,
    WTLClusterElectricalMeasurementAttributeTotalActivePowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeTotalActivePowerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000304,
    WTLClusterElectricalMeasurementAttributeTotalReactivePowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeTotalReactivePowerID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000305,
    WTLClusterElectricalMeasurementAttributeTotalApparentPowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeTotalApparentPowerID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000306,
    WTLClusterElectricalMeasurementAttributeMeasured1stHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured1stHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000307,
    WTLClusterElectricalMeasurementAttributeMeasured3rdHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured3rdHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000308,
    WTLClusterElectricalMeasurementAttributeMeasured5thHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured5thHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000309,
    WTLClusterElectricalMeasurementAttributeMeasured7thHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured7thHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000030A,
    WTLClusterElectricalMeasurementAttributeMeasured9thHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured9thHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000030B,
    WTLClusterElectricalMeasurementAttributeMeasured11thHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured11thHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000030C,
    WTLClusterElectricalMeasurementAttributeMeasuredPhase1stHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase1stHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000030D,
    WTLClusterElectricalMeasurementAttributeMeasuredPhase3rdHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase3rdHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000030E,
    WTLClusterElectricalMeasurementAttributeMeasuredPhase5thHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase5thHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000030F,
    WTLClusterElectricalMeasurementAttributeMeasuredPhase7thHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase7thHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000310,
    WTLClusterElectricalMeasurementAttributeMeasuredPhase9thHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase9thHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000311,
    WTLClusterElectricalMeasurementAttributeMeasuredPhase11thHarmonicCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase11thHarmonicCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000312,
    WTLClusterElectricalMeasurementAttributeAcFrequencyMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyMultiplierID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000400,
    WTLClusterElectricalMeasurementAttributeAcFrequencyDivisorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyDivisorID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000401,
    WTLClusterElectricalMeasurementAttributePowerMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerMultiplierID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000402,
    WTLClusterElectricalMeasurementAttributePowerDivisorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerDivisorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000403,
    WTLClusterElectricalMeasurementAttributeHarmonicCurrentMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeHarmonicCurrentMultiplierID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000404,
    WTLClusterElectricalMeasurementAttributePhaseHarmonicCurrentMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributePhaseHarmonicCurrentMultiplierID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000405,
    WTLClusterElectricalMeasurementAttributeInstantaneousVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousVoltageID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000500,
    WTLClusterElectricalMeasurementAttributeInstantaneousLineCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousLineCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000501,
    WTLClusterElectricalMeasurementAttributeInstantaneousActiveCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousActiveCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000502,
    WTLClusterElectricalMeasurementAttributeInstantaneousReactiveCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousReactiveCurrentID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000503,
    WTLClusterElectricalMeasurementAttributeInstantaneousPowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousPowerID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000504,
    WTLClusterElectricalMeasurementAttributeRmsVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000505,
    WTLClusterElectricalMeasurementAttributeRmsVoltageMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000506,
    WTLClusterElectricalMeasurementAttributeRmsVoltageMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000507,
    WTLClusterElectricalMeasurementAttributeRmsCurrentID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000508,
    WTLClusterElectricalMeasurementAttributeRmsCurrentMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000509,
    WTLClusterElectricalMeasurementAttributeRmsCurrentMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050A,
    WTLClusterElectricalMeasurementAttributeActivePowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050B,
    WTLClusterElectricalMeasurementAttributeActivePowerMinID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMinID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050C,
    WTLClusterElectricalMeasurementAttributeActivePowerMaxID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMaxID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050D,
    WTLClusterElectricalMeasurementAttributeReactivePowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactivePowerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050E,
    WTLClusterElectricalMeasurementAttributeApparentPowerID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeApparentPowerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000050F,
    WTLClusterElectricalMeasurementAttributePowerFactorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerFactorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000510,
    WTLClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000511,
    WTLClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000513,
    WTLClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000514,
    WTLClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000515,
    WTLClusterElectricalMeasurementAttributeRmsVoltageSagPeriodID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSagPeriodID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000516,
    WTLClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000517,
    WTLClusterElectricalMeasurementAttributeAcVoltageMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcVoltageMultiplierID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000600,
    WTLClusterElectricalMeasurementAttributeAcVoltageDivisorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcVoltageDivisorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000601,
    WTLClusterElectricalMeasurementAttributeAcCurrentMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcCurrentMultiplierID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000602,
    WTLClusterElectricalMeasurementAttributeAcCurrentDivisorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcCurrentDivisorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000603,
    WTLClusterElectricalMeasurementAttributeAcPowerMultiplierID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcPowerMultiplierID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000604,
    WTLClusterElectricalMeasurementAttributeAcPowerDivisorID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcPowerDivisorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000605,
    WTLClusterElectricalMeasurementAttributeOverloadAlarmsMaskID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeOverloadAlarmsMaskID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000700,
    WTLClusterElectricalMeasurementAttributeVoltageOverloadID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeVoltageOverloadID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000701,
    WTLClusterElectricalMeasurementAttributeCurrentOverloadID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeCurrentOverloadID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000702,
    WTLClusterElectricalMeasurementAttributeAcOverloadAlarmsMaskID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcOverloadAlarmsMaskID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000800,
    WTLClusterElectricalMeasurementAttributeAcVoltageOverloadID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcVoltageOverloadID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000801,
    WTLClusterElectricalMeasurementAttributeAcCurrentOverloadID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcCurrentOverloadID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000802,
    WTLClusterElectricalMeasurementAttributeAcActivePowerOverloadID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcActivePowerOverloadID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000803,
    WTLClusterElectricalMeasurementAttributeAcReactivePowerOverloadID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcReactivePowerOverloadID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000804,
    WTLClusterElectricalMeasurementAttributeAverageRmsOverVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsOverVoltageID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000805,
    WTLClusterElectricalMeasurementAttributeAverageRmsUnderVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsUnderVoltageID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000806,
    WTLClusterElectricalMeasurementAttributeRmsExtremeOverVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeOverVoltageID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000807,
    WTLClusterElectricalMeasurementAttributeRmsExtremeUnderVoltageID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeUnderVoltageID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000808,
    WTLClusterElectricalMeasurementAttributeRmsVoltageSagID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSagID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000809,
    WTLClusterElectricalMeasurementAttributeRmsVoltageSwellID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSwellID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000080A,
    WTLClusterElectricalMeasurementAttributeLineCurrentPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeLineCurrentPhaseBID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000901,
    WTLClusterElectricalMeasurementAttributeActiveCurrentPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActiveCurrentPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000902,
    WTLClusterElectricalMeasurementAttributeReactiveCurrentPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactiveCurrentPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000903,
    WTLClusterElectricalMeasurementAttributeRmsVoltagePhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltagePhaseBID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000905,
    WTLClusterElectricalMeasurementAttributeRmsVoltageMinPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMinPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000906,
    WTLClusterElectricalMeasurementAttributeRmsVoltageMaxPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMaxPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000907,
    WTLClusterElectricalMeasurementAttributeRmsCurrentPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentPhaseBID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000908,
    WTLClusterElectricalMeasurementAttributeRmsCurrentMinPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMinPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000909,
    WTLClusterElectricalMeasurementAttributeRmsCurrentMaxPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMaxPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000090A,
    WTLClusterElectricalMeasurementAttributeActivePowerPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerPhaseBID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000090B,
    WTLClusterElectricalMeasurementAttributeActivePowerMinPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMinPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000090C,
    WTLClusterElectricalMeasurementAttributeActivePowerMaxPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMaxPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000090D,
    WTLClusterElectricalMeasurementAttributeReactivePowerPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactivePowerPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000090E,
    WTLClusterElectricalMeasurementAttributeApparentPowerPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeApparentPowerPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000090F,
    WTLClusterElectricalMeasurementAttributePowerFactorPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerFactorPhaseBID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000910,
    WTLClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodPhaseBID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000911,
    WTLClusterElectricalMeasurementAttributeAverageRmsOverVoltageCounterPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsOverVoltageCounterPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000912,
    WTLClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000913,
    WTLClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000914,
    WTLClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000915,
    WTLClusterElectricalMeasurementAttributeRmsVoltageSagPeriodPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSagPeriodPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000916,
    WTLClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodPhaseBID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodPhaseBID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000917,
    WTLClusterElectricalMeasurementAttributeLineCurrentPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeLineCurrentPhaseCID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A01,
    WTLClusterElectricalMeasurementAttributeActiveCurrentPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActiveCurrentPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A02,
    WTLClusterElectricalMeasurementAttributeReactiveCurrentPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactiveCurrentPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A03,
    WTLClusterElectricalMeasurementAttributeRmsVoltagePhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltagePhaseCID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A05,
    WTLClusterElectricalMeasurementAttributeRmsVoltageMinPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMinPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A06,
    WTLClusterElectricalMeasurementAttributeRmsVoltageMaxPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMaxPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A07,
    WTLClusterElectricalMeasurementAttributeRmsCurrentPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentPhaseCID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A08,
    WTLClusterElectricalMeasurementAttributeRmsCurrentMinPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMinPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A09,
    WTLClusterElectricalMeasurementAttributeRmsCurrentMaxPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMaxPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A0A,
    WTLClusterElectricalMeasurementAttributeActivePowerPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerPhaseCID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A0B,
    WTLClusterElectricalMeasurementAttributeActivePowerMinPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMinPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A0C,
    WTLClusterElectricalMeasurementAttributeActivePowerMaxPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMaxPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A0D,
    WTLClusterElectricalMeasurementAttributeReactivePowerPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactivePowerPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A0E,
    WTLClusterElectricalMeasurementAttributeApparentPowerPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeApparentPowerPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A0F,
    WTLClusterElectricalMeasurementAttributePowerFactorPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerFactorPhaseCID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A10,
    WTLClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodPhaseCID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A11,
    WTLClusterElectricalMeasurementAttributeAverageRmsOverVoltageCounterPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsOverVoltageCounterPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A12,
    WTLClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A13,
    WTLClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A14,
    WTLClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A15,
    WTLClusterElectricalMeasurementAttributeRmsVoltageSagPeriodPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSagPeriodPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A16,
    WTLClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodPhaseCID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodPhaseCID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000A17,
    WTLClusterElectricalMeasurementAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeGeneratedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterElectricalMeasurementAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcceptedCommandListID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterElectricalMeasurementAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterElectricalMeasurementAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterElectricalMeasurementAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterElectricalMeasurementAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster ElectricalMeasurement attributes
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasurementTypeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000100,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageMinID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000101,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageMaxID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000102,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000103,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentMinID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000104,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentMaxID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000105,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000106,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerMinID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000107,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerMaxID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000108,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000200,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcVoltageDivisorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000201,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000202,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcCurrentDivisorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000203,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000204,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeDcPowerDivisorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000205,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000300,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyMinID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000301,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyMaxID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000302,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeNeutralCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000303,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeTotalActivePowerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000304,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeTotalReactivePowerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000305,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeTotalApparentPowerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000306,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured1stHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000307,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured3rdHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000308,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured5thHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000309,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured7thHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000030A,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured9thHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000030B,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasured11thHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000030C,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase1stHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000030D,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase3rdHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000030E,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase5thHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000030F,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase7thHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000310,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase9thHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000311,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeMeasuredPhase11thHarmonicCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000312,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000400,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcFrequencyDivisorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000401,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000402,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerDivisorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000403,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeHarmonicCurrentMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000404,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributePhaseHarmonicCurrentMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000405,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000500,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousLineCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000501,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousActiveCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000502,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousReactiveCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000503,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeInstantaneousPowerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000504,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000505,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMinID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000506,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMaxID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000507,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000508,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMinID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000509,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMaxID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000050A,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000050B,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMinID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000050C,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMaxID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000050D,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactivePowerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000050E,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeApparentPowerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000050F,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerFactorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000510,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000511,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000513,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000514,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000515,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSagPeriodID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000516,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000517,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcVoltageMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000600,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcVoltageDivisorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000601,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcCurrentMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000602,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcCurrentDivisorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000603,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcPowerMultiplierID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000604,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcPowerDivisorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000605,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeOverloadAlarmsMaskID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000700,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeVoltageOverloadID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000701,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeCurrentOverloadID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000702,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcOverloadAlarmsMaskID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000800,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcVoltageOverloadID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000801,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcCurrentOverloadID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000802,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcActivePowerOverloadID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000803,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcReactivePowerOverloadID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000804,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsOverVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000805,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsUnderVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000806,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeOverVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000807,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeUnderVoltageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000808,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSagID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000809,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSwellID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000080A,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeLineCurrentPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000901,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActiveCurrentPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000902,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactiveCurrentPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000903,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltagePhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000905,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMinPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000906,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMaxPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000907,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000908,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMinPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000909,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMaxPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000090A,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000090B,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMinPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000090C,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMaxPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000090D,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactivePowerPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000090E,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeApparentPowerPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000090F,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerFactorPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000910,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000911,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsOverVoltageCounterPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000912,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000913,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000914,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000915,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSagPeriodPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000916,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodPhaseBID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000917,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeLineCurrentPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A01,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActiveCurrentPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A02,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactiveCurrentPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A03,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltagePhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A05,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMinPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A06,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageMaxPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A07,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A08,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMinPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A09,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsCurrentMaxPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A0A,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A0B,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMinPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A0C,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeActivePowerMaxPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A0D,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeReactivePowerPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A0E,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeApparentPowerPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A0F,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributePowerFactorPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A10,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsVoltageMeasurementPeriodPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A11,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsOverVoltageCounterPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A12,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAverageRmsUnderVoltageCounterPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A13,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeOverVoltagePeriodPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A14,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsExtremeUnderVoltagePeriodPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A15,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSagPeriodPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A16,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeRmsVoltageSwellPeriodPhaseCID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000A17,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeAttributeListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeFeatureMapID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterElectricalMeasurementAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster TestCluster deprecated attribute names
    WTLClusterTestClusterAttributeBooleanID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeBooleanID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterTestClusterAttributeBitmap8ID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeBitmap8ID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterTestClusterAttributeBitmap16ID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeBitmap16ID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterTestClusterAttributeBitmap32ID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeBitmap32ID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterTestClusterAttributeBitmap64ID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeBitmap64ID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterTestClusterAttributeInt8uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt8uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterTestClusterAttributeInt16uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt16uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterTestClusterAttributeInt24uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt24uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterTestClusterAttributeInt32uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt32uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterTestClusterAttributeInt40uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt40uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterTestClusterAttributeInt48uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt48uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterTestClusterAttributeInt56uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt56uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterTestClusterAttributeInt64uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt64uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterTestClusterAttributeInt8sID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt8sID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterTestClusterAttributeInt16sID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt16sID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterTestClusterAttributeInt24sID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt24sID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterTestClusterAttributeInt32sID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt32sID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterTestClusterAttributeInt40sID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt40sID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterTestClusterAttributeInt48sID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt48sID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterTestClusterAttributeInt56sID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt56sID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterTestClusterAttributeInt64sID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeInt64sID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterTestClusterAttributeEnum8ID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeEnum8ID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,
    WTLClusterTestClusterAttributeEnum16ID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeEnum16ID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000016,
    WTLClusterTestClusterAttributeFloatSingleID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeFloatSingleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000017,
    WTLClusterTestClusterAttributeFloatDoubleID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeFloatDoubleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000018,
    WTLClusterTestClusterAttributeOctetStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeOctetStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000019,
    WTLClusterTestClusterAttributeListInt8uID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeListInt8uID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001A,
    WTLClusterTestClusterAttributeListOctetStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeListOctetStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001B,
    WTLClusterTestClusterAttributeListStructOctetStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeListStructOctetStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001C,
    WTLClusterTestClusterAttributeLongOctetStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeLongOctetStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001D,
    WTLClusterTestClusterAttributeCharStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeCharStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001E,
    WTLClusterTestClusterAttributeLongCharStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeLongCharStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001F,
    WTLClusterTestClusterAttributeEpochUsID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeEpochUsID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000020,
    WTLClusterTestClusterAttributeEpochSID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeEpochSID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000021,
    WTLClusterTestClusterAttributeVendorIdID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeVendorIdID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000022,
    WTLClusterTestClusterAttributeListNullablesAndOptionalsStructID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeListNullablesAndOptionalsStructID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000023,
    WTLClusterTestClusterAttributeEnumAttrID WTL_DEPRECATED("Please use WTLAttributeIDTypeClusterUnitTestingAttributeEnumAttrID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000024,
    WTLClusterTestClusterAttributeStructAttrID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeStructAttrID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000025,
    WTLClusterTestClusterAttributeRangeRestrictedInt8uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeRangeRestrictedInt8uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000026,
    WTLClusterTestClusterAttributeRangeRestrictedInt8sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeRangeRestrictedInt8sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000027,
    WTLClusterTestClusterAttributeRangeRestrictedInt16uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeRangeRestrictedInt16uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000028,
    WTLClusterTestClusterAttributeRangeRestrictedInt16sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeRangeRestrictedInt16sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000029,
    WTLClusterTestClusterAttributeListLongOctetStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeListLongOctetStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002A,
    WTLClusterTestClusterAttributeListFabricScopedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeListFabricScopedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000002B,
    WTLClusterTestClusterAttributeTimedWriteBooleanID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeTimedWriteBooleanID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000030,
    WTLClusterTestClusterAttributeGeneralErrorBooleanID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeGeneralErrorBooleanID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000031,
    WTLClusterTestClusterAttributeClusterErrorBooleanID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeClusterErrorBooleanID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000032,
    WTLClusterTestClusterAttributeUnsupportedID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeUnsupportedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x000000FF,
    WTLClusterTestClusterAttributeNullableBooleanID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableBooleanID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004000,
    WTLClusterTestClusterAttributeNullableBitmap8ID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableBitmap8ID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004001,
    WTLClusterTestClusterAttributeNullableBitmap16ID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableBitmap16ID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004002,
    WTLClusterTestClusterAttributeNullableBitmap32ID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableBitmap32ID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004003,
    WTLClusterTestClusterAttributeNullableBitmap64ID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableBitmap64ID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004004,
    WTLClusterTestClusterAttributeNullableInt8uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt8uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004005,
    WTLClusterTestClusterAttributeNullableInt16uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt16uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004006,
    WTLClusterTestClusterAttributeNullableInt24uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt24uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004007,
    WTLClusterTestClusterAttributeNullableInt32uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt32uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004008,
    WTLClusterTestClusterAttributeNullableInt40uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt40uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004009,
    WTLClusterTestClusterAttributeNullableInt48uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt48uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400A,
    WTLClusterTestClusterAttributeNullableInt56uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt56uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400B,
    WTLClusterTestClusterAttributeNullableInt64uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt64uID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400C,
    WTLClusterTestClusterAttributeNullableInt8sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt8sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400D,
    WTLClusterTestClusterAttributeNullableInt16sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt16sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400E,
    WTLClusterTestClusterAttributeNullableInt24sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt24sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000400F,
    WTLClusterTestClusterAttributeNullableInt32sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt32sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004010,
    WTLClusterTestClusterAttributeNullableInt40sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt40sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004011,
    WTLClusterTestClusterAttributeNullableInt48sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt48sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004012,
    WTLClusterTestClusterAttributeNullableInt56sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt56sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004013,
    WTLClusterTestClusterAttributeNullableInt64sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt64sID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004014,
    WTLClusterTestClusterAttributeNullableEnum8ID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableEnum8ID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004015,
    WTLClusterTestClusterAttributeNullableEnum16ID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableEnum16ID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004016,
    WTLClusterTestClusterAttributeNullableFloatSingleID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableFloatSingleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004017,
    WTLClusterTestClusterAttributeNullableFloatDoubleID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableFloatDoubleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004018,
    WTLClusterTestClusterAttributeNullableOctetStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableOctetStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004019,
    WTLClusterTestClusterAttributeNullableCharStringID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableCharStringID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000401E,
    WTLClusterTestClusterAttributeNullableEnumAttrID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableEnumAttrID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004024,
    WTLClusterTestClusterAttributeNullableStructID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableStructID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004025,
    WTLClusterTestClusterAttributeNullableRangeRestrictedInt8uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableRangeRestrictedInt8uID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004026,
    WTLClusterTestClusterAttributeNullableRangeRestrictedInt8sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableRangeRestrictedInt8sID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004027,
    WTLClusterTestClusterAttributeNullableRangeRestrictedInt16uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableRangeRestrictedInt16uID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004028,
    WTLClusterTestClusterAttributeNullableRangeRestrictedInt16sID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeNullableRangeRestrictedInt16sID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00004029,
    WTLClusterTestClusterAttributeWriteOnlyInt8uID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeWriteOnlyInt8uID", ios(16.2, 16.4), macos(13.1, 13.3),
        watchos(9.2, 9.4), tvos(16.2, 16.4))
    = 0x0000402A,
    WTLClusterTestClusterAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterTestClusterAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterTestClusterAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterTestClusterAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterTestClusterAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterUnitTestingAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster UnitTesting attributes
    WTLAttributeIDTypeClusterUnitTestingAttributeBooleanID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLAttributeIDTypeClusterUnitTestingAttributeBitmap8ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLAttributeIDTypeClusterUnitTestingAttributeBitmap16ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLAttributeIDTypeClusterUnitTestingAttributeBitmap32ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLAttributeIDTypeClusterUnitTestingAttributeBitmap64ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt8uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt16uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt24uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt32uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt40uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt48uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt56uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt64uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt8sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt16sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt24sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt32sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt40sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt48sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt56sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLAttributeIDTypeClusterUnitTestingAttributeInt64sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLAttributeIDTypeClusterUnitTestingAttributeEnum8ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,
    WTLAttributeIDTypeClusterUnitTestingAttributeEnum16ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000016,
    WTLAttributeIDTypeClusterUnitTestingAttributeFloatSingleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000017,
    WTLAttributeIDTypeClusterUnitTestingAttributeFloatDoubleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000018,
    WTLAttributeIDTypeClusterUnitTestingAttributeOctetStringID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000019,
    WTLAttributeIDTypeClusterUnitTestingAttributeListInt8uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001A,
    WTLAttributeIDTypeClusterUnitTestingAttributeListOctetStringID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001B,
    WTLAttributeIDTypeClusterUnitTestingAttributeListStructOctetStringID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001C,
    WTLAttributeIDTypeClusterUnitTestingAttributeLongOctetStringID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001D,
    WTLAttributeIDTypeClusterUnitTestingAttributeCharStringID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001E,
    WTLAttributeIDTypeClusterUnitTestingAttributeLongCharStringID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001F,
    WTLAttributeIDTypeClusterUnitTestingAttributeEpochUsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000020,
    WTLAttributeIDTypeClusterUnitTestingAttributeEpochSID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000021,
    WTLAttributeIDTypeClusterUnitTestingAttributeVendorIdID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000022,
    WTLAttributeIDTypeClusterUnitTestingAttributeListNullablesAndOptionalsStructID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000023,
    WTLAttributeIDTypeClusterUnitTestingAttributeEnumAttrID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000024,
    WTLAttributeIDTypeClusterUnitTestingAttributeStructAttrID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000025,
    WTLAttributeIDTypeClusterUnitTestingAttributeRangeRestrictedInt8uID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000026,
    WTLAttributeIDTypeClusterUnitTestingAttributeRangeRestrictedInt8sID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000027,
    WTLAttributeIDTypeClusterUnitTestingAttributeRangeRestrictedInt16uID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000028,
    WTLAttributeIDTypeClusterUnitTestingAttributeRangeRestrictedInt16sID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000029,
    WTLAttributeIDTypeClusterUnitTestingAttributeListLongOctetStringID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002A,
    WTLAttributeIDTypeClusterUnitTestingAttributeListFabricScopedID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000002B,
    WTLAttributeIDTypeClusterUnitTestingAttributeTimedWriteBooleanID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000030,
    WTLAttributeIDTypeClusterUnitTestingAttributeGeneralErrorBooleanID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000031,
    WTLAttributeIDTypeClusterUnitTestingAttributeClusterErrorBooleanID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000032,
    WTLAttributeIDTypeClusterUnitTestingAttributeUnsupportedID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x000000FF,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableBooleanID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004000,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableBitmap8ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004001,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableBitmap16ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004002,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableBitmap32ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004003,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableBitmap64ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004004,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt8uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004005,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt16uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004006,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt24uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004007,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt32uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004008,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt40uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004009,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt48uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400A,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt56uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400B,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt64uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400C,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt8sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400D,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt16sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400E,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt24sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000400F,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt32sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004010,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt40sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004011,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt48sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004012,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt56sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004013,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableInt64sID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004014,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableEnum8ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004015,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableEnum16ID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004016,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableFloatSingleID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004017,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableFloatDoubleID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004018,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableOctetStringID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004019,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableCharStringID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000401E,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableEnumAttrID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004024,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableStructID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004025,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableRangeRestrictedInt8uID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004026,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableRangeRestrictedInt8sID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004027,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableRangeRestrictedInt16uID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004028,
    WTLAttributeIDTypeClusterUnitTestingAttributeNullableRangeRestrictedInt16sID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00004029,
    WTLAttributeIDTypeClusterUnitTestingAttributeWriteOnlyInt8uID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000402A,
    WTLAttributeIDTypeClusterUnitTestingAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterUnitTestingAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterUnitTestingAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterUnitTestingAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterUnitTestingAttributeClusterRevisionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

    // Cluster FaultInjection deprecated attribute names
    WTLClusterFaultInjectionAttributeGeneratedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFaultInjectionAttributeGeneratedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeGeneratedCommandListID,
    WTLClusterFaultInjectionAttributeAcceptedCommandListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFaultInjectionAttributeAcceptedCommandListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAcceptedCommandListID,
    WTLClusterFaultInjectionAttributeAttributeListID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFaultInjectionAttributeAttributeListID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeAttributeListID,
    WTLClusterFaultInjectionAttributeFeatureMapID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFaultInjectionAttributeFeatureMapID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeFeatureMapID,
    WTLClusterFaultInjectionAttributeClusterRevisionID WTL_DEPRECATED(
        "Please use WTLAttributeIDTypeClusterFaultInjectionAttributeClusterRevisionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = WTLClusterGlobalAttributeClusterRevisionID,

    // Cluster FaultInjection attributes
    WTLAttributeIDTypeClusterFaultInjectionAttributeGeneratedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeGeneratedCommandListID,
    WTLAttributeIDTypeClusterFaultInjectionAttributeAcceptedCommandListID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAcceptedCommandListID,
    WTLAttributeIDTypeClusterFaultInjectionAttributeAttributeListID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeAttributeListID,
    WTLAttributeIDTypeClusterFaultInjectionAttributeFeatureMapID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeFeatureMapID,
    WTLAttributeIDTypeClusterFaultInjectionAttributeClusterRevisionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = WTLAttributeIDTypeGlobalAttributeClusterRevisionID,

};

#pragma mark - Commands IDs

typedef NS_ENUM(uint32_t, WTLCommandIDType) {

    // Cluster Identify deprecated command id names
    WTLClusterIdentifyCommandIdentifyID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterIdentifyCommandIdentifyID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterIdentifyCommandTriggerEffectID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterIdentifyCommandTriggerEffectID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000040,

    // Cluster Identify commands
    WTLCommandIDTypeClusterIdentifyCommandIdentifyID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLCommandIDTypeClusterIdentifyCommandTriggerEffectID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000040,

    // Cluster Groups deprecated command id names
    WTLClusterGroupsCommandAddGroupID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterGroupsCommandAddGroupID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGroupsCommandAddGroupResponseID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterGroupsCommandAddGroupResponseID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGroupsCommandViewGroupID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterGroupsCommandViewGroupID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterGroupsCommandViewGroupResponseID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterGroupsCommandViewGroupResponseID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterGroupsCommandGetGroupMembershipID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupsCommandGetGroupMembershipID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterGroupsCommandGetGroupMembershipResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupsCommandGetGroupMembershipResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterGroupsCommandRemoveGroupID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterGroupsCommandRemoveGroupID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterGroupsCommandRemoveGroupResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupsCommandRemoveGroupResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterGroupsCommandRemoveAllGroupsID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterGroupsCommandRemoveAllGroupsID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterGroupsCommandAddGroupIfIdentifyingID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupsCommandAddGroupIfIdentifyingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,

    // Cluster Groups commands
    WTLCommandIDTypeClusterGroupsCommandAddGroupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLCommandIDTypeClusterGroupsCommandAddGroupResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterGroupsCommandViewGroupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLCommandIDTypeClusterGroupsCommandViewGroupResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterGroupsCommandGetGroupMembershipID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterGroupsCommandGetGroupMembershipResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterGroupsCommandRemoveGroupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000003,
    WTLCommandIDTypeClusterGroupsCommandRemoveGroupResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterGroupsCommandRemoveAllGroupsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterGroupsCommandAddGroupIfIdentifyingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,

    // Cluster Scenes deprecated command id names
    WTLClusterScenesCommandAddSceneID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandAddSceneID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterScenesCommandAddSceneResponseID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandAddSceneResponseID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterScenesCommandViewSceneID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandViewSceneID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterScenesCommandViewSceneResponseID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandViewSceneResponseID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterScenesCommandRemoveSceneID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandRemoveSceneID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterScenesCommandRemoveSceneResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterScenesCommandRemoveSceneResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterScenesCommandRemoveAllScenesID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandRemoveAllScenesID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterScenesCommandRemoveAllScenesResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterScenesCommandRemoveAllScenesResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterScenesCommandStoreSceneID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandStoreSceneID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterScenesCommandStoreSceneResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterScenesCommandStoreSceneResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterScenesCommandRecallSceneID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandRecallSceneID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterScenesCommandGetSceneMembershipID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterScenesCommandGetSceneMembershipID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterScenesCommandGetSceneMembershipResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterScenesCommandGetSceneMembershipResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterScenesCommandEnhancedAddSceneID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandEnhancedAddSceneID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000040,
    WTLClusterScenesCommandEnhancedAddSceneResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterScenesCommandEnhancedAddSceneResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000040,
    WTLClusterScenesCommandEnhancedViewSceneID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandEnhancedViewSceneID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000041,
    WTLClusterScenesCommandEnhancedViewSceneResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterScenesCommandEnhancedViewSceneResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000041,
    WTLClusterScenesCommandCopySceneID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandCopySceneID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000042,
    WTLClusterScenesCommandCopySceneResponseID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterScenesCommandCopySceneResponseID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000042,

    // Cluster Scenes commands
    WTLCommandIDTypeClusterScenesCommandAddSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLCommandIDTypeClusterScenesCommandAddSceneResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterScenesCommandViewSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLCommandIDTypeClusterScenesCommandViewSceneResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterScenesCommandRemoveSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLCommandIDTypeClusterScenesCommandRemoveSceneResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterScenesCommandRemoveAllScenesID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterScenesCommandRemoveAllScenesResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterScenesCommandStoreSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000004,
    WTLCommandIDTypeClusterScenesCommandStoreSceneResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterScenesCommandRecallSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000005,
    WTLCommandIDTypeClusterScenesCommandGetSceneMembershipID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterScenesCommandGetSceneMembershipResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterScenesCommandEnhancedAddSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000040,
    WTLCommandIDTypeClusterScenesCommandEnhancedAddSceneResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000040,
    WTLCommandIDTypeClusterScenesCommandEnhancedViewSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000041,
    WTLCommandIDTypeClusterScenesCommandEnhancedViewSceneResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000041,
    WTLCommandIDTypeClusterScenesCommandCopySceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000042,
    WTLCommandIDTypeClusterScenesCommandCopySceneResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000042,

    // Cluster OnOff deprecated command id names
    WTLClusterOnOffCommandOffID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterOnOffCommandOffID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOnOffCommandOnID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterOnOffCommandOnID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterOnOffCommandToggleID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterOnOffCommandToggleID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterOnOffCommandOffWithEffectID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterOnOffCommandOffWithEffectID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000040,
    WTLClusterOnOffCommandOnWithRecallGlobalSceneID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOnOffCommandOnWithRecallGlobalSceneID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000041,
    WTLClusterOnOffCommandOnWithTimedOffID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterOnOffCommandOnWithTimedOffID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000042,

    // Cluster OnOff commands
    WTLCommandIDTypeClusterOnOffCommandOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLCommandIDTypeClusterOnOffCommandOnID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLCommandIDTypeClusterOnOffCommandToggleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLCommandIDTypeClusterOnOffCommandOffWithEffectID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000040,
    WTLCommandIDTypeClusterOnOffCommandOnWithRecallGlobalSceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000041,
    WTLCommandIDTypeClusterOnOffCommandOnWithTimedOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000042,

    // Cluster LevelControl deprecated command id names
    WTLClusterLevelControlCommandMoveToLevelID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterLevelControlCommandMoveToLevelID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterLevelControlCommandMoveID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterLevelControlCommandMoveID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterLevelControlCommandStepID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterLevelControlCommandStepID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterLevelControlCommandStopID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterLevelControlCommandStopID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterLevelControlCommandMoveToLevelWithOnOffID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterLevelControlCommandMoveToLevelWithOnOffID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterLevelControlCommandMoveWithOnOffID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterLevelControlCommandMoveWithOnOffID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterLevelControlCommandStepWithOnOffID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterLevelControlCommandStepWithOnOffID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterLevelControlCommandStopWithOnOffID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterLevelControlCommandStopWithOnOffID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterLevelControlCommandMoveToClosestFrequencyID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterLevelControlCommandMoveToClosestFrequencyID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,

    // Cluster LevelControl commands
    WTLCommandIDTypeClusterLevelControlCommandMoveToLevelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterLevelControlCommandMoveID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLCommandIDTypeClusterLevelControlCommandStepID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLCommandIDTypeClusterLevelControlCommandStopID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000003,
    WTLCommandIDTypeClusterLevelControlCommandMoveToLevelWithOnOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterLevelControlCommandMoveWithOnOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLCommandIDTypeClusterLevelControlCommandStepWithOnOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterLevelControlCommandStopWithOnOffID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterLevelControlCommandMoveToClosestFrequencyID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,

    // Cluster Actions deprecated command id names
    WTLClusterActionsCommandInstantActionID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterActionsCommandInstantActionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterActionsCommandInstantActionWithTransitionID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterActionsCommandInstantActionWithTransitionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterActionsCommandStartActionID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterActionsCommandStartActionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterActionsCommandStartActionWithDurationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterActionsCommandStartActionWithDurationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterActionsCommandStopActionID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterActionsCommandStopActionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterActionsCommandPauseActionID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterActionsCommandPauseActionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterActionsCommandPauseActionWithDurationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterActionsCommandPauseActionWithDurationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterActionsCommandResumeActionID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterActionsCommandResumeActionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterActionsCommandEnableActionID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterActionsCommandEnableActionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterActionsCommandEnableActionWithDurationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterActionsCommandEnableActionWithDurationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterActionsCommandDisableActionID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterActionsCommandDisableActionID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterActionsCommandDisableActionWithDurationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterActionsCommandDisableActionWithDurationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,

    // Cluster Actions commands
    WTLCommandIDTypeClusterActionsCommandInstantActionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterActionsCommandInstantActionWithTransitionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterActionsCommandStartActionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLCommandIDTypeClusterActionsCommandStartActionWithDurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterActionsCommandStopActionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000004,
    WTLCommandIDTypeClusterActionsCommandPauseActionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000005,
    WTLCommandIDTypeClusterActionsCommandPauseActionWithDurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterActionsCommandResumeActionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterActionsCommandEnableActionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLCommandIDTypeClusterActionsCommandEnableActionWithDurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLCommandIDTypeClusterActionsCommandDisableActionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLCommandIDTypeClusterActionsCommandDisableActionWithDurationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,

    // Cluster Basic deprecated command id names
    WTLClusterBasicCommandMfgSpecificPingID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterBasicInformationCommandMfgSpecificPingID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x10020000,

    // Cluster BasicInformation commands

    // Cluster OtaSoftwareUpdateProvider deprecated command id names
    WTLClusterOtaSoftwareUpdateProviderCommandQueryImageID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandQueryImageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOtaSoftwareUpdateProviderCommandQueryImageResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandQueryImageResponseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterOtaSoftwareUpdateProviderCommandApplyUpdateRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandApplyUpdateRequestID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterOtaSoftwareUpdateProviderCommandApplyUpdateResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandApplyUpdateResponseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterOtaSoftwareUpdateProviderCommandNotifyUpdateAppliedID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandNotifyUpdateAppliedID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,

    // Cluster OTASoftwareUpdateProvider commands
    WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandQueryImageID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandQueryImageResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandApplyUpdateRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandApplyUpdateResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterOTASoftwareUpdateProviderCommandNotifyUpdateAppliedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,

    // Cluster OtaSoftwareUpdateRequestor deprecated command id names
    WTLClusterOtaSoftwareUpdateRequestorCommandAnnounceOtaProviderID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOTASoftwareUpdateRequestorCommandAnnounceOTAProviderID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster OTASoftwareUpdateRequestor commands
    WTLCommandIDTypeClusterOTASoftwareUpdateRequestorCommandAnnounceOTAProviderID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster GeneralCommissioning deprecated command id names
    WTLClusterGeneralCommissioningCommandArmFailSafeID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGeneralCommissioningCommandArmFailSafeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGeneralCommissioningCommandArmFailSafeResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGeneralCommissioningCommandArmFailSafeResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterGeneralCommissioningCommandSetRegulatoryConfigID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGeneralCommissioningCommandSetRegulatoryConfigID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterGeneralCommissioningCommandSetRegulatoryConfigResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGeneralCommissioningCommandSetRegulatoryConfigResponseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterGeneralCommissioningCommandCommissioningCompleteID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGeneralCommissioningCommandCommissioningCompleteID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterGeneralCommissioningCommandCommissioningCompleteResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGeneralCommissioningCommandCommissioningCompleteResponseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,

    // Cluster GeneralCommissioning commands
    WTLCommandIDTypeClusterGeneralCommissioningCommandArmFailSafeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterGeneralCommissioningCommandArmFailSafeResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterGeneralCommissioningCommandSetRegulatoryConfigID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterGeneralCommissioningCommandSetRegulatoryConfigResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterGeneralCommissioningCommandCommissioningCompleteID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterGeneralCommissioningCommandCommissioningCompleteResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,

    // Cluster NetworkCommissioning deprecated command id names
    WTLClusterNetworkCommissioningCommandScanNetworksID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandScanNetworksID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterNetworkCommissioningCommandScanNetworksResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandScanNetworksResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterNetworkCommissioningCommandAddOrUpdateWiFiNetworkID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandAddOrUpdateWiFiNetworkID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterNetworkCommissioningCommandAddOrUpdateThreadNetworkID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandAddOrUpdateThreadNetworkID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterNetworkCommissioningCommandRemoveNetworkID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandRemoveNetworkID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterNetworkCommissioningCommandNetworkConfigResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandNetworkConfigResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterNetworkCommissioningCommandConnectNetworkID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandConnectNetworkID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterNetworkCommissioningCommandConnectNetworkResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandConnectNetworkResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterNetworkCommissioningCommandReorderNetworkID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterNetworkCommissioningCommandReorderNetworkID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,

    // Cluster NetworkCommissioning commands
    WTLCommandIDTypeClusterNetworkCommissioningCommandScanNetworksID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterNetworkCommissioningCommandScanNetworksResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterNetworkCommissioningCommandAddOrUpdateWiFiNetworkID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterNetworkCommissioningCommandAddOrUpdateThreadNetworkID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterNetworkCommissioningCommandRemoveNetworkID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterNetworkCommissioningCommandNetworkConfigResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLCommandIDTypeClusterNetworkCommissioningCommandConnectNetworkID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterNetworkCommissioningCommandConnectNetworkResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterNetworkCommissioningCommandReorderNetworkID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,

    // Cluster DiagnosticLogs deprecated command id names
    WTLClusterDiagnosticLogsCommandRetrieveLogsRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDiagnosticLogsCommandRetrieveLogsRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterDiagnosticLogsCommandRetrieveLogsResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDiagnosticLogsCommandRetrieveLogsResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster DiagnosticLogs commands
    WTLCommandIDTypeClusterDiagnosticLogsCommandRetrieveLogsRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterDiagnosticLogsCommandRetrieveLogsResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

    // Cluster GeneralDiagnostics deprecated command id names
    WTLClusterGeneralDiagnosticsCommandTestEventTriggerID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGeneralDiagnosticsCommandTestEventTriggerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster GeneralDiagnostics commands
    WTLCommandIDTypeClusterGeneralDiagnosticsCommandTestEventTriggerID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster SoftwareDiagnostics deprecated command id names
    WTLClusterSoftwareDiagnosticsCommandResetWatermarksID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterSoftwareDiagnosticsCommandResetWatermarksID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster SoftwareDiagnostics commands
    WTLCommandIDTypeClusterSoftwareDiagnosticsCommandResetWatermarksID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster ThreadNetworkDiagnostics deprecated command id names
    WTLClusterThreadNetworkDiagnosticsCommandResetCountsID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterThreadNetworkDiagnosticsCommandResetCountsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster ThreadNetworkDiagnostics commands
    WTLCommandIDTypeClusterThreadNetworkDiagnosticsCommandResetCountsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster WiFiNetworkDiagnostics deprecated command id names
    WTLClusterWiFiNetworkDiagnosticsCommandResetCountsID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterWiFiNetworkDiagnosticsCommandResetCountsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster WiFiNetworkDiagnostics commands
    WTLCommandIDTypeClusterWiFiNetworkDiagnosticsCommandResetCountsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster EthernetNetworkDiagnostics deprecated command id names
    WTLClusterEthernetNetworkDiagnosticsCommandResetCountsID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterEthernetNetworkDiagnosticsCommandResetCountsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster EthernetNetworkDiagnostics commands
    WTLCommandIDTypeClusterEthernetNetworkDiagnosticsCommandResetCountsID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster TimeSynchronization deprecated command id names
    WTLClusterTimeSynchronizationCommandSetUtcTimeID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterTimeSynchronizationCommandSetUtcTimeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster TimeSynchronization commands
    WTLCommandIDTypeClusterTimeSynchronizationCommandSetUtcTimeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster AdministratorCommissioning deprecated command id names
    WTLClusterAdministratorCommissioningCommandOpenCommissioningWindowID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterAdministratorCommissioningCommandOpenCommissioningWindowID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterAdministratorCommissioningCommandOpenBasicCommissioningWindowID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterAdministratorCommissioningCommandOpenBasicCommissioningWindowID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterAdministratorCommissioningCommandRevokeCommissioningID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterAdministratorCommissioningCommandRevokeCommissioningID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,

    // Cluster AdministratorCommissioning commands
    WTLCommandIDTypeClusterAdministratorCommissioningCommandOpenCommissioningWindowID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterAdministratorCommissioningCommandOpenBasicCommissioningWindowID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterAdministratorCommissioningCommandRevokeCommissioningID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,

    // Cluster OperationalCredentials deprecated command id names
    WTLClusterOperationalCredentialsCommandAttestationRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandAttestationRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOperationalCredentialsCommandAttestationResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandAttestationResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterOperationalCredentialsCommandCertificateChainRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandCertificateChainRequestID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterOperationalCredentialsCommandCertificateChainResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandCertificateChainResponseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterOperationalCredentialsCommandCSRRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandCSRRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterOperationalCredentialsCommandCSRResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandCSRResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterOperationalCredentialsCommandAddNOCID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandAddNOCID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterOperationalCredentialsCommandUpdateNOCID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandUpdateNOCID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterOperationalCredentialsCommandNOCResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandNOCResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterOperationalCredentialsCommandUpdateFabricLabelID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandUpdateFabricLabelID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterOperationalCredentialsCommandRemoveFabricID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandRemoveFabricID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterOperationalCredentialsCommandAddTrustedRootCertificateID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterOperationalCredentialsCommandAddTrustedRootCertificateID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,

    // Cluster OperationalCredentials commands
    WTLCommandIDTypeClusterOperationalCredentialsCommandAttestationRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterOperationalCredentialsCommandAttestationResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterOperationalCredentialsCommandCertificateChainRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterOperationalCredentialsCommandCertificateChainResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterOperationalCredentialsCommandCSRRequestID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterOperationalCredentialsCommandCSRResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLCommandIDTypeClusterOperationalCredentialsCommandAddNOCID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterOperationalCredentialsCommandUpdateNOCID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterOperationalCredentialsCommandNOCResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLCommandIDTypeClusterOperationalCredentialsCommandUpdateFabricLabelID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLCommandIDTypeClusterOperationalCredentialsCommandRemoveFabricID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLCommandIDTypeClusterOperationalCredentialsCommandAddTrustedRootCertificateID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,

    // Cluster GroupKeyManagement deprecated command id names
    WTLClusterGroupKeyManagementCommandKeySetWriteID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetWriteID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGroupKeyManagementCommandKeySetReadID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetReadID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterGroupKeyManagementCommandKeySetReadResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetReadResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterGroupKeyManagementCommandKeySetRemoveID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetRemoveID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterGroupKeyManagementCommandKeySetReadAllIndicesID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetReadAllIndicesID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterGroupKeyManagementCommandKeySetReadAllIndicesResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetReadAllIndicesResponseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,

    // Cluster GroupKeyManagement commands
    WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetWriteID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetReadID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetReadResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetRemoveID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetReadAllIndicesID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterGroupKeyManagementCommandKeySetReadAllIndicesResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,

    // Cluster ModeSelect deprecated command id names
    WTLClusterModeSelectCommandChangeToModeID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterModeSelectCommandChangeToModeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster ModeSelect commands
    WTLCommandIDTypeClusterModeSelectCommandChangeToModeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster DoorLock deprecated command id names
    WTLClusterDoorLockCommandLockDoorID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterDoorLockCommandLockDoorID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterDoorLockCommandUnlockDoorID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterDoorLockCommandUnlockDoorID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterDoorLockCommandUnlockWithTimeoutID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandUnlockWithTimeoutID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterDoorLockCommandSetWeekDayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandSetWeekDayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterDoorLockCommandGetWeekDayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandGetWeekDayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterDoorLockCommandGetWeekDayScheduleResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandGetWeekDayScheduleResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterDoorLockCommandClearWeekDayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandClearWeekDayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterDoorLockCommandSetYearDayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandSetYearDayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterDoorLockCommandGetYearDayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandGetYearDayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterDoorLockCommandGetYearDayScheduleResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandGetYearDayScheduleResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterDoorLockCommandClearYearDayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandClearYearDayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterDoorLockCommandSetHolidayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandSetHolidayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterDoorLockCommandGetHolidayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandGetHolidayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterDoorLockCommandGetHolidayScheduleResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandGetHolidayScheduleResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterDoorLockCommandClearHolidayScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandClearHolidayScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterDoorLockCommandSetUserID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterDoorLockCommandSetUserID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001A,
    WTLClusterDoorLockCommandGetUserID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterDoorLockCommandGetUserID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001B,
    WTLClusterDoorLockCommandGetUserResponseID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterDoorLockCommandGetUserResponseID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001C,
    WTLClusterDoorLockCommandClearUserID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterDoorLockCommandClearUserID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000001D,
    WTLClusterDoorLockCommandSetCredentialID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterDoorLockCommandSetCredentialID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000022,
    WTLClusterDoorLockCommandSetCredentialResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandSetCredentialResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000023,
    WTLClusterDoorLockCommandGetCredentialStatusID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandGetCredentialStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000024,
    WTLClusterDoorLockCommandGetCredentialStatusResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterDoorLockCommandGetCredentialStatusResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000025,
    WTLClusterDoorLockCommandClearCredentialID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterDoorLockCommandClearCredentialID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000026,

    // Cluster DoorLock commands
    WTLCommandIDTypeClusterDoorLockCommandLockDoorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLCommandIDTypeClusterDoorLockCommandUnlockDoorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLCommandIDTypeClusterDoorLockCommandUnlockWithTimeoutID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterDoorLockCommandSetWeekDayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLCommandIDTypeClusterDoorLockCommandGetWeekDayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLCommandIDTypeClusterDoorLockCommandGetWeekDayScheduleResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLCommandIDTypeClusterDoorLockCommandClearWeekDayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLCommandIDTypeClusterDoorLockCommandSetYearDayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLCommandIDTypeClusterDoorLockCommandGetYearDayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLCommandIDTypeClusterDoorLockCommandGetYearDayScheduleResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLCommandIDTypeClusterDoorLockCommandClearYearDayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLCommandIDTypeClusterDoorLockCommandSetHolidayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLCommandIDTypeClusterDoorLockCommandGetHolidayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLCommandIDTypeClusterDoorLockCommandGetHolidayScheduleResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLCommandIDTypeClusterDoorLockCommandClearHolidayScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLCommandIDTypeClusterDoorLockCommandSetUserID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000001A,
    WTLCommandIDTypeClusterDoorLockCommandGetUserID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000001B,
    WTLCommandIDTypeClusterDoorLockCommandGetUserResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000001C,
    WTLCommandIDTypeClusterDoorLockCommandClearUserID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000001D,
    WTLCommandIDTypeClusterDoorLockCommandSetCredentialID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000022,
    WTLCommandIDTypeClusterDoorLockCommandSetCredentialResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000023,
    WTLCommandIDTypeClusterDoorLockCommandGetCredentialStatusID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000024,
    WTLCommandIDTypeClusterDoorLockCommandGetCredentialStatusResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000025,
    WTLCommandIDTypeClusterDoorLockCommandClearCredentialID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000026,

    // Cluster WindowCovering deprecated command id names
    WTLClusterWindowCoveringCommandUpOrOpenID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterWindowCoveringCommandUpOrOpenID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterWindowCoveringCommandDownOrCloseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterWindowCoveringCommandDownOrCloseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterWindowCoveringCommandStopMotionID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterWindowCoveringCommandStopMotionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterWindowCoveringCommandGoToLiftValueID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterWindowCoveringCommandGoToLiftValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterWindowCoveringCommandGoToLiftPercentageID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterWindowCoveringCommandGoToLiftPercentageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterWindowCoveringCommandGoToTiltValueID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterWindowCoveringCommandGoToTiltValueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterWindowCoveringCommandGoToTiltPercentageID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterWindowCoveringCommandGoToTiltPercentageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,

    // Cluster WindowCovering commands
    WTLCommandIDTypeClusterWindowCoveringCommandUpOrOpenID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterWindowCoveringCommandDownOrCloseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterWindowCoveringCommandStopMotionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterWindowCoveringCommandGoToLiftValueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterWindowCoveringCommandGoToLiftPercentageID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLCommandIDTypeClusterWindowCoveringCommandGoToTiltValueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterWindowCoveringCommandGoToTiltPercentageID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,

    // Cluster BarrierControl deprecated command id names
    WTLClusterBarrierControlCommandBarrierControlGoToPercentID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterBarrierControlCommandBarrierControlGoToPercentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterBarrierControlCommandBarrierControlStopID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterBarrierControlCommandBarrierControlStopID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster BarrierControl commands
    WTLCommandIDTypeClusterBarrierControlCommandBarrierControlGoToPercentID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterBarrierControlCommandBarrierControlStopID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

    // Cluster Thermostat deprecated command id names
    WTLClusterThermostatCommandSetpointRaiseLowerID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterThermostatCommandSetpointRaiseLowerID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterThermostatCommandGetWeeklyScheduleResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterThermostatCommandGetWeeklyScheduleResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterThermostatCommandSetWeeklyScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterThermostatCommandSetWeeklyScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterThermostatCommandGetWeeklyScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterThermostatCommandGetWeeklyScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterThermostatCommandClearWeeklyScheduleID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterThermostatCommandClearWeeklyScheduleID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,

    // Cluster Thermostat commands
    WTLCommandIDTypeClusterThermostatCommandSetpointRaiseLowerID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterThermostatCommandGetWeeklyScheduleResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterThermostatCommandSetWeeklyScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterThermostatCommandGetWeeklyScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterThermostatCommandClearWeeklyScheduleID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,

    // Cluster ColorControl deprecated command id names
    WTLClusterColorControlCommandMoveToHueID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterColorControlCommandMoveToHueID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterColorControlCommandMoveHueID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterColorControlCommandMoveHueID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterColorControlCommandStepHueID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterColorControlCommandStepHueID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterColorControlCommandMoveToSaturationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandMoveToSaturationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterColorControlCommandMoveSaturationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandMoveSaturationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterColorControlCommandStepSaturationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandStepSaturationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterColorControlCommandMoveToHueAndSaturationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandMoveToHueAndSaturationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterColorControlCommandMoveToColorID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterColorControlCommandMoveToColorID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterColorControlCommandMoveColorID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterColorControlCommandMoveColorID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterColorControlCommandStepColorID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterColorControlCommandStepColorID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterColorControlCommandMoveToColorTemperatureID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandMoveToColorTemperatureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterColorControlCommandEnhancedMoveToHueID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandEnhancedMoveToHueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000040,
    WTLClusterColorControlCommandEnhancedMoveHueID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandEnhancedMoveHueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000041,
    WTLClusterColorControlCommandEnhancedStepHueID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandEnhancedStepHueID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000042,
    WTLClusterColorControlCommandEnhancedMoveToHueAndSaturationID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandEnhancedMoveToHueAndSaturationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000043,
    WTLClusterColorControlCommandColorLoopSetID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandColorLoopSetID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000044,
    WTLClusterColorControlCommandStopMoveStepID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandStopMoveStepID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000047,
    WTLClusterColorControlCommandMoveColorTemperatureID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandMoveColorTemperatureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000004B,
    WTLClusterColorControlCommandStepColorTemperatureID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterColorControlCommandStepColorTemperatureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000004C,

    // Cluster ColorControl commands
    WTLCommandIDTypeClusterColorControlCommandMoveToHueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterColorControlCommandMoveHueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterColorControlCommandStepHueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterColorControlCommandMoveToSaturationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterColorControlCommandMoveSaturationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterColorControlCommandStepSaturationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLCommandIDTypeClusterColorControlCommandMoveToHueAndSaturationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterColorControlCommandMoveToColorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterColorControlCommandMoveColorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLCommandIDTypeClusterColorControlCommandStepColorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLCommandIDTypeClusterColorControlCommandMoveToColorTemperatureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLCommandIDTypeClusterColorControlCommandEnhancedMoveToHueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000040,
    WTLCommandIDTypeClusterColorControlCommandEnhancedMoveHueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000041,
    WTLCommandIDTypeClusterColorControlCommandEnhancedStepHueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000042,
    WTLCommandIDTypeClusterColorControlCommandEnhancedMoveToHueAndSaturationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000043,
    WTLCommandIDTypeClusterColorControlCommandColorLoopSetID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000044,
    WTLCommandIDTypeClusterColorControlCommandStopMoveStepID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000047,
    WTLCommandIDTypeClusterColorControlCommandMoveColorTemperatureID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000004B,
    WTLCommandIDTypeClusterColorControlCommandStepColorTemperatureID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000004C,

    // Cluster Channel deprecated command id names
    WTLClusterChannelCommandChangeChannelID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterChannelCommandChangeChannelID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterChannelCommandChangeChannelResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterChannelCommandChangeChannelResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterChannelCommandChangeChannelByNumberID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterChannelCommandChangeChannelByNumberID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterChannelCommandSkipChannelID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterChannelCommandSkipChannelID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,

    // Cluster Channel commands
    WTLCommandIDTypeClusterChannelCommandChangeChannelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterChannelCommandChangeChannelResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterChannelCommandChangeChannelByNumberID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterChannelCommandSkipChannelID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000003,

    // Cluster TargetNavigator deprecated command id names
    WTLClusterTargetNavigatorCommandNavigateTargetID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterTargetNavigatorCommandNavigateTargetID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterTargetNavigatorCommandNavigateTargetResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterTargetNavigatorCommandNavigateTargetResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster TargetNavigator commands
    WTLCommandIDTypeClusterTargetNavigatorCommandNavigateTargetID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterTargetNavigatorCommandNavigateTargetResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

    // Cluster MediaPlayback deprecated command id names
    WTLClusterMediaPlaybackCommandPlayID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaPlaybackCommandPlayID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterMediaPlaybackCommandPauseID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaPlaybackCommandPauseID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterMediaPlaybackCommandStopPlaybackID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaPlaybackCommandStopID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterMediaPlaybackCommandStartOverID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaPlaybackCommandStartOverID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterMediaPlaybackCommandPreviousID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaPlaybackCommandPreviousID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterMediaPlaybackCommandNextID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaPlaybackCommandNextID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterMediaPlaybackCommandRewindID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaPlaybackCommandRewindID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterMediaPlaybackCommandFastForwardID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterMediaPlaybackCommandFastForwardID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterMediaPlaybackCommandSkipForwardID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterMediaPlaybackCommandSkipForwardID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterMediaPlaybackCommandSkipBackwardID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterMediaPlaybackCommandSkipBackwardID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterMediaPlaybackCommandPlaybackResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterMediaPlaybackCommandPlaybackResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterMediaPlaybackCommandSeekID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaPlaybackCommandSeekID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,

    // Cluster MediaPlayback commands
    WTLCommandIDTypeClusterMediaPlaybackCommandPlayID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLCommandIDTypeClusterMediaPlaybackCommandPauseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLCommandIDTypeClusterMediaPlaybackCommandStopID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLCommandIDTypeClusterMediaPlaybackCommandStartOverID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterMediaPlaybackCommandPreviousID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterMediaPlaybackCommandNextID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000005,
    WTLCommandIDTypeClusterMediaPlaybackCommandRewindID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterMediaPlaybackCommandFastForwardID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterMediaPlaybackCommandSkipForwardID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLCommandIDTypeClusterMediaPlaybackCommandSkipBackwardID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLCommandIDTypeClusterMediaPlaybackCommandPlaybackResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLCommandIDTypeClusterMediaPlaybackCommandSeekID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x0000000B,

    // Cluster MediaInput deprecated command id names
    WTLClusterMediaInputCommandSelectInputID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaInputCommandSelectInputID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterMediaInputCommandShowInputStatusID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterMediaInputCommandShowInputStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterMediaInputCommandHideInputStatusID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterMediaInputCommandHideInputStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterMediaInputCommandRenameInputID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterMediaInputCommandRenameInputID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,

    // Cluster MediaInput commands
    WTLCommandIDTypeClusterMediaInputCommandSelectInputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterMediaInputCommandShowInputStatusID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterMediaInputCommandHideInputStatusID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterMediaInputCommandRenameInputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,

    // Cluster LowPower deprecated command id names
    WTLClusterLowPowerCommandSleepID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterLowPowerCommandSleepID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster LowPower commands
    WTLCommandIDTypeClusterLowPowerCommandSleepID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,

    // Cluster KeypadInput deprecated command id names
    WTLClusterKeypadInputCommandSendKeyID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterKeypadInputCommandSendKeyID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterKeypadInputCommandSendKeyResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterKeypadInputCommandSendKeyResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster KeypadInput commands
    WTLCommandIDTypeClusterKeypadInputCommandSendKeyID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLCommandIDTypeClusterKeypadInputCommandSendKeyResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

    // Cluster ContentLauncher deprecated command id names
    WTLClusterContentLauncherCommandLaunchContentID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterContentLauncherCommandLaunchContentID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterContentLauncherCommandLaunchURLID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterContentLauncherCommandLaunchURLID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterContentLauncherCommandLaunchResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterContentLauncherCommandLauncherResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,

    // Cluster ContentLauncher commands
    WTLCommandIDTypeClusterContentLauncherCommandLaunchContentID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterContentLauncherCommandLaunchURLID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterContentLauncherCommandLauncherResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,

    // Cluster AudioOutput deprecated command id names
    WTLClusterAudioOutputCommandSelectOutputID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterAudioOutputCommandSelectOutputID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterAudioOutputCommandRenameOutputID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterAudioOutputCommandRenameOutputID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster AudioOutput commands
    WTLCommandIDTypeClusterAudioOutputCommandSelectOutputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterAudioOutputCommandRenameOutputID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

    // Cluster ApplicationLauncher deprecated command id names
    WTLClusterApplicationLauncherCommandLaunchAppID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterApplicationLauncherCommandLaunchAppID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterApplicationLauncherCommandStopAppID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterApplicationLauncherCommandStopAppID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterApplicationLauncherCommandHideAppID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterApplicationLauncherCommandHideAppID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterApplicationLauncherCommandLauncherResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterApplicationLauncherCommandLauncherResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,

    // Cluster ApplicationLauncher commands
    WTLCommandIDTypeClusterApplicationLauncherCommandLaunchAppID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterApplicationLauncherCommandStopAppID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterApplicationLauncherCommandHideAppID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterApplicationLauncherCommandLauncherResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,

    // Cluster AccountLogin deprecated command id names
    WTLClusterAccountLoginCommandGetSetupPINID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterAccountLoginCommandGetSetupPINID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterAccountLoginCommandGetSetupPINResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterAccountLoginCommandGetSetupPINResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterAccountLoginCommandLoginID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterAccountLoginCommandLoginID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterAccountLoginCommandLogoutID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterAccountLoginCommandLogoutID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,

    // Cluster AccountLogin commands
    WTLCommandIDTypeClusterAccountLoginCommandGetSetupPINID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterAccountLoginCommandGetSetupPINResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterAccountLoginCommandLoginID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLCommandIDTypeClusterAccountLoginCommandLogoutID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000003,

    // Cluster ElectricalMeasurement deprecated command id names
    WTLClusterElectricalMeasurementCommandGetProfileInfoResponseCommandID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterElectricalMeasurementCommandGetProfileInfoResponseCommandID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterElectricalMeasurementCommandGetProfileInfoCommandID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterElectricalMeasurementCommandGetProfileInfoCommandID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterElectricalMeasurementCommandGetMeasurementProfileResponseCommandID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterElectricalMeasurementCommandGetMeasurementProfileResponseCommandID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterElectricalMeasurementCommandGetMeasurementProfileCommandID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterElectricalMeasurementCommandGetMeasurementProfileCommandID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster ElectricalMeasurement commands
    WTLCommandIDTypeClusterElectricalMeasurementCommandGetProfileInfoResponseCommandID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterElectricalMeasurementCommandGetProfileInfoCommandID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterElectricalMeasurementCommandGetMeasurementProfileResponseCommandID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterElectricalMeasurementCommandGetMeasurementProfileCommandID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

    // Cluster TestCluster deprecated command id names
    WTLClusterTestClusterCommandTestID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterUnitTestingCommandTestID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterTestClusterCommandTestSpecificResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestSpecificResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterTestClusterCommandTestNotHandledID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestNotHandledID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterTestClusterCommandTestAddArgumentsResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestAddArgumentsResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterTestClusterCommandTestSpecificID WTL_DEPRECATED("Please use WTLCommandIDTypeClusterUnitTestingCommandTestSpecificID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterTestClusterCommandTestSimpleArgumentResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestSimpleArgumentResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterTestClusterCommandTestUnknownCommandID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestUnknownCommandID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterTestClusterCommandTestStructArrayArgumentResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestStructArrayArgumentResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterTestClusterCommandTestAddArgumentsID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestAddArgumentsID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterTestClusterCommandTestListInt8UReverseResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestListInt8UReverseResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterTestClusterCommandTestSimpleArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestSimpleArgumentRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterTestClusterCommandTestEnumsResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestEnumsResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterTestClusterCommandTestStructArrayArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestStructArrayArgumentRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterTestClusterCommandTestNullableOptionalResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestNullableOptionalResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterTestClusterCommandTestStructArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestStructArgumentRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterTestClusterCommandTestComplexNullableOptionalResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestComplexNullableOptionalResponseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterTestClusterCommandTestNestedStructArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestNestedStructArgumentRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterTestClusterCommandBooleanResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandBooleanResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterTestClusterCommandTestListStructArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestListStructArgumentRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterTestClusterCommandSimpleStructResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandSimpleStructResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterTestClusterCommandTestListInt8UArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestListInt8UArgumentRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterTestClusterCommandTestEmitTestEventResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestEmitTestEventResponseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterTestClusterCommandTestNestedStructListArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestNestedStructListArgumentRequestID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterTestClusterCommandTestEmitTestFabricScopedEventResponseID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestEmitTestFabricScopedEventResponseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterTestClusterCommandTestListNestedStructListArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestListNestedStructListArgumentRequestID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterTestClusterCommandTestListInt8UReverseRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestListInt8UReverseRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterTestClusterCommandTestEnumsRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestEnumsRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterTestClusterCommandTestNullableOptionalRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestNullableOptionalRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterTestClusterCommandTestComplexNullableOptionalRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestComplexNullableOptionalRequestID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,
    WTLClusterTestClusterCommandSimpleStructEchoRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandSimpleStructEchoRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000011,
    WTLClusterTestClusterCommandTimedInvokeRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTimedInvokeRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000012,
    WTLClusterTestClusterCommandTestSimpleOptionalArgumentRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestSimpleOptionalArgumentRequestID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000013,
    WTLClusterTestClusterCommandTestEmitTestEventRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestEmitTestEventRequestID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000014,
    WTLClusterTestClusterCommandTestEmitTestFabricScopedEventRequestID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterUnitTestingCommandTestEmitTestFabricScopedEventRequestID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000015,

    // Cluster UnitTesting commands
    WTLCommandIDTypeClusterUnitTestingCommandTestID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLCommandIDTypeClusterUnitTestingCommandTestSpecificResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterUnitTestingCommandTestNotHandledID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterUnitTestingCommandTestAddArgumentsResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLCommandIDTypeClusterUnitTestingCommandTestSpecificID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterUnitTestingCommandTestSimpleArgumentResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLCommandIDTypeClusterUnitTestingCommandTestUnknownCommandID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterUnitTestingCommandTestStructArrayArgumentResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLCommandIDTypeClusterUnitTestingCommandTestAddArgumentsID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterUnitTestingCommandTestListInt8UReverseResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLCommandIDTypeClusterUnitTestingCommandTestSimpleArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLCommandIDTypeClusterUnitTestingCommandTestEnumsResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLCommandIDTypeClusterUnitTestingCommandTestStructArrayArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterUnitTestingCommandTestNullableOptionalResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLCommandIDTypeClusterUnitTestingCommandTestStructArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterUnitTestingCommandTestComplexNullableOptionalResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLCommandIDTypeClusterUnitTestingCommandTestNestedStructArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLCommandIDTypeClusterUnitTestingCommandBooleanResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLCommandIDTypeClusterUnitTestingCommandTestListStructArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLCommandIDTypeClusterUnitTestingCommandSimpleStructResponseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLCommandIDTypeClusterUnitTestingCommandTestListInt8UArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLCommandIDTypeClusterUnitTestingCommandTestEmitTestEventResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLCommandIDTypeClusterUnitTestingCommandTestNestedStructListArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLCommandIDTypeClusterUnitTestingCommandTestEmitTestFabricScopedEventResponseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLCommandIDTypeClusterUnitTestingCommandTestListNestedStructListArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLCommandIDTypeClusterUnitTestingCommandTestListInt8UReverseRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLCommandIDTypeClusterUnitTestingCommandTestEnumsRequestID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLCommandIDTypeClusterUnitTestingCommandTestNullableOptionalRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLCommandIDTypeClusterUnitTestingCommandTestComplexNullableOptionalRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,
    WTLCommandIDTypeClusterUnitTestingCommandSimpleStructEchoRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000011,
    WTLCommandIDTypeClusterUnitTestingCommandTimedInvokeRequestID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000012,
    WTLCommandIDTypeClusterUnitTestingCommandTestSimpleOptionalArgumentRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000013,
    WTLCommandIDTypeClusterUnitTestingCommandTestEmitTestEventRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000014,
    WTLCommandIDTypeClusterUnitTestingCommandTestEmitTestFabricScopedEventRequestID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000015,

    // Cluster FaultInjection deprecated command id names
    WTLClusterFaultInjectionCommandFailAtFaultID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterFaultInjectionCommandFailAtFaultID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterFaultInjectionCommandFailRandomlyAtFaultID WTL_DEPRECATED(
        "Please use WTLCommandIDTypeClusterFaultInjectionCommandFailRandomlyAtFaultID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster FaultInjection commands
    WTLCommandIDTypeClusterFaultInjectionCommandFailAtFaultID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLCommandIDTypeClusterFaultInjectionCommandFailRandomlyAtFaultID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

};

#pragma mark - Events IDs

typedef NS_ENUM(uint32_t, WTLEventIDType) {

    // Cluster AccessControl deprecated event names
    WTLClusterAccessControlEventAccessControlEntryChangedID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterAccessControlEventAccessControlEntryChangedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterAccessControlEventAccessControlExtensionChangedID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterAccessControlEventAccessControlExtensionChangedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster AccessControl events
    WTLEventIDTypeClusterAccessControlEventAccessControlEntryChangedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterAccessControlEventAccessControlExtensionChangedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

    // Cluster Actions deprecated event names
    WTLClusterActionsEventStateChangedID WTL_DEPRECATED("Please use WTLEventIDTypeClusterActionsEventStateChangedID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterActionsEventActionFailedID WTL_DEPRECATED("Please use WTLEventIDTypeClusterActionsEventActionFailedID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster Actions events
    WTLEventIDTypeClusterActionsEventStateChangedID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLEventIDTypeClusterActionsEventActionFailedID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,

    // Cluster Basic deprecated event names
    WTLClusterBasicEventStartUpID WTL_DEPRECATED("Please use WTLEventIDTypeClusterBasicInformationEventStartUpID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterBasicEventShutDownID WTL_DEPRECATED("Please use WTLEventIDTypeClusterBasicInformationEventShutDownID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterBasicEventLeaveID WTL_DEPRECATED("Please use WTLEventIDTypeClusterBasicInformationEventLeaveID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterBasicEventReachableChangedID WTL_DEPRECATED("Please use WTLEventIDTypeClusterBasicInformationEventReachableChangedID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,

    // Cluster BasicInformation events
    WTLEventIDTypeClusterBasicInformationEventStartUpID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterBasicInformationEventShutDownID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLEventIDTypeClusterBasicInformationEventLeaveID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLEventIDTypeClusterBasicInformationEventReachableChangedID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,

    // Cluster OtaSoftwareUpdateRequestor deprecated event names
    WTLClusterOtaSoftwareUpdateRequestorEventStateTransitionID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterOTASoftwareUpdateRequestorEventStateTransitionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterOtaSoftwareUpdateRequestorEventVersionAppliedID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterOTASoftwareUpdateRequestorEventVersionAppliedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterOtaSoftwareUpdateRequestorEventDownloadErrorID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterOTASoftwareUpdateRequestorEventDownloadErrorID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,

    // Cluster OTASoftwareUpdateRequestor events
    WTLEventIDTypeClusterOTASoftwareUpdateRequestorEventStateTransitionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterOTASoftwareUpdateRequestorEventVersionAppliedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLEventIDTypeClusterOTASoftwareUpdateRequestorEventDownloadErrorID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,

    // Cluster PowerSource deprecated event names

    // Cluster PowerSource events
    WTLEventIDTypeClusterPowerSourceEventWiredFaultChangeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterPowerSourceEventBatFaultChangeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLEventIDTypeClusterPowerSourceEventBatChargeFaultChangeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,

    // Cluster GeneralDiagnostics deprecated event names
    WTLClusterGeneralDiagnosticsEventHardwareFaultChangeID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterGeneralDiagnosticsEventHardwareFaultChangeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterGeneralDiagnosticsEventRadioFaultChangeID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterGeneralDiagnosticsEventRadioFaultChangeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterGeneralDiagnosticsEventNetworkFaultChangeID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterGeneralDiagnosticsEventNetworkFaultChangeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterGeneralDiagnosticsEventBootReasonID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterGeneralDiagnosticsEventBootReasonID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,

    // Cluster GeneralDiagnostics events
    WTLEventIDTypeClusterGeneralDiagnosticsEventHardwareFaultChangeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterGeneralDiagnosticsEventRadioFaultChangeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLEventIDTypeClusterGeneralDiagnosticsEventNetworkFaultChangeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLEventIDTypeClusterGeneralDiagnosticsEventBootReasonID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,

    // Cluster SoftwareDiagnostics deprecated event names
    WTLClusterSoftwareDiagnosticsEventSoftwareFaultID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterSoftwareDiagnosticsEventSoftwareFaultID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster SoftwareDiagnostics events
    WTLEventIDTypeClusterSoftwareDiagnosticsEventSoftwareFaultID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster ThreadNetworkDiagnostics deprecated event names
    WTLClusterThreadNetworkDiagnosticsEventConnectionStatusID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterThreadNetworkDiagnosticsEventConnectionStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterThreadNetworkDiagnosticsEventNetworkFaultChangeID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterThreadNetworkDiagnosticsEventNetworkFaultChangeID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,

    // Cluster ThreadNetworkDiagnostics events
    WTLEventIDTypeClusterThreadNetworkDiagnosticsEventConnectionStatusID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterThreadNetworkDiagnosticsEventNetworkFaultChangeID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,

    // Cluster WiFiNetworkDiagnostics deprecated event names
    WTLClusterWiFiNetworkDiagnosticsEventDisconnectionID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterWiFiNetworkDiagnosticsEventDisconnectionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterWiFiNetworkDiagnosticsEventAssociationFailureID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterWiFiNetworkDiagnosticsEventAssociationFailureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterWiFiNetworkDiagnosticsEventConnectionStatusID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterWiFiNetworkDiagnosticsEventConnectionStatusID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,

    // Cluster WiFiNetworkDiagnostics events
    WTLEventIDTypeClusterWiFiNetworkDiagnosticsEventDisconnectionID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterWiFiNetworkDiagnosticsEventAssociationFailureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLEventIDTypeClusterWiFiNetworkDiagnosticsEventConnectionStatusID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,

    // Cluster BridgedDeviceBasic deprecated event names
    WTLClusterBridgedDeviceBasicEventStartUpID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterBridgedDeviceBasicInformationEventStartUpID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterBridgedDeviceBasicEventShutDownID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterBridgedDeviceBasicInformationEventShutDownID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterBridgedDeviceBasicEventLeaveID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterBridgedDeviceBasicInformationEventLeaveID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterBridgedDeviceBasicEventReachableChangedID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterBridgedDeviceBasicInformationEventReachableChangedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,

    // Cluster BridgedDeviceBasicInformation events
    WTLEventIDTypeClusterBridgedDeviceBasicInformationEventStartUpID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterBridgedDeviceBasicInformationEventShutDownID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLEventIDTypeClusterBridgedDeviceBasicInformationEventLeaveID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLEventIDTypeClusterBridgedDeviceBasicInformationEventReachableChangedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,

    // Cluster Switch deprecated event names
    WTLClusterSwitchEventSwitchLatchedID WTL_DEPRECATED("Please use WTLEventIDTypeClusterSwitchEventSwitchLatchedID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterSwitchEventInitialPressID WTL_DEPRECATED("Please use WTLEventIDTypeClusterSwitchEventInitialPressID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterSwitchEventLongPressID WTL_DEPRECATED("Please use WTLEventIDTypeClusterSwitchEventLongPressID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterSwitchEventShortReleaseID WTL_DEPRECATED("Please use WTLEventIDTypeClusterSwitchEventShortReleaseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterSwitchEventLongReleaseID WTL_DEPRECATED("Please use WTLEventIDTypeClusterSwitchEventLongReleaseID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterSwitchEventMultiPressOngoingID WTL_DEPRECATED("Please use WTLEventIDTypeClusterSwitchEventMultiPressOngoingID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterSwitchEventMultiPressCompleteID WTL_DEPRECATED("Please use WTLEventIDTypeClusterSwitchEventMultiPressCompleteID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,

    // Cluster Switch events
    WTLEventIDTypeClusterSwitchEventSwitchLatchedID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLEventIDTypeClusterSwitchEventInitialPressID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLEventIDTypeClusterSwitchEventLongPressID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLEventIDTypeClusterSwitchEventShortReleaseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000003,
    WTLEventIDTypeClusterSwitchEventLongReleaseID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000004,
    WTLEventIDTypeClusterSwitchEventMultiPressOngoingID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLEventIDTypeClusterSwitchEventMultiPressCompleteID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,

    // Cluster BooleanState deprecated event names
    WTLClusterBooleanStateEventStateChangeID WTL_DEPRECATED("Please use WTLEventIDTypeClusterBooleanStateEventStateChangeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,

    // Cluster BooleanState events
    WTLEventIDTypeClusterBooleanStateEventStateChangeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,

    // Cluster DoorLock deprecated event names
    WTLClusterDoorLockEventDoorLockAlarmID WTL_DEPRECATED("Please use WTLEventIDTypeClusterDoorLockEventDoorLockAlarmID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterDoorLockEventDoorStateChangeID WTL_DEPRECATED("Please use WTLEventIDTypeClusterDoorLockEventDoorStateChangeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterDoorLockEventLockOperationID WTL_DEPRECATED("Please use WTLEventIDTypeClusterDoorLockEventLockOperationID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterDoorLockEventLockOperationErrorID WTL_DEPRECATED("Please use WTLEventIDTypeClusterDoorLockEventLockOperationErrorID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterDoorLockEventLockUserChangeID WTL_DEPRECATED("Please use WTLEventIDTypeClusterDoorLockEventLockUserChangeID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,

    // Cluster DoorLock events
    WTLEventIDTypeClusterDoorLockEventDoorLockAlarmID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000000,
    WTLEventIDTypeClusterDoorLockEventDoorStateChangeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLEventIDTypeClusterDoorLockEventLockOperationID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000002,
    WTLEventIDTypeClusterDoorLockEventLockOperationErrorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLEventIDTypeClusterDoorLockEventLockUserChangeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000004,

    // Cluster PumpConfigurationAndControl deprecated event names
    WTLClusterPumpConfigurationAndControlEventSupplyVoltageLowID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventSupplyVoltageLowID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000000,
    WTLClusterPumpConfigurationAndControlEventSupplyVoltageHighID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventSupplyVoltageHighID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterPumpConfigurationAndControlEventPowerMissingPhaseID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventPowerMissingPhaseID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,
    WTLClusterPumpConfigurationAndControlEventSystemPressureLowID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventSystemPressureLowID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000003,
    WTLClusterPumpConfigurationAndControlEventSystemPressureHighID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventSystemPressureHighID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000004,
    WTLClusterPumpConfigurationAndControlEventDryRunningID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventDryRunningID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000005,
    WTLClusterPumpConfigurationAndControlEventMotorTemperatureHighID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventMotorTemperatureHighID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000006,
    WTLClusterPumpConfigurationAndControlEventPumpMotorFatalFailureID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventPumpMotorFatalFailureID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000007,
    WTLClusterPumpConfigurationAndControlEventElectronicTemperatureHighID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventElectronicTemperatureHighID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000008,
    WTLClusterPumpConfigurationAndControlEventPumpBlockedID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventPumpBlockedID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000009,
    WTLClusterPumpConfigurationAndControlEventSensorFailureID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventSensorFailureID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000A,
    WTLClusterPumpConfigurationAndControlEventElectronicNonFatalFailureID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventElectronicNonFatalFailureID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000B,
    WTLClusterPumpConfigurationAndControlEventElectronicFatalFailureID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventElectronicFatalFailureID", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000C,
    WTLClusterPumpConfigurationAndControlEventGeneralFaultID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventGeneralFaultID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000D,
    WTLClusterPumpConfigurationAndControlEventLeakageID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventLeakageID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000E,
    WTLClusterPumpConfigurationAndControlEventAirDetectionID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventAirDetectionID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x0000000F,
    WTLClusterPumpConfigurationAndControlEventTurbineOperationID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterPumpConfigurationAndControlEventTurbineOperationID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000010,

    // Cluster PumpConfigurationAndControl events
    WTLEventIDTypeClusterPumpConfigurationAndControlEventSupplyVoltageLowID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000000,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventSupplyVoltageHighID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000001,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventPowerMissingPhaseID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventSystemPressureLowID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000003,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventSystemPressureHighID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000004,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventDryRunningID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000005,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventMotorTemperatureHighID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000006,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventPumpMotorFatalFailureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000007,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventElectronicTemperatureHighID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000008,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventPumpBlockedID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000009,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventSensorFailureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000A,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventElectronicNonFatalFailureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000B,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventElectronicFatalFailureID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000C,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventGeneralFaultID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000D,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventLeakageID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000E,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventAirDetectionID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x0000000F,
    WTLEventIDTypeClusterPumpConfigurationAndControlEventTurbineOperationID API_AVAILABLE(
        macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000010,

    // Cluster TestCluster deprecated event names
    WTLClusterTestClusterEventTestEventID WTL_DEPRECATED("Please use WTLEventIDTypeClusterUnitTestingEventTestEventID",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000001,
    WTLClusterTestClusterEventTestFabricScopedEventID WTL_DEPRECATED(
        "Please use WTLEventIDTypeClusterUnitTestingEventTestFabricScopedEventID",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4))
    = 0x00000002,

    // Cluster UnitTesting events
    WTLEventIDTypeClusterUnitTestingEventTestEventID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) = 0x00000001,
    WTLEventIDTypeClusterUnitTestingEventTestFabricScopedEventID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    = 0x00000002,

};
