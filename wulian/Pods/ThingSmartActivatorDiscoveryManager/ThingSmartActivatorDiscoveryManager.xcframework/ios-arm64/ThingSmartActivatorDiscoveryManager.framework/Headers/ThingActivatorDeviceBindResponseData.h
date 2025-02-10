//
//  ThingActivatorDeviceBindResponseData.h
//  ThingActivatorModule
//
//  Created by qisong on 2022/3/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingActivatorDeviceBindResponseData : NSObject
@property (nonatomic, copy) NSString *devId;

@property (nonatomic, strong) NSString *errorCode;
@property (nonatomic, assign) BOOL relyCloud;
@property (nonatomic, strong) NSString *errorMsg;
@property (nonatomic, assign) BOOL changeSpace;

@property (nonatomic, strong, nullable) NSDictionary *raw;

@end

NS_ASSUME_NONNULL_END
