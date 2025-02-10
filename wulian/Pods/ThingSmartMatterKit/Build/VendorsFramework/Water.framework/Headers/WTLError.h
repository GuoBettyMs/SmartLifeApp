/**
 *
 *    Copyright (c) 2020 Project CHIP Authors
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

NS_ASSUME_NONNULL_BEGIN
FOUNDATION_EXPORT NSErrorDomain const WTLErrorDomain;

FOUNDATION_EXPORT NSErrorDomain const WTLInteractionErrorDomain;

/**
 * WTLErrorDomain contains errors caused by data processing the framework
 * itself is performing.  These can be caused by invalid values provided to a
 * framework API, failure to decode an incoming message, and so forth.
 *
 * This error domain also contains errors that are communicated via success
 * responses from a server but mapped to an error on the client.
 *
 * Errors reported by the server side of a Matter interaction via the normal
 * Matter error-reporting mechanisms use WTLInteractionErrorDomain instead.
 */
// clang-format off
typedef NS_ERROR_ENUM(WTLErrorDomain, WTLErrorCode){
    /**
     * WTLErrorCodeGeneralError represents a generic Matter error with no
     * further categorization.
     *
     * The userInfo will have a key named @"errorCode" whose value will be an
     * integer representing the underlying Matter error code.  These integer
     * values should not be assumed to be stable across releases, but may be
     * useful in logging and debugging.
     */
    WTLErrorCodeGeneralError         = 1,
    WTLErrorCodeInvalidStringLength  = 2,
    WTLErrorCodeInvalidIntegerValue  = 3,
    WTLErrorCodeInvalidArgument      = 4,
    WTLErrorCodeInvalidMessageLength = 5,
    WTLErrorCodeInvalidState         = 6,
    WTLErrorCodeWrongAddressType     = 7,
    WTLErrorCodeIntegrityCheckFailed = 8,
    WTLErrorCodeTimeout              = 9,
    WTLErrorCodeBufferTooSmall       = 10,
    /**
     * WTLErrorCodeFabricExists is returned when trying to commission a device
     * into a fabric when it's already part of that fabric.
     */
    WTLErrorCodeFabricExists         = 11,
};
// clang-format on

/**
 * WTLInteractionErrorDomain contains errors that represent a Matter
 * StatusIB error.  These represent errors reported by the other side of a
 * Matter interaction.
 *
 * When the code is WTLInteractionErrorCodeFailure the userInfo may have a
 * key named @"clusterStatus" whose value is the cluster-specific status that
 * was reported.  This key will be absent if there was no cluster-specific
 * status.
 */
// clang-format off
typedef NS_ERROR_ENUM(WTLInteractionErrorDomain, WTLInteractionErrorCode){
    // These values come from the general status code table in the Matter
    // Interaction Model specification.
    WTLInteractionErrorCodeFailure                = 0x01,
    WTLInteractionErrorCodeInvalidSubscription    = 0x7d,
    WTLInteractionErrorCodeUnsupportedAccess      = 0x7e,
    WTLInteractionErrorCodeUnsupportedEndpoint    = 0x7f,
    WTLInteractionErrorCodeInvalidAction          = 0x80,
    WTLInteractionErrorCodeUnsupportedCommand     = 0x81,
    WTLInteractionErrorCodeInvalidCommand         = 0x85,
    WTLInteractionErrorCodeUnsupportedAttribute   = 0x86,
    WTLInteractionErrorCodeConstraintError        = 0x87,
    WTLInteractionErrorCodeUnsupportedWrite       = 0x88,
    WTLInteractionErrorCodeResourceExhausted      = 0x89,
    WTLInteractionErrorCodeNotFound               = 0x8b,
    WTLInteractionErrorCodeUnreportableAttribute  = 0x8c,
    WTLInteractionErrorCodeInvalidDataType        = 0x8d,
    WTLInteractionErrorCodeUnsupportedRead        = 0x8f,
    WTLInteractionErrorCodeDataVersionMismatch    = 0x92,
    WTLInteractionErrorCodeTimeout                = 0x94,
    WTLInteractionErrorCodeBusy                   = 0x9c,
    WTLInteractionErrorCodeUnsupportedCluster     = 0xc3,
    WTLInteractionErrorCodeNoUpstreamSubscription = 0xc5,
    WTLInteractionErrorCodeNeedsTimedInteraction  = 0xc6,
    WTLInteractionErrorCodeUnsupportedEvent       = 0xc7,
    WTLInteractionErrorCodePathsExhausted         = 0xc8,
    WTLInteractionErrorCodeTimedRequestMismatch   = 0xc9,
    WTLInteractionErrorCodeFailsafeRequired       = 0xca,
};
// clang-format on

NS_ASSUME_NONNULL_END
