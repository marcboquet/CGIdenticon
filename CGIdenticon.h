#import <UIKit/UIKit.h>

void render_identicon_patch(CGContextRef ctx, CGFloat x, CGFloat y, CGFloat size, long patch, long turn, BOOL invert, CGColorRef foreColor, CGColorRef backColor);

void render_identicon(CGContextRef ctx, int32_t code, unsigned int size, CGColorSpaceRef colorSpace);

@interface UIImage (CGIdenticon)
+ (UIImage *)identiconImageWithUserName:(NSString *)userName;
@end
