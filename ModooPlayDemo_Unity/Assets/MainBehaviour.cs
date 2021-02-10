using System;
using UnityEngine;
using System.Collections.Generic;
using TGCenterSdk.Api;
using AntiAddictionSdk.OpenSource;

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
        if (GUI.Button(new Rect(x, y, antiW, h), "Login", style))
        {
            // userId 类型为字符串，用于表示用户唯一标识，除 null 和 "" 等特殊字符串外无其他限制
            // type 固定为 USER_TYPE_UNKNOWN
            AntiAddiction.login("userId", AntiAddictionUserType.USER_TYPE_UNKNOWN);
        }
        if (GUI.Button(new Rect(x + antiW, y, antiW, h), "Logout", style))
        {
             AntiAddiction.logout();
        }
        y += d;
        if (GUI.Button(new Rect(x, y, antiW, h), "Pay", style))
        {
             AntiAddiction.checkPayLimit(10 * 100);
        }
        if (GUI.Button(new Rect(x+antiW, y, antiW, h), "Chat", style))
        {
             AntiAddiction.checkChatLimit();
        }
        y += d;
        if (GUI.Button(new Rect(x, y, w, h), "Open Real Name", style))
        {
             AntiAddiction.openRealName();
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

    // 时长统计
    // 如果功能开关配置 UseSdkPaymentLimit(true)，则 SDK 会根据当前政策主动限制游戏时长，反之不会限制用户游戏时长。
    // 需要在 Unity 的 OnApplicationPause() 中调用 onResume() 和 onStop()
    void OnApplicationPause(bool pauseStatus){
		if (pauseStatus) {
			AntiAddiction.onStop();
		} else {
			AntiAddiction.onResume();
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
            config.AppId = "taurusx_app_id";
            config.AppleAppID = "1526771294";
            config.UmengAppKey = "5f046cf7895cca9f07000035";
            config.AppsFlyerDevKey = "DdWbxT9VRELdEsZiAcnGea";
            config.RangersAppLogAppId = "190309";
            config.RangersAppLogAppName = "bqlmgfios";

            Day1Retention retention = new Day1Retention(Day1Retention.RetentionTypes.Hour, 4, 38);
            config.Day1Retention = retention;
        }

        TGCenter.Init(config);

        // 游戏防沉迷
        // 功能开关配置（采用默认值可跳过）
        SetFunctionConfig();
        // 功能参数配置（采用默认值可跳过）
        SetCommonConfig();
        // 初始化
        InitAntiAddiction();
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
    
    // 功能开关配置（采用默认值可跳过）
    private void SetFunctionConfig() {
        AntiAddictionFunctionConfig config = new AntiAddictionFunctionConfig.Builder()
            // 是否使用 SDK 实名认证功能（默认开启）
            .UseSdkRealName(true)
            // 是否使用 SDK 付费限制（默认开启）
            .UseSdkPaymentLimit(true)
            // 是否使用 SDK 在线时长限制（默认开启）
            .UseSdkOnlineTimeLimit(true)
            // 是否显示切换账号按钮（默认开启）
            // 单机游戏无账号系统可设置为 NO 隐藏该按钮
            .ShowSwitchAccountButton(true)
            .Build();
        AntiAddiction.fuctionConfig(config);
    }

    // 功能参数配置（采用默认值可跳过）
    // 请根据实际的需求调整参数；请注意参数的单位：时间是秒，货币是分
    private void SetCommonConfig() {
        AntiAddictionCommonConfig config = new AntiAddictionCommonConfig.Builder()
            .GusterTime(60 * 60) // 游客每日游戏时长，默认 1 小时，单位 秒
            .NightStrictStart(22 * 60 * 60) // 未成年宵禁起始时间，默认晚上 10 点，单位 秒
            .NightStrictEnd(8 * 60 * 60) // 未成年宵禁截止时间，默认次日 8 点， 单位 秒
            .ChildCommonTime(90 * 60) // 未成年人非节假日每日游戏时长，默认 1.5 小时，单位 秒
            .ChildHolidayTime(3 * 60 * 60) // 未成年人节假日每日游戏时长，默认 3 小时，单位 秒
            .TeenPayLimit(50 * 100) // 未成年人（8-15岁）单次付费限额，默认 50 元，单位 分
            .TeenMonthPayLimit(200 * 100) // 未成年人（8-15岁）每月付费限额，默认 200 元，单位 分
            .YoungPayLimit(100 * 100)// 未成年人（16-17岁）单次付费限额，默认 100 元，单位 分
            .YoungMonthPayLimit(400 * 100) // 未成年人（16-17岁）每月付费限额，默认 400 元， 单位 分
            .Build();
        AntiAddiction.commonConfig(config);
    }

    // 定义 AntiAddiction 初始化回调
    public Action<int,string> onAntiAddictionResult;

    // 初始化 AntiAddiction
    private void InitAntiAddiction() {
        onAntiAddictionResult += onAntiAddictionHandler;
        AntiAddiction.init(onAntiAddictionResult);
    }

    public void onAntiAddictionHandler(int resultCode,string msg){
        switch ((CallbackCode)resultCode) {
                case CallbackCode.CALLBACK_CODE_TIME_LIMIT:
                    // 时间受限
                    // 未成年人或游客游戏时长已达限制，通知游戏
                    LogAntiAddictionResult("Time Limit");
                    break;
                case CallbackCode.CALLBACK_CODE_AAT_WINDOW_SHOWN:
                    // 额外弹窗显示，包括时间受限等
                    // 当用户操作触发额外窗口显示时通知游戏
                    LogAntiAddictionResult("AAk Window Show");
                    break;
                case CallbackCode.CALLBACK_CODE_AAK_WINDOW_DISMISS:
                    // 额外弹窗小时，包括时间受限等
                    // 额外窗口消失时通知游戏
                    LogAntiAddictionResult("AAk Window Dismiss");
                    break;

                case CallbackCode.CALLBACK_CODE_ENTER_SUCCESS:
                    // 登录成功
                    // 当游戏调用 login 后，直接进入游戏或完成实名认证后触发
                    LogAntiAddictionResult("Login Success");
                    break;
                case CallbackCode.CALLBACK_CODE_SWITCH_ACCOUNT:
                    // 登出、切换账号
                    // 当用户因防沉迷机制受限时，登录认证失败或选择切换账号时会触发
                    LogAntiAddictionResult("Switch Account");
                    break;
                case CallbackCode.CALLBACK_CODE_USER_TYPE_CHANGED:
                    // 用户类型变更
                    // 完成实名认证会触发
                    LogAntiAddictionResult("User Type Changed");
                    break;

                case CallbackCode.CALLBACK_CODE_CHAT_NO_LIMIT:
                    // 聊天无限制
                    // 用户已通过实名，可进行聊天
                    LogAntiAddictionResult("Chat No Limit");
                    GotoChatPage();
                    break;
                case CallbackCode.CALLBACK_CODE_CHAT_LIMIT:
                    // 聊天限制
                    // 用户未通过实名，不可进行聊天
                    LogAntiAddictionResult("Chat Limit");
                    break;

                case CallbackCode.CALLBACK_CODE_PAY_NO_LIMIT:
                    // 付费不受限
                    LogAntiAddictionResult("Pay No Limit");
                    // 可以执行付费逻辑，单位为分
                    DealPay(10 * 100);
                    break;
                case CallbackCode.CALLBACK_CODE_PAY_LIMIT:
                    // 付费受限
                    // 包括游客未实名或付费额达到限制等
                    LogAntiAddictionResult("Pay Limit");
                    break;

                case CallbackCode.CALLBACK_CODE_REAL_NAME_SUCCESS:
                    // 实名成功
                    // 仅当主动调用 openRealName() 时，如果成功会触发
                    LogAntiAddictionResult("Real Name Success");
                    break;
                case CallbackCode.CALLBACK_CODE_REAL_NAME_FAIL:
                    // 实名失败
                    // 仅当主动调用 openRealName() 时，如果用户取消会触发
                    LogAntiAddictionResult("Real Name Fail");
                    break;
                    
                default:
                    break;
            }
    }

    private void LogAntiAddictionResult(String text) {
        MonoBehaviour.print("onAntiAddictionResult: " + text);
    }

    private void GotoChatPage() {
        // 进入聊天页面
        // ...
    }

    private void DealPay(int num) {
        // 执行具体的付费流程
        // ...

        // 当用户完成付费行为时，游戏需要通知 SDK，更新用户状态
        // 参数为本次充值的金额，单位为分
        AntiAddiction.paySuccess(num);
    }

    // 打开实名认证
    private void OpenRealName() {
        // 除了付费、聊天、时长限制时，有其他场景需要主动打开实名窗口，则可以通过该接口让用户进行实名，否则不需要调用该接口
        // 如果用户实名过了，调用 openRealName() 会直接回调 CALLBACK_CODE_REAL_NAME_SUCCESS
        AntiAddiction.openRealName();
    }
}