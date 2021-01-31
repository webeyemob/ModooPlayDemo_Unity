using System;
using System.Runtime.InteropServices;
using TGCenterSdk.Api;
using TGCenterSdk.Common;
using AOT;

namespace TGCenterSdk.Platforms.iOS
{
    public class TGCenterClient : ITGCenterClient {

        static TGCenterClient instance = new TGCenterClient();

        public static TGCenterClient Instance {
            get {
                return instance;
            }
        }

        private TGCenterClient() { }

        public void Init(InitConfig config) {
            IntPtr configPtr = Externs.TGCCreateInitConfig();

            Externs.TGCSetInitConfig_DebugMode(configPtr, config.DebugMode);
            Externs.TGCSetInitConfig_AppId(configPtr, config.AppId);
            Externs.TGCSetInitConfig_AppleAppID(configPtr, config.AppleAppID);
            Externs.TGCSetInitConfig_UmengAppKey(configPtr, config.UmengAppKey);
            Externs.TGCSetInitConfig_AppsFlyerDevKey(configPtr, config.AppsFlyerDevKey);
            Externs.TGCSetInitConfig_RangersAppLogAppId(configPtr, config.RangersAppLogAppId);
            Externs.TGCSetInitConfig_RangersAppLogAppName(configPtr, config.RangersAppLogAppName);

            if (config.Day1Retention != null) {
                IntPtr retentionPtr = Externs.TGCCreateDay1Retention();

                Externs.TGCSetDay1Retention_Type(retentionPtr, (int)config.Day1Retention.RetentionType);
                Externs.TGCSetDay1Retention_StartCount(retentionPtr, config.Day1Retention.StartCount);
                Externs.TGCSetDay1Retention_EndCount(retentionPtr, config.Day1Retention.EndCount);

                Externs.TGCSetInitConfig_Day1Retention(configPtr, retentionPtr);
            }

            Externs.TGCInit(configPtr);
        }
        
        public bool IsUserAgreePolicy() {
            return Externs.TGCIsUserAgreePolicy();
        }
    }
}