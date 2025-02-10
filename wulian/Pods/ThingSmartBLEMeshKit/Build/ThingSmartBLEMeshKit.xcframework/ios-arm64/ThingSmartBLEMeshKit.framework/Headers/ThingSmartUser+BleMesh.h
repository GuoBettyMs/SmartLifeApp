//
// ThingSmartUser+BleMesh.h
// ThingSmartBLEMeshKit
//
// Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)

#import <ThingSmartBaseKit/ThingSmartUser.h>
#import "ThingSmartBleMesh.h"

NS_ASSUME_NONNULL_BEGIN

/// @brief The mesh information category for a user.
@interface ThingSmartUser (BleMesh)

@property (nonatomic, strong) ThingSmartBleMeshModel *meshModel;

@property (nonatomic, strong, nullable) ThingSmartBleMesh *mesh;

@end

NS_ASSUME_NONNULL_END
