//
//  ThingEncryptImageDecoder.h
//  ThingEncryptImage
//
//  Created by ThingInc on 2020/1/31.
//

#import <Foundation/Foundation.h>
#import "ThingEncryptWebImageCompat.h"
#import "ThingEncryptImageDefine.h"

NS_ASSUME_NONNULL_BEGIN

/**
 Dispose method specifies how the area used by the current frame is to be treated
 before rendering the next frame on the canvas.
 */
typedef NS_ENUM(NSUInteger, ThingImageDisposeMethod) {
    
    /**
     No disposal is done on this frame before rendering the next; the contents
     of the canvas are left as is.
     */
    ThingImageDisposeNone = 0,
    
    /**
     The frame's region of the canvas is to be cleared to fully transparent black
     before rendering the next frame.
     */
    ThingImageDisposeBackground,
    
    /**
     The frame's region of the canvas is to be reverted to the previous contents
     before rendering the next frame.
     */
    ThingImageDisposePrevious,
};

/**
 Blend operation specifies how transparent pixels of the current frame are
 blended with those of the previous canvas.
 */
typedef NS_ENUM(NSUInteger, ThingImageBlendOperation) {
    
    /**
     All color components of the frame, including alpha, overwrite the current
     contents of the frame's canvas region.
     */
    ThingImageBlendNone = 0,
    
    /**
     The frame should be composited onto the output buffer based on its alpha.
     */
    ThingImageBlendOver,
};

/**
 An image frame object.
 */
@interface ThingEncryptImageFrame : NSObject <NSCopying>
@property (nonatomic) NSUInteger index;    ///< Frame index (zero based)
@property (nonatomic) NSUInteger width;    ///< Frame width
@property (nonatomic) NSUInteger height;   ///< Frame height
@property (nonatomic) NSUInteger offsetX;  ///< Frame origin.x in canvas (left-bottom based)
@property (nonatomic) NSUInteger offsetY;  ///< Frame origin.y in canvas (left-bottom based)
@property (nonatomic) NSTimeInterval duration;          ///< Frame duration in seconds
@property (nonatomic) ThingImageDisposeMethod dispose;     ///< Frame dispose method.
@property (nonatomic) ThingImageBlendOperation blend;      ///< Frame blend operation.
@property (nullable, nonatomic, strong) UIImage *image; ///< The image.
+ (instancetype)frameWithImage:(UIImage *)image;
@end


#pragma mark - Decoder

/**
 An image decoder to decode image data.
 
 @discussion This class supports decoding animated WebP, APNG, GIF and system
 image format such as PNG, JPG, JP2, BMP, TIFF, PIC, ICNS and ICO. It can be used
 to decode complete image data, or to decode incremental image data during image
 download. This class is thread-safe.
 
 Example:
 
    // Decode single image:
    NSData *data = [NSData dataWithContentOfFile:@"/tmp/image.webp"];
    ThingImageDecoder *decoder = [ThingImageDecoder decoderWithData:data scale:2.0];
    UIImage image = [decoder frameAtIndex:0 decodeForDisplay:YES].image;
 
    // Decode image during download:
    NSMutableData *data = [NSMutableData new];
    ThingImageDecoder *decoder = [[ThingImageDecoder alloc] initWithScale:2.0];
    while(newDataArrived) {
        [data appendData:newData];
        [decoder updateData:data final:NO];
        if (decoder.frameCount > 0) {
            UIImage image = [decoder frameAtIndex:0 decodeForDisplay:YES].image;
            // progressive display...
        }
    }
    [decoder updateData:data final:YES];
    UIImage image = [decoder frameAtIndex:0 decodeForDisplay:YES].image;
    // final display...
 
 */
@interface ThingEncryptImageDecoder : NSObject

@property (nullable, nonatomic, readonly) NSData *data;    ///< Image data.
@property (nonatomic, readonly) ThingEncryptImageType type;          ///< Image data type.
@property (nonatomic, readonly) CGFloat scale;             ///< Image scale.
@property (nonatomic, readonly) NSUInteger frameCount;     ///< Image frame count.
@property (nonatomic, readonly) NSUInteger loopCount;      ///< Image loop count, 0 means infinite.
@property (nonatomic, readonly) NSUInteger width;          ///< Image canvas width.
@property (nonatomic, readonly) NSUInteger height;         ///< Image canvas height.
@property (nonatomic, readonly, getter=isFinalized) BOOL finalized;

/**
 Creates an image decoder.
 
 @param scale  Image's scale.
 @return An image decoder.
 */
- (instancetype)initWithScale:(CGFloat)scale NS_DESIGNATED_INITIALIZER;

/**
 Updates the incremental image with new data.
 
 @discussion You can use this method to decode progressive/interlaced/baseline
 image when you do not have the complete image data. The `data` was retained by
 decoder, you should not modify the data in other thread during decoding.
 
 @param data  The data to add to the image decoder. Each time you call this
 function, the 'data' parameter must contain all of the image file data
 accumulated so far.
 
 @param final  A value that specifies whether the data is the final set.
 Pass YES if it is, NO otherwise. When the data is already finalized, you can
 not update the data anymore.
 
 @return Whether succeed.
 */
- (BOOL)updateData:(nullable NSData *)data final:(BOOL)final;

/**
 Convenience method to create a decoder with specified data.
 @param data  Image data.
 @param scale Image's scale.
 @return A new decoder, or nil if an error occurs.
 */
+ (nullable instancetype)decoderWithData:(NSData *)data scale:(CGFloat)scale;

/**
 Decodes and returns a frame from a specified index.
 @param index  Frame image index (zero-based).
 @param decodeForDisplay Whether decode the image to memory bitmap for display.
    If NO, it will try to returns the original frame data without blend.
 @return A new frame with image, or nil if an error occurs.
 */
- (nullable ThingEncryptImageFrame *)frameAtIndex:(NSUInteger)index decodeForDisplay:(BOOL)decodeForDisplay;

/**
 Returns the frame duration from a specified index.
 @param index  Frame image (zero-based).
 @return Duration in seconds.
 */
- (NSTimeInterval)frameDurationAtIndex:(NSUInteger)index;

/**
 Returns the frame's properties. See "CGImageProperties.h" in ImageIO.framework
 for more information.
 
 @param index  Frame image index (zero-based).
 @return The ImageIO frame property.
 */
- (nullable NSDictionary *)framePropertiesAtIndex:(NSUInteger)index;

/**
 Returns the image's properties. See "CGImageProperties.h" in ImageIO.framework
 for more information.
 */
- (nullable NSDictionary *)imageProperties;

@end



#pragma mark - Encoder

/**
 An image encoder to encode image to data.
 
 @discussion It supports encoding single frame image with the type defined in ThingImageType.
 It also supports encoding multi-frame image with GIF, APNG and WebP.
 
 Example:
    
    ThingImageEncoder *jpegEncoder = [[ThingImageEncoder alloc] initWithType:ThingImageTypeJPEG];
    jpegEncoder.quality = 0.9;
    [jpegEncoder addImage:image duration:0];
    NSData jpegData = [jpegEncoder encode];
 
    ThingImageEncoder *gifEncoder = [[ThingImageEncoder alloc] initWithType:ThingImageTypeGIF];
    gifEncoder.loopCount = 5;
    [gifEncoder addImage:image0 duration:0.1];
    [gifEncoder addImage:image1 duration:0.15];
    [gifEncoder addImage:image2 duration:0.2];
    NSData gifData = [gifEncoder encode];
 
 @warning It just pack the images together when encoding multi-frame image. If you
 want to reduce the image file size, try imagemagick/ffmpeg for GIF and WebP,
 and apngasm for APNG.
 */
@interface ThingEncryptImageEncoder : NSObject

@property (nonatomic, readonly) ThingEncryptImageType type; ///< Image type.
@property (nonatomic) NSUInteger loopCount;       ///< Loop count, 0 means infinit, only available for GIF/APNG/WebP.
@property (nonatomic) BOOL lossless;              ///< Lossless, only available for WebP.
@property (nonatomic) CGFloat quality;            ///< Compress quality, 0.0~1.0, only available for JPG/JP2/WebP.

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
+ (instancetype)new UNAVAILABLE_ATTRIBUTE;

/**
 Create an image encoder with a specified type.
 @param type Image type.
 @return A new encoder, or nil if an error occurs.
 */
- (nullable instancetype)initWithType:(ThingEncryptImageType)type NS_DESIGNATED_INITIALIZER;

/**
 Add an image to encoder.
 @param image    Image.
 @param duration Image duration for animation. Pass 0 to ignore this parameter.
 */
- (void)addImage:(UIImage *)image duration:(NSTimeInterval)duration;

/**
 Add an image with image data to encoder.
 @param data    Image data.
 @param duration Image duration for animation. Pass 0 to ignore this parameter.
 */
- (void)addImageWithData:(NSData *)data duration:(NSTimeInterval)duration;

/**
 Add an image from a file path to encoder.
 @param path    Image file path.
 @param duration Image duration for animation. Pass 0 to ignore this parameter.
 */
- (void)addImageWithFile:(NSString *)path duration:(NSTimeInterval)duration;

/**
 Encodes the image and returns the image data.
 @return The image data, or nil if an error occurs.
 */
- (nullable NSData *)encode;

/**
 Encodes the image to a file.
 @param path The file path (overwrite if exist).
 @return Whether succeed.
 */
- (BOOL)encodeToFile:(NSString *)path;

/**
 Convenience method to encode single frame image.
 @param image   The image.
 @param type    The destination image type.
 @param quality Image quality, 0.0~1.0.
 @return The image data, or nil if an error occurs.
 */
+ (nullable NSData *)encodeImage:(UIImage *)image type:(ThingEncryptImageType)type quality:(CGFloat)quality;

/**
 Convenience method to encode image from a decoder.
 @param decoder The image decoder.
 @param type    The destination image type;
 @param quality Image quality, 0.0~1.0.
 @return The image data, or nil if an error occurs.
 */
+ (nullable NSData *)encodeImageWithDecoder:(ThingEncryptImageDecoder *)decoder type:(ThingEncryptImageType)type quality:(CGFloat)quality;

@end


#pragma mark - UIImage

@interface UIImage (ThingImageCoder)

/**
 Decompress this image to bitmap, so when the image is displayed on screen,
 the main thread won't be blocked by additional decode. If the image has already
 been decoded or unable to decode, it just returns itself.
 
 @return an image decoded, or just return itself if no needed.
 @see thing_isDecodedForDisplay
 */
- (instancetype)thing_imageByDecoded;

/**
 Wherher the image can be display on screen without additional decoding.
 @warning It just a hint for your code, change it has no other effect.
 */
@property (nonatomic) BOOL thing_isDecodedForDisplay;

/**
 Return a 'best' data representation for this image.
 
 @discussion The convertion based on these rule:
 1. If the image is created from an animated GIF/APNG/WebP, it returns the original data.
 2. It returns PNG or JPEG(0.9) representation based on the alpha information.
 
 @return Image data, or nil if an error occurs.
 */
- (nullable NSData *)thing_imageDataRepresentation;

@end



#pragma mark - Helper

/// Detect a data's image type by reading the data's header 16 bytes (very fast).
CG_EXTERN ThingEncryptImageType ThingImageDetectType(CFDataRef data);

/// Convert ThingEncryptImageType to UTI (such as kUTTypeJPEG).
CG_EXTERN CFStringRef _Nullable ThingImageTypeToUTType(ThingEncryptImageType type);

/// Convert UTI (such as kUTTypeJPEG) to ThingEncryptImageType.
CG_EXTERN ThingEncryptImageType ThingImageTypeFromUTType(CFStringRef uti);

/// Get image type's file extension (such as @"jpg").
CG_EXTERN NSString *_Nullable ThingImageTypeGetExtension(ThingEncryptImageType type);



/// Returns the shared DeviceRGB color space.
CG_EXTERN CGColorSpaceRef ThingCGColorSpaceGetDeviceRGB();

/// Returns the shared DeviceGray color space.
CG_EXTERN CGColorSpaceRef ThingCGColorSpaceGetDeviceGray();

/// Returns whether a color space is DeviceRGB.
CG_EXTERN BOOL ThingCGColorSpaceIsDeviceRGB(CGColorSpaceRef space);

/// Returns whether a color space is DeviceGray.
CG_EXTERN BOOL ThingCGColorSpaceIsDeviceGray(CGColorSpaceRef space);



/// Convert EXIF orientation value to UIImageOrientation.
CG_EXTERN UIImageOrientation ThingUIImageOrientationFromEXIFValue(NSInteger value);

/// Convert UIImageOrientation to EXIF orientation value.
CG_EXTERN NSInteger ThingUIImageOrientationToEXIFValue(UIImageOrientation orientation);



/**
 Create a decoded image.
 
 @discussion If the source image is created from a compressed image data (such as
 PNG or JPEG), you can use this method to decode the image. After decoded, you can
 access the decoded bytes with CGImageGetDataProvider() and CGDataProviderCopyData()
 without additional decode process. If the image has already decoded, this method
 just copy the decoded bytes to the new image.
 
 @param imageRef          The source image.
 @param decodeForDisplay  If YES, this method will decode the image and convert
          it to BGRA8888 (premultiplied) or BGRX8888 format for CALayer display.
 
 @return A decoded image, or NULL if an error occurs.
 */
CG_EXTERN CGImageRef _Nullable ThingCGImageCreateDecodedCopy(CGImageRef imageRef, BOOL decodeForDisplay);

/**
 Create an image copy with an orientation.
 
 @param imageRef       Source image
 @param orientation    Image orientation which will applied to the image.
 @param destBitmapInfo Destimation image bitmap, only support 32bit format (such as ARGB8888).
 @return A new image, or NULL if an error occurs.
 */
CG_EXTERN CGImageRef _Nullable ThingCGImageCreateCopyWithOrientation(CGImageRef imageRef,
                                                                  UIImageOrientation orientation,
                                                                  CGBitmapInfo destBitmapInfo);

/**
 Create an image copy with CGAffineTransform.
 
 @param imageRef       Source image.
 @param transform      Transform applied to image (left-bottom based coordinate system).
 @param destSize       Destination image size
 @param destBitmapInfo Destimation image bitmap, only support 32bit format (such as ARGB8888).
 @return A new image, or NULL if an error occurs.
 */
CG_EXTERN CGImageRef _Nullable ThingCGImageCreateAffineTransformCopy(CGImageRef imageRef,
                                                                  CGAffineTransform transform,
                                                                  CGSize destSize,
                                                                  CGBitmapInfo destBitmapInfo);

/**
 Encode an image to data with CGImageDestination.
 
 @param imageRef  The image.
 @param type      The image destination data type.
 @param quality   The quality (0.0~1.0)
 @return A new image data, or nil if an error occurs.
 */
CG_EXTERN CFDataRef _Nullable ThingCGImageCreateEncodedData(CGImageRef imageRef, ThingEncryptImageType type, CGFloat quality);


/**
 Whether WebP is available in ThingImage.
 */
CG_EXTERN BOOL ThingImageWebPAvailable(void);

/**
 Get a webp image frame count;
 
 @param webpData WebP data.
 @return Image frame count, or 0 if an error occurs.
 */
CG_EXTERN NSUInteger ThingImageGetWebPFrameCount(CFDataRef webpData);

/**
 Decode an image from WebP data, returns NULL if an error occurs.
 
 @param webpData          The WebP data.
 @param decodeForDisplay  If YES, this method will decode the image and convert it
                            to BGRA8888 (premultiplied) format for CALayer display.
 @param useThreads        YES to enable multi-thread decode.
                            (speed up, but cost more CPU)
 @param bypassFiltering   YES to skip the in-loop filtering.
                            (speed up, but may lose some smooth)
 @param noFancyUpsampling YES to use faster pointwise upsampler.
                            (speed down, and may lose some details).
 @return The decoded image, or NULL if an error occurs.
 */
CG_EXTERN CGImageRef _Nullable ThingCGImageCreateWithWebPData(CFDataRef webpData,
                                                           BOOL decodeForDisplay,
                                                           BOOL useThreads,
                                                           BOOL bypassFiltering,
                                                           BOOL noFancyUpsampling);

typedef NS_ENUM(NSUInteger, ThingImagePreset) {
    ThingImagePresetDefault = 0,  ///< default preset.
    ThingImagePresetPicture,      ///< digital picture, like portrait, inner shot
    ThingImagePresetPhoto,        ///< outdoor photograph, with natural lighting
    ThingImagePresetDrawing,      ///< hand or line drawing, with high-contrast details
    ThingImagePresetIcon,         ///< small-sized colorful images
    ThingImagePresetText          ///< text-like
};

/**
 Encode a CGImage to WebP data
 
 @param imageRef      image
 @param lossless      YES=lossless (similar to PNG), NO=lossy (similar to JPEG)
 @param quality       0.0~1.0 (0=smallest file, 1.0=biggest file)
                      For lossless image, try the value near 1.0; for lossy, try the value near 0.8.
 @param compressLevel 0~6 (0=fast, 6=slower-better). Default is 4.
 @param preset        Preset for different image type, default is ThingImagePresetDefault.
 @return WebP data, or nil if an error occurs.
 */
CG_EXTERN CFDataRef _Nullable ThingCGImageCreateEncodedWebPData(CGImageRef imageRef,
                                                             BOOL lossless,
                                                             CGFloat quality,
                                                             int compressLevel,
                                                             ThingImagePreset preset);


NS_ASSUME_NONNULL_END
