//
//  BasePrivacyDialog.h
//  privacypolicy
//
//  Created by sherlock.chan on 2021/1/13.
//
//#define PPAppName [[NSBundle mainBundle] infoDictionary][@"CFBundleDisplayName"]
#define PPAppName [[[NSBundle mainBundle] infoDictionary] objectForKey:(NSString *)kCFBundleNameKey]

typedef void(^PPButtonBlock)(void);

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BasePrivacyDialog : UIView

-(NSString *)getTitle;

-(NSString *)getDisagreeText;

-(NSString *)getAgreeText;

-(UITextView *)getCustomContentViewWith:(UIColor *)linkTextColor textSize:(CGFloat)textFontSize textColor:(UIColor *)textColor andFrame:(CGRect) frame;

-(UITextView *)getDefaultContentTextViewWithFrame:(CGRect)frame;

@end

NS_ASSUME_NONNULL_END
