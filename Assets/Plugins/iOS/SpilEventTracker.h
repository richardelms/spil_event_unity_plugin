//
//  SpilEventTracker.h
//  trackerSample
//
//  Created by Martijn van der Gun on 5/28/15.
//  Copyright (c) 2015 Martijn van der Gun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SpilEventTracker : NSObject {
    
}

+ (SpilEventTracker*)sharedInstance;

-(void)startWithAppId:(NSString*)apiKey;

-(void)debug:(BOOL)debugEnabled;

-(void) trackEvent:(NSString*)name;
-(void) trackEvent:(NSString*)name withParameters:(NSDictionary *)params;
-(void) trackEvent:(NSString*)name onResponse:(void (^)(id response))block;
-(void) trackEvent:(NSString*)name withParameters:(NSDictionary *)params onResponse:(void (^)(id response))block;
-(void) trackEvent:(NSString*)name withParameters:(NSDictionary *)params alterRootDataWithKeys:(NSDictionary *)rootParams onResponse:(void (^)(id response))block;  // todo: make private


-(void)applicationWillResignActive:(UIApplication *)application;
-(void)applicationDidEnterBackground:(UIApplication *)application; // important
-(void)applicationWillEnterForeground:(UIApplication *)application;
-(void)applicationDidBecomeActive:(UIApplication *)application;  // important
-(void)applicationWillTerminate:(UIApplication *)application;

-(void)registerBlock:(id)blockToSave forUID:(NSString*)UID;
-(void)executeBlockWithUID:(NSString*)UID withResponse:(id)response;

-(BOOL)getDebug;

-(void)UnityListenerDidEnterBackground:(NSNotification *)note;
-(void)UnityListenerDidBecomeActive:(NSNotification *)note;
-(void)UnityListenerDidRegisterDevice:(NSNotification *)note;
-(void)UnityListenerDidFailRegisterDevice:(NSNotification *)note;
-(void)UnityListenerDidReceiveRemoteNotification:(NSNotification *)note;


// Unity Specific
//+(void)sendMessage:(NSString*)messageName toObject:(NSString*)objectName withParameter:(NSString*)parameterString;
//void UnitySendMessage(const char* obj, const char* method, const char* msg);

/*+(void)didRegisterDevice:(id)sender;
+(void)didFailRegisterDevice:(id)sender;
*/

@end
