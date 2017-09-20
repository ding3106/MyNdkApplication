#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_lenovo_dingjq1_myndkapplication_MainActivity_getFromCpp(JNIEnv *env, jobject instance) {

    // TODO
    return env->NewStringUTF("hello C world");
}


extern "C"
JNIEXPORT jstring JNICALL
Java_com_lenovo_dingjq1_myndkapplication_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
