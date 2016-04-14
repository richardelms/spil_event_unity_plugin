//
//  HookBridge.h
//  SpilStaticLib
//
//  Created by Martijn van der Gun on 6/22/15.
//  Copyright (c) 2015 Martijn van der Gun. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface HookBridge : NSObject {
    
}

#ifdef __cplusplus
extern "C" {

    void initEventTracker();
    
    void trackEventNative(const char* eventName);
    
    void trackEventWithParamsNative(const char* eventName, const char* jsonStringParams);
    
    void handlePushNotification(const char* notificationStringParams);
    
    void UnitySendMessage(const char* obj, const char* method, const char* msg);

    void registerForPushNotifications(const char* obj);
    
    void applicationDidEnterBackground();
    
    void applicationDidBecomeActive();
    
    void setPushNotificationKey(const char* pushKey);

    char* getConfigNative ();
    
    char* getConfigValueNative (const char* keyName);

    char* cStringCopy(const char* string);
    
    void initEventTrackerWithOptions(const char* options);

    // depricated, kept for reference
    // void SendUnityBridgeMessage(const char* objectName,const char* messageName,const char* parameterString);
}

#endif

+ (void) sendMessage:(NSString*)messageName toObject:(NSString*)objectName withParameter:(NSString*)parameterString;

@end