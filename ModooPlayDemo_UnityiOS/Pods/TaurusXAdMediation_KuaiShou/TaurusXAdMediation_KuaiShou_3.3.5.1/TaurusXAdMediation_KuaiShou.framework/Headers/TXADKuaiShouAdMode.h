//
//  TXADKuaiShouAdMode.h
//  TaurusXAdMediation_KuaiShou
//
//  Created by TaurusXAds on 2020/2/4.
//  Copyright © 2020 TaurusXAds. All rights reserved.
//

typedef NS_ENUM(NSUInteger, TXADKuaiShouInterstitialMode) {
    TXAD_KUAISHOU_INTERSTITIAL_VIDEO = 0 // FullScreenVideo
};

typedef NS_ENUM(NSUInteger, TXADKuaiShouFeedListMode) {
    TXAD_KUAISHOU_FEEDLIST_NATIVE = 0, // KSNativeAd
    TXAD_KUAISHOU_FEEDLIST_FEED = 1, // KSFeedAd
    TXAD_KUAISHOU_FEEDLIST_DRAW = 2 // KSDrawAd
};

typedef NS_ENUM(NSUInteger, TXADKuaiShouVideoPlayOrientation) {
    TXAD_KUAISHOU_VIDEO_PLAY_ORIENTATION_PORTRAIT = 0, // Portrait
    TXAD_KUAISHOU_VIDEO_PLAY_ORIENTATION_LANDSCAPE = 1 // Landscape
};
