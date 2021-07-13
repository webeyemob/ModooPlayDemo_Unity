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
        WeChatHelper.Instance.SetLoginListener(new WeChatLoginListener());
        if (GUI.Button(new Rect(x, y, w, h), "WeChat Login", style))
        {
            WeChatLogin();
        }
        y += d;
        if (GUI.Button(new Rect(x, y, w, h), "Enter Udesk", style))
        {
            EnterUdesk();
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
        if (GUI.Button(new Rect(x, y, w, h), "Show AgeTip", style))
        {
            ShowAgeTip();
            ShowCustomAgeTip();
        }
        y += d;
        if (GUI.Button(new Rect(x, y, w, h), "Show HealthGameTip", style))
        {
            ShowHealthGameTip();
            ShowCustomHealthGameTip();
        }
        
        y += d;
        if (GUI.Button(new Rect(x, y, w, h), "Logout", style))
        {
            TGCenter.ClearCache();
            AntiAddiction.Logout();
            GetUserInfo(null);
        }
    }

    // 产品渠道
    public string Channle = "channel";

    void Start() {
        Debug.Log("Start");

        // 检查用户是否同意了《用户协议和隐私政策》，如果同意则直接初始化，否则需要弹窗征得用户同意
if (Application.platform == RuntimePlatform.IPhonePlayer) {
            PrivacyPolicyHelper.Instance.Init("d7b11a60-4048-4b12-86ae-01ceed4f3164");
        }
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
            config.AppId = "d7b11a60-4048-4b12-86ae-01ceed4f3164";
            config.AppleAppID = "1526771294";
            config.UmengAppKey = "5f046cf7895cca9f07000035";
            config.AppsFlyerDevKey = "DdWbxT9VRELdEsZiAcnGea";
            config.RangersAppLogAppId = "190309";
            config.RangersAppLogAppName = "bqlmgfios";
            config.WeChatAppId = "wx841c361b2ae27a7b";
            config.WeChatUniversalLink = "https://api-lovematchios.freeqingnovel.com/";
            config.UdeskDomain = "wy.s2.udesk.cn";
            config.UdeskAppKey = "c45ab77872e67e9a0b7f3113fadb62b2";
            config.UdeskAppId = "e4f88f280c8df925";
        }

        TGCenter.Init(config);

        AntiAddiction.SetAutoShowTimeLimitPage(false);
        AntiAddiction.SetTimeLimitCallback(new TimeLimitListener());

        GetUserInfo(null);
    }

    private void WeChatLogin() {
        WeChatHelper.Instance.Login();
    }

    private class WeChatLoginListener : WeChatHelper.LoginListener {
        // 登录成功
        public void LoginSuccess(string code) {
            Debug.Log("WeChat LoginSuccess, code: " + code);
        }
        // 登录失败
        public void LoginFailed(string result) {
            Debug.Log("WeChat LoginFailed, result: " + result);
        }
        // 取消登录
        public void LoginCancel(string result) {
            Debug.Log("WeChat LoginCancel, result: " + result);
        }
    }

    private void EnterUdesk() {
        UdeskHelper.Instance.EnterUdesk();
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

    // 显示适龄提示 Icon
    private void ShowAgeTipIcon() {
        // 获取适龄提示内容
        AgeTip ageTip = AntiAddiction.GetAgeTip();
        
        // 适龄提示 Icon，可以使用 Texture2D 或 byte[]
        Texture2D icon = ageTip.GetIconTexture2D();
        byte[] iconByteArray = ageTip.GetIconByteArray();
        
        if (icon != null)
        {
            Debug.Log(@"ShowCustomAgeTip, has icon");
        }
        if (iconByteArray != null)
        {
            Debug.Log(@"ShowCustomAgeTip, has iconByteArray");
        }
    }

    // 适龄提示弹窗（SDK 默认 UI）
    private void ShowAgeTip() {
        AntiAddiction.ShowAgeTipPage(new AgeTipListener(this));
    }

    private class AgeTipListener : AgeTipCallback {
        private MainBehaviour behaviour;
        public AgeTipListener(MainBehaviour behaviour) {
            this.behaviour = behaviour;
        }
        public void OnAgeTipsOpen() {
            Debug.Log("OnAgeTipsOpen");
        }

        public void OnAgeTipsOpenFail(string message) {
            Debug.Log("OnAgeTipsOpenFail: " + message);
        }

        public void OnAgeTipsClose() {
            Debug.Log("OnAgeTipsClose");
        }
    }

    // 适龄提示弹窗（自定义 UI）
    private void ShowCustomAgeTip() {
        // 获取适龄提示内容
        AgeTip ageTip = AntiAddiction.GetAgeTip();
        
        // 适龄提示 Icon，可以使用 Texture2D 或 byte[]
        Texture2D icon = ageTip.GetIconTexture2D();
        byte[] iconByteArray = ageTip.GetIconByteArray();
        
        if (icon != null)
        {
            Debug.Log(@"ShowCustomAgeTip, has icon");
        }
        if (iconByteArray != null)
        {
            Debug.Log(@"ShowCustomAgeTip, has iconByteArray");
        }

        // 提示文案
        string text = ageTip.GetText();

        // 按照产品风格自定义 UI 展示
        // 如果 icon 或者文案为空，则不能展示
        Debug.Log("ShowCustomAgeTip, text: " + text);
    }

    // 健康游戏忠告（SDK 默认 UI）
    private void ShowHealthGameTip() {
        AntiAddiction.ShowHealthGameTipPage(new HealthGameTipListener(this));
    }

    private class HealthGameTipListener : HealthGameTipCallback {
        private MainBehaviour behaviour;
        public HealthGameTipListener(MainBehaviour behaviour) {
            this.behaviour = behaviour;
        }

        public void OnHealthGameTipOpen() {
            Debug.Log("OnHealthGameTipOpen");
        }

        public void OnHealthGameTipOpenFail(string message) {
            Debug.Log("OnHealthGameTipOpenFail: " + message);
        }

        public void OnHealthGameTipClose() {
            Debug.Log("OnHealthGameTipClose");
        }
    }

    // 健康游戏忠告（自定义 UI）
    private void ShowCustomHealthGameTip() {
        HealthGameTip healthGameTip = AntiAddiction.GetHealthGameTip();

        // 居中展示的提示内容
        string tip = healthGameTip.GetTipText();
        // 靠底展示的产品信息
        string appInfo = healthGameTip.GetAppInfoText();

        // 按照产品风格自定义 UI 展示
        // 如果提示内容或者产品信息为空，则不能展示
        Debug.Log("ShowCustomHealthGameTip, tip: " + tip + ", appInfo: " + appInfo);
    }
}