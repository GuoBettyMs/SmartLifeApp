//
//  ThingBLEBeaconWiFiAdvFrame.h
//  ThingSmartBLECoreKit
//
//  Created by 余豪 on 2024/7/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingBLEBeaconWiFiAdvFrame : NSObject

@property (copy) NSString *mac;
@property (copy) NSString *sn;
@property (copy) NSString *cmd;
@property (copy) NSData *params;
@property (copy) NSString *sum;
@property (assign, nonatomic) int sl;

+ (BOOL)validateBeaconWiFiFormatData:(NSDictionary *)data;

+ (instancetype)frameWithServices:(NSArray *)services;

@end

NS_ASSUME_NONNULL_END
