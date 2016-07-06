/* ctest.c */

#include </System/Library/Frameworks/JavaVM.framework/Headers/jni.h>
#include <stdio.h>

JNIEXPORT void JNICALL Java_com_example_helloworld_HelloWorld_helloFromC
  (JNIEnv * env, jobject jobj)
{
    printf("Hello from C!\n");
}