/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class sam_NativeSample */

#ifndef _Included_sam_NativeSample
#define _Included_sam_NativeSample
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     sam_NativeSample
 * Method:    sayHello
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_sam_NativeSample_sayHello
  (JNIEnv *, jobject);

/*
 * Class:     sam_NativeSample
 * Method:    sendANum
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_sam_NativeSample_sendANum
  (JNIEnv *, jobject, jint);

/*
 * Class:     sam_NativeSample
 * Method:    sendAString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_sam_NativeSample_sendAString
  (JNIEnv *, jobject, jstring);

/*
 * Class:     sam_NativeSample
 * Method:    getANum
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_sam_NativeSample_getANum
  (JNIEnv *, jobject);

/*
 * Class:     sam_NativeSample
 * Method:    getAString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_sam_NativeSample_getAString
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
