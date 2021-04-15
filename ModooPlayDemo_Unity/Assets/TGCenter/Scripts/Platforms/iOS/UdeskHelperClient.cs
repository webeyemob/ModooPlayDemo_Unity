using System;
using TGCenterSdk.Api;
using TGCenterSdk.Common;
using System.Runtime.InteropServices;
using AOT;

namespace TGCenterSdk.Platforms.iOS
{
    public class UdeskHelperClient : IUdeskHelperClient {

        public UdeskHelperClient() {
        }

        #region IUdeskHelperClient
        public void EnterUdesk() {
            Externs.TGCUdeskEnter();
        }
        #endregion
    }    
}