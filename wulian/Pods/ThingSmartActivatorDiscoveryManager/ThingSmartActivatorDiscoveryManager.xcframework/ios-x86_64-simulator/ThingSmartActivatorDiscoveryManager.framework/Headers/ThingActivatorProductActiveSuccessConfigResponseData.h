//
//  ThingActivatorProductActiveSuccessConfigResponseData.h
//  ThingSmartActivatorDiscoveryManager
//
//  Created by huangjj on 2023/12/20.
//

#import <Foundation/Foundation.h>
@class ThingSmartALeadModel;
NS_ASSUME_NONNULL_BEGIN

@interface ThingActivatorProductActiveSuccessConfigResponseData : NSObject
@property (nonatomic, strong) ThingSmartALeadModel *assistGuide;
@property (nonatomic, strong) ThingSmartALeadModel *moreConfigGuide;
@property (nonatomic, strong) NSString *guidePreStep;
@property (nonatomic, strong) NSString *guideNextStep;
@property (nonatomic, strong) NSString *guideConfirm;
@end

NS_ASSUME_NONNULL_END
