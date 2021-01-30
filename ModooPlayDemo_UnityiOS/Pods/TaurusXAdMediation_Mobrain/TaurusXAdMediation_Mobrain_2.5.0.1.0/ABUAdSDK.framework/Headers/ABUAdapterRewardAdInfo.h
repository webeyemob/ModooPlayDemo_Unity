//
//  ABUAdapterRewardAdInfo.h
//  ABUAdSDK
//
//  Created by wangchao on 2020/3/13.
//  Copyright © 2020 bytedance. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABUAdapterRewardAdInfo : NSObject

/**
 *  The reward name as defined on Self Service
 */
@property (nonatomic, copy) NSString *rewardName;

/**
 *  Amount of reward type given to the user
 */
@property (nonatomic, assign) NSInteger rewardAmount;

@end

NS_ASSUME_NONNULL_END
