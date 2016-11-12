#include <jni.h>
#include <string>

extern "C"
jstring
Java_com_example_vlatko_sudokusolver_VideoProcessing_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
