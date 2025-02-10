//
//  ThingBLECMDToken.h
//  ThingSmartBLEKit
//
//  Created by 吴戈 on 2020/1/13.
//

#import <Foundation/Foundation.h>
#import "ThingBLECryptologyProtcol.h"
#import "ThingBLEGCDTimer.h"
NS_ASSUME_NONNULL_BEGIN

@interface ThingBLECMDToken : NSObject

@property (nonatomic, assign) ThingBLEConfigType               cmdType;

@property (nonatomic, copy, nullable) ThingFailureError        failure;
@property (nonatomic, copy, nullable) ThingSuccessData         success;
@property (nonatomic, strong) NSData                        *data;
@property (nonatomic, strong) id<ThingBLEDeviceInfoProtocol>   deviceInfo;

@property (nonatomic, strong, nullable) ThingBLEGCDTimer *timer;

@end

NS_ASSUME_NONNULL_END
