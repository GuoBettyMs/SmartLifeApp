//
//  ThingCRC32.h
//  ThingSmartKitExample
//
//  Created by 吴戈 on 2018/9/14.
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)
//

#import <Foundation/Foundation.h>

@interface ThingCRC32 : NSObject

+ (NSString *)crc32:(NSString *)packageData;

@end
