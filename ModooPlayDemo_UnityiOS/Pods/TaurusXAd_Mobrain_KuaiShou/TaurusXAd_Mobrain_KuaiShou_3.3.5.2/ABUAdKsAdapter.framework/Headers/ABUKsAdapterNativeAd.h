//
//  ABUKsAdapterNativeAd.h
//  ABUAdKsAdapter
//
//  Created by XuQingJia on 2020/10/14.
//

#import <Foundation/Foundation.h>
#import <KSAdSDK/KSNativeAdRelatedView.h>
#import <KSAdSDK/KSNativeAd.h>
#import <KSAdSDK/KSMaterialMeta.h>

NS_ASSUME_NONNULL_BEGIN

@interface ABUKsAdapterNativeAd : NSObject

@property (nonatomic, strong) KSNativeAdRelatedView *relatedView;
@property (nonatomic, strong) KSMaterialMeta *datas;
@property (nonatomic, strong) KSNativeAd *nativeAd;

@end

NS_ASSUME_NONNULL_END
