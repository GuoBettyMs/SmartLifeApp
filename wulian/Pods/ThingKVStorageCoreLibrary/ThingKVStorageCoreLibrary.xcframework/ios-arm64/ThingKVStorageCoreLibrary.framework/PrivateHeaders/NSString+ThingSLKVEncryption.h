//
//  NSString+ThingSLKVEncryption.h
//  ThingStorageLibrary
//
//  Created by tusu on 2019/2/12.
//

#import <Foundation/Foundation.h>

@interface NSString (ThingSLKVEncryption)

// 16位
- (NSString *)md5ThingSLHashToLower16Bit;

@end
