//
//  PrivacyPolicyHelper.h
//  privacypolicy
//
//  Created by sherlock.chan on 2021/1/12.
//

#import <Foundation/Foundation.h>
#import "PrivacyPolicyDialog.h"

NS_ASSUME_NONNULL_BEGIN

typedef void(^PPIsUpdateBlock)(BOOL isUpdated);

@interface PrivacyPolicyHelper : NSObject

-(void)showDialogWithAgreeBlock:(PPButtonBlock)agreeBlock andDisagreeBlock:(PPButtonBlock)disagreeBlock inParentView:(UIView *)parentView;

-(void)hasUpdate:(PPIsUpdateBlock)isUpdateBlock;

-(void)jumpToUserAgreement;

-(void)jumpToPrivacyPolicy;


@end

NS_ASSUME_NONNULL_END
