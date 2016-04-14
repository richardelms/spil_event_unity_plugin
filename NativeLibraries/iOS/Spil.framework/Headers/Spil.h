//
//  Spil.h
//  Spil
//
//  Created by Martijn van der Gun on 10/1/15.
//  Copyright © 2015 Spil Games. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for Spil.
FOUNDATION_EXPORT double SpilVersionNumber;

//! Project version string for Spil.
FOUNDATION_EXPORT const unsigned char SpilVersionString[];

@class Spil;

@protocol SpilDelegate

// protocol functions for delegate calls
-(void)adDidShow;
-(void)adDidClose;
-(void)videoReward:(NSDictionary*)data;
-(void)notificationReward:(NSDictionary*)reward;

@end

@interface Spil : NSObject {
    
}

// define delegate property
@property (nonatomic, assign) id  delegate;


/**
 *  Initiates the API
 */
+(void)start;

/**
 *  Initiates the API with options
 *
 *  @param options holds a dictionary with options like "isUnity"
 */
+(void)startWithOptions:(NSDictionary*)options;

/**
 *  Show debug logs
 *
 *  @param debugEnabled Enables or disables the debug logs printed
 */
+(void)debug:(BOOL)debugEnabled;

/**
 *  Show a toast when a reward is unlocked
 */
+(void)showToastOnVideoReward:(BOOL)enabled;

/**
 *  Track a basic named event
 *
 *  @param name The name of the event. Replace spaces with an underscore
 */
+(void) trackEvent:(NSString*)name;

/**
 *  Track a named events with a key / value object
 *
 *  @param name The name of the event. Replace spaces with an underscore
 *  @param params A key value dictionary holding the params
 */
+(void) trackEvent:(NSString*)name withParameters:(NSDictionary *)params;

/**
 *  Track a basic named event with a response
 *
 *  @param name  The name of the event. Replace spaces with an underscore
 *  @param block A block with response param that will be executed when the server sends a reponse on the tracked event
 */
+(void) trackEvent:(NSString*)name onResponse:(void (^)(id response))block;

/**
 *  Track a named event params and a response
 *
 *  @param name   The name of the event. Replace spaces with an underscore
 *  @param params A key value dictionary holding the params
 *  @param block  A block with response param that will be executed when the server sends a reponse on the tracked event
 */
+(void) trackEvent:(NSString*)name withParameters:(NSDictionary *)params onResponse:(void (^)(id response))block;

/**
 *  Forwarding Delegate methods to let the Spil framework know when the app went to the background
 *
 *  @param application Delegate application to be passed
 */
+(void)applicationDidEnterBackground:(UIApplication *)application;

/**
 *  Forwarding Delegate methods to let the Spil framework know when the app became active again after running in background
 *
 *  @param application Delegate application to be passed
 */
+(void)applicationDidBecomeActive:(UIApplication *)application;

/**
 *  Unity message sender
 *
 *  @param messageName     Name of the message, should match the function in unity
 *  @param objectName      The name of the spil object where the script is attached to. In most cases "SpilSDK"
 *  @param parameterString A json string holding the data to send
 */
+(void)sendMessage:(NSString*)messageName toObject:(NSString*)objectName withParameter:(NSString*)parameterString;

/**
 *  Helper function to register for push notifications
 */
+(void)registerPushNotifications;

/**
 *  Helper function to forward the app delegate listener on the deviceToken
 */
+(void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;

/**
 *  Handle remote notification packages
 *
 *  @param Application     Reference to the UIApplication object
 *  @param userInfo        Reference to the push notification payload
 */
+(void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo;

/**
 * Get the latest stored game configuration, typically a synchronized json object coming from the server.
 *
 * @return NSDictionary object representation from the stored game configuration
 */
+(NSDictionary*)getConfig;

/**
 * Get a specific value from a particular key from the game configuration
 * 
 * @param Name of the key. Type must be NSString.
 * @return returns the object from a key, only first hiergy
 */
+(id)getConfigValue:(NSString*)keyString;

@end

