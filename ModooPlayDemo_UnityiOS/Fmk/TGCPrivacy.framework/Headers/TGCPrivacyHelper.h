//
//  TGCPrivacyHelper.h
//  TGCPrivacy
//
//  Created by hang.wang on 2021/1/29.
//  Copyright © 2021 TGCenter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGCPrivacyTypes.h"

NS_ASSUME_NONNULL_BEGIN

@interface TGCPrivacyHelper : NSObject

+ (TGCPrivacyHelper *)sharedInstance;

@property (nonatomic,assign) TGCTypePrivacyPolicyHelperClientRef privacyPolicyHelperClientRef;

- (void)showPrivacyDialogWithAgreeCallback:(TGCPrivacyAgreeCallback)agreeCallback
                          disagreeCallback:(TGCPrivacyDisagreeCallback)disagreeCallback;

- (void)jumpToUserAgreement;
- (void)jumpToPrivacyPolicy;

@end

NS_ASSUME_NONNULL_END
