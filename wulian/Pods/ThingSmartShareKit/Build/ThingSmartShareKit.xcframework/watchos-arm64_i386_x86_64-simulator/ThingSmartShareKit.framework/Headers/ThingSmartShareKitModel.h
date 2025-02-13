//
//  ThingSmartShareKitModel.h
//  ThingSmartShareKit
//
//  Created by Houzhu on 2021/7/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ThingShareValidationType) {
    /// Share Forever
    ThingShareValidationTypeForever = 0,
    /// Sharing works over a period of time
    ThingShareValidationTypePeriod,
};

typedef NS_ENUM(NSInteger, ThingShareResType) {
    ThingShareResTypeDevice = 1,
    ThingShareResTypeGroup,
};



@interface ThingSmartDeviceShareRequestModel : NSObject

/// The home ID.
@property (nonatomic, assign) long long homeID;

/// The country code.
@property (nonatomic, copy) NSString *countryCode;

/// The account.
@property (nonatomic, copy) NSString *userAccount;

/// A list of device IDs.
@property (nonatomic, copy) NSArray<NSString *> *devIds;

@end



@interface ThingSmartShareDeviceModel : NSObject

/// The URL of the device icon.
@property (nonatomic, strong) NSString *iconUrl;

/// The device ID.
@property (nonatomic, strong) NSString *devId;

/// The device name or group name.
@property (nonatomic, strong) NSString *name;

/// Specifies whether to share the device.
@property (nonatomic, assign) BOOL share;

/// The room name.
@property (nonatomic, strong) NSString *roomName;


/// The home name.
@property (nonatomic, strong) NSString *homeName;

@end


@interface ThingSmartShareMemberDetailModel : NSObject

/// The device model list.
@property (nonatomic, strong) NSArray <ThingSmartShareDeviceModel *> *devices;

/// The phone number.
@property (nonatomic, strong) NSString *mobile;

/// The name.
@property (nonatomic, strong) NSString *name;

/// The nickname.
@property (nonatomic, strong) NSString *remarkName;

/// Specifies whether to enable automatic sharing.
@property (nonatomic, assign) BOOL autoSharing;


@end



@interface ThingSmartReceiveMemberDetailModel : NSObject

@property (nonatomic, strong) NSArray <ThingSmartShareDeviceModel *> *devices;

/// The account information, email, or phone number.
@property (nonatomic, strong) NSString *mobile;

/// The user nickname.
@property (nonatomic, strong) NSString *name;

/// The remarks.
@property (nonatomic, strong) NSString *remarkName;

@end




@interface ThingSmartShareMemberModel : NSObject

/// The relationship ID.
@property (nonatomic, assign) NSInteger memberId;

/// The nickname.
@property (nonatomic, strong) NSString  *nickName;

/// The username that is the phone number or email address.
@property (nonatomic, strong) NSString  *userName;

/// The URL of the avatar.
@property (nonatomic, strong) NSString *iconUrl;

/// Share Validity.
@property (nonatomic, assign) ThingShareValidationType shareMode;

/// End time of sharing.
@property (nonatomic, assign)  long endTime;

/// The user id.
@property (nonatomic, strong) NSString *uid;

@end

NS_ASSUME_NONNULL_END
