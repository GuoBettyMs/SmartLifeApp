//
//  ThingBLEWriteService.h
//  ThingSmartPublic
//
//  Created by 冯晓 on 16/8/11.
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)
//

#import <Foundation/Foundation.h>
@class ThingBLERequest;

@interface ThingBLEWriteService : NSObject

- (void)addRequest:(ThingBLERequest *)request;

- (BOOL)writeData:(ThingBLECharacteristic *)writeCharacteristic data:(NSData *)data ifNeedTimeout:(double)timeout;

@end
