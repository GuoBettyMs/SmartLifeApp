//
//  ThingSmartUser+DeprecatedApi.h
//  ThingSmartBaseKit
//
//  Copyright (c) 2014-2024.
//

#ifndef ThingSmartUser_DeprecatedApi_h
#define ThingSmartUser_DeprecatedApi_h

#import "ThingSmartUser.h"

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartUser (DeprecatedApi)

/// Sends the verification code to a mobile phone to enable login, registration, and password resetting.
/// @param countryCode The country code.
/// @param phoneNumber The mobile phone number.
/// @param type Valid values: `0` Log in with the mobile phone verification code. `1`: Register with the mobile phone verification code. `2`: Reset a password with the mobile phone verification code.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)sendVerifyCode:(NSString *)countryCode
           phoneNumber:(NSString *)phoneNumber
                  type:(NSInteger)type
               success:(nullable ThingSuccessHandler)success
               failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use sendVerifyCodeWithUserName:region:countryCode:type:success:failure: instead");

#pragma mark Anonymous

/// Enables anonymous registration.
/// @param countryCode The country code.
/// @param userName The username, such as [UIDevice currentDevice].name.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)registerAnonymousWithCountryCode:(NSString *)countryCode
                                userName:(NSString *)userName
                                 success:(nullable ThingSuccessHandler)success
                                 failure:(nullable ThingFailureError)failure;
DEPRECATED_MSG_ATTRIBUTE("use registerAnonymousWithCountryCode:success:failure: instead");

#pragma mark email

/// Enables email registration 1.0.
/// @param countryCode The country code.
/// @param email The email.
/// @param password The password.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
/// @deprecated This method is deprecated, use ThingSmartUser::registerByEmail:email:password:code:success:failure: instead
- (void)registerByEmail:(NSString *)countryCode
                  email:(NSString *)email
               password:(NSString *)password
                success:(nullable ThingSuccessHandler)success
                failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use registerByEmail:email:password:code:success:failure: instead");


#pragma mark phone

/// Enables registration and login with a mobile phone verification code.
/// @param countryCode The country code.
/// @param phoneNumber The mobile phone number.
/// @param code The verification code.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
/// @deprecated This method is deprecated, use ThingSmartUser::loginWithMobile:countryCode:code:success:failure: instead
- (void)login:(NSString *)countryCode
  phoneNumber:(NSString *)phoneNumber
         code:(NSString *)code
      success:(nullable ThingSuccessHandler)success
      failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use loginWithMobile:countryCode:code:success:failure: instead");

#pragma mark Uid

/// Enables registration and login with the user ID. The account is registered at first login.
/// @param countryCode The country code.
/// @param uid The user ID.
/// @param password The password.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
/// @deprecated This method is deprecated, use ThingSmartUser::loginOrRegisterWithCountryCode:uid:password:success:failure: instead
- (void)loginOrRegisterByPhone:(NSString *)countryCode
                           uid:(NSString *)uid
                      password:(NSString *)password
                       success:(nullable ThingSuccessHandler)success
                       failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use loginOrRegisterWithCountryCode:uid:password:success:failure: instead");

/// Enables registration and login with the user ID. The account is registered at first login.
/// @param countryCode The country code.
/// @param uid The user ID.
/// @param password The password.
/// @param createHome Creates a default home.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
/// @deprecated This method is deprecated, use ThingSmartUser::loginOrRegisterWithCountryCode:uid:password:createHome:success:failure: instead
- (void)loginOrRegisterByPhone:(NSString *)countryCode
                           uid:(NSString *)uid
                      password:(NSString *)password
                    createHome:(BOOL)createHome
                       success:(nullable ThingSuccessID)success
                       failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use loginOrRegisterWithCountryCode:uid:password:createHome:success:failure: instead");

/// Enables registration with the user ID.
/// @param uid The user ID.
/// @param password The password.
/// @param countryCode The country code.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
/// @deprecated This method is deprecated, use ThingSmartUser::loginOrRegisterWithCountryCode:uid:password:createHome:success:failure: instead
- (void)registerByUid:(NSString *)uid
             password:(NSString *)password
          countryCode:(NSString *)countryCode
              success:(nullable ThingSuccessHandler)success
              failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use loginOrRegisterWithCountryCode:uid:password:createHome:success:failure: instead");

/// Enables login with the user ID.
/// @param uid The user ID.
/// @param password The password.
/// @param countryCode The country code.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
/// @deprecated This method is deprecated, use ThingSmartUser::loginOrRegisterWithCountryCode:uid:password:createHome:success:failure: instead
- (void)loginByUid:(NSString *)uid
          password:(NSString *)password
       countryCode:(NSString *)countryCode
           success:(nullable ThingSuccessHandler)success
           failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use loginOrRegisterWithCountryCode:uid:password:createHome:success:failure: instead");

/// Enables registration and login with the user ID. The account is registered at first login.
/// @param countryCode The country code.
/// @param uid The user ID.
/// @param password The password.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
/// @deprecated This method is deprecated. Use ThingSmartUser::loginOrRegisterWithCountryCode:uid:password:createHome:success:failure: instead.
- (void)loginOrRegisterWithCountryCode:(NSString *)countryCode
                                   uid:(NSString *)uid
                              password:(NSString *)password
                               success:(nullable ThingSuccessHandler)success
                               failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use loginOrRegisterWithCountryCode:uid:password:createHome:success:failure: instead");


/// Sends the verification code to an email to reset the password.
/// @param countryCode The country code.
/// @param email The email.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)sendVerifyCodeByEmail:(NSString *)countryCode
                        email:(NSString *)email
                      success:(nullable ThingSuccessHandler)success
                      failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use sendVerifyCodeWithUserName:region:countryCode:type:success:failure: instead");

/// Sends the verification code to an email to register the account.
/// @param countryCode The country code.
/// @param email The email.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)sendVerifyCodeByRegisterEmail:(NSString *)countryCode
                                email:(NSString *)email
                              success:(nullable ThingSuccessHandler)success
                              failure:(nullable ThingFailureError)failure
DEPRECATED_MSG_ATTRIBUTE("use sendVerifyCodeWithUserName:region:countryCode:type:success:failure: instead");

@end

NS_ASSUME_NONNULL_END

#endif /* ThingSmartUser_DeprecatedApi_h */
