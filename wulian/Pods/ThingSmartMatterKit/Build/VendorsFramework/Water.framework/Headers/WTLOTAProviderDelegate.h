/**
 *
 *    Copyright (c) 2022-2023 Project CHIP Authors
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

#import <Foundation/Foundation.h>
#import <Water/WTLCluster.h>
#import <Water/WTLCommandPayloadsObjc.h>
#import <Water/WTLDefines.h>

@class WTLDeviceController;

NS_ASSUME_NONNULL_BEGIN

/**
 * The protocol definition for the WTLOTAProviderDelegate
 *
 * All delegate methods will be called on the supplied Delegate Queue.
 *
 * While the selectors on this protocol are marked @optional, in practice an
 * implementation must provide an implementation for one of each pair of
 * selectors (e.g. one of the two handleQueryImageForNodeID selectors must be
 * implemented).  The selector ending in "completion:" will be used if present;
 * otherwise the one ending in "completionHandler:" will be used.
 */
@protocol WTLOTAProviderDelegate <NSObject>
@optional
/**
 * Notify the delegate when the query image command is received from some node.
 * The controller identifies the fabric the node is on, and the nodeID
 * identifies the node within that fabric.
 *
 * If completion is passed a non-nil error, that will be converted into
 * an error response to the client.  Otherwise it must have a non-nil data,
 * which will be returned to the client.
 */
- (void)handleQueryImageForNodeID:(NSNumber *)nodeID
                       controller:(WTLDeviceController *)controller
                           params:(WTLOTASoftwareUpdateProviderClusterQueryImageParams *)params
                       completion:(void (^)(WTLOTASoftwareUpdateProviderClusterQueryImageResponseParams * _Nullable data,
                                      NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)handleQueryImageForNodeID:(NSNumber *)nodeID
                       controller:(WTLDeviceController *)controller
                           params:(WTLOtaSoftwareUpdateProviderClusterQueryImageParams *)params
                completionHandler:(void (^)(WTLOtaSoftwareUpdateProviderClusterQueryImageResponseParams * _Nullable data,
                                      NSError * _Nullable error))completionHandler
    WTL_DEPRECATED_WITH_REPLACEMENT("handleQueryImageForNodeID:controller:params:completion:",  macos(13.0, 13.3),
        watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Notify the delegate when the apply update request command is received from
 * some node.  The controller identifies the fabric the node is on, and the
 * nodeID identifies the node within that fabric.
 *
 * If completion is passed a non-nil error, that will be converted into
 * an error response to the client.  Otherwise it must have a non-nil data,
 * which will be returned to the client.
 */
- (void)handleApplyUpdateRequestForNodeID:(NSNumber *)nodeID
                               controller:(WTLDeviceController *)controller
                                   params:(WTLOTASoftwareUpdateProviderClusterApplyUpdateRequestParams *)params
                               completion:(void (^)(WTLOTASoftwareUpdateProviderClusterApplyUpdateResponseParams * _Nullable data,
                                              NSError * _Nullable error))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)handleApplyUpdateRequestForNodeID:(NSNumber *)nodeID
                               controller:(WTLDeviceController *)controller
                                   params:(WTLOtaSoftwareUpdateProviderClusterApplyUpdateRequestParams *)params
                        completionHandler:(void (^)(WTLOtaSoftwareUpdateProviderClusterApplyUpdateResponseParams * _Nullable data,
                                              NSError * _Nullable error))completionHandler
    WTL_DEPRECATED_WITH_REPLACEMENT("handleApplyUpdateRequestForNodeID:controller:params:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Notify the delegate when the notify update applied command is received from
 * some node.  The controller identifies the fabric the node is on, and the
 * nodeID identifies the node within that fabric.
 *
 * If completion is passed a non-nil error, that will be converted into
 * an error response to the client.  Otherwise a success response will be sent.
 */
- (void)handleNotifyUpdateAppliedForNodeID:(NSNumber *)nodeID
                                controller:(WTLDeviceController *)controller
                                    params:(WTLOTASoftwareUpdateProviderClusterNotifyUpdateAppliedParams *)params
                                completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)handleNotifyUpdateAppliedForNodeID:(NSNumber *)nodeID
                                controller:(WTLDeviceController *)controller
                                    params:(WTLOtaSoftwareUpdateProviderClusterNotifyUpdateAppliedParams *)params
                         completionHandler:(StatusCompletion)completionHandler
    WTL_DEPRECATED_WITH_REPLACEMENT("handleNotifyUpdateAppliedForNodeID:controller:params:completion:", 
        macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Notify the delegate when a BDX Session starts for some node.  The controller
 * identifies the fabric the node is on, and the nodeID identifies the node
 * within that fabric.
 */
- (void)handleBDXTransferSessionBeginForNodeID:(NSNumber *)nodeID
                                    controller:(WTLDeviceController *)controller
                                fileDesignator:(NSString *)fileDesignator
                                        offset:(NSNumber *)offset
                                    completion:(WTLStatusCompletion)completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)handleBDXTransferSessionBeginForNodeID:(NSNumber *)nodeID
                                    controller:(WTLDeviceController *)controller
                                fileDesignator:(NSString *)fileDesignator
                                        offset:(NSNumber *)offset
                             completionHandler:(StatusCompletion)completionHandler
    WTL_DEPRECATED_WITH_REPLACEMENT("handleBDXTransferSessionBeginForNodeID:controller:fileDesignator:offset:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

/**
 * Notify the delegate when a BDX Session ends for some node.  The controller
 * identifies the fabric the node is on, and the nodeID identifies the node
 * within that fabric.
 */
- (void)handleBDXTransferSessionEndForNodeID:(NSNumber *)nodeID
                                  controller:(WTLDeviceController *)controller
                                       error:(NSError * _Nullable)error;

/**
 * Notify the delegate when a BDX Query message has been received for some node.
 * The controller identifies the fabric the node is on, and the nodeID
 * identifies the node within that fabric.
 */
- (void)handleBDXQueryForNodeID:(NSNumber *)nodeID
                     controller:(WTLDeviceController *)controller
                      blockSize:(NSNumber *)blockSize
                     blockIndex:(NSNumber *)blockIndex
                    bytesToSkip:(NSNumber *)bytesToSkip
                     completion:(void (^)(NSData * _Nullable data, BOOL isEOF))completion
    API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4));

- (void)handleBDXQueryForNodeID:(NSNumber *)nodeID
                     controller:(WTLDeviceController *)controller
                      blockSize:(NSNumber *)blockSize
                     blockIndex:(NSNumber *)blockIndex
                    bytesToSkip:(NSNumber *)bytesToSkip
              completionHandler:(void (^)(NSData * _Nullable data, BOOL isEOF))completionHandler
    WTL_DEPRECATED_WITH_REPLACEMENT("handleBDXQueryForNodeID:controller:blockSize:blockIndex:bytesToSkip:completion:",
         macos(13.0, 13.3), watchos(9.1, 9.4), tvos(16.1, 16.4));

@end

NS_ASSUME_NONNULL_END
