//
//  TGCRangersAppLogHelper.h
//  TGCRangersAppLog
//
//  Created by TGCenter on 2021/1/13.
//  Copyright © 2021 TGCenter. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <TGCenter/TGCenter.h>
#import <RangersAppLog/RangersAppLog.h>

NS_ASSUME_NONNULL_BEGIN

// 通过 Pod 导入 RangersAppLog 后，需要删除 Link Bintray With Libraries 中的 .a 文件，否则无法打包

@interface TGCRangersAppLogHelper : NSObject

+ (void)initWithConfig:(TGCInitConfig *)config;
+ (void)reportEvent:(NSString *)eventName withValues:(NSDictionary * _Nullable)values;

+ (TGCRangersAppLogHelper *)sharedInstance;
- (BDAutoTrack *)getTrack;

@end

NS_ASSUME_NONNULL_END
