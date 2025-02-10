//
//  ThingModuleMixBridge+Private.h
//  ThingModuleManager
//
//  Created by ThingInc on 2018/10/26.
//

#import "ThingModuleMixBridge.h"

#import "ThingModuleHookProxy.h"
#import "ThingModuleHookNativeProxy.h"

@interface ThingModuleMixBridge ()

- (void)loadMixMap;
- (void)generateMixForward;

- (void)mixClass:(Class)cls withNative:(Class)native;

- (ThingModuleHookProxy *)hookProxyOfProtocol:(Protocol *)prot;

@end
