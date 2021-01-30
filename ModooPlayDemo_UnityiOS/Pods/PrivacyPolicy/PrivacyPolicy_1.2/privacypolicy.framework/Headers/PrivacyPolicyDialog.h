//
//  PrivacyPolicyDialog.h
//  privacypolicy
//
//  Created by sherlock.chan on 2021/1/11.
//

#import <UIKit/UIKit.h>
#import "BasePrivacyDialog.h"

NS_ASSUME_NONNULL_BEGIN

@interface PrivacyPolicyDialog : BasePrivacyDialog

-(instancetype)initWithAgreeBlock:(PPButtonBlock)agreeBlock andDisagreeBlock:(PPButtonBlock)disagreeBlock;

-(void)showInParentView:(UIView *)parentView;

@end

NS_ASSUME_NONNULL_END
