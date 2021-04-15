using UnityEngine;
using TGCenterSdk.Common;

namespace TGCenterSdk.Platforms
{
    public static class ClientFactory {

        public static ITGCenterClient TGCenterClient() {
            if (Application.platform == RuntimePlatform.Android) {
                return TGCenterSdk.Platforms.Android.TGCenterClient.Instance;
            } else if (Application.platform == RuntimePlatform.IPhonePlayer) {
                return TGCenterSdk.Platforms.iOS.TGCenterClient.Instance;
            } else {
                return new DummyTGCenterClient();
            }
        }

        public static IPrivacyPolicyHelperClient PrivacyPolicyHelperClient() {
            if (Application.platform == RuntimePlatform.Android) {
                return new TGCenterSdk.Platforms.Android.PrivacyPolicyHelperClient();
            } else if (Application.platform == RuntimePlatform.IPhonePlayer) {
                return new TGCenterSdk.Platforms.iOS.PrivacyPolicyHelperClient();
            } else {
                return new DummyPrivacyPolicyHelperClient();
            }
        }

        public static IWeChatHelperClient WeChatHelperClient() {
            if (Application.platform == RuntimePlatform.Android) {
                return new TGCenterSdk.Platforms.Android.WeChatHelperClient();
            } else if (Application.platform == RuntimePlatform.IPhonePlayer) {
                return new TGCenterSdk.Platforms.iOS.WeChatHelperClient();
            } else {
                return new DummyWeChatHelperClient();
            }
        }

        public static IUdeskHelperClient UdeskHelperClient() {
            if (Application.platform == RuntimePlatform.Android) {
                return new TGCenterSdk.Platforms.Android.UdeskHelperClient();
            } else if (Application.platform == RuntimePlatform.IPhonePlayer) {
                return new TGCenterSdk.Platforms.iOS.UdeskHelperClient();
            } else {
                return new DummyUdeskHelperClient();
            }
        }
    }
}