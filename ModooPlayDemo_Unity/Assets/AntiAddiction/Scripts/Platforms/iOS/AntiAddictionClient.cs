using System;
using UnityEngine;
using AntiAddictionSdk.Common;
using AntiAddictionSdk.Api;
using System.Runtime.InteropServices;
using AOT;

namespace AntiAddictionSdk.Platforms.iOS
{
    public class AntiAddictionClient : IAntiAddictionClient, IDisposable {

        private IntPtr mAntiAddictionClientPtr;
        private RealNameCallback realNameCallback;
        private TimeLimitCallback timeLimitCallback;

        internal delegate void AntiAddictionRealNameCallback(IntPtr antiAddictionClient, IntPtr user);
        internal delegate void AntiAddictionTimeLimitCallback(IntPtr antiAddictionClient, IntPtr timeLimit);

        public AntiAddictionClient()
        {
            mAntiAddictionClientPtr = (IntPtr)GCHandle.Alloc(this);
            Externs.AntiAddictionSetAntiAddictionClient(mAntiAddictionClientPtr);
        }

        public User GetUser() {
            return new User(new UserClient(Externs.AntiAddictionGetUser()));
        }
        public void RealName(RealNameCallback callback) {
            realNameCallback = callback;
            Externs.AntiAddictionRealName(iOSRealNameCallback);
        }
        public void RealName(string name, string idNumber, RealNameCallback callback) {
            realNameCallback = callback;
            Externs.AntiAddictionRealNameUseCustomUI(name, idNumber, iOSRealNameCallback);
        }

        #region AntiAddictionRealNameCallback
        [MonoPInvokeCallback(typeof(AntiAddictionRealNameCallback))]
        private static void iOSRealNameCallback(IntPtr antiAddictionClient, IntPtr user)
        {
            AntiAddictionClient client = IntPtrToAntiAddictionClient(antiAddictionClient);
            if (client.realNameCallback != null) {
                client.realNameCallback.OnFinish(new User(new UserClient(user)));
            }
        }
        #endregion

        public void SetAutoShowTimeLimitPage(bool show) {
            Externs.AntiAddictionSetAutoShowTimeLimitPage(show);
        }
        public void SetTimeLimitCallback(TimeLimitCallback callback){
            timeLimitCallback = callback;
            Externs.AntiAddictionSetTimeLimitCallback(iOSTimeLimitCallback);
        }

        #region AntiAddictionTimeLimitCallback
        [MonoPInvokeCallback(typeof(AntiAddictionTimeLimitCallback))]
        private static void iOSTimeLimitCallback(IntPtr antiAddictionClient, IntPtr timeLimit)
        {
            AntiAddictionClient client = IntPtrToAntiAddictionClient(antiAddictionClient);
            if (client.timeLimitCallback != null) {
                client.timeLimitCallback.OnTimeLimit(new TimeLimit(new TimeLimitClient(timeLimit)));
            }
        }
        #endregion

        public TimeLimit CheckTimeLimitStatus() {
            return null;
        }
        public void Logout() {
            Externs.AntiAddictionLogout();
        }

        public void Dispose()
        {
            ((GCHandle)mAntiAddictionClientPtr).Free();
        }

        ~AntiAddictionClient()
        {
            Dispose();
        }

        private static AntiAddictionClient IntPtrToAntiAddictionClient(IntPtr antiAddictionClient)
        {
            GCHandle handle = (GCHandle)antiAddictionClient;
            return handle.Target as AntiAddictionClient;
        }
    }
}