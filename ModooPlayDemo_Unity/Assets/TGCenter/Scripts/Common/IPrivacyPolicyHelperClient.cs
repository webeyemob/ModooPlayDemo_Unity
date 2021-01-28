using TGCenterSdk.Api;

namespace TGCenterSdk.Common
{
    public interface IPrivacyPolicyHelperClient {

        void SetAgreeListener(PrivacyPolicyHelper.AgreeListener listener);
        void ShowPrivacyDialog();
        void JumpToUserAgreement();
        void JumpToPrivacyPolicy();
    }
}