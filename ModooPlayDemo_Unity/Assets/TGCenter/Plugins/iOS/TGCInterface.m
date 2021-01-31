//
//  TGCInterface.m
//
//  用于 Unity DllImport 的 Object-C 接口。
//  Unity 中都是通过这里面的接口来创建、加载、展示广告的。

#import <Foundation/Foundation.h>
#import <TGCenter/TGCenter.h>

// 注意：不要打包到 Framework 中

#pragma mark - Common
// Remove an object from cache.
void TGCRelease(TGCTypeRef ref) {
    if (ref) {
        TGCObjectCache *cache = [TGCObjectCache sharedInstance];
        [cache.references removeObjectForKey:[(__bridge NSObject*)ref tgCenter_referenceKey]];
    }
}

static NSString *TGCStringFromUTF8String(const char *bytes) { return bytes ? @(bytes) : nil; }

/// Returns a C string from a C array of UTF8-encoded bytes.
static const char *TGCCStringCopy(const char *string) {
    if (!string) {
        return NULL;
    }
    char *res = (char *)malloc(strlen(string) + 1);
    strcpy(res, string);
    return res;
}

const char *TGCStringToChar(NSString *string) {
    if (string == nil) {
        string = @"";
    }
    return TGCCStringCopy(string.UTF8String);
}
#pragma mark - Common


#pragma mark - TGCenterSdk
void TGCInit(TGCTypeInitConfigRef initConfig) {
    TGCInitConfig *internalInitConfig = (__bridge TGCInitConfig *)initConfig;
    [TGCenterSdk.sharedInstance initWithConfig:internalInitConfig];
}

BOOL TGCIsUserAgreePolicy() {
    return [TGCenterSdk.sharedInstance isUserAgreePolicy];
}
#pragma mark - TGCenterSdk


#pragma mark - TGCInitConfig
TGCTypeInitConfigRef TGCCreateInitConfig() {
    TGCInitConfig *config = [[TGCInitConfig alloc] init];
    [TGCObjectCache.sharedInstance.references setObject:config forKey:[config tgCenter_referenceKey]];
    return (__bridge TGCTypeInitConfigRef)config;
}

void TGCSetInitConfig_DebugMode(TGCTypeInitConfigRef initConfig, BOOL debugMode) {
    TGCInitConfig *internalConfig = (__bridge TGCInitConfig *)initConfig;
    internalConfig.debugMode = debugMode;
}

void TGCSetInitConfig_AppId(TGCTypeInitConfigRef initConfig, const char *appId) {
    TGCInitConfig *internalConfig = (__bridge TGCInitConfig *)initConfig;
    internalConfig.appId = TGCStringFromUTF8String(appId);
}

void TGCSetInitConfig_AppleAppID(TGCTypeInitConfigRef initConfig, const char *appleAppID) {
    TGCInitConfig *internalConfig = (__bridge TGCInitConfig *)initConfig;
    internalConfig.appleAppID = TGCStringFromUTF8String(appleAppID);
}

void TGCSetInitConfig_UmengAppKey(TGCTypeInitConfigRef initConfig, const char *umengAppKey) {
    TGCInitConfig *internalConfig = (__bridge TGCInitConfig *)initConfig;
    internalConfig.umengAppKey = TGCStringFromUTF8String(umengAppKey);
}

void TGCSetInitConfig_AppsFlyerDevKey(TGCTypeInitConfigRef initConfig, const char *appsFlyerDevKey) {
    TGCInitConfig *internalConfig = (__bridge TGCInitConfig *)initConfig;
    internalConfig.appsFlyerDevKey = TGCStringFromUTF8String(appsFlyerDevKey);
}

void TGCSetInitConfig_RangersAppLogAppId(TGCTypeInitConfigRef initConfig, const char *rangersAppLogAppId) {
    TGCInitConfig *internalConfig = (__bridge TGCInitConfig *)initConfig;
    internalConfig.rangersAppLogAppId = TGCStringFromUTF8String(rangersAppLogAppId);
}

void TGCSetInitConfig_RangersAppLogAppName(TGCTypeInitConfigRef initConfig, const char *rangersAppLogAppName) {
    TGCInitConfig *internalConfig = (__bridge TGCInitConfig *)initConfig;
    internalConfig.rangersAppLogAppName = TGCStringFromUTF8String(rangersAppLogAppName);
}

void TGCSetInitConfig_Day1Retention(TGCTypeInitConfigRef initConfig, TGCTypeDay1RetentionRef retention) {
    TGCInitConfig *internalConfig = (__bridge TGCInitConfig *)initConfig;
    TGCDay1Retention *internalRetention = (__bridge TGCDay1Retention *)retention;
    internalConfig.day1Retention = internalRetention;
}
#pragma mark - TGCInitConfig


#pragma mark - TGCDay1Retention
TGCTypeDay1RetentionRef TGCCreateDay1Retention() {
    TGCDay1Retention *retention = [[TGCDay1Retention alloc] init];
    [TGCObjectCache.sharedInstance.references setObject:retention forKey:[retention tgCenter_referenceKey]];
    return (__bridge TGCTypeDay1RetentionRef)retention;
}

void TGCSetDay1Retention_Type(TGCTypeDay1RetentionRef retention, int type) {
    TGCDay1Retention *internalRetention = (__bridge TGCDay1Retention *)retention;
    if (type == 1) {
        internalRetention.type = TGC_DAY1_RETENTION_HOUR;
    } else if (type == 2) {
        internalRetention.type = TGC_DAY1_RETENTION_NATURE_DAY;
    }
}

void TGCSetDay1Retention_StartCount(TGCTypeDay1RetentionRef retention, int startCount) {
    TGCDay1Retention *internalRetention = (__bridge TGCDay1Retention *)retention;
    internalRetention.startCount = startCount;
}

void TGCSetDay1Retention_EndCount(TGCTypeDay1RetentionRef retention, int endCount) {
    TGCDay1Retention *internalRetention = (__bridge TGCDay1Retention *)retention;
    internalRetention.endCount = endCount;
}
#pragma mark - TGCDay1Retention
