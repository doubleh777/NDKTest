#include "com_example_henry_ndktest_MainActivity.h"

JNIEXPORT jstring JNICALL Java_com_example_henry_ndktest_MainActivity_getStringFromNative(JNIEnv *env, jobject obj) {
return env->NewStringUTF("Hello from JNI!");
}