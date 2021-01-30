//
//  TGCObjectCache.h

//
// 缓存 Unity 仍然在引用的对象。

#import <Foundation/Foundation.h>

@interface TGCObjectCache : NSObject

+ (instancetype)sharedInstance;
@property(nonatomic, strong) NSMutableDictionary *references;

@end


// 返回用于查找 Unity 对象的 key。
@interface NSObject (TGCOwnershipAdditions)

- (NSString *)tgCenter_referenceKey;

@end
