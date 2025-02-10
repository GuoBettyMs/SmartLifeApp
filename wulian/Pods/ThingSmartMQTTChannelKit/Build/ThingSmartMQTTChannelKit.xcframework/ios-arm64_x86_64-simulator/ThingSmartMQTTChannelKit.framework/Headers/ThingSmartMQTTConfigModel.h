//
//  ThingSmartMQTTConfigModel.h
//  ThingSmartMQTTChannelKit
//
//  Copyright (c) 2014-2024.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartMQTTConfigModel : NSObject <NSMutableCopying>

@property (nonatomic, strong) NSString *clientId;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *password;

@property (nonatomic, strong) NSString *mbHost;
@property (nonatomic, strong) NSString *mbIp;
@property (nonatomic, assign) int port;
@property (nonatomic, assign) BOOL useSSL;

@property (nonatomic, strong, nullable) NSString *quicHost;
@property (nonatomic, strong, nullable) NSString *quicIp;
@property (nonatomic, assign) int quicPort;
@property (nonatomic, assign) BOOL useQUIC;
@property (nonatomic, assign) BOOL quicEnabled;

@end

NS_ASSUME_NONNULL_END
