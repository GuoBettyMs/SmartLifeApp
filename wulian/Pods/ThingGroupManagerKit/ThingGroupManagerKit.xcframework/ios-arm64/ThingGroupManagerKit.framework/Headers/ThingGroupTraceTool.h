//
//  ThingGroupTraceTool.h
//  ThingGroupManagerKit
//
//  Created by 后主 on 2024/3/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingGroupTraceTool : NSObject

+ (void)traceOldVersionAddDeviceToSigmeshControlGroupWithDeviceId:(NSString *)deviceId localId:(NSString *)localId state:(NSString *)state result:(int)result;

+ (void)traceAddDeviceToSigmeshControlGroupWithDeviceId:(NSString *)deviceId localId:(NSString *)localId state:(NSString *)state result:(int)result;

@end

NS_ASSUME_NONNULL_END
