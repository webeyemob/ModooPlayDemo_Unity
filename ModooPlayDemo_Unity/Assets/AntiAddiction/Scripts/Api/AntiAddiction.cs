﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using System.Runtime.InteropServices;
using AOT;

/*
	version 1.1.0
 */
namespace AntiAddictionSdk.OpenSource
{

	public enum AntiAddictionUserType : int{
		USER_TYPE_UNKNOWN = 0,			// 依赖SDK获取实名信息或第三方获取的信息为未实名
		USER_TYPE_CHILD = 1,			// 通过第三方获取，值为未成年人（8岁以下
		USER_TYPE_TEEN = 2,				// 通过第三方获取，值为未成年人（8-16岁）
		USER_TYPE_YOUNG = 3,			// 通过第三方获取，值为未成年人（16-17岁）
		USER_TYPE_ADULT = 4,			// 通过第三方获取，值为成年人
	};

	public enum CallbackCode : int{
			CALLBACK_CODE_ENTER_SUCCESS = 500,				// 登录通过，当用户登录过程中通过防沉迷限制时会触发
			CALLBACK_CODE_SWITCH_ACCOUNT = 1000,			// 切换账号，当用户因防沉迷机制受限时，选择切换账号时会触发
			CALLBACK_CODE_REAL_NAME_SUCCESS = 1010,			// 实名成功，通过SDK或第三方完成实名会触发
			CALLBACK_CODE_REAL_NAME_FAIL = 1015,			// 实名失败，实名取消或失败会触发
			CALLBACK_CODE_PAY_NO_LIMIT = 1020,				// 付费不受限，sdk检查用户付费无限制时触发
			CALLBACK_CODE_PAY_LIMIT = 1025,					// 付费受限，付费受限触发,包括游客未实名或付费额达到限制等
			CALLBACK_CODE_TIME_LIMIT = 1030,				// 时间受限，未成年人或游客游戏时长已达限制，通知游戏
			CALLBACK_CODE_OPEN_REAL_NAME = 1060,			// 打开实名窗口，需要游戏通过其他方式完成用户实名时触发
			CALLBACK_CODE_CHAT_NO_LIMIT = 1080,				// 聊天无限制，用户已通过实名，可进行聊天
			CALLBACK_CODE_CHAT_LIMIT = 1090,				// 聊天限制，用户未通过实名，不可进行聊天
			CALLBACK_CODE_USER_TYPE_CHANGED = 1500,			// 用户类型变更，通过SDK完成实名会触发
			CALLBACK_CODE_AAT_WINDOW_SHOWN = 2000,			// 额外弹窗显示，当用户操作触发额外窗口显示时通知游戏
			CALLBACK_CODE_AAK_WINDOW_DISMISS = 2500,		// 额外弹窗显示，额外窗口消失时通知游戏

		};

	public class AntiAddiction:MonoBehaviour {

		private static AndroidJavaClass AntiAddictionClass;
		private static bool sdkInited = false;
		private delegate void AntiAddictionDelegate(int resultCode,string message);
		private static Action<int,string> antiAddictionResult;
		[AOT.MonoPInvokeCallbackAttribute(typeof(AntiAddictionDelegate))]
		static void antiAddictionCallback (int resultCode,string message) {
			antiAddictionResult(resultCode,message);
		}

		/*
			初始化
			onAntiAddictionResult:接收回调
		 */
		public static void init(Action<int,string> onAntiAddictionResult) {
			sdkInited = true;
			#if UNITY_IOS && !UNITY_EDITOR
				antiAddictionResult = onAntiAddictionResult;
				AntiAddictionInit(antiAddictionCallback);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AndroidJavaClass playerClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
				AndroidJavaObject activityObject = playerClass.GetStatic<AndroidJavaObject>("currentActivity");
				AntiAddictionClass = new AndroidJavaClass ("com.antiaddiction.sdk.AntiAddictionKit");
				AntiAddictionClass.CallStatic ("init", activityObject, new AntiAddictionHandler(onAntiAddictionResult));
			#else
			#endif
		}

		/*
			配置SDK
			useSdkRealName：是否使用SDK内部实名				默认true
			useSdkPaymentLimit：是否开启支付限制	 			默认true
			useSdkOnlineTimeLimit：是否开启在线时长限制	   默认true 
		 */
		public static void fuctionConfig(bool useSdkRealName,bool useSdkPaymentLimit,bool useSdkOnlineTimeLimit) {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionSetFunctionConfig(useSdkRealName,useSdkPaymentLimit,useSdkOnlineTimeLimit,true);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic ("resetFunctionConfig", useSdkRealName, useSdkPaymentLimit,useSdkOnlineTimeLimit);
			#else
			#endif
		}

		/*
			配置SDK
			AntiAddictionConfig 配置
		 */
		public static void fuctionConfig(AntiAddictionFunctionConfig config) {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionSetFunctionConfig(config.useSdkRealName,config.useSdkPaymentLimit,config.useSdkOnlineTimeLimit,config.showSwitchAccountButton);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited == false) {
					AntiAddictionClass = new AndroidJavaClass ("com.antiaddiction.sdk.AntiAddictionKit");
				}
				AntiAddictionClass.CallStatic<AndroidJavaObject> ("getFunctionConfig")
								.Call<AndroidJavaObject>("useSdkRealName",config.useSdkRealName)
								.Call<AndroidJavaObject>("useSdkPaymentLimit",config.useSdkPaymentLimit)
								.Call<AndroidJavaObject>("useSdkOnlineTimeLimit",config.useSdkOnlineTimeLimit)
								.Call<AndroidJavaObject>("showSwitchAccountButton",config.showSwitchAccountButton);
			#else
			#endif
		}

		public static void commonConfig(AntiAddictionCommonConfig config) {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionSetGuestTotalTime(config.gusterTime);
				AntiAddictionSetCurfewHourStart(config.nightStrictStart);
				AntiAddictionSetCurfewHourEnd(config.nightStrictEnd);
				AntiAddictionSetMinorCommonDayTotalTime(config.childCommonTime);
				AntiAddictionSetMinorHolidayTotalTime(config.childHolidayTime);
				AntiAddictionSetSinglePaymentAmountLimitJunior(config.teenPayLimit);
				AntiAddictionSetMouthTotalPaymentAmountLimitJunior(config.teenMonthPayLimit);
				AntiAddictionSetSinglePaymentAmountLimitSenior(config.youngPayLimit);
				AntiAddictionSetMouthTotalPaymentAmountLimitSenior(config.youngMonthPayLimit);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited == false) {
					AntiAddictionClass = new AndroidJavaClass ("com.antiaddiction.sdk.AntiAddictionKit");
				}
				AntiAddictionClass.CallStatic<AndroidJavaObject> ("getCommonConfig")
								.Call<AndroidJavaObject>("gusterTime",config.gusterTime)
								.Call<AndroidJavaObject>("nightStrictStart",config.nightStrictStart)
								.Call<AndroidJavaObject>("nightStrictEnd",config.nightStrictEnd)
								.Call<AndroidJavaObject>("childCommonTime",config.childCommonTime)
								.Call<AndroidJavaObject>("childHolidayTime",config.childHolidayTime)
								.Call<AndroidJavaObject>("teenPayLimit",config.teenPayLimit)
								.Call<AndroidJavaObject>("teenMonthPayLimit",config.teenMonthPayLimit)
								.Call<AndroidJavaObject>("youngPayLimit",config.youngPayLimit)
								.Call<AndroidJavaObject>("youngMonthPayLimit",config.youngMonthPayLimit);
			#else
			#endif
		}

		/*
			设置域名，设置之后开启联网模式
			host：域名
		 */
		public static void setHost(string host) {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionSetHost(host);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic ("setHost", host);
			#else
			#endif
		}

		/*
			配置用户信息，登录时调用
			userId：用户ID
			userType：用户类型，见枚举
		 */
		public static void login(string userId, AntiAddictionUserType userType) {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionLogin(userId, (int)userType);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic ("login", userId, (int)userType);
			#else
			#endif
		}

		/*
			更新当前用户信息
			userType：用户类型，见枚举
		 */
		public static void updateUserType(AntiAddictionUserType userType) {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionUpdateUserType((int)userType);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic ("updateUserType", (int)userType);
			#else
			#endif
		}

		/*
			登出当前用户
		 */
		public static void logout() {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionLogout();
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic ("logout");
			#else
			#endif
		}

		/*
			获取用户信息，返回值参考用户类型，异常情况返回-1
			userId：用户ID
		 */
		public static int getUserType(string userId) {
			#if UNITY_IOS && !UNITY_EDITOR
				return AntiAddictionGetUserType(userId);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				return AntiAddictionClass.CallStatic<int> ("getUserType", userId);
			#else
				return 0;
			#endif
		}

		/*
			检查是否能支付,结果以回调返回
			price：商品价格，单位分
		 */
		public static void checkPayLimit(int price) {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionCheckPayLimit(price);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic ("checkPayLimit", price);
			#else
			#endif
		}

		/*
			支付成功以后通知SDK结果
			price：商品价格，单位分
		 */
		public static void paySuccess(int price) {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionPaySuccess(price);
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic("paySuccess", price);
			#else
			#endif
		}

		/*
			检查是否能聊天,结果以回调返回
		 */
		public static void checkChatLimit() {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionCheckChatLimit();
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic ("checkChatLimit");
			#else
			#endif
		}

		/*
			打开实名窗口
		 */	
		public static void openRealName () {
			#if UNITY_IOS && !UNITY_EDITOR
				AntiAddictionOpenRealName();
			#elif UNITY_ANDROID && !UNITY_EDITOR
				AntiAddictionClass.CallStatic ("openRealName");
			#else
			#endif
		}

		public static void onResume() {
			#if UNITY_IOS && !UNITY_EDITOR
			#elif UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited)
				{
					AntiAddictionClass.CallStatic ("onResume");
				}
			#else
			#endif
		}

		public static void onStop() {
			#if UNITY_IOS && !UNITY_EDITOR
			#elif UNITY_ANDROID && !UNITY_EDITOR
				if (sdkInited)
				{
					AntiAddictionClass.CallStatic ("onStop");
				}
			#else
			#endif
		}

		#if UNITY_IOS && !UNITY_EDITOR
        [DllImport("__Internal")]
        private static extern void AntiAddictionInit(AntiAddictionDelegate antiDelegate);

        [DllImport("__Internal")]
        private static extern void AntiAddictionSetFunctionConfig(bool useSdkRealName,bool useSdkPaymentLimit,bool useSdkOnlineTimeLimit,bool showSwitchAccountButton);
        
		[DllImport("__Internal")]
        private static extern void AntiAddictionSetHost(string host);

        [DllImport("__Internal")]
        private static extern void AntiAddictionLogin(string userId,int userType);

		[DllImport("__Internal")]
        private static extern void AntiAddictionUpdateUserType(int userType);

		[DllImport("__Internal")]
        private static extern void AntiAddictionLogout();

		[DllImport("__Internal")]
        private static extern int AntiAddictionGetUserType(string userId);

		[DllImport("__Internal")]
        private static extern void AntiAddictionCheckPayLimit(int amount);

		[DllImport("__Internal")]
        private static extern void AntiAddictionPaySuccess(int amount);

		[DllImport("__Internal")]
        private static extern void AntiAddictionCheckChatLimit();

		[DllImport("__Internal")]
        private static extern void AntiAddictionOpenRealName();


		// 游客用户（未实名）节假日游戏限制时长（默认 60 分钟），单位秒
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetGuestTotalTime(int time);

		// 宵禁配置（单位小时，24 小时制）
		// 未成年人防沉迷宵禁开始时间（默认晚上 10 点），time 单位秒
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetCurfewHourStart(int time);

		// 未成年人防沉迷宵禁结束时间（默认早上 8 点），time 单位秒
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetCurfewHourEnd(int time);


		// 未成年人非节假日游戏限制时长（默认 90 分钟），单位秒
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetMinorCommonDayTotalTime(int time);

		// 未成年人节假日游戏限制时长（默认 180 分钟），单位秒
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetMinorHolidayTotalTime(int time);


		// 支付限制金额配置（单位分）
		// 8-15 岁单笔付费额度限制（默认 50 元）
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetSinglePaymentAmountLimitJunior(int amount);

		// 8-15 岁每月总付费额度限制（默认 200 元）
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetMouthTotalPaymentAmountLimitJunior(int amount);

		// 16-17 岁单笔付费额度限制（默认 100 元）
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetSinglePaymentAmountLimitSenior(int amount);

		// 16-17岁每月总付费额度限制（默认 400 元）
		[DllImport("__Internal")]
		private static extern void AntiAddictionSetMouthTotalPaymentAmountLimitSenior(int amount);

		#endif
	}

	class AntiAddictionHandler:AndroidJavaProxy {
		Action<int,string> onAntiAddictionResult;
		public AntiAddictionHandler(Action<int,string> onAntiAddictionResult): base("com.antiaddiction.sdk.AntiAddictionKit$AntiAddictionCallback") {    
			this.onAntiAddictionResult = onAntiAddictionResult;
		}

		public override AndroidJavaObject Invoke(string methodName, object[] args) {
			if (methodName.Equals("onAntiAddictionResult")) {
				onAntiAddictionResult((int)args[0],(string)args[1]);
			}	
			return null;
		}
	}
}