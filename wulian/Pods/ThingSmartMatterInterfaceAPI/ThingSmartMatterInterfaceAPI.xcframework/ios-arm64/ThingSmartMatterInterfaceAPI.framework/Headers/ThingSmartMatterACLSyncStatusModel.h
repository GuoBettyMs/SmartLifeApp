//
//  ThingSmartMatterACLSyncStatusModel.h
//  ThingSmartMatterInterfaceAPI
//
//  Created by 尼诺 on 2022/7/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, ThingSmartMatterACLSyncStatus) {
    ThingSmartMatterACLSyncStatusFinished = 1,
    ThingSmartMatterACLSyncStatusSyncing  = 2
};


// https://wiki.thing-inc.com:7799/page/1552199056439144484
@interface ThingSmartMatterACLSyncStatusModel : NSObject

@property (nonatomic, strong) NSString *devId;

// ACL同步状态
@property (nonatomic, assign) ThingSmartMatterACLSyncStatus status;

// 是否超限(true=是、false=否)
@property (nonatomic, assign) BOOL isOverLimited;

@end

NS_ASSUME_NONNULL_END
