/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class qdbm_Util */

#ifndef _Included_qdbm_Util
#define _Included_qdbm_Util
#ifdef __cplusplus
extern "C" {
#endif
#undef qdbm_Util_LONGSIZE
#define qdbm_Util_LONGSIZE 8L
#undef qdbm_Util_IOBUFSIZ
#define qdbm_Util_IOBUFSIZ 8192L
/*
 * Class:     qdbm_Util
 * Method:    system
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Util_system
  (JNIEnv *, jclass, jstring);

/*
 * Class:     qdbm_Util
 * Method:    chdir
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_qdbm_Util_chdir
  (JNIEnv *, jclass, jstring);

/*
 * Class:     qdbm_Util
 * Method:    getcwd
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_qdbm_Util_getcwd
  (JNIEnv *, jclass);

/*
 * Class:     qdbm_Util
 * Method:    getpid
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_qdbm_Util_getpid
  (JNIEnv *, jclass);

/*
 * Class:     qdbm_Util
 * Method:    getenv
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_qdbm_Util_getenv
  (JNIEnv *, jclass, jstring);

#ifdef __cplusplus
}
#endif
#endif