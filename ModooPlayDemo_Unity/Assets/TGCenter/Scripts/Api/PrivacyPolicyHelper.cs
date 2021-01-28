using TGCenterSdk.Common;
using TGCenterSdk.Platforms;

namespace TGCenterSdk.Api
{
    public class PrivacyPolicyHelper {

        public interface AgreeListener {
            void OnUserAgree();
            void OnUserDisagree();
        }

        private static PrivacyPolicyHelper instance = new PrivacyPolicyHelper();

        public static PrivacyPolicyHelper Instance {
            get {
                return instance;
            }
        }

        private IPrivacyPolicyHelperClient client;
        private PrivacyPolicyHelper() {
            client = ClientFactory.PrivacyPolicyHelperClient();
        }

        public void SetAgreeListener(AgreeListener listener) {
            client.SetAgreeListener(listener);
        }

        public void ShowPrivacyDialog() {
            client.ShowPrivacyDialog();
        }

        public void JumpToUserAgreement() {
            client.JumpToUserAgreement();
        }
        public void JumpToPrivacyPolicy() {
            client.JumpToPrivacyPolicy();
        }
    }
}