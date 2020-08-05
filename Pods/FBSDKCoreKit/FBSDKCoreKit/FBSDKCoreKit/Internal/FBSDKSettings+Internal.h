// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#if SWIFT_PACKAGE
#import "FBSDKSettings.h"
#else
#import <FBSDKCoreKit/FBSDKSettings.h>
#endif

#define DATA_PROCESSING_OPTIONS         @"data_processing_options"
#define DATA_PROCESSING_OPTIONS_COUNTRY @"data_processing_options_country"
#define DATA_PROCESSING_OPTIONS_STATE   @"data_processing_options_state"

@protocol FBSDKAccessTokenCaching;

@interface FBSDKSettings(Internal)

+ (nullable NSObject<FBSDKAccessTokenCaching> *)accessTokenCache;

+ (void)setAccessTokenCache:(nullable NSObject<FBSDKAccessTokenCaching> *)accessTokenCache;

+ (nullable NSDictionary<NSString *, id> *)dataProcessingOptions;

+ (BOOL)isDataProcessingRestricted;

@property (class, nonatomic, copy, readonly, nullable) NSString *graphAPIDebugParamValue;

// used by Unity.
@property (class, nonatomic, copy, nullable) NSString *userAgentSuffix;

@end
