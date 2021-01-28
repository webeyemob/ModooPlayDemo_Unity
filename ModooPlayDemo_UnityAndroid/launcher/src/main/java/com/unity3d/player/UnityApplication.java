package com.unity3d.player;

import android.app.Application;

import com.appsflyer.AppsFlyerLib;

public class UnityApplication extends Application {

    @Override
    public void onCreate() {
        super.onCreate();
        AppsFlyerLib.getInstance().setDebugLog(true);
    }
}
