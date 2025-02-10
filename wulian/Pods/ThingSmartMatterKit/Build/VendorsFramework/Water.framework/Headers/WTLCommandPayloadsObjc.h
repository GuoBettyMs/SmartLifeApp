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
#import <Water/WTLStructsObjc.h>

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLIdentifyClusterIdentifyParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull identifyTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLIdentifyClusterTriggerEffectParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull effectIdentifier API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull effectVariant API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterAddGroupParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nonnull groupName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLGroupsClusterAddGroupParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterAddGroupResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLGroupsClusterAddGroupResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterViewGroupParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLGroupsClusterViewGroupParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterViewGroupResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nonnull groupName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLGroupsClusterViewGroupResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterGetGroupMembershipParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull groupList API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterGetGroupMembershipResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable capacity API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull groupList API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterRemoveGroupParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLGroupsClusterRemoveGroupParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterRemoveGroupResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLGroupsClusterRemoveGroupResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterRemoveAllGroupsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupsClusterAddGroupIfIdentifyingParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nonnull groupName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLGroupsClusterAddGroupIfIdentifyingParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterAddSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull sceneName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull extensionFieldSets API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterAddSceneParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterAddSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterAddSceneResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterViewSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterViewSceneParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterViewSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable sceneName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nullable extensionFieldSets API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterViewSceneResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterRemoveSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterRemoveSceneParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterRemoveSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterRemoveSceneResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterRemoveAllScenesParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterRemoveAllScenesParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterRemoveAllScenesResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterRemoveAllScenesResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterStoreSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterStoreSceneParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterStoreSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterStoreSceneResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterRecallSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterRecallSceneParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterGetSceneMembershipParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterGetSceneMembershipParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterGetSceneMembershipResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable capacity API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nullable sceneList API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterGetSceneMembershipResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterEnhancedAddSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull sceneName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull extensionFieldSets API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterEnhancedAddSceneParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterEnhancedAddSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterEnhancedAddSceneResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterEnhancedViewSceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterEnhancedViewSceneParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterEnhancedViewSceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable sceneName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nullable extensionFieldSets API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterEnhancedViewSceneResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupId WTL_DEPRECATED(
    "Please use groupID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneId WTL_DEPRECATED(
    "Please use sceneID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterCopySceneParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull mode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupIdentifierFrom API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdentifierFrom API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull groupIdentifierTo API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdentifierTo API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLScenesClusterCopySceneParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupIdFrom WTL_DEPRECATED(
    "Please use groupIdentifierFrom",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdFrom WTL_DEPRECATED(
    "Please use sceneIdentifierFrom",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull groupIdTo WTL_DEPRECATED(
    "Please use groupIdentifierTo",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdTo WTL_DEPRECATED(
    "Please use sceneIdentifierTo",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLScenesClusterCopySceneResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull groupIdentifierFrom API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdentifierFrom API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLScenesClusterCopySceneResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull groupIdFrom WTL_DEPRECATED(
    "Please use groupIdentifierFrom",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull sceneIdFrom WTL_DEPRECATED(
    "Please use sceneIdentifierFrom",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOnOffClusterOffParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOnOffClusterOnParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOnOffClusterToggleParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOnOffClusterOffWithEffectParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull effectIdentifier API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull effectVariant API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLOnOffClusterOffWithEffectParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull effectId WTL_DEPRECATED(
    "Please use effectIdentifier",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOnOffClusterOnWithRecallGlobalSceneParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOnOffClusterOnWithTimedOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull onOffControl API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull onTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull offWaitTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterMoveToLevelParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull level API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterMoveParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable rate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterStepParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterStopParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterMoveToLevelWithOnOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull level API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterMoveWithOnOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable rate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterStepWithOnOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterStopWithOnOffParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLevelControlClusterMoveToClosestFrequencyParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull frequency API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterInstantActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterInstantActionWithTransitionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterStartActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterStartActionWithDurationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull duration API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterStopActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterPauseActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterPauseActionWithDurationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull duration API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterResumeActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterEnableActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterEnableActionWithDurationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull duration API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterDisableActionParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLActionsClusterDisableActionWithDurationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull actionID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable invokeID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull duration API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("This command has been removed",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLBasicClusterMfgSpecificPingParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateProviderClusterQueryImageParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull vendorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull productID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull protocolsSupported API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable hardwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable location API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable requestorCanConsent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    ;

@property (nonatomic, copy) NSData * _Nullable metadataForProvider API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateProviderClusterQueryImageParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateProviderClusterQueryImageParams : WTLOTASoftwareUpdateProviderClusterQueryImageParams
@end

@interface WTLOTASoftwareUpdateProviderClusterQueryImageParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull vendorId WTL_DEPRECATED(
    "Please use vendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull productId WTL_DEPRECATED(
    "Please use productID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateProviderClusterQueryImageResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable delayedActionTime API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable imageURI API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable softwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSString * _Nullable softwareVersionString API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSData * _Nullable updateToken API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable userConsentNeeded API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSData * _Nullable metadataForRequestor API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateProviderClusterQueryImageResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateProviderClusterQueryImageResponseParams : WTLOTASoftwareUpdateProviderClusterQueryImageResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateProviderClusterApplyUpdateRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull updateToken API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy, getter=getNewVersion)
    NSNumber * _Nonnull newVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateProviderClusterApplyUpdateRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateProviderClusterApplyUpdateRequestParams : WTLOTASoftwareUpdateProviderClusterApplyUpdateRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateProviderClusterApplyUpdateResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull action API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull delayedActionTime API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateProviderClusterApplyUpdateResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateProviderClusterApplyUpdateResponseParams
    : WTLOTASoftwareUpdateProviderClusterApplyUpdateResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull updateToken API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull softwareVersion API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateProviderClusterNotifyUpdateAppliedParams
    : WTLOTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLOTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull providerNodeID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull vendorID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull announcementReason API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSData * _Nullable metadataForNode API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull endpoint API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLOTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLOtaSoftwareUpdateRequestorClusterAnnounceOtaProviderParams
    : WTLOTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams
@end

@interface WTLOTASoftwareUpdateRequestorClusterAnnounceOTAProviderParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull providerNodeId WTL_DEPRECATED(
    "Please use providerNodeID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));

@property (nonatomic, copy) NSNumber * _Nonnull vendorId WTL_DEPRECATED(
    "Please use vendorID", ios(16.4, 16.4), macos(13.3, 13.3), watchos(9.4, 9.4), tvos(16.4, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralCommissioningClusterArmFailSafeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull expiryLengthSeconds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull breadcrumb API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralCommissioningClusterArmFailSafeResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull errorCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull debugText API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralCommissioningClusterSetRegulatoryConfigParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewRegulatoryConfig)
    NSNumber * _Nonnull newRegulatoryConfig API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull countryCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull breadcrumb API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralCommissioningClusterSetRegulatoryConfigResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull errorCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull debugText API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralCommissioningClusterCommissioningCompleteParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralCommissioningClusterCommissioningCompleteResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull errorCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull debugText API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterScanNetworksParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nullable ssid API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterScanNetworksResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull networkingStatus API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable debugText API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nullable wiFiScanResults API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nullable threadScanResults API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterAddOrUpdateWiFiNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull ssid API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull credentials API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterAddOrUpdateThreadNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull operationalDataset API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterRemoveNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull networkID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterNetworkConfigResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull networkingStatus API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable debugText API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable networkIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterConnectNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull networkID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterConnectNetworkResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull networkingStatus API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable debugText API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable errorValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLNetworkCommissioningClusterReorderNetworkParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull networkID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull networkIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable breadcrumb API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull intent API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull requestedProtocol API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSString * _Nullable transferFileDesignator API_AVAILABLE(macos(13.4), watchos(9.5), tvos(16.5));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull logContent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable utcTimeStamp API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable timeSinceBoot API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLDiagnosticLogsClusterRetrieveLogsResponseParams (Deprecated)

@property (nonatomic, copy) NSData * _Nonnull content WTL_DEPRECATED(
    "Please use logContent",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@property (nonatomic, copy) NSNumber * _Nullable timeStamp WTL_DEPRECATED(
    "Please use utcTimeStamp",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGeneralDiagnosticsClusterTestEventTriggerParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull enableKey API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull eventTrigger API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLSoftwareDiagnosticsClusterResetWatermarksParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThreadNetworkDiagnosticsClusterResetCountsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWiFiNetworkDiagnosticsClusterResetCountsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLEthernetNetworkDiagnosticsClusterResetCountsParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLTimeSynchronizationClusterSetUtcTimeParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull utcTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull granularity API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable timeSource API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAdministratorCommissioningClusterOpenCommissioningWindowParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull commissioningTimeout API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
    ;

@property (nonatomic, copy) NSData * _Nonnull pakePasscodeVerifier API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull discriminator API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull iterations API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull salt API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLAdministratorCommissioningClusterOpenCommissioningWindowParams (Deprecated)

@property (nonatomic, copy) NSData * _Nonnull pakeVerifier WTL_DEPRECATED(
    "Please use pakePasscodeVerifier",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAdministratorCommissioningClusterOpenBasicCommissioningWindowParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull commissioningTimeout API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
    ;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAdministratorCommissioningClusterRevokeCommissioningParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterAttestationRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull attestationNonce API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterAttestationResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull attestationElements API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull attestationSignature API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLOperationalCredentialsClusterAttestationResponseParams (Deprecated)

@property (nonatomic, copy) NSData * _Nonnull signature WTL_DEPRECATED(
    "Please use attestationSignature",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterCertificateChainRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull certificateType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterCertificateChainResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull certificate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterCSRRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull csrNonce API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable isForUpdateNOC API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterCSRResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull nocsrElements API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull attestationSignature API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterAddNOCParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull nocValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable icacValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull ipkValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull caseAdminSubject API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull adminVendorId API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterUpdateNOCParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull nocValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable icacValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterNOCResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull statusCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable debugText API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterUpdateFabricLabelParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull label API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterRemoveFabricParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull fabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLOperationalCredentialsClusterAddTrustedRootCertificateParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nonnull rootCACertificate API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLOperationalCredentialsClusterAddTrustedRootCertificateParams (Deprecated)

@property (nonatomic, copy) NSData * _Nonnull rootCertificate WTL_DEPRECATED(
    "Please use rootCACertificate",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterKeySetWriteParams : NSObject <NSCopying>

@property (nonatomic, copy) WTLGroupKeyManagementClusterGroupKeySetStruct * _Nonnull groupKeySet API_AVAILABLE(
    macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterKeySetReadParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupKeySetID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterKeySetReadResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) WTLGroupKeyManagementClusterGroupKeySetStruct * _Nonnull groupKeySet API_AVAILABLE(
    macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterKeySetRemoveParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull groupKeySetID API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterKeySetReadAllIndicesParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull groupKeySetIDs API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLGroupKeyManagementClusterKeySetReadAllIndicesResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull groupKeySetIDs API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLModeSelectClusterChangeToModeParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getNewMode)
    NSNumber * _Nonnull newMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterLockDoorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nullable pinCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterUnlockDoorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSData * _Nullable pinCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterUnlockWithTimeoutParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull timeout API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable pinCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterSetWeekDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull weekDayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull daysMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull startHour API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull startMinute API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull endHour API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull endMinute API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetWeekDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull weekDayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetWeekDayScheduleResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull weekDayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable daysMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable startHour API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable startMinute API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable endHour API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable endMinute API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterClearWeekDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull weekDayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterSetYearDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull yearDayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull localStartTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull localEndTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetYearDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull yearDayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetYearDayScheduleResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull yearDayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable localStartTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable localEndTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterClearYearDayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull yearDayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterSetHolidayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull holidayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull localStartTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull localEndTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull operatingMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetHolidayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull holidayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetHolidayScheduleResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull holidayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable localStartTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable localEndTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable operatingMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterClearHolidayScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull holidayIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterSetUserParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull operationType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable userName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userUniqueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable userStatus API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable credentialRule API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLDoorLockClusterSetUserParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nullable userUniqueId WTL_DEPRECATED(
    "Please use userUniqueID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetUserParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetUserResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable userName API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userUniqueID API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable userStatus API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable credentialRule API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nullable credentials API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable creatorFabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nullable lastModifiedFabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable nextUserIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

@interface WTLDoorLockClusterGetUserResponseParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nullable userUniqueId WTL_DEPRECATED(
    "Please use userUniqueID",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterClearUserParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterSetCredentialParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull operationType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    WTLDoorLockClusterCredentialStruct * _Nonnull credential API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nonnull credentialData API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userStatus API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userType API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterSetCredentialResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable nextCredentialIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
    ;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetCredentialStatusParams : NSObject <NSCopying>

@property (nonatomic, copy)
    WTLDoorLockClusterCredentialStruct * _Nonnull credential API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterGetCredentialStatusResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull credentialExists API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable userIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable creatorFabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nullable lastModifiedFabricIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nullable nextCredentialIndex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
    ;
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLDoorLockClusterClearCredentialParams : NSObject <NSCopying>

@property (nonatomic, copy)
    WTLDoorLockClusterCredentialStruct * _Nullable credential API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWindowCoveringClusterUpOrOpenParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWindowCoveringClusterDownOrCloseParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWindowCoveringClusterStopMotionParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWindowCoveringClusterGoToLiftValueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull liftValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWindowCoveringClusterGoToLiftPercentageParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSNumber * _Nonnull liftPercent100thsValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWindowCoveringClusterGoToTiltValueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull tiltValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLWindowCoveringClusterGoToTiltPercentageParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSNumber * _Nonnull tiltPercent100thsValue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLBarrierControlClusterBarrierControlGoToPercentParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull percentOpen API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLBarrierControlClusterBarrierControlStopParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThermostatClusterSetpointRaiseLowerParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull mode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull amount API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThermostatClusterGetWeeklyScheduleResponseParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSNumber * _Nonnull numberOfTransitionsForSequence API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull dayOfWeekForSequence API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
    ;

@property (nonatomic, copy) NSNumber * _Nonnull modeForSequence API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull transitions API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThermostatClusterSetWeeklyScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSNumber * _Nonnull numberOfTransitionsForSequence API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull dayOfWeekForSequence API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
    ;

@property (nonatomic, copy) NSNumber * _Nonnull modeForSequence API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull transitions API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThermostatClusterGetWeeklyScheduleParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull daysToReturn API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull modeToReturn API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLThermostatClusterClearWeeklyScheduleParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveToHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull hue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull direction API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterStepHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveToSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull saturation API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterStepSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveToHueAndSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull hue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull saturation API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveToColorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull colorX API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull colorY API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveColorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull rateX API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rateY API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterStepColorParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepX API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepY API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveToColorTemperatureParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSNumber * _Nonnull colorTemperatureMireds API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

@interface WTLColorControlClusterMoveToColorTemperatureParams (Deprecated)

@property (nonatomic, copy) NSNumber * _Nonnull colorTemperature WTL_DEPRECATED(
    "Please use colorTemperatureMireds",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterEnhancedMoveToHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull enhancedHue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull direction API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterEnhancedMoveHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterEnhancedStepHueParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterEnhancedMoveToHueAndSaturationParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull enhancedHue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull saturation API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterColorLoopSetParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull updateFlags API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull action API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull direction API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull time API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull startHue API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterStopMoveStepParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterMoveColorTemperatureParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull moveMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull rate API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nonnull colorTemperatureMinimumMireds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nonnull colorTemperatureMaximumMireds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLColorControlClusterStepColorTemperatureParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull stepMode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull stepSize API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull transitionTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nonnull colorTemperatureMinimumMireds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nonnull colorTemperatureMaximumMireds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsMask API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull optionsOverride API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLChannelClusterChangeChannelParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull match API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLChannelClusterChangeChannelResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLChannelClusterChangeChannelByNumberParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull majorNumber API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull minorNumber API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLChannelClusterSkipChannelParams : NSObject <NSCopying>

@property (nonatomic, copy, getter=getCount)
    NSNumber * _Nonnull count API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLTargetNavigatorClusterNavigateTargetParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull target API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLTargetNavigatorClusterNavigateTargetResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterPlayParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterPauseParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLMediaPlaybackClusterStopParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED(
    "Please use WTLMediaPlaybackClusterStopParams",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLMediaPlaybackClusterStopPlaybackParams : WTLMediaPlaybackClusterStopParams
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterStartOverParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterPreviousParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterNextParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterRewindParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterFastForwardParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterSkipForwardParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSNumber * _Nonnull deltaPositionMilliseconds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterSkipBackwardParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSNumber * _Nonnull deltaPositionMilliseconds API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterPlaybackResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaPlaybackClusterSeekParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull position API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaInputClusterSelectInputParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull index API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaInputClusterShowInputStatusParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaInputClusterHideInputStatusParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLMediaInputClusterRenameInputParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull index API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLLowPowerClusterSleepParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLKeypadInputClusterSendKeyParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull keyCode API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLKeypadInputClusterSendKeyResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLContentLauncherClusterLaunchContentParams : NSObject <NSCopying>

@property (nonatomic, copy)
    WTLContentLauncherClusterContentSearchStruct * _Nonnull search API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull autoPlay API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable data API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLContentLauncherClusterLaunchURLParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull contentURL API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nullable displayString API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) WTLContentLauncherClusterBrandingInformationStruct * _Nullable brandingInformation API_AVAILABLE(
    macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLContentLauncherClusterLauncherResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable data API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLContentLauncherClusterLauncherResponseParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLContentLauncherClusterLaunchResponseParams : WTLContentLauncherClusterLauncherResponseParams
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAudioOutputClusterSelectOutputParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull index API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAudioOutputClusterRenameOutputParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull index API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull name API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLApplicationLauncherClusterLaunchAppParams : NSObject <NSCopying>

@property (nonatomic, copy) WTLApplicationLauncherClusterApplicationStruct * _Nullable application API_AVAILABLE(
    macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable data API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLApplicationLauncherClusterStopAppParams : NSObject <NSCopying>

@property (nonatomic, copy) WTLApplicationLauncherClusterApplicationStruct * _Nullable application API_AVAILABLE(
    macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLApplicationLauncherClusterHideAppParams : NSObject <NSCopying>

@property (nonatomic, copy) WTLApplicationLauncherClusterApplicationStruct * _Nullable application API_AVAILABLE(
    macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLApplicationLauncherClusterLauncherResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSData * _Nullable data API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAccountLoginClusterGetSetupPINParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSString * _Nonnull tempAccountIdentifier API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAccountLoginClusterGetSetupPINResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSString * _Nonnull setupPIN API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAccountLoginClusterLoginParams : NSObject <NSCopying>

@property (nonatomic, copy)
    NSString * _Nonnull tempAccountIdentifier API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSString * _Nonnull setupPIN API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLAccountLoginClusterLogoutParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLElectricalMeasurementClusterGetProfileInfoResponseCommandParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull profileCount API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nonnull profileIntervalPeriod API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull maxNumberOfIntervals API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
    ;

@property (nonatomic, copy) NSArray * _Nonnull listOfAttributes API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLElectricalMeasurementClusterGetProfileInfoCommandParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLElectricalMeasurementClusterGetMeasurementProfileResponseCommandParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull startTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull status API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nonnull profileIntervalPeriod API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy)
    NSNumber * _Nonnull numberOfIntervalsDelivered API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull attributeId API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSArray * _Nonnull intervals API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLElectricalMeasurementClusterGetMeasurementProfileCommandParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull attributeId API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull startTime API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull numberOfIntervals API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterTestParams",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestParams : WTLUnitTestingClusterTestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestSpecificResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull returnValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestSpecificResponseParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestSpecificResponseParams : WTLUnitTestingClusterTestSpecificResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestNotHandledParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterTestNotHandledParams",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestNotHandledParams : WTLUnitTestingClusterTestNotHandledParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestAddArgumentsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull returnValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestAddArgumentsResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestAddArgumentsResponseParams : WTLUnitTestingClusterTestAddArgumentsResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestSpecificParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED(
    "Please use WTLUnitTestingClusterTestSpecificParams",  macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestSpecificParams : WTLUnitTestingClusterTestSpecificParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestSimpleArgumentResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull returnValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestSimpleArgumentResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestSimpleArgumentResponseParams : WTLUnitTestingClusterTestSimpleArgumentResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestUnknownCommandParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestUnknownCommandParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestUnknownCommandParams : WTLUnitTestingClusterTestUnknownCommandParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestStructArrayArgumentResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg2 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg3 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg4 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg5 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg6 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestStructArrayArgumentResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestStructArrayArgumentResponseParams : WTLUnitTestingClusterTestStructArrayArgumentResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestAddArgumentsParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestAddArgumentsParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestAddArgumentsParams : WTLUnitTestingClusterTestAddArgumentsParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestListInt8UReverseResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestListInt8UReverseResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestListInt8UReverseResponseParams : WTLUnitTestingClusterTestListInt8UReverseResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestSimpleArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestSimpleArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestSimpleArgumentRequestParams : WTLUnitTestingClusterTestSimpleArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestEnumsResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestEnumsResponseParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestEnumsResponseParams : WTLUnitTestingClusterTestEnumsResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestStructArrayArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg2 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg3 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nonnull arg4 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg5 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg6 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestStructArrayArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestStructArrayArgumentRequestParams : WTLUnitTestingClusterTestStructArrayArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestNullableOptionalResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull wasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable wasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable value API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable originalValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestNullableOptionalResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestNullableOptionalResponseParams : WTLUnitTestingClusterTestNullableOptionalResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestStructArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy)
    WTLUnitTestingClusterSimpleStruct * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestStructArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestStructArgumentRequestParams : WTLUnitTestingClusterTestStructArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestComplexNullableOptionalResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull nullableIntWasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable nullableIntValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nonnull optionalIntWasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nullable optionalIntValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nonnull nullableOptionalIntWasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nullable nullableOptionalIntWasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nullable nullableOptionalIntValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nonnull nullableStringWasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable nullableStringValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    ;

@property (nonatomic, copy)
    NSNumber * _Nonnull optionalStringWasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSString * _Nullable optionalStringValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
    ;

@property (nonatomic, copy)
    NSNumber * _Nonnull nullableOptionalStringWasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nullable nullableOptionalStringWasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSString * _Nullable nullableOptionalStringValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nonnull nullableStructWasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) WTLUnitTestingClusterSimpleStruct * _Nullable nullableStructValue API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nonnull optionalStructWasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) WTLUnitTestingClusterSimpleStruct * _Nullable optionalStructValue API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nonnull nullableOptionalStructWasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nullable nullableOptionalStructWasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) WTLUnitTestingClusterSimpleStruct * _Nullable nullableOptionalStructValue API_AVAILABLE(
    macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull nullableListWasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nullable nullableListValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nonnull optionalListWasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSArray * _Nullable optionalListValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nonnull nullableOptionalListWasPresent API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSNumber * _Nullable nullableOptionalListWasNull API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy)
    NSArray * _Nullable nullableOptionalListValue API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestComplexNullableOptionalResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestComplexNullableOptionalResponseParams
    : WTLUnitTestingClusterTestComplexNullableOptionalResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestNestedStructArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy)
    WTLUnitTestingClusterNestedStruct * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestNestedStructArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestNestedStructArgumentRequestParams : WTLUnitTestingClusterTestNestedStructArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterBooleanResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull value API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterBooleanResponseParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterBooleanResponseParams : WTLUnitTestingClusterBooleanResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestListStructArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestListStructArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestListStructArgumentRequestParams : WTLUnitTestingClusterTestListStructArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterSimpleStructResponseParams : NSObject <NSCopying>

@property (nonatomic, copy)
    WTLUnitTestingClusterSimpleStruct * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterSimpleStructResponseParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterSimpleStructResponseParams : WTLUnitTestingClusterSimpleStructResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestListInt8UArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestListInt8UArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestListInt8UArgumentRequestParams : WTLUnitTestingClusterTestListInt8UArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestEmitTestEventResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull value API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestEmitTestEventResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestEmitTestEventResponseParams : WTLUnitTestingClusterTestEmitTestEventResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestNestedStructListArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy)
    WTLUnitTestingClusterNestedStructList * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestNestedStructListArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestNestedStructListArgumentRequestParams
    : WTLUnitTestingClusterTestNestedStructListArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestEmitTestFabricScopedEventResponseParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull value API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable)
    NSNumber * timedInvokeTimeoutMs WTL_DEPRECATED("Timed invoke does not make sense for server to client commands",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestEmitTestFabricScopedEventResponseParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestEmitTestFabricScopedEventResponseParams
    : WTLUnitTestingClusterTestEmitTestFabricScopedEventResponseParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestListNestedStructListArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestListNestedStructListArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestListNestedStructListArgumentRequestParams
    : WTLUnitTestingClusterTestListNestedStructListArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestListInt8UReverseRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSArray * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestListInt8UReverseRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestListInt8UReverseRequestParams : WTLUnitTestingClusterTestListInt8UReverseRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestEnumsRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestEnumsRequestParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestEnumsRequestParams : WTLUnitTestingClusterTestEnumsRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestNullableOptionalRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestNullableOptionalRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestNullableOptionalRequestParams : WTLUnitTestingClusterTestNullableOptionalRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestComplexNullableOptionalRequestParams : NSObject <NSCopying>

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
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestComplexNullableOptionalRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestComplexNullableOptionalRequestParams
    : WTLUnitTestingClusterTestComplexNullableOptionalRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterSimpleStructEchoRequestParams : NSObject <NSCopying>

@property (nonatomic, copy)
    WTLUnitTestingClusterSimpleStruct * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterSimpleStructEchoRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterSimpleStructEchoRequestParams : WTLUnitTestingClusterSimpleStructEchoRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTimedInvokeRequestParams : NSObject <NSCopying>
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTimedInvokeRequestParams",  macos(13.0, 13.3), watchos(9.1, 9.4),
    tvos(16.1, 16.4))
@interface WTLTestClusterClusterTimedInvokeRequestParams : WTLUnitTestingClusterTimedInvokeRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestSimpleOptionalArgumentRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nullable arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestSimpleOptionalArgumentRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestSimpleOptionalArgumentRequestParams
    : WTLUnitTestingClusterTestSimpleOptionalArgumentRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestEmitTestEventRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg2 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

@property (nonatomic, copy) NSNumber * _Nonnull arg3 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestEmitTestEventRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestEmitTestEventRequestParams : WTLUnitTestingClusterTestEmitTestEventRequestParams
@end

API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4))
@interface WTLUnitTestingClusterTestEmitTestFabricScopedEventRequestParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull arg1 API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

WTL_DEPRECATED("Please use WTLUnitTestingClusterTestEmitTestFabricScopedEventRequestParams",  macos(13.0, 13.3),
    watchos(9.1, 9.4), tvos(16.1, 16.4))
@interface WTLTestClusterClusterTestEmitTestFabricScopedEventRequestParams
    : WTLUnitTestingClusterTestEmitTestFabricScopedEventRequestParams
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLFaultInjectionClusterFailAtFaultParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull type API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull id API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull numCallsToSkip API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull numCallsToFail API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull takeMutex API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1))
@interface WTLFaultInjectionClusterFailRandomlyAtFaultParams : NSObject <NSCopying>

@property (nonatomic, copy) NSNumber * _Nonnull type API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull id API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));

@property (nonatomic, copy) NSNumber * _Nonnull percentage API_AVAILABLE(macos(13.0), watchos(9.1), tvos(16.1));
/**
 * Controls whether the command is a timed command (using Timed Invoke).
 *
 * If nil (the default value), a regular invoke is done for commands that do
 * not require a timed invoke and a timed invoke with some default timed request
 * timeout is done for commands that require a timed invoke.
 *
 * If not nil, a timed invoke is done, with the provided value used as the timed
 * request timeout.  The value should be chosen small enough to provide the
 * desired security properties but large enough that it will allow a round-trip
 * from the sever to the client (for the status response and actual invoke
 * request) within the timeout window.
 *
 */
@property (nonatomic, copy, nullable) NSNumber * timedInvokeTimeoutMs;

/**
 * Controls how much time, in seconds, we will allow for the server to process the command.
 *
 * The command will then time out if that much time, plus an allowance for retransmits due to network failures, passes.
 *
 * If nil, the framework will try to select an appropriate timeout value itself.
 */
@property (nonatomic, copy, nullable) NSNumber * serverSideProcessingTimeout;
@end

NS_ASSUME_NONNULL_END
