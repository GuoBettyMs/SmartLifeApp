//
//  ThingProtocolAnnotation.h
//  ThingAnnotationFoundation
//
//  Created by Storm on 2021/11/29.
//

#pragma mark ThingAnnotation

#import <UIKit/UIKit.h>
#import "ThingRegisterLaunchProtocol.h"
#import <ThingMachRegister/ThingMachRegister.h>

/*
 IMPL 为实现 ThingRegisterLaunchProtocol 的类名
 exp:
 
 ThingLaunchAnnotation(ThingAPMModuleLaunchTask)
 
 @implementation ThingAPMModuleLaunchTask
 
 - (void)start {
     ...
 }
 
 + (ThingLaunchTaskPriority)priority {
     return ThingLaunchTaskPriority_Hight;
 }

 + (ThingLaunchTaskRunMode)runMode {
     return ThingLaunchTaskRunMode_AsyncOnMain;
 }

 @end
*/

#define ThingLaunchAnnotation(IMPL) __ThingLaunchAnnotation(IMPL)

//typedef struct __attribute__((packed)) {
//    const char * impl;
//} _ThingMachRegisterLaunchStruct;
#define __ThingLaunchAnnotation(IMPL) \
_ThingMachRegisterBlock(__Launch, IMPL, 0,\
NULL,\
(^id _Nonnull (NSString * t, NSString * k, NSUInteger p, id defaultV) { \
return @#IMPL;\
}))

@interface ThingLaunchTaskAnnotationObject: NSObject

/// IMPL 为实现 ThingRegisterLaunchProtocol 的类名
@property (strong) NSString *impl;

+ (NSArray<ThingLaunchTaskAnnotationObject *> *)allTasks;

@end

