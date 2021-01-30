//
//  TGCPrivacyTypes.h
//  TGCPrivacy
//
//  Created by hang.wang on 2021/1/29.
//  Copyright © 2021 TGCenter. All rights reserved.
//

#ifndef TGCPrivacyTypes_h
#define TGCPrivacyTypes_h

typedef const void *TGCTypePrivacyPolicyHelperClientRef;

typedef void (*TGCPrivacyAgreeCallback)(TGCTypePrivacyPolicyHelperClientRef clientRef);
typedef void (*TGCPrivacyDisagreeCallback)(TGCTypePrivacyPolicyHelperClientRef clientRef);

#endif /* TGCPrivacyTypes_h */
