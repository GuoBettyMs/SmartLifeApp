/*
 *
 *    Copyright (c) 2022-2023 Project CHIP Authors
 *    All rights reserved.
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

#import <os/log.h>

#import <Foundation/Foundation.h>

#ifdef __cplusplus
extern "C"
#endif


NS_ASSUME_NONNULL_BEGIN

//typedef NS_ENUM(NSInteger, WTLLogType) {
//    WTLLogTypeError = 1,
//    WTLLogTypeProgress = 2,
//    WTLLogTypeDetail = 3,
//};
//
//typedef void (^WTLLogCallback)(WTLLogType type, NSString * moduleName, NSString * message);

/**
 * Arranges for log messages from the Matter stack to be delivered to a callback block.
 *
 * @param logTypeThreshold only messages up to (and including) the specified log type will be delivered
 * @param callback the block to call, or nil to disable the log callback.
 *
 * The callback block may be called concurrently and/or from arbitrary threads.
 * It SHALL NOT call back directly or indirectly into any Matter APIs,
 * nor block the calling thread for a non-trivial amount of time.
 */
//WTL_EXTERN API_AVAILABLE(macos(13.3), watchos(9.4), tvos(16.4)) void WTLSetLogCallback(
//    WTLLogType logTypeThreshold, WTLLogCallback _Nullable callback);

void ThingMatterSDKLogInfo(NSInteger level, NSString *module, const char *file, const char *function, NSUInteger line, const char *message, ...);


NS_ASSUME_NONNULL_END
