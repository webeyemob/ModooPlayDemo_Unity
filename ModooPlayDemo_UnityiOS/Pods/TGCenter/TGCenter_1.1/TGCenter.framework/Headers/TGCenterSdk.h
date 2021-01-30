//
//  TGCenterSdk.h
//  TGCenter
//
//  Created by TGCenter on 2021/1/11.
//  Copyright © 2021 TGCenter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGCInitConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface TGCenterSdk : NSObject

+ (TGCenterSdk *)sharedInstance;

+ (NSString *)getSdkVersion;
+ (NSString *)parseVersionFromVersionString:(char *)versionString;

- (void)initWithConfig:(TGCInitConfig *)config;

- (TGCInitConfig *)getInitConfig;

- (BOOL)isUserAgreePolicy;

@end

NS_ASSUME_NONNULL_END
