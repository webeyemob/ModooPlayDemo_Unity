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

            Externs.TGCInit(configPtr);
        }
        
        public bool IsUserAgreePolicy() {
            return Externs.TGCIsUserAgreePolicy();
        }
    }
}