#ifndef __INTERFACE_JNI_H__
#define __INTERFACE_JNI_H__

#include "cocos2d.h"
#include "cocos-ext.h"

class InterfaceJNI
{
public:
	static void helloWorld();
	static void postMessageToFB();
	static void postMessageEMail();
	static void postMessageToTweet();
	static bool isInternetConnected();
    
protected:

};

#endif // __INTERFACE_JNI_H__
