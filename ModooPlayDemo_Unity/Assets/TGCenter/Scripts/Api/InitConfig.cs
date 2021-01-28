namespace TGCenterSdk.Api
{
    public class InitConfig {

        public InitConfig() { }

        // Show debug log in test process.
        public bool DebugMode;

        // Channel for Umeng, RangersAppLog
        public string Channel;

        // ModooPlay AppId
        public string AppId;

        // iOS Apple AppID
        public string AppleAppID;

        // Umeng AppKey
        public string UmengAppKey;

        // AppsFlyer DevKey
        public string AppsFlyerDevKey;

        // RangersAppLog AppId
        public string RangersAppLogAppId;
        // RangersAppLog AppName
        public string RangersAppLogAppName;

        // Custom Day1Retention
        public Day1Retention Day1Retention;
    }
}