//
//  ThingSmartALeadModel.h
//  ThingActivatorRequestSktImpl
//
//  Created by qisong on 2022/3/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@class ThingSmartALeadGuideModel;
@interface ThingSmartALeadModel : NSObject

@property (nonatomic, copy) NSString *title; ///< 标题
@property (nonatomic, copy) NSString *iconUrl; ///< 描述
@property (nonatomic, copy) NSString *videoUrl; ///< 视频

@property (nonatomic, assign) BOOL radioFlag; ///<  CheckBox display Switch 单选框展示开关
@property (nonatomic, assign) BOOL radioExplainFlag; ///< Checkbox Description Guidance Switch 单选框说明引导开关
@property (nonatomic, assign) BOOL guideFlag; ///< Assisted Guide Switch 辅助引导开关
///<
@property (nonatomic, strong) NSNumber *guideType;  // 引导类型 1:步骤引导、2:指定H5、3:跳小程序
@property (nonatomic, copy) NSString *guideH5Url; //辅助引导跳转h5
@property (nonatomic, copy) NSString *appletsPath; //小程序路径

@property (nonatomic, copy) NSString *AddBtText; //单选框文案(多步骤)
@property (nonatomic, copy) NSString *radioExplainTitle;//单选框说明标题(多步骤)
@property (nonatomic, copy) NSString *radioExplainDesc;//单选框说明描述(多步骤)
@property (nonatomic, copy) NSString *radioExplainIconUrl; //单选框图 (多步骤)
@property (nonatomic, copy) NSString *radioExplainVideoUrl;//单选框视频(多步骤)
@property (nonatomic, copy) NSString *guideEntranceText; //辅助引导入口文案(多步骤)
@property (nonatomic, copy) NSString *guideTitle; //辅助引导一级标题(多步骤)

@property (nonatomic, strong) NSArray<ThingSmartALeadGuideModel *> *guideList; //辅助引导步骤

/// 配网结束引导跳转配置
@property (nonatomic, strong) NSNumber *guideCloseType;  //步骤结束跳转页面类型 2:指定H5页面 3:跳转小程序 4:直接关闭 5:跳面板
@property (nonatomic, strong) NSString *closeGuideH5Url; //结束根据app用户区域取url
@property (nonatomic, strong) NSString *closeAppletsPath; // 结束小程序路径
@property (nonatomic, strong) NSString *closePanelPath; // 面板路径
@end

NS_ASSUME_NONNULL_END
