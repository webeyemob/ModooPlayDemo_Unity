//
//  TXADGDTAdMode.h
//  TaurusXAdMediation_GDT
//
//  Created by TaurusXAds on 2019/12/26.
//  Copyright © 2019年 TaurusXAds. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, TXADGDTBannerMode) {
    TXAD_GDT_BANNER_1_0 = 0, // Banner 1.0
    TXAD_GDT_BANNER_2_0 = 1 // Banner 2.0
};

typedef NS_ENUM(NSUInteger, TXADGDTNativeMode) {
    TXAD_GDT_NATIVE_CUSTOM_1_0 = 0, // 自渲染 1.0
    TXAD_GDT_NATIVE_EXPRESS = 1, // 模版
    TXAD_GDT_NATIVE_CUSTOM_2_0 = 2 // 自渲染 2.0
};

typedef NS_ENUM(NSUInteger, TXADGDTInterstitialMode) {
    TXAD_GDT_INTERSTITIAL_1_0 = 0, // 插屏 1.0
    TXAD_GDT_INTERSTITIAL_2_0 = 1 // 插屏 2.0
};

typedef NS_ENUM(NSUInteger, TXADGDTRewardedVideoMode) {
    TXAD_GDT_REWARDEDVIDEO_NORMAL = 0, // 激励视频
    TXAD_GDT_REWARDEDVIDEO_EXPRESS = 1 // 模版激励视频
};

// For Interstitial 2.0
typedef NS_ENUM(NSUInteger, TXADGDTContentType) {
    TXAD_GDT_CONTENT_NORMAL = 0, // Normal
    TXAD_GDT_CONTENT_VIDEO = 1 // 全屏视频
};

typedef NS_ENUM(NSUInteger, TXADGDTFeedListMode) {
    TXAD_GDT_FEEDLIST_CUSTOM_1_0 = 0, // 自渲染 1.0
    TXAD_GDT_FEEDLIST_EXPRESS = 1, // 模版
    TXAD_GDT_FEEDLIST_CUSTOM_2_0 = 2, // 自渲染 2.0
    TXAD_GDT_FEEDLIST_EXPRESS_2_0 = 3 // 模版 2.0
};

typedef NS_ENUM(NSUInteger, TXADGDTSplashMode) {
    TXAD_GDT_SPLASH_NORMAL = 0, // 开屏
    TXAD_GDT_SPLASH_V = 1 // 开屏 V+
};
