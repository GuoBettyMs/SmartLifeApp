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

#import <Water/WTLBaseClusters.h>
#import <Water/WTLCluster.h>
#import <Water/WTLCommandPayloadsObjc.h>
#import <Water/WTLDefines.h>
#import <Water/WTLDevice.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Cluster Identify
 *    Attributes and commands for putting a device into Identification mode (e.g. flashing a light).
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterIdentify : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)identifyWithParams:(WTLIdentifyClusterIdentifyParams *)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)triggerEffectWithParams:(WTLIdentifyClusterTriggerEffectParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeIdentifyTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeIdentifyTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeIdentifyTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeIdentifyTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Groups
 *    Attributes and commands for group configuration and manipulation.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterGroups : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)addGroupWithParams:(WTLGroupsClusterAddGroupParams *)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completion:(void (^)(WTLGroupsClusterAddGroupResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)viewGroupWithParams:(WTLGroupsClusterViewGroupParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:
                     (void (^)(WTLGroupsClusterViewGroupResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getGroupMembershipWithParams:(WTLGroupsClusterGetGroupMembershipParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(void (^)(WTLGroupsClusterGetGroupMembershipResponseParams * _Nullable data,
                                         NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)removeGroupWithParams:(WTLGroupsClusterRemoveGroupParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:
                       (void (^)(WTLGroupsClusterRemoveGroupResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)removeAllGroupsWithParams:(WTLGroupsClusterRemoveAllGroupsParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)removeAllGroupsWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)addGroupIfIdentifyingWithParams:(WTLGroupsClusterAddGroupIfIdentifyingParams *)params
                         expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                  expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                             completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNameSupportWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Scenes
 *    Attributes and commands for scene configuration and manipulation.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterScenes : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)addSceneWithParams:(WTLScenesClusterAddSceneParams *)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completion:(void (^)(WTLScenesClusterAddSceneResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)viewSceneWithParams:(WTLScenesClusterViewSceneParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:
                     (void (^)(WTLScenesClusterViewSceneResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)removeSceneWithParams:(WTLScenesClusterRemoveSceneParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:
                       (void (^)(WTLScenesClusterRemoveSceneResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)removeAllScenesWithParams:(WTLScenesClusterRemoveAllScenesParams *)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completion:(void (^)(WTLScenesClusterRemoveAllScenesResponseParams * _Nullable data,
                                      NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)storeSceneWithParams:(WTLScenesClusterStoreSceneParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completion:
                      (void (^)(WTLScenesClusterStoreSceneResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)recallSceneWithParams:(WTLScenesClusterRecallSceneParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getSceneMembershipWithParams:(WTLScenesClusterGetSceneMembershipParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(void (^)(WTLScenesClusterGetSceneMembershipResponseParams * _Nullable data,
                                         NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)enhancedAddSceneWithParams:(WTLScenesClusterEnhancedAddSceneParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completion:(void (^)(WTLScenesClusterEnhancedAddSceneResponseParams * _Nullable data,
                                       NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)enhancedViewSceneWithParams:(WTLScenesClusterEnhancedViewSceneParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completion:(void (^)(WTLScenesClusterEnhancedViewSceneResponseParams * _Nullable data,
                                        NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)copySceneWithParams:(WTLScenesClusterCopySceneParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:
                     (void (^)(WTLScenesClusterCopySceneResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSceneCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentSceneWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentGroupWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSceneValidWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNameSupportWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLastConfiguredByWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster On/Off
 *    Attributes and commands for switching devices between 'On' and 'Off' states.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterOnOff : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)offWithParams:(WTLOnOffClusterOffParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)offWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)onWithParams:(WTLOnOffClusterOnParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)onWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                  completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)toggleWithParams:(WTLOnOffClusterToggleParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)toggleWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                      completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)offWithEffectWithParams:(WTLOnOffClusterOffWithEffectParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)onWithRecallGlobalSceneWithParams:(WTLOnOffClusterOnWithRecallGlobalSceneParams * _Nullable)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                               completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)onWithRecallGlobalSceneWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)onWithTimedOffWithParams:(WTLOnOffClusterOnWithTimedOffParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeOnOffWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGlobalSceneControlWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOnTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOffWaitTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOffWaitTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOffWaitTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStartUpOnOffWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeStartUpOnOffWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeStartUpOnOffWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster On/off Switch Configuration
 *    Attributes and commands for configuring On/Off switching devices.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterOnOffSwitchConfiguration : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSwitchTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSwitchActionsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSwitchActionsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSwitchActionsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Level Control
 *    Attributes and commands for controlling devices that can be set to a level between fully 'On' and fully 'Off.'
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterLevelControl : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)moveToLevelWithParams:(WTLLevelControlClusterMoveToLevelParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveWithParams:(WTLLevelControlClusterMoveParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stepWithParams:(WTLLevelControlClusterStepParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopWithParams:(WTLLevelControlClusterStopParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveToLevelWithOnOffWithParams:(WTLLevelControlClusterMoveToLevelWithOnOffParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveWithOnOffWithParams:(WTLLevelControlClusterMoveWithOnOffParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stepWithOnOffWithParams:(WTLLevelControlClusterStepWithOnOffParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopWithOnOffWithParams:(WTLLevelControlClusterStopWithOnOffParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveToClosestFrequencyWithParams:(WTLLevelControlClusterMoveToClosestFrequencyParams *)params
                          expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                   expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                              completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeCurrentLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRemainingTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentFrequencyWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinFrequencyWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxFrequencyWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOptionsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOptionsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOptionsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOnOffTransitionTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnOffTransitionTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnOffTransitionTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOnLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnLevelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnLevelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOnTransitionTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnTransitionTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnTransitionTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOffTransitionTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOffTransitionTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOffTransitionTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                          params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDefaultMoveRateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeDefaultMoveRateWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeDefaultMoveRateWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStartUpCurrentLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeStartUpCurrentLevelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeStartUpCurrentLevelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Binary Input (Basic)
 *    An interface for reading the value of a binary measurement and accessing various characteristics of that measurement.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterBinaryInputBasic : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeActiveTextWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeActiveTextWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeActiveTextWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDescriptionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeDescriptionWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeDescriptionWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInactiveTextWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeInactiveTextWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeInactiveTextWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOutOfServiceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOutOfServiceWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOutOfServiceWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePolarityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePresentValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePresentValueWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePresentValueWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeReliabilityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeReliabilityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeReliabilityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStatusFlagsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeApplicationTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Descriptor
 *    The Descriptor Cluster is meant to replace the support from the Zigbee Device Object (ZDO) for describing a node, its
 * endpoints and clusters.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterDescriptor : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeDeviceTypeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeServerListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClientListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePartsListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Binding
 *    The Binding Cluster is meant to replace the support from the Zigbee Device Object (ZDO) for supporting the binding table.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterBinding : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBindingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBindingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBindingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Access Control
 *    The Access Control Cluster exposes a data model view of a
      Node's Access Control List (ACL), which codifies the rules used to manage
      and enforce Access Control for the Node's endpoints and their associated
      cluster instances.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterAccessControl : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeACLWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeACLWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeACLWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeExtensionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeExtensionWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeExtensionWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                  params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSubjectsPerAccessControlEntryWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTargetsPerAccessControlEntryWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAccessControlEntriesPerFabricWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Actions
 *    This cluster provides a standardized way for a Node (typically a Bridge, but could be any Node) to expose action information.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterActions : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)instantActionWithParams:(WTLActionsClusterInstantActionParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)instantActionWithTransitionWithParams:(WTLActionsClusterInstantActionWithTransitionParams *)params
                               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                   completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)startActionWithParams:(WTLActionsClusterStartActionParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)startActionWithDurationWithParams:(WTLActionsClusterStartActionWithDurationParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                               completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopActionWithParams:(WTLActionsClusterStopActionParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)pauseActionWithParams:(WTLActionsClusterPauseActionParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)pauseActionWithDurationWithParams:(WTLActionsClusterPauseActionWithDurationParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                               completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)resumeActionWithParams:(WTLActionsClusterResumeActionParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)enableActionWithParams:(WTLActionsClusterEnableActionParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)enableActionWithDurationWithParams:(WTLActionsClusterEnableActionWithDurationParams *)params
                            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)disableActionWithParams:(WTLActionsClusterDisableActionParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)disableActionWithDurationWithParams:(WTLActionsClusterDisableActionWithDurationParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                 completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeActionListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEndpointListsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSetupURLWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Basic Information
 *    This cluster provides attributes and events for determining basic information about Nodes, which supports both
      Commissioning and operational determination of Node characteristics, such as Vendor ID, Product ID and serial number,
      which apply to the whole Node. Also allows setting user device information such as location.
 */
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLClusterBasicInformation : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeDataModelRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeVendorNameWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeVendorIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductNameWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNodeLabelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNodeLabelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNodeLabelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                  params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeLocationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeLocationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeLocationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeHardwareVersionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeHardwareVersionStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSoftwareVersionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSoftwareVersionStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeManufacturingDateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributePartNumberWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductURLWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductLabelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSerialNumberWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeLocalConfigDisabledWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeLocalConfigDisabledWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeLocalConfigDisabledWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeReachableWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeUniqueIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeCapabilityMinimaWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductAppearanceWithParams:(WTLReadParams * _Nullable)params WTL_NEWLY_AVAILABLE;

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster OTA Software Update Provider
 *    Provides an interface for providing OTA software updates
 */
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLClusterOTASoftwareUpdateProvider : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)queryImageWithParams:(WTLOTASoftwareUpdateProviderClusterQueryImageParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completion:(void (^)(WTLOTASoftwareUpdateProviderClusterQueryImageResponseParams * _Nullable data,
                                 NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)applyUpdateRequestWithParams:(WTLOTASoftwareUpdateProviderClusterApplyUpdateRequestParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(void (^)(WTLOTASoftwareUpdateProviderClusterApplyUpdateResponseParams * _Nullable data,
                                         NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)notifyUpdateAppliedWithParams:(WTLOTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                           completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster OTA Software Update Requestor
 *    Provides an interface for downloading and applying OTA software updates
 */
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLClusterOTASoftwareUpdateRequestor : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)announceOTAProviderWithParams:(WTLOTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                           completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeDefaultOTAProvidersWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeDefaultOTAProvidersWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeDefaultOTAProvidersWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeUpdatePossibleWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeUpdateStateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeUpdateStateProgressWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Localization Configuration
 *    Nodes should be expected to be deployed to any and all regions of the world. These global regions
      may have differing common languages, units of measurements, and numerical formatting
      standards. As such, Nodes that visually or audibly convey information need a mechanism by which
      they can be configured to use a user’s preferred language, units, etc
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterLocalizationConfiguration : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeActiveLocaleWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeActiveLocaleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeActiveLocaleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSupportedLocalesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Time Format Localization
 *    Nodes should be expected to be deployed to any and all regions of the world. These global regions
      may have differing preferences for how dates and times are conveyed. As such, Nodes that visually
      or audibly convey time information need a mechanism by which they can be configured to use a
      user’s preferred format.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterTimeFormatLocalization : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeHourFormatWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeHourFormatWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeHourFormatWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveCalendarTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeActiveCalendarTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeActiveCalendarTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                           params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSupportedCalendarTypesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Unit Localization
 *    Nodes should be expected to be deployed to any and all regions of the world. These global regions
      may have differing preferences for the units in which values are conveyed in communication to a
      user. As such, Nodes that visually or audibly convey measurable values to the user need a
      mechanism by which they can be configured to use a user’s preferred unit.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterUnitLocalization : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeTemperatureUnitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeTemperatureUnitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeTemperatureUnitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Power Source Configuration
 *    This cluster is used to describe the configuration and capabilities of a Device's power system.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterPowerSourceConfiguration : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSourcesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Power Source
 *    This cluster is used to describe the configuration and capabilities of a physical power source that provides power to the
 * Node.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterPowerSource : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOrderWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDescriptionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWiredAssessedInputVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWiredAssessedInputFrequencyWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWiredCurrentTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWiredAssessedCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWiredNominalVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWiredMaximumCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWiredPresentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveWiredFaultsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatPercentRemainingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatTimeRemainingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatChargeLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatReplacementNeededWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatReplaceabilityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatPresentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveBatFaultsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatReplacementDescriptionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatCommonDesignationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatANSIDesignationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatIECDesignationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatApprovedChemistryWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatCapacityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatQuantityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatChargeStateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatTimeToFullChargeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatFunctionalWhileChargingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBatChargingCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveBatChargeFaultsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster General Commissioning
 *    This cluster is used to manage global aspects of the Commissioning flow.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterGeneralCommissioning : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)armFailSafeWithParams:(WTLGeneralCommissioningClusterArmFailSafeParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(void (^)(WTLGeneralCommissioningClusterArmFailSafeResponseParams * _Nullable data,
                                  NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)setRegulatoryConfigWithParams:(WTLGeneralCommissioningClusterSetRegulatoryConfigParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                           completion:(void (^)(WTLGeneralCommissioningClusterSetRegulatoryConfigResponseParams * _Nullable data,
                                          NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)commissioningCompleteWithParams:(WTLGeneralCommissioningClusterCommissioningCompleteParams * _Nullable)params
                         expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                  expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                             completion:
                                 (void (^)(WTLGeneralCommissioningClusterCommissioningCompleteResponseParams * _Nullable data,
                                     NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)commissioningCompleteWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     completion:
                                         (void (^)(
                                             WTLGeneralCommissioningClusterCommissioningCompleteResponseParams * _Nullable data,
                                             NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBreadcrumbWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBreadcrumbWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBreadcrumbWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBasicCommissioningInfoWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRegulatoryConfigWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLocationCapabilityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSupportsConcurrentConnectionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Network Commissioning
 *    Functionality to configure, enable, disable network credentials and access on a Matter device.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterNetworkCommissioning : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)scanNetworksWithParams:(WTLNetworkCommissioningClusterScanNetworksParams * _Nullable)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(void (^)(WTLNetworkCommissioningClusterScanNetworksResponseParams * _Nullable data,
                                   NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)addOrUpdateWiFiNetworkWithParams:(WTLNetworkCommissioningClusterAddOrUpdateWiFiNetworkParams *)params
                          expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                   expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                              completion:(void (^)(WTLNetworkCommissioningClusterNetworkConfigResponseParams * _Nullable data,
                                             NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)addOrUpdateThreadNetworkWithParams:(WTLNetworkCommissioningClusterAddOrUpdateThreadNetworkParams *)params
                            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                completion:(void (^)(WTLNetworkCommissioningClusterNetworkConfigResponseParams * _Nullable data,
                                               NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)removeNetworkWithParams:(WTLNetworkCommissioningClusterRemoveNetworkParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(void (^)(WTLNetworkCommissioningClusterNetworkConfigResponseParams * _Nullable data,
                                    NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)connectNetworkWithParams:(WTLNetworkCommissioningClusterConnectNetworkParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completion:(void (^)(WTLNetworkCommissioningClusterConnectNetworkResponseParams * _Nullable data,
                                     NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)reorderNetworkWithParams:(WTLNetworkCommissioningClusterReorderNetworkParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completion:(void (^)(WTLNetworkCommissioningClusterNetworkConfigResponseParams * _Nullable data,
                                     NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMaxNetworksWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNetworksWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeScanMaxTimeSecondsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeConnectMaxTimeSecondsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInterfaceEnabledWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeInterfaceEnabledWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeInterfaceEnabledWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLastNetworkingStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLastNetworkIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLastConnectErrorValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Diagnostic Logs
 *    The cluster provides commands for retrieving unstructured diagnostic logs from a Node that may be used to aid in diagnostics.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterDiagnosticLogs : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)retrieveLogsRequestWithParams:(WTLDiagnosticLogsClusterRetrieveLogsRequestParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                           completion:(void (^)(WTLDiagnosticLogsClusterRetrieveLogsResponseParams * _Nullable data,
                                          NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster General Diagnostics
 *    The General Diagnostics Cluster, along with other diagnostics clusters, provide a means to acquire standardized diagnostics
 * metrics that MAY be used by a Node to assist a user or Administrative Node in diagnosing potential problems.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterGeneralDiagnostics : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)testEventTriggerWithParams:(WTLGeneralDiagnosticsClusterTestEventTriggerParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNetworkInterfacesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRebootCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUpTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTotalOperationalHoursWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBootReasonWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeActiveHardwareFaultsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveRadioFaultsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveNetworkFaultsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTestEventTriggersEnabledWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Software Diagnostics
 *    The Software Diagnostics Cluster provides a means to acquire standardized diagnostics metrics that MAY be used by a Node to
 * assist a user or Administrative Node in diagnosing potential problems.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterSoftwareDiagnostics : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)resetWatermarksWithParams:(WTLSoftwareDiagnosticsClusterResetWatermarksParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)resetWatermarksWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeThreadMetricsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentHeapFreeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentHeapUsedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentHeapHighWatermarkWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Thread Network Diagnostics
 *    The Thread Network Diagnostics Cluster provides a means to acquire standardized diagnostics metrics that MAY be used by a Node
 * to assist a user or Administrative Node in diagnosing potential problems
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterThreadNetworkDiagnostics : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)resetCountsWithParams:(WTLThreadNetworkDiagnosticsClusterResetCountsParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)resetCountsWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                           completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeChannelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRoutingRoleWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNetworkNameWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePanIdWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeExtendedPanIdWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeshLocalPrefixWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOverrunCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNeighborTableWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeRouteTableWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributePartitionIdWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWeightingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDataVersionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStableDataVersionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLeaderRouterIdWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDetachedRoleCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeChildRoleCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRouterRoleCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLeaderRoleCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttachAttemptCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePartitionIdChangeCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBetterPartitionAttachAttemptCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeParentChangeCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxTotalCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxUnicastCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxBroadcastCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxAckRequestedCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxAckedCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxNoAckRequestedCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxDataCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxDataPollCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxBeaconCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxBeaconRequestCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxOtherCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxRetryCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxDirectMaxRetryExpiryCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxIndirectMaxRetryExpiryCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxErrCcaCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxErrAbortCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxErrBusyChannelCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxTotalCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxUnicastCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxBroadcastCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxDataCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxDataPollCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxBeaconCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxBeaconRequestCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxOtherCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxAddressFilteredCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxDestAddrFilteredCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxDuplicatedCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxErrNoFrameCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxErrUnknownNeighborCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxErrInvalidSrcAddrCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxErrSecCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxErrFcsCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRxErrOtherCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveTimestampWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePendingTimestampWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDelayWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSecurityPolicyWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeChannelPage0MaskWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOperationalDatasetComponentsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveNetworkFaultsListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster WiFi Network Diagnostics
 *    The Wi-Fi Network Diagnostics Cluster provides a means to acquire standardized diagnostics metrics that MAY be used by a Node
 * to assist a user or Administrative Node in diagnosing potential problems.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterWiFiNetworkDiagnostics : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)resetCountsWithParams:(WTLWiFiNetworkDiagnosticsClusterResetCountsParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)resetCountsWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                           completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBSSIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSecurityTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWiFiVersionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeChannelNumberWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRSSIWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBeaconLostCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBeaconRxCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePacketMulticastRxCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePacketMulticastTxCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePacketUnicastRxCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePacketUnicastTxCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentMaxRateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOverrunCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Ethernet Network Diagnostics
 *    The Ethernet Network Diagnostics Cluster provides a means to acquire standardized diagnostics metrics that MAY be used by a
 * Node to assist a user or Administrative Node in diagnosing potential problems.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterEthernetNetworkDiagnostics : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)resetCountsWithParams:(WTLEthernetNetworkDiagnosticsClusterResetCountsParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)resetCountsWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                           completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributePHYRateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFullDuplexWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePacketRxCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePacketTxCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTxErrCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCollisionCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOverrunCountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCarrierDetectWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTimeSinceResetWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Bridged Device Basic Information
 *    This Cluster serves two purposes towards a Node communicating with a Bridge: indicate that the functionality on
          the Endpoint where it is placed (and its Parts) is bridged from a non-CHIP technology; and provide a centralized
          collection of attributes that the Node MAY collect to aid in conveying information regarding the Bridged Device to a user,
          such as the vendor name, the model name, or user-assigned name.
 */
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLClusterBridgedDeviceBasicInformation : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeVendorNameWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeVendorIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductNameWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNodeLabelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNodeLabelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNodeLabelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                  params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeHardwareVersionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeHardwareVersionStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSoftwareVersionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSoftwareVersionStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeManufacturingDateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributePartNumberWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductURLWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductLabelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeSerialNumberWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeReachableWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeUniqueIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeProductAppearanceWithParams:(WTLReadParams * _Nullable)params WTL_NEWLY_AVAILABLE;

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Switch
 *    This cluster exposes interactions with a switch device, for the purpose of using those interactions by other devices.
Two types of switch devices are supported: latching switch (e.g. rocker switch) and momentary switch (e.g. push button),
distinguished with their feature flags. Interactions with the switch device are exposed as attributes (for the latching switch) and
as events (for both types of switches). An interested party MAY subscribe to these attributes/events and thus be informed of the
interactions, and can perform actions based on this, for example by sending commands to perform an action such as controlling a
light or a window shade.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterSwitch : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfPositionsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentPositionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMultiPressMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Administrator Commissioning
 *    Commands to trigger a Node to allow a new Administrator to commission it.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterAdministratorCommissioning : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)openCommissioningWindowWithParams:(WTLAdministratorCommissioningClusterOpenCommissioningWindowParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                               completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)openBasicCommissioningWindowWithParams:(WTLAdministratorCommissioningClusterOpenBasicCommissioningWindowParams *)params
                                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                    completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)revokeCommissioningWithParams:(WTLAdministratorCommissioningClusterRevokeCommissioningParams * _Nullable)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                           completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)revokeCommissioningWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeWindowStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAdminFabricIndexWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAdminVendorIdWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Operational Credentials
 *    This cluster is used to add or remove Operational Credentials on a Commissionee or Node, as well as manage the associated
 * Fabrics.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterOperationalCredentials : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)attestationRequestWithParams:(WTLOperationalCredentialsClusterAttestationRequestParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(void (^)(WTLOperationalCredentialsClusterAttestationResponseParams * _Nullable data,
                                         NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)certificateChainRequestWithParams:(WTLOperationalCredentialsClusterCertificateChainRequestParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                               completion:(void (^)(WTLOperationalCredentialsClusterCertificateChainResponseParams * _Nullable data,
                                              NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)CSRRequestWithParams:(WTLOperationalCredentialsClusterCSRRequestParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completion:(void (^)(WTLOperationalCredentialsClusterCSRResponseParams * _Nullable data,
                                 NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)addNOCWithParams:(WTLOperationalCredentialsClusterAddNOCParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLOperationalCredentialsClusterNOCResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)updateNOCWithParams:(WTLOperationalCredentialsClusterUpdateNOCParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:(void (^)(WTLOperationalCredentialsClusterNOCResponseParams * _Nullable data,
                                NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)updateFabricLabelWithParams:(WTLOperationalCredentialsClusterUpdateFabricLabelParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completion:(void (^)(WTLOperationalCredentialsClusterNOCResponseParams * _Nullable data,
                                        NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)removeFabricWithParams:(WTLOperationalCredentialsClusterRemoveFabricParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(void (^)(WTLOperationalCredentialsClusterNOCResponseParams * _Nullable data,
                                   NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)addTrustedRootCertificateWithParams:(WTLOperationalCredentialsClusterAddTrustedRootCertificateParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                 completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNOCsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFabricsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSupportedFabricsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCommissionedFabricsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTrustedRootCertificatesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentFabricIndexWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Group Key Management
 *    The Group Key Management Cluster is the mechanism by which group keys are managed.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterGroupKeyManagement : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)keySetWriteWithParams:(WTLGroupKeyManagementClusterKeySetWriteParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)keySetReadWithParams:(WTLGroupKeyManagementClusterKeySetReadParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completion:(void (^)(WTLGroupKeyManagementClusterKeySetReadResponseParams * _Nullable data,
                                 NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)keySetRemoveWithParams:(WTLGroupKeyManagementClusterKeySetRemoveParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)keySetReadAllIndicesWithParams:(WTLGroupKeyManagementClusterKeySetReadAllIndicesParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completion:(void (^)(WTLGroupKeyManagementClusterKeySetReadAllIndicesResponseParams * _Nullable data,
                                           NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGroupKeyMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeGroupKeyMapWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeGroupKeyMapWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGroupTableWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxGroupsPerFabricWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxGroupKeysPerFabricWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Fixed Label
 *    The Fixed Label Cluster provides a feature for the device to tag an endpoint with zero or more read only
labels.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterFixedLabel : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeLabelListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster User Label
 *    The User Label Cluster provides a feature to tag an endpoint with zero or more labels.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterUserLabel : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeLabelListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLabelListWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLabelListWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                  params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Boolean State
 *    This cluster provides an interface to a boolean state called StateValue.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterBooleanState : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeStateValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Mode Select
 *    Attributes and commands for selecting a mode from a list of supported options.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterModeSelect : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)changeToModeWithParams:(WTLModeSelectClusterChangeToModeParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeDescriptionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStandardNamespaceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSupportedModesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStartUpModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeStartUpModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeStartUpModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOnModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOnModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Door Lock
 *    An interface to a generic way to secure a door
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterDoorLock : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)lockDoorWithParams:(WTLDoorLockClusterLockDoorParams * _Nullable)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)unlockDoorWithParams:(WTLDoorLockClusterUnlockDoorParams * _Nullable)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)unlockWithTimeoutWithParams:(WTLDoorLockClusterUnlockWithTimeoutParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)setWeekDayScheduleWithParams:(WTLDoorLockClusterSetWeekDayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getWeekDayScheduleWithParams:(WTLDoorLockClusterGetWeekDayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(void (^)(WTLDoorLockClusterGetWeekDayScheduleResponseParams * _Nullable data,
                                         NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)clearWeekDayScheduleWithParams:(WTLDoorLockClusterClearWeekDayScheduleParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)setYearDayScheduleWithParams:(WTLDoorLockClusterSetYearDayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getYearDayScheduleWithParams:(WTLDoorLockClusterGetYearDayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(void (^)(WTLDoorLockClusterGetYearDayScheduleResponseParams * _Nullable data,
                                         NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)clearYearDayScheduleWithParams:(WTLDoorLockClusterClearYearDayScheduleParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)setHolidayScheduleWithParams:(WTLDoorLockClusterSetHolidayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getHolidayScheduleWithParams:(WTLDoorLockClusterGetHolidayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(void (^)(WTLDoorLockClusterGetHolidayScheduleResponseParams * _Nullable data,
                                         NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)clearHolidayScheduleWithParams:(WTLDoorLockClusterClearHolidayScheduleParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)setUserWithParams:(WTLDoorLockClusterSetUserParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getUserWithParams:(WTLDoorLockClusterGetUserParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLDoorLockClusterGetUserResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)clearUserWithParams:(WTLDoorLockClusterClearUserParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)setCredentialWithParams:(WTLDoorLockClusterSetCredentialParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(void (^)(WTLDoorLockClusterSetCredentialResponseParams * _Nullable data,
                                    NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getCredentialStatusWithParams:(WTLDoorLockClusterGetCredentialStatusParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                           completion:(void (^)(WTLDoorLockClusterGetCredentialStatusResponseParams * _Nullable data,
                                          NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)clearCredentialWithParams:(WTLDoorLockClusterClearCredentialParams *)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeLockStateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLockTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActuatorEnabledWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDoorStateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDoorOpenEventsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeDoorOpenEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeDoorOpenEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDoorClosedEventsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeDoorClosedEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeDoorClosedEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOpenPeriodWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOpenPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOpenPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfTotalUsersSupportedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfPINUsersSupportedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfRFIDUsersSupportedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfWeekDaySchedulesSupportedPerUserWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfYearDaySchedulesSupportedPerUserWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfHolidaySchedulesSupportedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxPINCodeLengthWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinPINCodeLengthWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxRFIDCodeLengthWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinRFIDCodeLengthWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCredentialRulesSupportWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfCredentialsSupportedPerUserWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLanguageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLanguageWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLanguageWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLEDSettingsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLEDSettingsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLEDSettingsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAutoRelockTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeAutoRelockTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeAutoRelockTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSoundVolumeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSoundVolumeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSoundVolumeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOperatingModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOperatingModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOperatingModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSupportedOperatingModesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDefaultConfigurationRegisterWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEnableLocalProgrammingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEnableLocalProgrammingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEnableLocalProgrammingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEnableOneTouchLockingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEnableOneTouchLockingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEnableOneTouchLockingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEnableInsideStatusLEDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEnableInsideStatusLEDWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEnableInsideStatusLEDWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEnablePrivacyModeButtonWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEnablePrivacyModeButtonWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEnablePrivacyModeButtonWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLocalProgrammingFeaturesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLocalProgrammingFeaturesWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLocalProgrammingFeaturesWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWrongCodeEntryLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeWrongCodeEntryLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeWrongCodeEntryLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUserCodeTemporaryDisableTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUserCodeTemporaryDisableTimeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSendPINOverTheAirWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSendPINOverTheAirWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSendPINOverTheAirWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                          params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRequirePINforRemoteOperationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRequirePINforRemoteOperationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRequirePINforRemoteOperationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeExpiringUserTimeoutWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeExpiringUserTimeoutWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeExpiringUserTimeoutWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Window Covering
 *    Provides an interface for controlling and adjusting automatic window coverings.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterWindowCovering : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)upOrOpenWithParams:(WTLWindowCoveringClusterUpOrOpenParams * _Nullable)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)upOrOpenWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                        completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)downOrCloseWithParams:(WTLWindowCoveringClusterDownOrCloseParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)downOrCloseWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                           completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopMotionWithParams:(WTLWindowCoveringClusterStopMotionParams * _Nullable)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopMotionWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)goToLiftValueWithParams:(WTLWindowCoveringClusterGoToLiftValueParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)goToLiftPercentageWithParams:(WTLWindowCoveringClusterGoToLiftPercentageParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)goToTiltValueWithParams:(WTLWindowCoveringClusterGoToTiltValueParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)goToTiltPercentageWithParams:(WTLWindowCoveringClusterGoToTiltPercentageParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePhysicalClosedLimitLiftWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePhysicalClosedLimitTiltWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentPositionLiftWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentPositionTiltWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfActuationsLiftWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfActuationsTiltWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeConfigStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentPositionLiftPercentageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentPositionTiltPercentageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOperationalStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTargetPositionLiftPercent100thsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTargetPositionTiltPercent100thsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEndProductTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentPositionLiftPercent100thsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentPositionTiltPercent100thsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstalledOpenLimitLiftWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstalledClosedLimitLiftWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstalledOpenLimitTiltWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstalledClosedLimitTiltWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSafetyStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Barrier Control
 *    This cluster provides control of a barrier (garage door).
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterBarrierControl : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)barrierControlGoToPercentWithParams:(WTLBarrierControlClusterBarrierControlGoToPercentParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                 completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)barrierControlStopWithParams:(WTLBarrierControlClusterBarrierControlStopParams * _Nullable)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)barrierControlStopWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                  completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBarrierMovingStateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierSafetyStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierCapabilitiesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierOpenEventsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierOpenEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierOpenEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                          params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierCloseEventsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierCloseEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierCloseEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                           params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierCommandOpenEventsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierCommandOpenEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierCommandOpenEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierCommandCloseEventsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierCommandCloseEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierCommandCloseEventsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                  params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierOpenPeriodWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierOpenPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierOpenPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                          params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierClosePeriodWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierClosePeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBarrierClosePeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                           params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBarrierPositionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Pump Configuration and Control
 *    An interface for configuring and controlling pumps.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterPumpConfigurationAndControl : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMaxPressureWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxSpeedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxFlowWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinConstPressureWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxConstPressureWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinCompPressureWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxCompPressureWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinConstSpeedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxConstSpeedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinConstFlowWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxConstFlowWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinConstTempWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxConstTempWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePumpStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEffectiveOperationModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEffectiveControlModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCapacityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSpeedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLifetimeRunningHoursWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLifetimeRunningHoursWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLifetimeRunningHoursWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLifetimeEnergyConsumedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLifetimeEnergyConsumedWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLifetimeEnergyConsumedWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOperationModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOperationModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOperationModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeControlModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeControlModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeControlModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Thermostat
 *    An interface for configuring and controlling the functionality of a thermostat.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterThermostat : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)setpointRaiseLowerWithParams:(WTLThermostatClusterSetpointRaiseLowerParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)setWeeklyScheduleWithParams:(WTLThermostatClusterSetWeeklyScheduleParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getWeeklyScheduleWithParams:(WTLThermostatClusterGetWeeklyScheduleParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completion:(void (^)(WTLThermostatClusterGetWeeklyScheduleResponseParams * _Nullable data,
                                        NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)clearWeeklyScheduleWithParams:(WTLThermostatClusterClearWeeklyScheduleParams * _Nullable)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                           completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)clearWeeklyScheduleWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeLocalTemperatureWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOutdoorTemperatureWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOccupancyWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAbsMinHeatSetpointLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAbsMaxHeatSetpointLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAbsMinCoolSetpointLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAbsMaxCoolSetpointLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePICoolingDemandWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePIHeatingDemandWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeHVACSystemTypeConfigurationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeHVACSystemTypeConfigurationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeHVACSystemTypeConfigurationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLocalTemperatureCalibrationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLocalTemperatureCalibrationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLocalTemperatureCalibrationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOccupiedCoolingSetpointWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOccupiedCoolingSetpointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOccupiedCoolingSetpointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOccupiedHeatingSetpointWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOccupiedHeatingSetpointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOccupiedHeatingSetpointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUnoccupiedCoolingSetpointWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUnoccupiedCoolingSetpointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUnoccupiedCoolingSetpointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                  params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUnoccupiedHeatingSetpointWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUnoccupiedHeatingSetpointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUnoccupiedHeatingSetpointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                  params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinHeatSetpointLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMinHeatSetpointLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMinHeatSetpointLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxHeatSetpointLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMaxHeatSetpointLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMaxHeatSetpointLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinCoolSetpointLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMinCoolSetpointLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMinCoolSetpointLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxCoolSetpointLimitWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMaxCoolSetpointLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMaxCoolSetpointLimitWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinSetpointDeadBandWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMinSetpointDeadBandWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMinSetpointDeadBandWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRemoteSensingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRemoteSensingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRemoteSensingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeControlSequenceOfOperationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeControlSequenceOfOperationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeControlSequenceOfOperationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSystemModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSystemModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSystemModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeThermostatRunningModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStartOfWeekWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfWeeklyTransitionsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfDailyTransitionsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTemperatureSetpointHoldWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeTemperatureSetpointHoldWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeTemperatureSetpointHoldWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTemperatureSetpointHoldDurationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeTemperatureSetpointHoldDurationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeTemperatureSetpointHoldDurationWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeThermostatProgrammingOperationModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeThermostatProgrammingOperationModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeThermostatProgrammingOperationModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                           params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeThermostatRunningStateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSetpointChangeSourceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSetpointChangeAmountWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSetpointChangeSourceTimestampWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOccupiedSetbackWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOccupiedSetbackWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOccupiedSetbackWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOccupiedSetbackMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOccupiedSetbackMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUnoccupiedSetbackWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUnoccupiedSetbackWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUnoccupiedSetbackWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                          params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUnoccupiedSetbackMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUnoccupiedSetbackMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEmergencyHeatDeltaWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEmergencyHeatDeltaWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeEmergencyHeatDeltaWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                           params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeACTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeACCapacityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACCapacityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACCapacityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeACRefrigerantTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACRefrigerantTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACRefrigerantTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                          params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeACCompressorTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACCompressorTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACCompressorTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeACErrorCodeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACErrorCodeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACErrorCodeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeACLouverPositionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACLouverPositionWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACLouverPositionWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeACCoilTemperatureWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeACCapacityformatWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACCapacityformatWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeACCapacityformatWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Fan Control
 *    An interface for controlling a fan in a heating/cooling system.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterFanControl : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFanModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeFanModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeFanModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFanModeSequenceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeFanModeSequenceWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeFanModeSequenceWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePercentSettingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePercentSettingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePercentSettingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePercentCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSpeedMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSpeedSettingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSpeedSettingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSpeedSettingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSpeedCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRockSupportWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRockSettingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRockSettingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRockSettingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWindSupportWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWindSettingWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeWindSettingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeWindSettingWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Thermostat User Interface Configuration
 *    An interface for configuring the user interface of a thermostat (which may be remote from the thermostat).
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterThermostatUserInterfaceConfiguration : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeTemperatureDisplayModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeTemperatureDisplayModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeTemperatureDisplayModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeKeypadLockoutWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeKeypadLockoutWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeKeypadLockoutWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeScheduleProgrammingVisibilityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeScheduleProgrammingVisibilityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeScheduleProgrammingVisibilityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Color Control
 *    Attributes and commands for controlling the color properties of a color-capable light.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterColorControl : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)moveToHueWithParams:(WTLColorControlClusterMoveToHueParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveHueWithParams:(WTLColorControlClusterMoveHueParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stepHueWithParams:(WTLColorControlClusterStepHueParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveToSaturationWithParams:(WTLColorControlClusterMoveToSaturationParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveSaturationWithParams:(WTLColorControlClusterMoveSaturationParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stepSaturationWithParams:(WTLColorControlClusterStepSaturationParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveToHueAndSaturationWithParams:(WTLColorControlClusterMoveToHueAndSaturationParams *)params
                          expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                   expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                              completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveToColorWithParams:(WTLColorControlClusterMoveToColorParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveColorWithParams:(WTLColorControlClusterMoveColorParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stepColorWithParams:(WTLColorControlClusterStepColorParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveToColorTemperatureWithParams:(WTLColorControlClusterMoveToColorTemperatureParams *)params
                          expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                   expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                              completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)enhancedMoveToHueWithParams:(WTLColorControlClusterEnhancedMoveToHueParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)enhancedMoveHueWithParams:(WTLColorControlClusterEnhancedMoveHueParams *)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)enhancedStepHueWithParams:(WTLColorControlClusterEnhancedStepHueParams *)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)enhancedMoveToHueAndSaturationWithParams:(WTLColorControlClusterEnhancedMoveToHueAndSaturationParams *)params
                                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                      completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)colorLoopSetWithParams:(WTLColorControlClusterColorLoopSetParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopMoveStepWithParams:(WTLColorControlClusterStopMoveStepParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)moveColorTemperatureWithParams:(WTLColorControlClusterMoveColorTemperatureParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stepColorTemperatureWithParams:(WTLColorControlClusterStepColorTemperatureParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeCurrentHueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentSaturationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRemainingTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentXWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentYWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDriftCompensationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCompensationTextWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorTemperatureMiredsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOptionsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOptionsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOptionsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNumberOfPrimariesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary1XWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary1YWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary1IntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary2XWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary2YWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary2IntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary3XWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary3YWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary3IntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary4XWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary4YWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary4IntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary5XWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary5YWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary5IntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary6XWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary6YWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePrimary6IntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWhitePointXWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeWhitePointXWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeWhitePointXWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeWhitePointYWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeWhitePointYWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeWhitePointYWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointRXWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointRXWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointRXWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointRYWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointRYWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointRYWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointRIntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointRIntensityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointRIntensityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointGXWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointGXWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointGXWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointGYWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointGYWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointGYWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointGIntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointGIntensityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointGIntensityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointBXWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointBXWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointBXWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointBYWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointBYWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointBYWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorPointBIntensityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointBIntensityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeColorPointBIntensityWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEnhancedCurrentHueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeEnhancedColorModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorLoopActiveWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorLoopDirectionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorLoopTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorLoopStartEnhancedHueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorLoopStoredEnhancedHueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorCapabilitiesWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorTempPhysicalMinMiredsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeColorTempPhysicalMaxMiredsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCoupleColorTempToLevelMinMiredsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStartUpColorTemperatureMiredsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeStartUpColorTemperatureMiredsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeStartUpColorTemperatureMiredsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Ballast Configuration
 *    Attributes and commands for configuring a lighting ballast.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterBallastConfiguration : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributePhysicalMinLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePhysicalMaxLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeBallastStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMinLevelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMinLevelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxLevelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMaxLevelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeMaxLevelWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeIntrinsicBallastFactorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeIntrinsicBallastFactorWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeIntrinsicBallastFactorWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBallastFactorAdjustmentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBallastFactorAdjustmentWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeBallastFactorAdjustmentWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLampQuantityWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLampTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampTypeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLampManufacturerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampManufacturerWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampManufacturerWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLampRatedHoursWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampRatedHoursWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampRatedHoursWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLampBurnHoursWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampBurnHoursWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampBurnHoursWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLampAlarmModeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampAlarmModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampAlarmModeWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLampBurnHoursTripPointWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampBurnHoursTripPointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeLampBurnHoursTripPointWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Illuminance Measurement
 *    Attributes and commands for configuring the measurement of illuminance, and reporting illuminance measurements.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterIlluminanceMeasurement : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeToleranceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLightSensorTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Temperature Measurement
 *    Attributes and commands for configuring the measurement of temperature, and reporting temperature measurements.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterTemperatureMeasurement : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeToleranceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Pressure Measurement
 *    Attributes and commands for configuring the measurement of pressure, and reporting pressure measurements.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterPressureMeasurement : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeToleranceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeScaledValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinScaledValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxScaledValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeScaledToleranceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeScaleWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Flow Measurement
 *    Attributes and commands for configuring the measurement of flow, and reporting flow measurements.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterFlowMeasurement : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeToleranceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Relative Humidity Measurement
 *    Attributes and commands for configuring the measurement of relative humidity, and reporting relative humidity measurements.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterRelativeHumidityMeasurement : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMinMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMaxMeasuredValueWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeToleranceWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Occupancy Sensing
 *    Attributes and commands for configuring occupancy sensing, and reporting occupancy status.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterOccupancySensing : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeOccupancyWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOccupancySensorTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOccupancySensorTypeBitmapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePIROccupiedToUnoccupiedDelayWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributePIRUnoccupiedToOccupiedDelayWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributePIRUnoccupiedToOccupiedThresholdWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithParams:
    (WTLReadParams * _Nullable)params API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Wake on LAN
 *    This cluster provides an interface for managing low power mode on a device that supports the Wake On LAN protocol.
 */
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLClusterWakeOnLAN : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMACAddressWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Channel
 *    This cluster provides an interface for controlling the current Channel on a device.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterChannel : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)changeChannelWithParams:(WTLChannelClusterChangeChannelParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(void (^)(WTLChannelClusterChangeChannelResponseParams * _Nullable data,
                                    NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)changeChannelByNumberWithParams:(WTLChannelClusterChangeChannelByNumberParams *)params
                         expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                  expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                             completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)skipChannelWithParams:(WTLChannelClusterSkipChannelParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeChannelListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLineupWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentChannelWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Target Navigator
 *    This cluster provides an interface for UX navigation within a set of targets on a device or endpoint.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterTargetNavigator : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)navigateTargetWithParams:(WTLTargetNavigatorClusterNavigateTargetParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completion:(void (^)(WTLTargetNavigatorClusterNavigateTargetResponseParams * _Nullable data,
                                     NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeTargetListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentTargetWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Media Playback
 *    This cluster provides an interface for controlling Media Playback (PLAY, PAUSE, etc) on a media device such as a TV or
 * Speaker.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterMediaPlayback : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)playWithParams:(WTLMediaPlaybackClusterPlayParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)playWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                   NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)pauseWithParams:(WTLMediaPlaybackClusterPauseParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)pauseWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                     completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                    NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopWithParams:(WTLMediaPlaybackClusterStopParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                   NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)startOverWithParams:(WTLMediaPlaybackClusterStartOverParams * _Nullable)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:
                     (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)startOverWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                         completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                        NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)previousWithParams:(WTLMediaPlaybackClusterPreviousParams * _Nullable)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completion:
                    (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)previousWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                        completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                       NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)nextWithParams:(WTLMediaPlaybackClusterNextParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)nextWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                   NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)rewindWithParams:(WTLMediaPlaybackClusterRewindParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)rewindWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                      completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                     NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)fastForwardWithParams:(WTLMediaPlaybackClusterFastForwardParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                  NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)fastForwardWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                           completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                          NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)skipForwardWithParams:(WTLMediaPlaybackClusterSkipForwardParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                  NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)skipBackwardWithParams:(WTLMediaPlaybackClusterSkipBackwardParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                   NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)seekWithParams:(WTLMediaPlaybackClusterSeekParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeCurrentStateWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStartTimeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDurationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSampledPositionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePlaybackSpeedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSeekRangeEndWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSeekRangeStartWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Media Input
 *    This cluster provides an interface for controlling the Input Selector on a media device such as a TV.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterMediaInput : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)selectInputWithParams:(WTLMediaInputClusterSelectInputParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)showInputStatusWithParams:(WTLMediaInputClusterShowInputStatusParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)showInputStatusWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)hideInputStatusWithParams:(WTLMediaInputClusterHideInputStatusParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)hideInputStatusWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)renameInputWithParams:(WTLMediaInputClusterRenameInputParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInputListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentInputWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Low Power
 *    This cluster provides an interface for managing low power mode on a device.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterLowPower : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)sleepWithParams:(WTLLowPowerClusterSleepParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)sleepWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                     completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Keypad Input
 *    This cluster provides an interface for controlling a device like a TV using action commands such as UP, DOWN, and SELECT.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterKeypadInput : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)sendKeyWithParams:(WTLKeypadInputClusterSendKeyParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLKeypadInputClusterSendKeyResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Content Launcher
 *    This cluster provides an interface for launching content on a media player device such as a TV or Speaker.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterContentLauncher : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)launchContentWithParams:(WTLContentLauncherClusterLaunchContentParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completion:(void (^)(WTLContentLauncherClusterLauncherResponseParams * _Nullable data,
                                    NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)launchURLWithParams:(WTLContentLauncherClusterLaunchURLParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:(void (^)(WTLContentLauncherClusterLauncherResponseParams * _Nullable data,
                                NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAcceptHeaderWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeSupportedStreamingProtocolsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSupportedStreamingProtocolsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeSupportedStreamingProtocolsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Audio Output
 *    This cluster provides an interface for controlling the Output on a media device such as a TV.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterAudioOutput : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)selectOutputWithParams:(WTLAudioOutputClusterSelectOutputParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)renameOutputWithParams:(WTLAudioOutputClusterRenameOutputParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeOutputListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentOutputWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Application Launcher
 *    This cluster provides an interface for launching content on a media player device such as a TV or Speaker.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterApplicationLauncher : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)launchAppWithParams:(WTLApplicationLauncherClusterLaunchAppParams * _Nullable)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completion:(void (^)(WTLApplicationLauncherClusterLauncherResponseParams * _Nullable data,
                                NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)stopAppWithParams:(WTLApplicationLauncherClusterStopAppParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLApplicationLauncherClusterLauncherResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)hideAppWithParams:(WTLApplicationLauncherClusterHideAppParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(void (^)(WTLApplicationLauncherClusterLauncherResponseParams * _Nullable data,
                              NSError * _Nullable error))completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeCatalogListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentAppWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeCurrentAppWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeCurrentAppWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Application Basic
 *    This cluster provides information about an application running on a TV or media player device which is represented as an
 * endpoint.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterApplicationBasic : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeVendorNameWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeVendorIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeApplicationNameWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeProductIDWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeApplicationWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeStatusWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeApplicationVersionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAllowedVendorListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Account Login
 *    This cluster provides commands that facilitate user account login on a Content App or a node. For example, a Content App
 * running on a Video Player device, which is represented as an endpoint (see [TV Architecture]), can use this cluster to help make
 * the user account on the Content App match the user account on the Client.
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterAccountLogin : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)getSetupPINWithParams:(WTLAccountLoginClusterGetSetupPINParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completion:(void (^)(WTLAccountLoginClusterGetSetupPINResponseParams * _Nullable data,
                                  NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)loginWithParams:(WTLAccountLoginClusterLoginParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)logoutWithParams:(WTLAccountLoginClusterLogoutParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)logoutWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                      completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Electrical Measurement
 *    Attributes related to the electrical properties of a device. This cluster is used by power outlets and other devices that need
 * to provide instantaneous data as opposed to metrology data which should be retrieved from the metering cluster..
 */
API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterElectricalMeasurement : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)getProfileInfoCommandWithParams:(WTLElectricalMeasurementClusterGetProfileInfoCommandParams * _Nullable)params
                         expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                  expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                             completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getProfileInfoCommandWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                     completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)getMeasurementProfileCommandWithParams:(WTLElectricalMeasurementClusterGetMeasurementProfileCommandParams *)params
                                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                    completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeMeasurementTypeWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcVoltageMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcVoltageMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcCurrentMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcCurrentMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcPowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcPowerMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcPowerMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcVoltageMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcVoltageDivisorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcCurrentMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcCurrentDivisorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcPowerMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeDcPowerDivisorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcFrequencyWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcFrequencyMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcFrequencyMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeNeutralCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTotalActivePowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTotalReactivePowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeTotalApparentPowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasured1stHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasured3rdHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasured5thHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasured7thHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasured9thHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasured11thHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredPhase1stHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredPhase3rdHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredPhase5thHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredPhase7thHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredPhase9thHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeMeasuredPhase11thHarmonicCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcFrequencyMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcFrequencyDivisorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePowerMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePowerDivisorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeHarmonicCurrentMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePhaseHarmonicCurrentMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstantaneousVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstantaneousLineCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstantaneousActiveCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstantaneousReactiveCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeInstantaneousPowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerMinWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerMaxWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeReactivePowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeApparentPowerWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePowerFactorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsVoltageMeasurementPeriodWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeAverageRmsVoltageMeasurementPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeAverageRmsVoltageMeasurementPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                           params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsUnderVoltageCounterWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeAverageRmsUnderVoltageCounterWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeAverageRmsUnderVoltageCounterWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsExtremeOverVoltagePeriodWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRmsExtremeOverVoltagePeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRmsExtremeOverVoltagePeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsExtremeUnderVoltagePeriodWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRmsExtremeUnderVoltagePeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRmsExtremeUnderVoltagePeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageSagPeriodWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRmsVoltageSagPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRmsVoltageSagPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageSwellPeriodWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRmsVoltageSwellPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeRmsVoltageSwellPeriodWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcVoltageMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcVoltageDivisorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcCurrentMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcCurrentDivisorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcPowerMultiplierWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcPowerDivisorWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeOverloadAlarmsMaskWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOverloadAlarmsMaskWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeOverloadAlarmsMaskWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                           params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeVoltageOverloadWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeCurrentOverloadWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcOverloadAlarmsMaskWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeAcOverloadAlarmsMaskWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
- (void)writeAttributeAcOverloadAlarmsMaskWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcVoltageOverloadWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcCurrentOverloadWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcActivePowerOverloadWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcReactivePowerOverloadWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsOverVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsUnderVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsExtremeOverVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsExtremeUnderVoltageWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageSagWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageSwellWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLineCurrentPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveCurrentPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeReactiveCurrentPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltagePhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageMinPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageMaxPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentMinPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentMaxPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerMinPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerMaxPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeReactivePowerPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeApparentPowerPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePowerFactorPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsVoltageMeasurementPeriodPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsOverVoltageCounterPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsUnderVoltageCounterPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsExtremeOverVoltagePeriodPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsExtremeUnderVoltagePeriodPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageSagPeriodPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageSwellPeriodPhaseBWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeLineCurrentPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActiveCurrentPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeReactiveCurrentPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltagePhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageMinPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageMaxPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentMinPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsCurrentMaxPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerMinPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeActivePowerMaxPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeReactivePowerPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeApparentPowerPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributePowerFactorPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsVoltageMeasurementPeriodPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsOverVoltageCounterPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAverageRmsUnderVoltageCounterPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsExtremeOverVoltagePeriodPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsExtremeUnderVoltagePeriodPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageSagPeriodPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeRmsVoltageSwellPeriodPhaseCWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

/**
 * Cluster Unit Testing
 *    The Test Cluster is meant to validate the generated code
 */
API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLClusterUnitTesting : WTLCluster

- (instancetype _Nullable)initWithDevice:(WTLDevice *)device
                              endpointID:(NSNumber *)endpointID
                                   queue:(dispatch_queue_t)queue NS_DESIGNATED_INITIALIZER
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)testWithParams:(WTLUnitTestingClusterTestParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testNotHandledWithParams:(WTLUnitTestingClusterTestNotHandledParams * _Nullable)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completion:(WTLStatusCompletion)completion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testNotHandledWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                              completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testSpecificWithParams:(WTLUnitTestingClusterTestSpecificParams * _Nullable)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completion:(void (^)(WTLUnitTestingClusterTestSpecificResponseParams * _Nullable data,
                                   NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testSpecificWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                            completion:(void (^)(WTLUnitTestingClusterTestSpecificResponseParams * _Nullable data,
                                           NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testUnknownCommandWithParams:(WTLUnitTestingClusterTestUnknownCommandParams * _Nullable)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testUnknownCommandWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                  completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testAddArgumentsWithParams:(WTLUnitTestingClusterTestAddArgumentsParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completion:(void (^)(WTLUnitTestingClusterTestAddArgumentsResponseParams * _Nullable data,
                                       NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testSimpleArgumentRequestWithParams:(WTLUnitTestingClusterTestSimpleArgumentRequestParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                 completion:(void (^)(WTLUnitTestingClusterTestSimpleArgumentResponseParams * _Nullable data,
                                                NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testStructArrayArgumentRequestWithParams:(WTLUnitTestingClusterTestStructArrayArgumentRequestParams *)params
                                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                      completion:
                                          (void (^)(WTLUnitTestingClusterTestStructArrayArgumentResponseParams * _Nullable data,
                                              NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testStructArgumentRequestWithParams:(WTLUnitTestingClusterTestStructArgumentRequestParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                 completion:(void (^)(WTLUnitTestingClusterBooleanResponseParams * _Nullable data,
                                                NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testNestedStructArgumentRequestWithParams:(WTLUnitTestingClusterTestNestedStructArgumentRequestParams *)params
                                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                       completion:(void (^)(WTLUnitTestingClusterBooleanResponseParams * _Nullable data,
                                                      NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testListStructArgumentRequestWithParams:(WTLUnitTestingClusterTestListStructArgumentRequestParams *)params
                                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                     completion:(void (^)(WTLUnitTestingClusterBooleanResponseParams * _Nullable data,
                                                    NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testListInt8UArgumentRequestWithParams:(WTLUnitTestingClusterTestListInt8UArgumentRequestParams *)params
                                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                    completion:(void (^)(WTLUnitTestingClusterBooleanResponseParams * _Nullable data,
                                                   NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testNestedStructListArgumentRequestWithParams:(WTLUnitTestingClusterTestNestedStructListArgumentRequestParams *)params
                                       expectedValues:
                                           (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                           completion:(void (^)(WTLUnitTestingClusterBooleanResponseParams * _Nullable data,
                                                          NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testListNestedStructListArgumentRequestWithParams:
            (WTLUnitTestingClusterTestListNestedStructListArgumentRequestParams *)params
                                           expectedValues:
                                               (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                               completion:(void (^)(WTLUnitTestingClusterBooleanResponseParams * _Nullable data,
                                                              NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testListInt8UReverseRequestWithParams:(WTLUnitTestingClusterTestListInt8UReverseRequestParams *)params
                               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                   completion:(void (^)(WTLUnitTestingClusterTestListInt8UReverseResponseParams * _Nullable data,
                                                  NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testEnumsRequestWithParams:(WTLUnitTestingClusterTestEnumsRequestParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completion:(void (^)(WTLUnitTestingClusterTestEnumsResponseParams * _Nullable data,
                                       NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testNullableOptionalRequestWithParams:(WTLUnitTestingClusterTestNullableOptionalRequestParams * _Nullable)params
                               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                   completion:(void (^)(WTLUnitTestingClusterTestNullableOptionalResponseParams * _Nullable data,
                                                  NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)
    testComplexNullableOptionalRequestWithParams:(WTLUnitTestingClusterTestComplexNullableOptionalRequestParams *)params
                                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                      completion:
                                          (void (^)(WTLUnitTestingClusterTestComplexNullableOptionalResponseParams * _Nullable data,
                                              NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)simpleStructEchoRequestWithParams:(WTLUnitTestingClusterSimpleStructEchoRequestParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                               completion:(void (^)(WTLUnitTestingClusterSimpleStructResponseParams * _Nullable data,
                                              NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)timedInvokeRequestWithParams:(WTLUnitTestingClusterTimedInvokeRequestParams * _Nullable)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)timedInvokeRequestWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                  completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testSimpleOptionalArgumentRequestWithParams:(WTLUnitTestingClusterTestSimpleOptionalArgumentRequestParams * _Nullable)params
                                     expectedValues:
                                         (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                         completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)testEmitTestEventRequestWithParams:(WTLUnitTestingClusterTestEmitTestEventRequestParams *)params
                            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                completion:(void (^)(WTLUnitTestingClusterTestEmitTestEventResponseParams * _Nullable data,
                                               NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)
    testEmitTestFabricScopedEventRequestWithParams:(WTLUnitTestingClusterTestEmitTestFabricScopedEventRequestParams *)params
                                    expectedValues:
                                        (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                        completion:
                                            (void (^)(
                                                WTLUnitTestingClusterTestEmitTestFabricScopedEventResponseParams * _Nullable data,
                                                NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBooleanWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBitmap8WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBitmap8WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBitmap8WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBitmap16WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBitmap16WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBitmap16WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBitmap32WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBitmap32WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBitmap32WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeBitmap64WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBitmap64WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeBitmap64WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt8uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt16uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt16uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt16uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt24uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt24uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt24uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt32uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt32uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt32uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt40uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt40uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt40uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt48uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt48uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt48uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt56uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt56uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt56uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt64uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt64uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt64uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt8sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt8sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt8sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt16sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt16sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt16sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt24sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt24sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt24sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt32sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt32sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt32sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt40sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt40sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt40sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt48sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt48sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt48sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt56sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt56sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt56sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeInt64sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt64sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeInt64sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeEnum8WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEnum8WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEnum8WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeEnum16WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEnum16WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEnum16WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFloatSingleWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeFloatSingleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeFloatSingleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFloatDoubleWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeFloatDoubleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeFloatDoubleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeOctetStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeListInt8uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                  params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeListOctetStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeListStructOctetStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListStructOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListStructOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeLongOctetStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeLongOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeLongOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeCharStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeCharStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeCharStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeLongCharStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeLongCharStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeLongCharStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeEpochUsWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEpochUsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEpochUsWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeEpochSWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEpochSWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEpochSWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                               params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeVendorIdWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeVendorIdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeVendorIdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeListNullablesAndOptionalsStructWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListNullablesAndOptionalsStructWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListNullablesAndOptionalsStructWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeEnumAttrWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEnumAttrWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeEnumAttrWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                  expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                 params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeStructAttrWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeStructAttrWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeStructAttrWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                   params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeRangeRestrictedInt8uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeRangeRestrictedInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeRangeRestrictedInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeRangeRestrictedInt8sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeRangeRestrictedInt8sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeRangeRestrictedInt8sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                             params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeRangeRestrictedInt16uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeRangeRestrictedInt16uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeRangeRestrictedInt16uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeRangeRestrictedInt16sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeRangeRestrictedInt16sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeRangeRestrictedInt16sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                              params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeListLongOctetStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListLongOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListLongOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeListFabricScopedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListFabricScopedWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeListFabricScopedWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeTimedWriteBooleanWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeTimedWriteBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeTimedWriteBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                          params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneralErrorBooleanWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeGeneralErrorBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeGeneralErrorBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeClusterErrorBooleanWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeClusterErrorBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeClusterErrorBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeUnsupportedWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeUnsupportedWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeUnsupportedWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                     expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                    params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableBooleanWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBooleanWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableBitmap8WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBitmap8WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBitmap8WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                        params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableBitmap16WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBitmap16WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBitmap16WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableBitmap32WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBitmap32WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBitmap32WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableBitmap64WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBitmap64WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableBitmap64WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt8uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt16uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt16uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt16uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt24uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt24uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt24uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt32uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt32uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt32uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt40uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt40uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt40uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt48uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt48uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt48uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt56uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt56uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt56uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt64uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt64uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt64uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt8sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt8sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt8sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt16sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt16sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt16sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt24sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt24sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt24sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt32sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt32sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt32sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt40sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt40sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt40sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt48sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt48sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt48sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt56sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt56sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt56sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableInt64sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt64sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableInt64sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableEnum8WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableEnum8WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableEnum8WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableEnum16WithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableEnum16WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableEnum16WithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableFloatSingleWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableFloatSingleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableFloatSingleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableFloatDoubleWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableFloatDoubleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableFloatDoubleWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableOctetStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableOctetStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableCharStringWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableCharStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableCharStringWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                           params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableEnumAttrWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableEnumAttrWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableEnumAttrWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                         params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableStructWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableStructWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableStructWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableRangeRestrictedInt8uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableRangeRestrictedInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableRangeRestrictedInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableRangeRestrictedInt8sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableRangeRestrictedInt8sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableRangeRestrictedInt8sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableRangeRestrictedInt16uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableRangeRestrictedInt16uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableRangeRestrictedInt16uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeNullableRangeRestrictedInt16sWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableRangeRestrictedInt16sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeNullableRangeRestrictedInt16sWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                      params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeWriteOnlyInt8uWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeWriteOnlyInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
- (void)writeAttributeWriteOnlyInt8uWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                       params:(WTLWriteParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeGeneratedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAcceptedCommandListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeAttributeListWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeFeatureMapWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (NSDictionary<NSString *, id> *)readAttributeClusterRevisionWithParams:(WTLReadParams * _Nullable)params
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

@end

WTL_DEPRECATED("Please use WTLClusterBasicInformation",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLClusterBasic : WTLClusterBasicInformation
@end

WTL_DEPRECATED(
    "Please use WTLClusterOTASoftwareUpdateProvider",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLClusterOtaSoftwareUpdateProvider : WTLClusterOTASoftwareUpdateProvider
@end

WTL_DEPRECATED(
    "Please use WTLClusterOTASoftwareUpdateRequestor",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLClusterOtaSoftwareUpdateRequestor : WTLClusterOTASoftwareUpdateRequestor
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLClusterBridgedDeviceBasic : WTLClusterBridgedDeviceBasicInformation
@end

WTL_DEPRECATED("Please use WTLClusterWakeOnLAN",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLClusterWakeOnLan : WTLClusterWakeOnLAN
@end

WTL_DEPRECATED("Please use WTLClusterUnitTesting",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLClusterTestCluster : WTLClusterUnitTesting
@end

@interface WTLClusterIdentify (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)identifyWithParams:(WTLIdentifyClusterIdentifyParams *)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
         completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use identifyWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)triggerEffectWithParams:(WTLIdentifyClusterTriggerEffectParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use triggerEffectWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterGroups (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)addGroupWithParams:(WTLGroupsClusterAddGroupParams *)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
         completionHandler:
             (void (^)(WTLGroupsClusterAddGroupResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use addGroupWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)viewGroupWithParams:(WTLGroupsClusterViewGroupParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:
              (void (^)(WTLGroupsClusterViewGroupResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use viewGroupWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getGroupMembershipWithParams:(WTLGroupsClusterGetGroupMembershipParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(void (^)(WTLGroupsClusterGetGroupMembershipResponseParams * _Nullable data,
                                         NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getGroupMembershipWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)removeGroupWithParams:(WTLGroupsClusterRemoveGroupParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:
                (void (^)(WTLGroupsClusterRemoveGroupResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use removeGroupWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)removeAllGroupsWithParams:(WTLGroupsClusterRemoveAllGroupsParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use removeAllGroupsWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)removeAllGroupsWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use removeAllGroupsWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)addGroupIfIdentifyingWithParams:(WTLGroupsClusterAddGroupIfIdentifyingParams *)params
                         expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                  expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use addGroupIfIdentifyingWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterScenes (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)addSceneWithParams:(WTLScenesClusterAddSceneParams *)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
         completionHandler:
             (void (^)(WTLScenesClusterAddSceneResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use addSceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)viewSceneWithParams:(WTLScenesClusterViewSceneParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:
              (void (^)(WTLScenesClusterViewSceneResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use viewSceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)removeSceneWithParams:(WTLScenesClusterRemoveSceneParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:
                (void (^)(WTLScenesClusterRemoveSceneResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use removeSceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)removeAllScenesWithParams:(WTLScenesClusterRemoveAllScenesParams *)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(void (^)(WTLScenesClusterRemoveAllScenesResponseParams * _Nullable data,
                                      NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use removeAllScenesWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)storeSceneWithParams:(WTLScenesClusterStoreSceneParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
           completionHandler:
               (void (^)(WTLScenesClusterStoreSceneResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use storeSceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)recallSceneWithParams:(WTLScenesClusterRecallSceneParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use recallSceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getSceneMembershipWithParams:(WTLScenesClusterGetSceneMembershipParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(void (^)(WTLScenesClusterGetSceneMembershipResponseParams * _Nullable data,
                                         NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getSceneMembershipWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)enhancedAddSceneWithParams:(WTLScenesClusterEnhancedAddSceneParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completionHandler:(void (^)(WTLScenesClusterEnhancedAddSceneResponseParams * _Nullable data,
                                       NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use enhancedAddSceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)enhancedViewSceneWithParams:(WTLScenesClusterEnhancedViewSceneParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completionHandler:(void (^)(WTLScenesClusterEnhancedViewSceneResponseParams * _Nullable data,
                                        NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use enhancedViewSceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)copySceneWithParams:(WTLScenesClusterCopySceneParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:
              (void (^)(WTLScenesClusterCopySceneResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use copySceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterOnOff (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)offWithParams:(WTLOnOffClusterOffParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use offWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)offWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use offWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)onWithParams:(WTLOnOffClusterOnParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use onWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)onWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
           completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use onWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)toggleWithParams:(WTLOnOffClusterToggleParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use toggleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)toggleWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
               completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use toggleWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)offWithEffectWithParams:(WTLOnOffClusterOffWithEffectParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use offWithEffectWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)onWithRecallGlobalSceneWithParams:(WTLOnOffClusterOnWithRecallGlobalSceneParams * _Nullable)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use onWithRecallGlobalSceneWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)onWithRecallGlobalSceneWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                            expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use onWithRecallGlobalSceneWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)onWithTimedOffWithParams:(WTLOnOffClusterOnWithTimedOffParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use onWithTimedOffWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterOnOffSwitchConfiguration (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterLevelControl (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)moveToLevelWithParams:(WTLLevelControlClusterMoveToLevelParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveToLevelWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveWithParams:(WTLLevelControlClusterMoveParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stepWithParams:(WTLLevelControlClusterStepParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stepWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopWithParams:(WTLLevelControlClusterStopParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stopWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveToLevelWithOnOffWithParams:(WTLLevelControlClusterMoveToLevelWithOnOffParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveToLevelWithOnOffWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveWithOnOffWithParams:(WTLLevelControlClusterMoveWithOnOffParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveWithOnOffWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stepWithOnOffWithParams:(WTLLevelControlClusterStepWithOnOffParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stepWithOnOffWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopWithOnOffWithParams:(WTLLevelControlClusterStopWithOnOffParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stopWithOnOffWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveToClosestFrequencyWithParams:(WTLLevelControlClusterMoveToClosestFrequencyParams *)params
                          expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                   expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveToClosestFrequencyWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterBinaryInputBasic (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterDescriptor (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (NSDictionary<NSString *, id> *)readAttributeDeviceListWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeDeviceTypeListWithParams on WTLClusterDescriptor",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterBinding (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterAccessControl (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (NSDictionary<NSString *, id> *)readAttributeAclWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeACLWithParams on WTLClusterAccessControl",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributeAclWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    WTL_DEPRECATED("Please use writeAttributeACLWithValue on WTLClusterAccessControl",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributeAclWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                            params:(WTLWriteParams * _Nullable)params
    WTL_DEPRECATED("Please use writeAttributeACLWithValue on WTLClusterAccessControl",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterActions (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)instantActionWithParams:(WTLActionsClusterInstantActionParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use instantActionWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)instantActionWithTransitionWithParams:(WTLActionsClusterInstantActionWithTransitionParams *)params
                               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use instantActionWithTransitionWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)startActionWithParams:(WTLActionsClusterStartActionParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use startActionWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)startActionWithDurationWithParams:(WTLActionsClusterStartActionWithDurationParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use startActionWithDurationWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopActionWithParams:(WTLActionsClusterStopActionParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
           completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stopActionWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)pauseActionWithParams:(WTLActionsClusterPauseActionParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use pauseActionWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)pauseActionWithDurationWithParams:(WTLActionsClusterPauseActionWithDurationParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use pauseActionWithDurationWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)resumeActionWithParams:(WTLActionsClusterResumeActionParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resumeActionWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)enableActionWithParams:(WTLActionsClusterEnableActionParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use enableActionWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)enableActionWithDurationWithParams:(WTLActionsClusterEnableActionWithDurationParams *)params
                            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use enableActionWithDurationWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)disableActionWithParams:(WTLActionsClusterDisableActionParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use disableActionWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)disableActionWithDurationWithParams:(WTLActionsClusterDisableActionWithDurationParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use disableActionWithDurationWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterBasic (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)mfgSpecificPingWithParams:(WTLBasicClusterMfgSpecificPingParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use mfgSpecificPingWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)mfgSpecificPingWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use mfgSpecificPingWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterOtaSoftwareUpdateProvider (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)queryImageWithParams:(WTLOtaSoftwareUpdateProviderClusterQueryImageParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
           completionHandler:(void (^)(WTLOtaSoftwareUpdateProviderClusterQueryImageResponseParams * _Nullable data,
                                 NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use queryImageWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)applyUpdateRequestWithParams:(WTLOtaSoftwareUpdateProviderClusterApplyUpdateRequestParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(void (^)(WTLOtaSoftwareUpdateProviderClusterApplyUpdateResponseParams * _Nullable data,
                                         NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use applyUpdateRequestWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)notifyUpdateAppliedWithParams:(WTLOtaSoftwareUpdateProviderClusterNotifyUpdateAppliedParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use notifyUpdateAppliedWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterOtaSoftwareUpdateRequestor (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)announceOtaProviderWithParams:(WTLOtaSoftwareUpdateRequestorClusterAnnounceOtaProviderParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use announceOTAProviderWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (NSDictionary<NSString *, id> *)readAttributeDefaultOtaProvidersWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeDefaultOTAProvidersWithParams on WTLClusterOTASoftwareUpdateRequestor", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributeDefaultOtaProvidersWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    WTL_DEPRECATED("Please use writeAttributeDefaultOTAProvidersWithValue on WTLClusterOTASoftwareUpdateRequestor", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributeDefaultOtaProvidersWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                            params:(WTLWriteParams * _Nullable)params
    WTL_DEPRECATED("Please use writeAttributeDefaultOTAProvidersWithValue on WTLClusterOTASoftwareUpdateRequestor", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterLocalizationConfiguration (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterTimeFormatLocalization (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterUnitLocalization (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterPowerSourceConfiguration (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterPowerSource (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterGeneralCommissioning (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)armFailSafeWithParams:(WTLGeneralCommissioningClusterArmFailSafeParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(void (^)(WTLGeneralCommissioningClusterArmFailSafeResponseParams * _Nullable data,
                                  NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use armFailSafeWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)setRegulatoryConfigWithParams:(WTLGeneralCommissioningClusterSetRegulatoryConfigParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completionHandler:(void (^)(WTLGeneralCommissioningClusterSetRegulatoryConfigResponseParams * _Nullable data,
                                          NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use setRegulatoryConfigWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)commissioningCompleteWithParams:(WTLGeneralCommissioningClusterCommissioningCompleteParams * _Nullable)params
                         expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                  expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completionHandler:
                          (void (^)(WTLGeneralCommissioningClusterCommissioningCompleteResponseParams * _Nullable data,
                              NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use commissioningCompleteWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)commissioningCompleteWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                              completionHandler:
                                  (void (^)(WTLGeneralCommissioningClusterCommissioningCompleteResponseParams * _Nullable data,
                                      NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use commissioningCompleteWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterNetworkCommissioning (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)scanNetworksWithParams:(WTLNetworkCommissioningClusterScanNetworksParams * _Nullable)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(void (^)(WTLNetworkCommissioningClusterScanNetworksResponseParams * _Nullable data,
                                   NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use scanNetworksWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)addOrUpdateWiFiNetworkWithParams:(WTLNetworkCommissioningClusterAddOrUpdateWiFiNetworkParams *)params
                          expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                   expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completionHandler:(void (^)(WTLNetworkCommissioningClusterNetworkConfigResponseParams * _Nullable data,
                                             NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use addOrUpdateWiFiNetworkWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)addOrUpdateThreadNetworkWithParams:(WTLNetworkCommissioningClusterAddOrUpdateThreadNetworkParams *)params
                            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completionHandler:(void (^)(WTLNetworkCommissioningClusterNetworkConfigResponseParams * _Nullable data,
                                               NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use addOrUpdateThreadNetworkWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)removeNetworkWithParams:(WTLNetworkCommissioningClusterRemoveNetworkParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(void (^)(WTLNetworkCommissioningClusterNetworkConfigResponseParams * _Nullable data,
                                    NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use removeNetworkWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)connectNetworkWithParams:(WTLNetworkCommissioningClusterConnectNetworkParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completionHandler:(void (^)(WTLNetworkCommissioningClusterConnectNetworkResponseParams * _Nullable data,
                                     NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use connectNetworkWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)reorderNetworkWithParams:(WTLNetworkCommissioningClusterReorderNetworkParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completionHandler:(void (^)(WTLNetworkCommissioningClusterNetworkConfigResponseParams * _Nullable data,
                                     NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use reorderNetworkWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterDiagnosticLogs (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)retrieveLogsRequestWithParams:(WTLDiagnosticLogsClusterRetrieveLogsRequestParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completionHandler:(void (^)(WTLDiagnosticLogsClusterRetrieveLogsResponseParams * _Nullable data,
                                          NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use retrieveLogsRequestWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterGeneralDiagnostics (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)testEventTriggerWithParams:(WTLGeneralDiagnosticsClusterTestEventTriggerParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use testEventTriggerWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (NSDictionary<NSString *, id> *)readAttributeBootReasonsWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeBootReasonWithParams on WTLClusterGeneralDiagnostics", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterSoftwareDiagnostics (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)resetWatermarksWithParams:(WTLSoftwareDiagnosticsClusterResetWatermarksParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resetWatermarksWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)resetWatermarksWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resetWatermarksWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterThreadNetworkDiagnostics (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)resetCountsWithParams:(WTLThreadNetworkDiagnosticsClusterResetCountsParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resetCountsWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)resetCountsWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resetCountsWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (NSDictionary<NSString *, id> *)readAttributeNeighborTableListWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeNeighborTableWithParams on WTLClusterThreadNetworkDiagnostics", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (NSDictionary<NSString *, id> *)readAttributeRouteTableListWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeRouteTableWithParams on WTLClusterThreadNetworkDiagnostics", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterWiFiNetworkDiagnostics (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)resetCountsWithParams:(WTLWiFiNetworkDiagnosticsClusterResetCountsParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resetCountsWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)resetCountsWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resetCountsWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (NSDictionary<NSString *, id> *)readAttributeBssidWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeBSSIDWithParams on WTLClusterWiFiNetworkDiagnostics", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (NSDictionary<NSString *, id> *)readAttributeRssiWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeRSSIWithParams on WTLClusterWiFiNetworkDiagnostics",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterEthernetNetworkDiagnostics (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)resetCountsWithParams:(WTLEthernetNetworkDiagnosticsClusterResetCountsParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resetCountsWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)resetCountsWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use resetCountsWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterBridgedDeviceBasic (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterSwitch (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterAdministratorCommissioning (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)openCommissioningWindowWithParams:(WTLAdministratorCommissioningClusterOpenCommissioningWindowParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use openCommissioningWindowWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)openBasicCommissioningWindowWithParams:(WTLAdministratorCommissioningClusterOpenBasicCommissioningWindowParams *)params
                                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use openBasicCommissioningWindowWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)revokeCommissioningWithParams:(WTLAdministratorCommissioningClusterRevokeCommissioningParams * _Nullable)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use revokeCommissioningWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)revokeCommissioningWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use revokeCommissioningWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterOperationalCredentials (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)attestationRequestWithParams:(WTLOperationalCredentialsClusterAttestationRequestParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(void (^)(WTLOperationalCredentialsClusterAttestationResponseParams * _Nullable data,
                                         NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use attestationRequestWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)certificateChainRequestWithParams:(WTLOperationalCredentialsClusterCertificateChainRequestParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completionHandler:(void (^)(WTLOperationalCredentialsClusterCertificateChainResponseParams * _Nullable data,
                                              NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use certificateChainRequestWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)CSRRequestWithParams:(WTLOperationalCredentialsClusterCSRRequestParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
           completionHandler:(void (^)(WTLOperationalCredentialsClusterCSRResponseParams * _Nullable data,
                                 NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use CSRRequestWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)addNOCWithParams:(WTLOperationalCredentialsClusterAddNOCParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(void (^)(WTLOperationalCredentialsClusterNOCResponseParams * _Nullable data,
                              NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use addNOCWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)updateNOCWithParams:(WTLOperationalCredentialsClusterUpdateNOCParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:(void (^)(WTLOperationalCredentialsClusterNOCResponseParams * _Nullable data,
                                NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use updateNOCWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)updateFabricLabelWithParams:(WTLOperationalCredentialsClusterUpdateFabricLabelParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completionHandler:(void (^)(WTLOperationalCredentialsClusterNOCResponseParams * _Nullable data,
                                        NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use updateFabricLabelWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)removeFabricWithParams:(WTLOperationalCredentialsClusterRemoveFabricParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(void (^)(WTLOperationalCredentialsClusterNOCResponseParams * _Nullable data,
                                   NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use removeFabricWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)addTrustedRootCertificateWithParams:(WTLOperationalCredentialsClusterAddTrustedRootCertificateParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use addTrustedRootCertificateWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterGroupKeyManagement (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)keySetWriteWithParams:(WTLGroupKeyManagementClusterKeySetWriteParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use keySetWriteWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)keySetReadWithParams:(WTLGroupKeyManagementClusterKeySetReadParams *)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
           completionHandler:(void (^)(WTLGroupKeyManagementClusterKeySetReadResponseParams * _Nullable data,
                                 NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use keySetReadWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)keySetRemoveWithParams:(WTLGroupKeyManagementClusterKeySetRemoveParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use keySetRemoveWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)keySetReadAllIndicesWithParams:(WTLGroupKeyManagementClusterKeySetReadAllIndicesParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completionHandler:(void (^)(WTLGroupKeyManagementClusterKeySetReadAllIndicesResponseParams * _Nullable data,
                                           NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use keySetReadAllIndicesWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterFixedLabel (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterUserLabel (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterBooleanState (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterModeSelect (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)changeToModeWithParams:(WTLModeSelectClusterChangeToModeParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use changeToModeWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterDoorLock (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)lockDoorWithParams:(WTLDoorLockClusterLockDoorParams * _Nullable)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
         completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use lockDoorWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)unlockDoorWithParams:(WTLDoorLockClusterUnlockDoorParams * _Nullable)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
           completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use unlockDoorWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)unlockWithTimeoutWithParams:(WTLDoorLockClusterUnlockWithTimeoutParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use unlockWithTimeoutWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)setWeekDayScheduleWithParams:(WTLDoorLockClusterSetWeekDayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use setWeekDayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getWeekDayScheduleWithParams:(WTLDoorLockClusterGetWeekDayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(void (^)(WTLDoorLockClusterGetWeekDayScheduleResponseParams * _Nullable data,
                                         NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getWeekDayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)clearWeekDayScheduleWithParams:(WTLDoorLockClusterClearWeekDayScheduleParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use clearWeekDayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)setYearDayScheduleWithParams:(WTLDoorLockClusterSetYearDayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use setYearDayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getYearDayScheduleWithParams:(WTLDoorLockClusterGetYearDayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(void (^)(WTLDoorLockClusterGetYearDayScheduleResponseParams * _Nullable data,
                                         NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getYearDayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)clearYearDayScheduleWithParams:(WTLDoorLockClusterClearYearDayScheduleParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use clearYearDayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)setHolidayScheduleWithParams:(WTLDoorLockClusterSetHolidayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use setHolidayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getHolidayScheduleWithParams:(WTLDoorLockClusterGetHolidayScheduleParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(void (^)(WTLDoorLockClusterGetHolidayScheduleResponseParams * _Nullable data,
                                         NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getHolidayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)clearHolidayScheduleWithParams:(WTLDoorLockClusterClearHolidayScheduleParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use clearHolidayScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)setUserWithParams:(WTLDoorLockClusterSetUserParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use setUserWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getUserWithParams:(WTLDoorLockClusterGetUserParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:
            (void (^)(WTLDoorLockClusterGetUserResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getUserWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)clearUserWithParams:(WTLDoorLockClusterClearUserParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use clearUserWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)setCredentialWithParams:(WTLDoorLockClusterSetCredentialParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(void (^)(WTLDoorLockClusterSetCredentialResponseParams * _Nullable data,
                                    NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use setCredentialWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getCredentialStatusWithParams:(WTLDoorLockClusterGetCredentialStatusParams *)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completionHandler:(void (^)(WTLDoorLockClusterGetCredentialStatusResponseParams * _Nullable data,
                                          NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getCredentialStatusWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)clearCredentialWithParams:(WTLDoorLockClusterClearCredentialParams *)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use clearCredentialWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterWindowCovering (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)upOrOpenWithParams:(WTLWindowCoveringClusterUpOrOpenParams * _Nullable)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
         completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use upOrOpenWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)upOrOpenWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                 completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use upOrOpenWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)downOrCloseWithParams:(WTLWindowCoveringClusterDownOrCloseParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use downOrCloseWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)downOrCloseWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use downOrCloseWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopMotionWithParams:(WTLWindowCoveringClusterStopMotionParams * _Nullable)params
              expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
       expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
           completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stopMotionWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopMotionWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
               expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stopMotionWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)goToLiftValueWithParams:(WTLWindowCoveringClusterGoToLiftValueParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use goToLiftValueWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)goToLiftPercentageWithParams:(WTLWindowCoveringClusterGoToLiftPercentageParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use goToLiftPercentageWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)goToTiltValueWithParams:(WTLWindowCoveringClusterGoToTiltValueParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use goToTiltValueWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)goToTiltPercentageWithParams:(WTLWindowCoveringClusterGoToTiltPercentageParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use goToTiltPercentageWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterBarrierControl (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)barrierControlGoToPercentWithParams:(WTLBarrierControlClusterBarrierControlGoToPercentParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use barrierControlGoToPercentWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)barrierControlStopWithParams:(WTLBarrierControlClusterBarrierControlStopParams * _Nullable)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use barrierControlStopWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)barrierControlStopWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                           completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use barrierControlStopWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterPumpConfigurationAndControl (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterThermostat (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)setpointRaiseLowerWithParams:(WTLThermostatClusterSetpointRaiseLowerParams *)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use setpointRaiseLowerWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)setWeeklyScheduleWithParams:(WTLThermostatClusterSetWeeklyScheduleParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use setWeeklyScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getWeeklyScheduleWithParams:(WTLThermostatClusterGetWeeklyScheduleParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completionHandler:(void (^)(WTLThermostatClusterGetWeeklyScheduleResponseParams * _Nullable data,
                                        NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getWeeklyScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)clearWeeklyScheduleWithParams:(WTLThermostatClusterClearWeeklyScheduleParams * _Nullable)params
                       expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                    completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use clearWeeklyScheduleWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)clearWeeklyScheduleWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                        expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use clearWeeklyScheduleWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterFanControl (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterThermostatUserInterfaceConfiguration (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterColorControl (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)moveToHueWithParams:(WTLColorControlClusterMoveToHueParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveToHueWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveHueWithParams:(WTLColorControlClusterMoveHueParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveHueWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stepHueWithParams:(WTLColorControlClusterStepHueParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stepHueWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveToSaturationWithParams:(WTLColorControlClusterMoveToSaturationParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveToSaturationWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveSaturationWithParams:(WTLColorControlClusterMoveSaturationParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveSaturationWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stepSaturationWithParams:(WTLColorControlClusterStepSaturationParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stepSaturationWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveToHueAndSaturationWithParams:(WTLColorControlClusterMoveToHueAndSaturationParams *)params
                          expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                   expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveToHueAndSaturationWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveToColorWithParams:(WTLColorControlClusterMoveToColorParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveToColorWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveColorWithParams:(WTLColorControlClusterMoveColorParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveColorWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stepColorWithParams:(WTLColorControlClusterStepColorParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stepColorWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveToColorTemperatureWithParams:(WTLColorControlClusterMoveToColorTemperatureParams *)params
                          expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                   expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                       completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveToColorTemperatureWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)enhancedMoveToHueWithParams:(WTLColorControlClusterEnhancedMoveToHueParams *)params
                     expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                  completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use enhancedMoveToHueWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)enhancedMoveHueWithParams:(WTLColorControlClusterEnhancedMoveHueParams *)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use enhancedMoveHueWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)enhancedStepHueWithParams:(WTLColorControlClusterEnhancedStepHueParams *)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use enhancedStepHueWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)enhancedMoveToHueAndSaturationWithParams:(WTLColorControlClusterEnhancedMoveToHueAndSaturationParams *)params
                                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                               completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use enhancedMoveToHueAndSaturationWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)colorLoopSetWithParams:(WTLColorControlClusterColorLoopSetParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use colorLoopSetWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopMoveStepWithParams:(WTLColorControlClusterStopMoveStepParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stopMoveStepWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)moveColorTemperatureWithParams:(WTLColorControlClusterMoveColorTemperatureParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use moveColorTemperatureWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stepColorTemperatureWithParams:(WTLColorControlClusterStepColorTemperatureParams *)params
                        expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                     completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use stepColorTemperatureWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterBallastConfiguration (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (NSDictionary<NSString *, id> *)readAttributeIntrinsicBalanceFactorWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributeIntrinsicBallastFactorWithParams on WTLClusterBallastConfiguration", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributeIntrinsicBalanceFactorWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    WTL_DEPRECATED("Please use writeAttributeIntrinsicBallastFactorWithValue on WTLClusterBallastConfiguration", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributeIntrinsicBalanceFactorWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                               params:(WTLWriteParams * _Nullable)params
    WTL_DEPRECATED("Please use writeAttributeIntrinsicBallastFactorWithValue on WTLClusterBallastConfiguration", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterIlluminanceMeasurement (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterTemperatureMeasurement (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterPressureMeasurement (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterFlowMeasurement (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterRelativeHumidityMeasurement (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterOccupancySensing (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (NSDictionary<NSString *, id> *)readAttributePirOccupiedToUnoccupiedDelayWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributePIROccupiedToUnoccupiedDelayWithParams on WTLClusterOccupancySensing", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    WTL_DEPRECATED("Please use writeAttributePIROccupiedToUnoccupiedDelayWithValue on WTLClusterOccupancySensing", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    WTL_DEPRECATED("Please use writeAttributePIROccupiedToUnoccupiedDelayWithValue on WTLClusterOccupancySensing", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (NSDictionary<NSString *, id> *)readAttributePirUnoccupiedToOccupiedDelayWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributePIRUnoccupiedToOccupiedDelayWithParams on WTLClusterOccupancySensing", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    WTL_DEPRECATED("Please use writeAttributePIRUnoccupiedToOccupiedDelayWithValue on WTLClusterOccupancySensing", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                      expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                     params:(WTLWriteParams * _Nullable)params
    WTL_DEPRECATED("Please use writeAttributePIRUnoccupiedToOccupiedDelayWithValue on WTLClusterOccupancySensing", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (NSDictionary<NSString *, id> *)readAttributePirUnoccupiedToOccupiedThresholdWithParams:(WTLReadParams * _Nullable)params
    WTL_DEPRECATED("Please use readAttributePIRUnoccupiedToOccupiedThresholdWithParams on WTLClusterOccupancySensing",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
    WTL_DEPRECATED("Please use writeAttributePIRUnoccupiedToOccupiedThresholdWithValue on WTLClusterOccupancySensing",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(NSDictionary<NSString *, id> *)dataValueDictionary
                                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                                                         params:(WTLWriteParams * _Nullable)params
    WTL_DEPRECATED("Please use writeAttributePIRUnoccupiedToOccupiedThresholdWithValue on WTLClusterOccupancySensing",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterWakeOnLan (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterChannel (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)changeChannelWithParams:(WTLChannelClusterChangeChannelParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(void (^)(WTLChannelClusterChangeChannelResponseParams * _Nullable data,
                                    NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use changeChannelWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)changeChannelByNumberWithParams:(WTLChannelClusterChangeChannelByNumberParams *)params
                         expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                  expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use changeChannelByNumberWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)skipChannelWithParams:(WTLChannelClusterSkipChannelParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use skipChannelWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterTargetNavigator (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)navigateTargetWithParams:(WTLTargetNavigatorClusterNavigateTargetParams *)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completionHandler:(void (^)(WTLTargetNavigatorClusterNavigateTargetResponseParams * _Nullable data,
                                     NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use navigateTargetWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterMediaPlayback (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)playWithParams:(WTLMediaPlaybackClusterPlayParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:
            (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use playWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)playWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
             completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                   NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use playWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)pauseWithParams:(WTLMediaPlaybackClusterPauseParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:
            (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use pauseWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)pauseWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
              completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                    NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use pauseWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopPlaybackWithParams:(WTLMediaPlaybackClusterStopPlaybackParams * _Nullable)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                   NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use stopWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopPlaybackWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                     completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                           NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use stopWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)startOverWithParams:(WTLMediaPlaybackClusterStartOverParams * _Nullable)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:
              (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use startOverWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)startOverWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
              expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                  completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                        NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use startOverWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)previousWithParams:(WTLMediaPlaybackClusterPreviousParams * _Nullable)params
            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
         completionHandler:
             (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use previousWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)previousWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
             expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                 completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                       NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use previousWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)nextWithParams:(WTLMediaPlaybackClusterNextParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:
            (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use nextWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)nextWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
             completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                   NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use nextWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)rewindWithParams:(WTLMediaPlaybackClusterRewindParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:
            (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use rewindWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)rewindWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
               completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                     NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use rewindWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)fastForwardWithParams:(WTLMediaPlaybackClusterFastForwardParams * _Nullable)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                  NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use fastForwardWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)fastForwardWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                    completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                          NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use fastForwardWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)skipForwardWithParams:(WTLMediaPlaybackClusterSkipForwardParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                  NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use skipForwardWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)skipBackwardWithParams:(WTLMediaPlaybackClusterSkipBackwardParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data,
                                   NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use skipBackwardWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)seekWithParams:(WTLMediaPlaybackClusterSeekParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:
            (void (^)(WTLMediaPlaybackClusterPlaybackResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use seekWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterMediaInput (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)selectInputWithParams:(WTLMediaInputClusterSelectInputParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use selectInputWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)showInputStatusWithParams:(WTLMediaInputClusterShowInputStatusParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use showInputStatusWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)showInputStatusWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use showInputStatusWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)hideInputStatusWithParams:(WTLMediaInputClusterHideInputStatusParams * _Nullable)params
                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use hideInputStatusWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)hideInputStatusWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                    expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use hideInputStatusWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)renameInputWithParams:(WTLMediaInputClusterRenameInputParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use renameInputWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterLowPower (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)sleepWithParams:(WTLLowPowerClusterSleepParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use sleepWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)sleepWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use sleepWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterKeypadInput (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)sendKeyWithParams:(WTLKeypadInputClusterSendKeyParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:
            (void (^)(WTLKeypadInputClusterSendKeyResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use sendKeyWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterContentLauncher (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)launchContentWithParams:(WTLContentLauncherClusterLaunchContentParams *)params
                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
              completionHandler:(void (^)(WTLContentLauncherClusterLaunchResponseParams * _Nullable data,
                                    NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use launchContentWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)launchURLWithParams:(WTLContentLauncherClusterLaunchURLParams *)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:
              (void (^)(WTLContentLauncherClusterLaunchResponseParams * _Nullable data, NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use launchURLWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterAudioOutput (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)selectOutputWithParams:(WTLAudioOutputClusterSelectOutputParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use selectOutputWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)renameOutputWithParams:(WTLAudioOutputClusterRenameOutputParams *)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use renameOutputWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterApplicationLauncher (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)launchAppWithParams:(WTLApplicationLauncherClusterLaunchAppParams * _Nullable)params
             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
          completionHandler:(void (^)(WTLApplicationLauncherClusterLauncherResponseParams * _Nullable data,
                                NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use launchAppWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)stopAppWithParams:(WTLApplicationLauncherClusterStopAppParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(void (^)(WTLApplicationLauncherClusterLauncherResponseParams * _Nullable data,
                              NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use stopAppWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)hideAppWithParams:(WTLApplicationLauncherClusterHideAppParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(void (^)(WTLApplicationLauncherClusterLauncherResponseParams * _Nullable data,
                              NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use hideAppWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterApplicationBasic (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

@interface WTLClusterAccountLogin (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)getSetupPINWithParams:(WTLAccountLoginClusterGetSetupPINParams *)params
               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
            completionHandler:(void (^)(WTLAccountLoginClusterGetSetupPINResponseParams * _Nullable data,
                                  NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use getSetupPINWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)loginWithParams:(WTLAccountLoginClusterLoginParams *)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use loginWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)logoutWithParams:(WTLAccountLoginClusterLogoutParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use logoutWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)logoutWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
           expectedValueInterval:(NSNumber *)expectedValueIntervalMs
               completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use logoutWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterElectricalMeasurement (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)getProfileInfoCommandWithParams:(WTLElectricalMeasurementClusterGetProfileInfoCommandParams * _Nullable)params
                         expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                  expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                      completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use getProfileInfoCommandWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getProfileInfoCommandWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                          expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                              completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use getProfileInfoCommandWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)getMeasurementProfileCommandWithParams:(WTLElectricalMeasurementClusterGetMeasurementProfileCommandParams *)params
                                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use getMeasurementProfileCommandWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLClusterTestCluster (Deprecated)

- (nullable instancetype)initWithDevice:(WTLDevice *)device
                               endpoint:(uint16_t)endpoint
                                  queue:(dispatch_queue_t)queue
    WTL_DEPRECATED(
        "Please use initWithDevice:endpoindID:queue:",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

- (void)testWithParams:(WTLTestClusterClusterTestParams * _Nullable)params
           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
        completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use testWithParams:expectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
         expectedValueInterval:(NSNumber *)expectedValueIntervalMs
             completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use testWithExpectedValues:expectedValueInterval:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testNotHandledWithParams:(WTLTestClusterClusterTestNotHandledParams * _Nullable)params
                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
               completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use testNotHandledWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testNotHandledWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                   expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                       completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use testNotHandledWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testSpecificWithParams:(WTLTestClusterClusterTestSpecificParams * _Nullable)params
                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
             completionHandler:(void (^)(WTLTestClusterClusterTestSpecificResponseParams * _Nullable data,
                                   NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testSpecificWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testSpecificWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                 expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                     completionHandler:(void (^)(WTLTestClusterClusterTestSpecificResponseParams * _Nullable data,
                                           NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testSpecificWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testUnknownCommandWithParams:(WTLTestClusterClusterTestUnknownCommandParams * _Nullable)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use testUnknownCommandWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testUnknownCommandWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                           completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use testUnknownCommandWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testAddArgumentsWithParams:(WTLTestClusterClusterTestAddArgumentsParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completionHandler:(void (^)(WTLTestClusterClusterTestAddArgumentsResponseParams * _Nullable data,
                                       NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testAddArgumentsWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testSimpleArgumentRequestWithParams:(WTLTestClusterClusterTestSimpleArgumentRequestParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completionHandler:(void (^)(WTLTestClusterClusterTestSimpleArgumentResponseParams * _Nullable data,
                                                NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testSimpleArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testStructArrayArgumentRequestWithParams:(WTLTestClusterClusterTestStructArrayArgumentRequestParams *)params
                                  expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                           expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                               completionHandler:
                                   (void (^)(WTLTestClusterClusterTestStructArrayArgumentResponseParams * _Nullable data,
                                       NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testStructArrayArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testStructArgumentRequestWithParams:(WTLTestClusterClusterTestStructArgumentRequestParams *)params
                             expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                      expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                          completionHandler:(void (^)(WTLTestClusterClusterBooleanResponseParams * _Nullable data,
                                                NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testStructArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testNestedStructArgumentRequestWithParams:(WTLTestClusterClusterTestNestedStructArgumentRequestParams *)params
                                   expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                            expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                completionHandler:(void (^)(WTLTestClusterClusterBooleanResponseParams * _Nullable data,
                                                      NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testNestedStructArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testListStructArgumentRequestWithParams:(WTLTestClusterClusterTestListStructArgumentRequestParams *)params
                                 expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                          expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                              completionHandler:(void (^)(WTLTestClusterClusterBooleanResponseParams * _Nullable data,
                                                    NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testListStructArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testListInt8UArgumentRequestWithParams:(WTLTestClusterClusterTestListInt8UArgumentRequestParams *)params
                                expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                         expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                             completionHandler:(void (^)(WTLTestClusterClusterBooleanResponseParams * _Nullable data,
                                                   NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testListInt8UArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testNestedStructListArgumentRequestWithParams:(WTLTestClusterClusterTestNestedStructListArgumentRequestParams *)params
                                       expectedValues:
                                           (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                                expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                    completionHandler:(void (^)(WTLTestClusterClusterBooleanResponseParams * _Nullable data,
                                                          NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testNestedStructListArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testListNestedStructListArgumentRequestWithParams:
            (WTLTestClusterClusterTestListNestedStructListArgumentRequestParams *)params
                                           expectedValues:
                                               (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                        completionHandler:(void (^)(WTLTestClusterClusterBooleanResponseParams * _Nullable data,
                                                              NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testListNestedStructListArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testListInt8UReverseRequestWithParams:(WTLTestClusterClusterTestListInt8UReverseRequestParams *)params
                               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completionHandler:(void (^)(WTLTestClusterClusterTestListInt8UReverseResponseParams * _Nullable data,
                                                  NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testListInt8UReverseRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testEnumsRequestWithParams:(WTLTestClusterClusterTestEnumsRequestParams *)params
                    expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
             expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                 completionHandler:(void (^)(WTLTestClusterClusterTestEnumsResponseParams * _Nullable data,
                                       NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testEnumsRequestWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testNullableOptionalRequestWithParams:(WTLTestClusterClusterTestNullableOptionalRequestParams * _Nullable)params
                               expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                        expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                            completionHandler:(void (^)(WTLTestClusterClusterTestNullableOptionalResponseParams * _Nullable data,
                                                  NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testNullableOptionalRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testComplexNullableOptionalRequestWithParams:(WTLTestClusterClusterTestComplexNullableOptionalRequestParams *)params
                                      expectedValues:
                                          (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                   completionHandler:
                                       (void (^)(WTLTestClusterClusterTestComplexNullableOptionalResponseParams * _Nullable data,
                                           NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testComplexNullableOptionalRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)simpleStructEchoRequestWithParams:(WTLTestClusterClusterSimpleStructEchoRequestParams *)params
                           expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                    expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                        completionHandler:(void (^)(WTLTestClusterClusterSimpleStructResponseParams * _Nullable data,
                                              NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use simpleStructEchoRequestWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)timedInvokeRequestWithParams:(WTLTestClusterClusterTimedInvokeRequestParams * _Nullable)params
                      expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
               expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                   completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use timedInvokeRequestWithParams:expectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)timedInvokeRequestWithExpectedValues:(NSArray<NSDictionary<NSString *, id> *> *)expectedValues
                       expectedValueInterval:(NSNumber *)expectedValueIntervalMs
                           completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use timedInvokeRequestWithExpectedValues:expectedValueInterval:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testSimpleOptionalArgumentRequestWithParams:(WTLTestClusterClusterTestSimpleOptionalArgumentRequestParams * _Nullable)params
                                     expectedValues:
                                         (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                              expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                  completionHandler:(WTLStatusCompletion)completionHandler
    WTL_DEPRECATED("Please use testSimpleOptionalArgumentRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testEmitTestEventRequestWithParams:(WTLTestClusterClusterTestEmitTestEventRequestParams *)params
                            expectedValues:(NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                     expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                         completionHandler:(void (^)(WTLTestClusterClusterTestEmitTestEventResponseParams * _Nullable data,
                                               NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testEmitTestEventRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
- (void)testEmitTestFabricScopedEventRequestWithParams:(WTLTestClusterClusterTestEmitTestFabricScopedEventRequestParams *)params
                                        expectedValues:
                                            (NSArray<NSDictionary<NSString *, id> *> * _Nullable)expectedDataValueDictionaries
                                 expectedValueInterval:(NSNumber * _Nullable)expectedValueIntervalMs
                                     completionHandler:
                                         (void (^)(
                                             WTLTestClusterClusterTestEmitTestFabricScopedEventResponseParams * _Nullable data,
                                             NSError * _Nullable error))completionHandler
    WTL_DEPRECATED("Please use testEmitTestFabricScopedEventRequestWithParams:expectedValues:expectedValueInterval:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

NS_ASSUME_NONNULL_END
