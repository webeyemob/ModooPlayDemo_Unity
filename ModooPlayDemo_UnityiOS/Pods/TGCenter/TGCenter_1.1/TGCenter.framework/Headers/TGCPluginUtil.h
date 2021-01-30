//
//  TGCPluginUtil.h

//
//  用于 Unity 的工具类。

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>

@interface TGCPluginUtil : NSObject

/// 将 C 语言 UTF8 编码的 byte Array 转为 NSString；如果 bytes 为 NULL，返回 nil。
+ (NSString *)TGCStringFromUTF8String:(const char *)bytes;

/// 返回 Unity 的 ViewController。
+ (UIViewController *)unityGLViewController;

/// 获取 iOS 当前的 ViewController。
+ (UIViewController *)iOSViewController;

@end
