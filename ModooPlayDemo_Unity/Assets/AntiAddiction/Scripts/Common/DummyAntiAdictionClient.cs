using AntiAddictionSdk.Api;

namespace AntiAddictionSdk.Common
{
    public class DummyAntiAddictionClient : IAntiAddictionClient {

        public DummyAntiAddictionClient() {}

        public User GetUser() {
            return null;
        }
        
        public void RealName(RealNameCallback callback) {
        }

        public void RealName(string name, string idNumber, RealNameCallback callback) {
        }

        public void SetAutoShowTimeLimitPage(bool show) {
        }

        public void SetTimeLimitCallback(TimeLimitCallback callback) {
        }

        public TimeLimit CheckTimeLimitStatus() {
            return null;
        }
        
        public void Logout() {
        }
    }
}