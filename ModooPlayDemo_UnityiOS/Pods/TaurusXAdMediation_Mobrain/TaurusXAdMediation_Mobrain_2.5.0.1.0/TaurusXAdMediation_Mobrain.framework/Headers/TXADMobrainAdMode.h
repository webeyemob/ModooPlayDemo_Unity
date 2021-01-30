//
//  TXADMobrainAdMode.h
//  TaurusXAdMediation_Mobrain
//
//  Created by TaurusXAds on 2020/12/15.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

#ifndef TXADMobrainAdMode_h
#define TXADMobrainAdMode_h

typedef NS_ENUM(NSUInteger, TXADMobrainInterstitialMode) {
    TXAD_MOBRAIN_INTERSTITIAL_EXPRESS = 0, // 个性化模版插屏
    TXAD_MOBRAIN_INTERSTITIAL_FULLSCREENVIDEO = 1, // 全屏视频
    TXAD_MOBRAIN_INTERSTITIAL_EXPRESS_FULLSCREENVIDEO = 2 // 个性化模版全屏视频
};

typedef NS_ENUM(NSUInteger, TXADMobrainExpressInterstitialSize) {
    TXAD_MOBRAIN_EXPRESS_INTERSTITIAL_SIZE_2_3 = 0, // 2:3
    TXAD_MOBRAIN_EXPRESS_INTERSTITIAL_SIZE_3_2 = 1, // 3:2
    TXAD_MOBRAIN_EXPRESS_INTERSTITIAL_SIZE_1_1 = 2  // 1:1
};

typedef NS_ENUM(NSUInteger, TXADMobrainRewardedVideoMode) {
    TXAD_MOBRAIN_REWARDEDVIDEO_NORMAL = 0, // 激励视频
    TXAD_MOBRAIN_REWARDEDVIDEO_EXPRESS = 1 // 个性化模版激励视频
};

typedef NS_ENUM(NSUInteger, TXADMobrainSplashMode) {
    TXAD_MOBRAIN_SPLASH_NORMAL = 0, // 开屏
    TXAD_MOBRAIN_SPLASH_EXPRESS = 1 // 个性化模版开屏
};

typedef NS_ENUM(NSUInteger, TXADMobrainFeedListMode) {
    TXAD_MOBRAIN_FEEDLIST_CUSTOM = 0, // 自渲染信息流
    TXAD_MOBRAIN_FEEDLIST_EXPRESS = 1 // 个性化模版信息流
};

typedef NS_ENUM(NSUInteger, TXADMobrainOrienration) {
    TXAD_MOBRAIN_ORIENTATION_VERTICAL = 1,  // 竖屏
    TXAD_MOBRAIN_ORIENTATION_HORIZONTAL = 2 // 横屏
};

#endif /* TXADMobrainAdMode_h */
