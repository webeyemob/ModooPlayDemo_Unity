using AntiAddictionSdk.Api;

namespace AntiAddictionSdk.Common
{
    public interface IAntiAddictionClient {
        User GetUser();
        void RealName(RealNameCallback callback);
        void RealName(string name, string idNumber, RealNameCallback callback);
        void SetAutoShowTimeLimitPage(bool show);
        void SetTimeLimitCallback(TimeLimitCallback callback);
        TimeLimit CheckTimeLimitStatus();
        void Logout();
    }
}