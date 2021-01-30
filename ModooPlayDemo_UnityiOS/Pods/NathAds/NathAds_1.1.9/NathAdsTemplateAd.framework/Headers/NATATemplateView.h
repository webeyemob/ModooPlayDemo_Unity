//
//  NATATemplateView.h
//  NathAdsTemplateAd
//
//  Created by nathads on 2020/4/30.
//  Copyright © 2020 nathads. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NATAAdCreative.h"
#import "NATAExpressAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface NATATemplateView : NATAExpressAd


- (instancetype)initWithAdUnitId: (NSString *)adUnitID adData:(NATAAdCreative *)adData frame: (CGRect)frame delegate: (id<NATAExpressAdDelegate>)delegate;

- (void) addMediaView:(UIView *)mediaView;

@end

NS_ASSUME_NONNULL_END
