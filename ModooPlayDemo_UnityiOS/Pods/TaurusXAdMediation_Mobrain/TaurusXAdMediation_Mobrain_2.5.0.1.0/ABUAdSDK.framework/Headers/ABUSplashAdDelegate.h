//
//  ABUSplashAdDelegate.h
//  ABUAdSDK
//
//  Created by wangchao on 2020/2/25.
//  Copyright © 2020 bytedance. All rights reserved.
//

#import "ABUMaterialMeta.h"

@class ABUSplashAd;

@protocol ABUSplashAdDelegate <NSObject>

@optional
/**
 This method is called when splash ad material loaded successfully.
 */
- (void)splashAdDidLoad:(ABUSplashAd *_Nonnull)splashAd;

/**
 This method is called when splash ad material failed to load.
 @param error : the reason of error
 */
- (void)splashAd:(ABUSplashAd *_Nonnull)splashAd didFailWithError:(NSError *_Nullable)error;

/**
 This method is called when splash ad slot will be showing.
 */
- (void)splashAdWillVisible:(ABUSplashAd *_Nonnull)splashAd;

/**
 This method is called when splash ad is clicked.
 */
- (void)splashAdDidClick:(ABUSplashAd *_Nonnull)splashAd;

/**
 This method is called when splash ad is closed.
 */
- (void)splashAdDidClose:(ABUSplashAd *_Nonnull)splashAd;

/**
 * This method is called when FullScreen modal has been presented.Include appstore jump.
 *  弹出全屏广告页
 */
- (void)splashAdWillPresentFullScreenModal:(ABUSplashAd *_Nonnull)splashAd;

/**
 This method is called when spalashAd countdown equals to zero
 */
- (void)splashAdCountdownToZero:(ABUSplashAd *_Nonnull)splashAd;

/**
 * Sent when a player finished. for express Ads when splashAd.hasExpressAdGot = YES
 * @param error : error of player
 */
- (void)splashAdExpressViewDidPlayFinish:(ABUSplashAd *_Nonnull)splashAd error:(NSError *_Nullable)error;

@end
