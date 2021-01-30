//
//  ABUAdTestEnvManager.h
//  ABUAdSDK
//
//  Created by CHAORS on 2020/8/12.
//  Copyright © 2020 bytedance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABUAdTestEnvManager : NSObject

+ (void)setupTestPpe;

+ (void)clearTestPpe;

+ (BOOL)isTestPpe;

//TODO2200 test crash
+ (void)testCrash;

+ (BOOL)isUnionTestEnv;
+ (NSString *)testTimeStamp;

@end

NS_ASSUME_NONNULL_END
