/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class NSData, NSDictionary;

@interface CICodeGenerator : CIFilter {
    NSData *inputMessage;
    NSDictionary *inputOptions;
}

@property(copy) NSData * inputMessage;
@property(copy) NSDictionary * inputOptions;

- (id)inputMessage;
- (id)inputOptions;
- (struct CGImage { }*)outputCGImage;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputMessage:(id)arg1;
- (void)setInputOptions:(id)arg1;

@end
