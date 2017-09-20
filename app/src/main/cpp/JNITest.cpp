#include "com_lenovo_dingjq1_myndkapplication_JNItest.h"


JNIEXPORT jstring JNICALL Java_com_lenovo_dingjq1_myndkapplication_JNItest_getStringFromJNI
        (JNIEnv * env, jclass jClass){
    return (*env).NewStringUTF("Hello from a new JNI");
}
