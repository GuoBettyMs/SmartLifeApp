//
//  ThingSmartALeadGuideModel.h
//  ThingSmartActivatorDiscoveryManager
//
//  Created by huangjj on 2023/12/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartALeadGuideModel : NSObject

@property (nonatomic, copy) NSString *guideStepTitle;
@property (nonatomic, copy) NSString *guideStepDesc;
@property (nonatomic, copy) NSString *guideIconUrl;
@property (nonatomic, copy) NSString *guideVideoUrl;

@end

NS_ASSUME_NONNULL_END
