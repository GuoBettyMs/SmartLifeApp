//
//  ThingSmartMessageDNDAddRequestModel.h
//  ThingSmartMessageKit
//
//  Created by 柒松 on 2024/6/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/// The model of the Do Not Disturb (DND) request for devices.
/// The do-not-disturb will only be effective once and includes a start and end time.
@interface ThingSmartMessageOnceDNDRequestModel : NSObject
/// The start time.
@property (nonatomic, copy) NSString *startTime;
/// The end time.
@property (nonatomic, copy) NSString *endTime;
/// A list of device IDs.
@property (nonatomic, copy) NSArray<NSString *> *devIDs;
/// Specifies whether all devices support the DND mode.
///
/// 'devIDs' is not required when 'isAllDevIDs' is set to `True`.
@property (nonatomic, assign) BOOL isAllDevIDs;
@end

NS_ASSUME_NONNULL_END
