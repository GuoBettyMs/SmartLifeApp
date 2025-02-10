//
//  UIViewController+TabBar.h
//  ThingModuleManager
//
//  Created by Hiraeth on 2024/6/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// UIKit里面存在通用方法可以调用 但是因为存在循环依赖 所以这里重复包装一下

@interface UIViewController (TabBar)

- (void)tabbar_goBackToFirstPage:(BOOL)animated completion:(dispatch_block_t)completion;

@end

NS_ASSUME_NONNULL_END
