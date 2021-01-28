using System;
using UnityEngine;
using TGCenterSdk.Api;
using System.Collections.Generic;

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
        config.Channel = Channle;

        // 下面的参数仅 iOS 需要配置
        if (Application.platform == RuntimePlatform.IPhonePlayer) {
            config.AppId = "";
            config.AppleAppID = "";
            config.UmengAppKey = "";
            config.AppsFlyerDevKey = "";
            config.RangersAppLogAppId = "";
            config.RangersAppLogAppName = "";
        }

        TGCenter.Init(config);
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
    // 在用户操作后，调用 DealDialogAgreeResult() 方法
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