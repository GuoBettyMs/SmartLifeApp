//
//  ThingDeviceRebootTimer.h
//  ThingDeviceDetailKit
//
//  Created by 后主 on 2024/1/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingDeviceRebootTimer : NSObject <NSCopying>

@property (nonatomic, copy) NSString *tid;

@property (nonatomic, copy) NSString *time;

@property (nonatomic, copy) NSString *loops;

@property (nonatomic, assign) BOOL status;


- (BOOL)isSame:(ThingDeviceRebootTimer *)timer;

- (void)migrate:(ThingDeviceRebootTimer *)timer;

@end

NS_ASSUME_NONNULL_END
