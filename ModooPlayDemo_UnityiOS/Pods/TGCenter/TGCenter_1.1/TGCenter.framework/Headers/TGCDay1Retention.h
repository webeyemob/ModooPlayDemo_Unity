//
//  TGCDay1Retention.h
//  TGCenter
//
//  Created by TGCenter on 2021/1/14.
//  Copyright © 2021 TGCenter. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TGCDay1RetentionType) {
    TGC_DAY1_RETENTION_HOUR,
    TGC_DAY1_RETENTION_NATURE_DAY
};

@interface TGCDay1Retention : NSObject

@property TGCDay1RetentionType type;
@property int startCount;
@property int endCount;

// 上报的 key，也用于 SharedPref 用于记录是否上报了这些事件
// 示例：day1_retention_6h、day1_retention_1d
- (NSString *)getKey;

+ (NSString *)stringFromRetentionType:(TGCDay1RetentionType)type;

@end

NS_ASSUME_NONNULL_END
