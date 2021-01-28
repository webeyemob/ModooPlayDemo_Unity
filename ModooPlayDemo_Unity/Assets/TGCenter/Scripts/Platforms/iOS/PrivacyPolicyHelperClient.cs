using TGCenterSdk.Api;
using TGCenterSdk.Common;

namespace TGCenterSdk.Platforms.iOS
{
    public class PrivacyPolicyHelperClient : IPrivacyPolicyHelperClient {
        
        private PrivacyPolicyHelper.AgreeListener listener;

        public PrivacyPolicyHelperClient() { }

        #region IPrivacyPolicyHelperClient
        public void SetAgreeListener(PrivacyPolicyHelper.AgreeListener listener) {
            this.listener = listener;
        }
        public void ShowPrivacyDialog() { }
        public void JumpToUserAgreement() { }
        public void JumpToPrivacyPolicy() { }
        #endregion
    }    
}