//
// ThingSmartFeedbackTypeListModel.h
// ThingSmartFeedbackKit
//
// Copyright (c) 2014-2021 Thing Inc (https://developer.thing.com)

#import "ThingSmartFeedbackItemModel.h"

@interface ThingSmartFeedbackTypeListModel : NSObject

/// Feedback type, e.g. "faulty device", "more".
@property (nonatomic, strong) NSString *type;

/// List of items included in the feedback type.
@property (nonatomic, strong) NSArray<ThingSmartFeedbackItemModel *> *list;

@end
