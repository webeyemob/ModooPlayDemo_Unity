//
//  TGCInitConfig.h
//  TGCenter
//
//  Created by TGCenter on 2021/1/11.
//  Copyright © 2021 TGCenter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TGCDay1Retention.h"

NS_ASSUME_NONNULL_BEGIN

@interface TGCInitConfig : NSObject

@property BOOL debugMode;
@property (nonatomic, strong) NSString *appId;

@property (nonatomic, strong) NSString *appleAppID;

@property (nonatomic, strong) NSString *umengAppKey;

@property (nonatomic, strong) NSString *appsFlyerDevKey;

@property (nonatomic, strong) NSString *rangersAppLogAppId;
@property (nonatomic, strong) NSString *rangersAppLogAppName;

@property (nonatomic, strong) TGCDay1Retention *day1Retention;

@end

NS_ASSUME_NONNULL_END
