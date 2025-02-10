//
//  ThingSIGMeshDCSLinkageConstants.h
//  Pods
//
//  Created by Christina Ma on 2022/4/29.
//

#ifndef ThingSIGMeshDCSLinkageConstants_h
#define ThingSIGMeshDCSLinkageConstants_h

//The operator type of Operator DCS linkage function
typedef NS_ENUM (NSInteger, ThingSIGMeshDCSLinkageOperatorType){
    ThingSIGMeshDCSLinkageOperatorTypeDisable = 0,
    ThingSIGMeshDCSLinkageOperatorTypeEnable,
    ThingSIGMeshDCSLinkageOperatorTypeExe,
};

//The DP Type of DCS linkage data
typedef NS_ENUM (NSInteger, ThingSIGMeshDCSLinkageDPType){
    ThingSIGMeshDCSLinkageDPTypeValue = 0,
    ThingSIGMeshDCSLinkageDPTypeBool,
    ThingSIGMeshDCSLinkageDPTypeEnum,
    ThingSIGMeshDCSLinkageDPTypeRaw,
    ThingSIGMeshDCSLinkageDPTypeString,
    ThingSIGMeshDCSLinkageDPTypeUnknow = 100
};


#define ThingSIGMeshBroadCastNode      @"ffff"

#endif /* ThingSIGMeshDCSLinkageConstants_h */
