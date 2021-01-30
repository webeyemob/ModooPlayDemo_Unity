//
//  Embeded.h
//  EmbededSdk
//
//  Created by zena.tang on 2021/1/5.
//  Copyright © 2021 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Embeded : NSObject

+ (void)start:(NSString *)appleId;

+ (void)setTestMode;

@end

NS_ASSUME_NONNULL_END
