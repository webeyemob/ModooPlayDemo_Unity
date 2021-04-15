using UnityEngine;
using TGCenterSdk.Api;
using TGCenterSdk.Common;

namespace TGCenterSdk.Platforms.Android
{
    public class UdeskHelperClient : IUdeskHelperClient {
        
        private readonly AndroidJavaClass udeskHelperClass;

        public UdeskHelperClient() {
            udeskHelperClass = new AndroidJavaClass(Utils.Class_UdeskHelper);
        }
        
        #region IUdeskHelperClient
        public void EnterUdesk() {
            udeskHelperClass.CallStatic("enterUdesk", Utils.GetPlayerActivity());
        }
        #endregion
    }
}