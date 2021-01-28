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

        }
        
        public bool IsUserAgreePolicy() {
            return false;
        }
    }
}