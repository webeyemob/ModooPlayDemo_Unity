//
//  NATAExpressAd.h
//  NathAdsTemplateAd
//
//  Created by nathads on 2020/4/23.
//  Copyright © 2020 nathads. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NATAError.h"
#import "NATAAdCreative.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, NATA_CUSTOM_EVENT) {
    NATA_CUSTOM_EVENT_VIDEO_PAUSE         = 2001, // 'videoStart';
    NATA_CUSTOM_EVENT_VIDEO_RESUME      = 2002, // 'videoComplete';
//    NATA_CUSTOM_EVENT_VIDEO_FIRST_QUARTILE = 2003,// 'videoFirstQuartile';
//    NATA_CUSTOM_EVENT_VIDEO_MIDDLE        = 2004, // 'videoMid';
//    NATA_CUSTOM_EVENT_VIDEO_THIRD_QUARTILE = 2005,//  'videoThirdQuartile';
//    NATA_CUSTOM_EVENT_VIDEO_SKIP          = 2006, // 'videoSkip'; // 1006
//    NATA_CUSTOM_EVENT_VIDEO_ERROR         = 2007, // 'videoError'; // 1007
//    NATA_CUSTOM_EVENT_AUDIO_MUTE          = 2008, // 'audioMute'; // 1008
//    NATA_CUSTOM_EVENT_AUDIO_UNMUTE        = 2009, // 'audioUnmute'; // 1009
    NATA_CUSTOM_EVENT_ERROR_REPORT        = 2010, // 'errorReport'; // 2010
    NATA_CUSTOM_EVENT_REPORT              = 2011, // 'eventReport'; // 2011
    NATA_CUSTOM_EVENT_REQUEST             = 2012, // 'sendRequest'; // 2012
};

typedef NS_ENUM(NSInteger, NATA_CLICK_EVENT_TYPE) {
    //自定义
    NATA_CLICK_EVENT_TYPE_OPEN, // '点击'
    NATA_CLICK_EVENT_TYPE_CLOSE, // '关闭'
    NATA_CLICK_EVENT_TYPE_SKIP, // '跳过'
    NATA_CLICK_EVENT_TYPE_MUTE, // '静音'
    NATA_CLICK_EVENT_TYPE_UNMUTE, // '取消静音'
    NATA_CLICK_EVENT_TYPE_VIDEO // '视频'
};

typedef NS_ENUM(NSInteger, NATA_REQUEST_EVENT_METHID) {
    NATA_REQUEST_EVENT_METHID_GET       = 0, // get
    NATA_REQUEST_EVENT_METHID_POST      = 1 //post
};

@class NATAExpressAd;

@protocol NATAExpressAdDelegate  <NSObject>

@optional
- (void)ExpressAdRenderDidFinish:(NATAExpressAd *)ad;
- (void)expressAd:(NATAExpressAd *)ad didRenderFailWithError:(NATAError * _Nullable)error;

//- (void)ExpressAdRenderReady:(NATAExpressAd *)ad message: (NSDictionary * _Nullable)message;

- (void)ExpressAdOnClick:(NATAExpressAd *)ad clickType: (NATA_CLICK_EVENT_TYPE)clickType startPoint: (CGPoint)startPoint endPoint: (CGPoint)endPoint;

- (void)ExpressAdCustomEvent: (NATAExpressAd *)ad eventID: (NATA_CUSTOM_EVENT)eventID message: (NSDictionary * _Nullable)message;

- (void)ExpressAdReportEvent: (NATAExpressAd *)ad message: (NSDictionary *)message;
- (void)ExpressAdRequestEvent: (NATAExpressAd *)ad method: (NATA_REQUEST_EVENT_METHID)method host: (NSString *)host param: (NSDictionary * _Nullable)param needGlobalParam: (BOOL)needGlobalParam;

@end

@interface NATAExpressAd : UIView

@property (nonatomic, weak) id<NATAExpressAdDelegate> delegate;

+ (instancetype) renderAdUnit: (NSString *)adunitID adData: (NATAAdCreative *)adData viewFrame: (CGRect) viewFrame delegate: (id<NATAExpressAdDelegate>)delegate;

- (instancetype)initWithAdUnit: (NSString *)adunitID adData: (NATAAdCreative *)adData viewFrame: (CGRect) viewFrame delegate: (id<NATAExpressAdDelegate>)delegate;

- (void)startRender;

- (void)playVideo;
- (void)pauseVideo;
- (void)resumeVideo:(NSTimeInterval) duarion;
- (void)completeVideo;
- (BOOL)templateIsReady;
- (NSString *)currentTemplateId;
- (NSString *)currentJSRenderVer;

- (void)noUseExpressAd;

- (void)bringWebViewToFront;
@end

NS_ASSUME_NONNULL_END
