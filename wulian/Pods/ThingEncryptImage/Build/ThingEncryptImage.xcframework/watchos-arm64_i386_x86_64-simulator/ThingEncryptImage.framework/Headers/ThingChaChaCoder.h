//
//  ThingChaChaCoder.h
//  ThingEncryptImage
//
//  Created by ThingInc on 2022/11/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingChaChaCoder : NSObject

+ (NSData *)decryptData:(NSData *)data key:(NSData *)key iv:(NSData *)iv;
+ (NSData *)encryptData:(NSData *)data key:(NSData *)key iv:(NSData *)iv;

@end

NS_ASSUME_NONNULL_END
