using UnityEngine;
using TGCenterSdk.Api;

namespace TGCenterSdk.Platforms.Android
{
    public static class Utils {
        public const string UnityActivityClassName = "com.unity3d.player.UnityPlayer";
        
        public const string Class_TGCenter = "com.tgcenter.unified.sdk.api.TGCenter";
        public const string Class_InitConfig = "com.tgcenter.unified.sdk.api.InitConfig";
        public const string Class_Day1Retention = "com.tgcenter.unified.sdk.api.Day1Retention";

        public const string Class_PrivacyPolicyHelperBuilder = "com.nefarian.privacy.policy.PrivacyPolicyHelper$Builder";
        public const string Class_IPrivacyPolicyCallback = "com.nefarian.privacy.policy.IPrivacyPolicyCallback";

        public const string Class_WeChatHelper = "com.tgcenter.unified.sdk.h.WeChatHelper";
        public const string Class_WeChatLoginCallback = "com.we.modoo.callback.LoginCallback";
        public const string Class_WeChatLoginType = "com.we.modoo.core.LoginType";

        public const string Class_UdeskHelper = "com.tgcenter.unified.sdk.h.UdeskHelper";

        public static AndroidJavaObject GetPlayerActivity() {
            AndroidJavaClass playerClass = new AndroidJavaClass(UnityActivityClassName);
            AndroidJavaObject activity = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
            return activity;
        }
        public static string GetRetentionType(Day1Retention.RetentionTypes type) {
            switch(type) {
                case Day1Retention.RetentionTypes.Hour:
                    return "hour";
                case Day1Retention.RetentionTypes.NatureDay:
                    return "nature_day";
                default:
                    return "";
            }
        }
    }
}