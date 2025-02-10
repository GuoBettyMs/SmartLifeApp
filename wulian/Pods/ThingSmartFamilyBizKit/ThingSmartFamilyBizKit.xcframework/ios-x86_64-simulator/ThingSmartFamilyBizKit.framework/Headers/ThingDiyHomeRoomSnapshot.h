//
//  ThingDiyHomeRoomSnapshot.h
//  ThingSmartDeviceKit
//
//  Created by wzm on 2024/3/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


@interface ThingDiyHomeRoomSnapshotRule : NSObject
@property (nonatomic, strong) NSString * ruleId;
@property (nonatomic, strong) NSString * ruleName;
@property (nonatomic, strong) NSString * background;
@property (nonatomic, strong) NSString * icon;
@end

@interface ThingDiyHomeRoomSnapshotDevice : NSObject
@property (nonatomic, strong) NSString * bizId;
@property (nonatomic, assign) NSUInteger bizType; //5:group ; 6:device
@property (nonatomic, assign) NSUInteger displayOrder;

- (BOOL)isGroup;
@end

@interface ThingDiyHomeRoomSnapshot : NSObject
@property (nonatomic, strong) NSArray<ThingDiyHomeRoomSnapshotRule *> * ruleList;
@property (nonatomic, strong) NSArray<ThingDiyHomeRoomSnapshotDevice *> * deviceList;

- (BOOL)isValid;
@end

NS_ASSUME_NONNULL_END
