//
//  ThingProtocolAnnotation.h
//  ThingAnnotationFoundation
//
//  Created by Storm on 2021/11/29.
//

#import "ThingRegisterAPIProtocol.h"
#import <ThingMachRegister/ThingMachRegister.h>

#pragma mark ThingAnnotation
//实现协议，即提供协议
//举例：ThingRegisterApiAnnotation(ThingLoginProtocol, ThingLoginProtocolImpl)
//ThingLoginProtocol是登录协议 ThingLoginProtocolImpl是登录实现
#define ThingRegisterAPIAnnotation(Protocol, IMPL) ThingRegisterAPIWithPriorityAnnotation(Protocol,IMPL, 0)

#define ThingRegisterAPIWithPriorityAnnotation(Protocol, IMPL,priority ) __ThingInterfaceWithPriorityAnnotation(Protocol,IMPL, priority)

//需要，可选协议。目前看可以只是用做脚本扫描，不需要记录数据到macho里面
//举例：ThingRequireAPIAnnotation(ThingLoginProtocol)
#define ThingRequireAPIAnnotation(Protocol)
#define ThingOptionalAPIAnnotation(Protocol)



#pragma mark ThingAnnotationIMPL

extern NSMutableArray *getProtocolSectionData(void);

#define __ThingInterfaceWithPriorityAnnotation(Protocol,IMPL, priority) \
_ThingMachRegisterBlock(_RegisterAPI_, Protocol, priority,\
NULL,\
(^id _Nonnull (NSString * t, NSString * k, NSUInteger p, id defaultV) { \
return @#IMPL;\
}))
