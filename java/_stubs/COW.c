/* DO NOT EDIT THIS FILE - it is machine generated */
#include "jri.h"

/* Stubs for class COW */

#ifdef IMPLEMENT_COW
#define _implementing_COW
#endif /* IMPLEMENT_COW */
#define IMPLEMENT_COW
#include "COW.h"

#ifndef UNUSED_COW_run
JRIMethodID FAR methodID_COW_run = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(void)
COW_run(JRIEnv* env, struct COW* self, struct java_lang_String *a, jint b) {
	if (methodID_COW_run == JRIUninitialized) {
		assert(!"Forgot to call use_COW(env) before calling method run (Ljava/lang/String;I)V");
	}
	(void)JRI_CallMethod(env)(env, JRI_CallMethod_op, self, methodID_COW_run, a, b);
}
#endif /* DEBUG */
#endif /* UNUSED_COW_run */

#ifndef UNUSED_COW_connect
JRIMethodID FAR methodID_COW_connect = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(void)
COW_connect(JRIEnv* env, struct COW* self, struct java_lang_String *a) {
	if (methodID_COW_connect == JRIUninitialized) {
		assert(!"Forgot to call use_COW(env) before calling method connect (Ljava/lang/String;)V");
	}
	(void)JRI_CallMethod(env)(env, JRI_CallMethod_op, self, methodID_COW_connect, a);
}
#endif /* DEBUG */
#endif /* UNUSED_COW_connect */

#ifndef UNUSED_COW_new
JRIMethodID FAR methodID_COW_new = JRIUninitialized;
#ifdef DEBUG
JRI_PUBLIC_API(struct COW*)
COW_new(JRIEnv* env, struct java_lang_Class* clazz) {
	if (methodID_COW_new == JRIUninitialized) {
		assert(!"Forgot to call use_COW(env) before calling method <init> ()V");
	}
	return (struct COW*)JRI_NewObject(env)(env, JRI_NewObject_op, clazz, methodID_COW_new);
}
#endif /* DEBUG */
#endif /* UNUSED_COW_new */

#ifndef UNUSED_use_COW

static jglobal _globalclass_COW = NULL;

JRI_PUBLIC_API(struct java_lang_Class*)
use_COW(JRIEnv* env)
{
	if (_globalclass_COW == NULL) {
		struct java_lang_Class* clazz = JRI_FindClass(env, classname_COW);
		if (clazz == NULL) {
			JRI_ThrowNew(env, JRI_FindClass(env, "java/lang/ClassNotFoundException"), classname_COW);
			return NULL;
		}
		use_COW_run(env, clazz);
		use_COW_connect(env, clazz);
		use_COW_new(env, clazz);
		_globalclass_COW = JRI_NewGlobalRef(env, clazz);
		return clazz;
	}
	else {
		return JRI_GetGlobalRef(env, _globalclass_COW);
	}
}

JRI_PUBLIC_API(void)
unuse_COW(JRIEnv* env)
{
	if (_globalclass_COW != NULL) {
		struct java_lang_Class* clazz = JRI_GetGlobalRef(env, _globalclass_COW);
		unuse_COW_run(env, clazz);
		unuse_COW_connect(env, clazz);
		unuse_COW_new(env, clazz);
		JRI_DisposeGlobalRef(env, _globalclass_COW);
		_globalclass_COW = NULL;
		clazz = NULL;	/* prevent unused variable 'clazz' warning */
	}
}

#endif /* UNUSED_use_COW */

#ifdef _implementing_COW

JRI_PUBLIC_API(struct java_lang_Class*)
register_COW(JRIEnv* env)
{
	char* nativeNamesAndSigs[] = {
		"run(Ljava/lang/String;I)V",
		NULL
	};
	void* nativeProcs[] = {
		(void*)native_COW_run,
		NULL
	};
	struct java_lang_Class* clazz = JRI_FindClass(env, classname_COW);
	if (clazz == NULL) {
		JRI_ThrowNew(env, JRI_FindClass(env, "java/lang/ClassNotFoundException"), classname_COW);
		return NULL;
	}
	JRI_RegisterNatives(env, clazz, nativeNamesAndSigs, nativeProcs);
	use_COW(env);
	return clazz;
}

JRI_PUBLIC_API(void)
unregister_COW(JRIEnv* env)
{
	struct java_lang_Class* clazz = JRI_FindClass(env, classname_COW);
	JRI_UnregisterNatives(env, clazz);
	unuse_COW(env);
}

#endif /* _implementing_COW */

/* These stub routines are generated for compatibility with the JDK: */

#ifndef NO_JDK

/* SYMBOL: "COW/run(Ljava/lang/String;I)V", Java_COW_run_stub */
JRI_PUBLIC_API(JRI_JDK_stack_item*)
Java_COW_run_stub(JRI_JDK_stack_item* _P_, JRIEnv* _EE_) {
	(void) native_COW_run(_EE_,_P_[0].p,((_P_[1].p)),((_P_[2].i)));
	return _P_;
}

#endif /* NO_JDK */

