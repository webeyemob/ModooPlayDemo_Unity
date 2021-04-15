using System;
using UnityEngine;
using System.Collections.Generic;
using TGCenterSdk.Api;
using AntiAddictionSdk.Api;

public class MainBehaviour : MonoBehaviour
{
    void OnGUI()
    {
        int x = 0;
        int y = 250;
        int d = 200;
        
        int w = 1000;
        int h = 150;

        GUIStyle style = new GUIStyle();
        style.fontSize = 40;
        style.alignment = TextAnchor.UpperCenter;

        GUI.Label(new Rect(x, y, w, h), "ModooPlay Demo", style);

        y += d;
        if (GUI.Button(new Rect(x, y, w, h), "Ad Test", style))
        {
        }
        y += d;
        if (GUI.Button(new Rect(x, y, w, h), "User Agreement", style))
        {
            PrivacyPolicyHelper.Instance.JumpToUserAgreement();
        }
        y += d;
        if (GUI.Button(new Rect(x, y, w, h), "Privacy Policy", style))
        {
            PrivacyPolicyHelper.Instance.JumpToPrivacyPolicy();
        }
        y += d;
        if (GUI.Button(new Rect(x, y, w, h), "Clear Cache", style))
        {

        }

        y += d;
        GUI.Label(new Rect(x, y, w, h), "Game AntiAddiction", style);
        y += d;

        int antiW = 500;
        if (GUI.Button(new Rect(x, y, antiW, h), "RealName", style))
        {   
            RealName();
        }
        if (GUI.Button(new Rect(x + antiW, y, antiW, h), "RealName CustomUI", style))
        {
            RealNameCustomUI();
        }
        y += d;
        if (GUI.Button(new Rect(x, y, antiW, h), "Logout", style))
        {
            AntiAddiction.Logout();
            GetUserInfo(null);
        }
    }

    // 产品渠道
    public string Channle = "channel";

    void Start() {
        Debug.Log("Start");

        // 检查用户是否同意了《用户协议和隐私政策》，如果同意则直接初始化，否则需要弹窗征得用户同意
        if (TGCenter.IsUserAgreePolicy()) {
            // 用户已同意，初始化
            InitModooPlay();
        } else {
            // 用户未同意
            // 展示默认的对话框
            ShowDefaultPolicyDialog();
            // 或者：展示 App 根据产品风格自定义的对话框
            // ShowCustomPolicyDialog();
        }
    }

    /**
     * 初始化 ModooPlay，必须在用户同意《用户协议和隐私政策》之后才可以调用。
     * init 方法内部初始化 Umeng、AppsFlyer、RangersAppLog、TaurusX，
     * Android 的初始化的参数会从 ModooPlay 后台获取，iOS 需要在下方配置。
     * 如果应用之前有初始化上述 SDK 的逻辑，请先移除，统一由 ModooPlay 初始化。
     */
    private void InitModooPlay() {
        InitConfig config = new InitConfig();
        // 在测试阶段，应用可以开启调试日志，来查看各组件是否正确运行
        config.DebugMode = true;

        if (Application.platform == RuntimePlatform.Android) {
            config.Channel = Channle;
        } else {
            // 下面的参数仅 iOS 需要配置
            config.AppId = "b51dd720-c083-4349-a99e-3de18dfccbd4";
            config.AppleAppID = "1526771294";
            config.UmengAppKey = "5f046cf7895cca9f07000035";
            config.AppsFlyerDevKey = "DdWbxT9VRELdEsZiAcnGea";
            config.RangersAppLogAppId = "190309";
            config.RangersAppLogAppName = "bqlmgfios";

            Day1Retention retention = new Day1Retention(Day1Retention.RetentionTypes.Hour, 4, 38);
            config.Day1Retention = retention;
        }

        TGCenter.Init(config);

        AntiAddiction.SetAutoShowTimeLimitPage(false);
        AntiAddiction.SetTimeLimitCallback(new TimeLimitListener());

        GetUserInfo(null);
    }

    // 实名认证，使用 SDK 默认 UI
    private void RealName() {
        AntiAddiction.RealName(new RealNameListener());
    }

    // 实名认证，使用自定义 UI
    private void RealNameCustomUI() {
        AntiAddiction.RealName("name", "idNumber", new RealNameListener());
    }

    private class RealNameListener : RealNameCallback {
        public void OnFinish(User user) {
            Debug.Log("RealNameCallback GetUserInfo: ");
            GetUserInfo(user);
        }
    }

    private class TimeLimitListener : TimeLimitCallback {
        public void OnTimeLimit(TimeLimit timeLimit) {
            Debug.Log("TimeLimitListener, TimeLimit reason: " + timeLimit.GetReason()
            + ", isLimit: " + timeLimit.IsLimit()
            + ", timeToLimit: " + timeLimit.GetTimeToLimit());

            LimitTip limitTip = timeLimit.GetLimitTip();
            Debug.Log("TimeLimitListener, LimitTip: title: " + limitTip.GetTitle()
                + ", Desc: " + limitTip.GetDesc()
                + ", Button: " + limitTip.GetButton()
                + ", CanRealName: " + limitTip.CanRealName());
        }
    }

    // 获取用户信息
    private static void GetUserInfo(User user) {
        if (user == null) {
            user = AntiAddiction.GetUser();
        }

        // 获取实名状态
        string result = "";
        RealNameResult realNameResult = user.GetRealNameResult();
        if (realNameResult.IsSuccess()) {
            result = "实名认证成功";
        } else if (realNameResult.IsFail()) {
            result = "实名认证失败";
        } else if (realNameResult.IsProcessing()) {
            result = "实名认证中...";
        } else {
            Debug.Log("realNameResult: isInitial");
            result = "初始状态";
        }

        // 获取用户身份
        String info;
        if (user.IsTourist()) {
            info = "游客";
        } else if (user.IsChild()) {
            info = "未成年人";
        } else if (user.IsAdult()) {
            info = "成年人";
        } else {
            info = "游客";
        }

        // 获取用户年龄
        int age = user.GetAge();

        string userInfo = "实名认证结果: " + result + "\n"
                + ", 身份：" + info + "\n"
                + ", 年龄：" + age;
        Debug.Log("GetUserInfo: " + userInfo);
    }

    // 展示默认的《用户协议和隐私政策》对话框
    private void ShowDefaultPolicyDialog() {
        PrivacyPolicyHelper.Instance.SetAgreeListener(new PrivacyAgreeListener(this));
        PrivacyPolicyHelper.Instance.ShowPrivacyDialog();
    }

    private class PrivacyAgreeListener : PrivacyPolicyHelper.AgreeListener {

        private MainBehaviour behaviour;
        public PrivacyAgreeListener(MainBehaviour behaviour) {
            this.behaviour = behaviour;
        }

        public void OnUserAgree() {
            behaviour.DealDialogAgreeResult(true);
        }
        public void OnUserDisagree() {
            behaviour.DealDialogAgreeResult(false);
        }
    }

    // App 也可以自定义《用户协议和隐私政策》对话框
    private void ShowCustomPolicyDialog() {
    }

    /**
     * 处理用户点击对话框按钮的结果。
     * 用户同意，初始化；用户不同意，进行提示。
     */
    private void DealDialogAgreeResult(bool agree) {
        if (agree) {
            InitModooPlay();
        }
    }
}