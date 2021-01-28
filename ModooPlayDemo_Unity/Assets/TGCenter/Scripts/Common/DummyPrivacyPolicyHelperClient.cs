using TGCenterSdk.Api;

namespace TGCenterSdk.Common
{
    public class DummyPrivacyPolicyHelperClient : IPrivacyPolicyHelperClient {
        
        public void SetAgreeListener(PrivacyPolicyHelper.AgreeListener listener) { }
        public void ShowPrivacyDialog() { }
        public void JumpToUserAgreement() { }
        public void JumpToPrivacyPolicy() { }
    }    
}