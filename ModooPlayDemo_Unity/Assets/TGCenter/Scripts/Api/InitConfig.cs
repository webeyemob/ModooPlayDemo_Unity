namespace TGCenterSdk.Api
{
    public class InitConfig {

        public InitConfig() { }

        
        #region Common Config
        // Show debug log in test process.
        public bool DebugMode;

        // ModooPlay AppId
        public string AppId;

        // Custom Day1Retention
        public Day1Retention Day1Retention;
        #endregion


        #region Android Config
        // Channel for Umeng, RangersAppLog
        public string Channel;
        #endregion
        

        #region  iOS Config
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
        #endregion
    }
}