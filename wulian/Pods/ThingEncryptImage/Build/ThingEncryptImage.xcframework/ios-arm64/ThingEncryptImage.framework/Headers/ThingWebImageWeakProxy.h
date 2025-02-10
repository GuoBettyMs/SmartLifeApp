//
//  ThingWebImageWeekProxy.h
//  ThingEncryptImage
//
//  Created by Jake Hu on 2020/1/31.
//

#import "ThingEncryptWebImageCompat.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingWebImageWeakProxy : NSProxy
@property (nonatomic, weak, readonly) id target;

- (instancetype)initWithTarget:(id)target;

+ (instancetype)proxyWithTarget:(id)target;

@end

NS_ASSUME_NONNULL_END
