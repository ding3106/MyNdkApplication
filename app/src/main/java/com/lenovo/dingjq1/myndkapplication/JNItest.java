package com.lenovo.dingjq1.myndkapplication;

/**
 * Created by dingjq on 2017/9/17.
 */

public class JNItest {

    static {
        System.loadLibrary("jni_test");
    }

    public static native String getStringFromJNI();
}
