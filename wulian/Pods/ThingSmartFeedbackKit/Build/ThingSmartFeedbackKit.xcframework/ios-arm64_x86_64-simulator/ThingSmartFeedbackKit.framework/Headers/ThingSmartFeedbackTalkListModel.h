//
// ThingSmartFeedbackTalkListModel.h
// ThingSmartFeedbackKit
//
// Copyright (c) 2014-2021 Thing Inc (https://developer.thing.com)

@interface ThingSmartFeedbackTalkListModel : NSObject

/// The time of the feedback talk.
@property (nonatomic, strong) NSString          *dateTime;

/// The talk ID.
@property (nonatomic, strong) NSString          *hdId;

/// The type of the feedback talk.
@property (nonatomic, assign) NSUInteger        hdType;

/// A string title for the feedback talk.
@property (nonatomic, strong) NSString          *title;

/// The string content of the feedback talk.
@property (nonatomic, strong) NSString          *content;

@end
