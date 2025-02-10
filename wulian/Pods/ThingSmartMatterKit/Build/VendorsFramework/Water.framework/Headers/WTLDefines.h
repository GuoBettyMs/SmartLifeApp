/**
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

#import <Foundation/Foundation.h>

#pragma mark - Attribute macros

#define WTL_EXPORT __attribute__((visibility("default")))

#ifdef __cplusplus
#define WTL_EXTERN extern "C" WTL_EXPORT
#else
#define WTL_EXTERN extern WTL_EXPORT
#endif

#if __has_attribute(__swift_attr__)
#define WTL_SWIFT_DISFAVORED_OVERLOAD __attribute__((__swift_attr__("@_disfavoredOverload")))
#else
#define WTL_SWIFT_DISFAVORED_OVERLOAD
#endif

#pragma mark - Deprecation macros (can be overriden via build system)

#ifndef WTL_DEPRECATED
#define WTL_DEPRECATED(...) API_DEPRECATED(__VA_ARGS__) WTL_SWIFT_DISFAVORED_OVERLOAD
#endif

#ifndef WTL_DEPRECATED_WITH_REPLACEMENT
#define WTL_DEPRECATED_WITH_REPLACEMENT(...) API_DEPRECATED_WITH_REPLACEMENT(__VA_ARGS__) WTL_SWIFT_DISFAVORED_OVERLOAD
#endif

#ifndef WTL_NEWLY_DEPRECATED
#define WTL_NEWLY_DEPRECATED(message)
#endif

#ifndef WTL_NEWLY_AVAILABLE
#define WTL_NEWLY_AVAILABLE
#endif

#pragma mark - Types

typedef NSData * WTLTLVBytes;
typedef NSData * WTLCSRDERBytes;
typedef NSData * WTLCertificateDERBytes;
typedef NSData * WTLCertificateTLVBytes;
