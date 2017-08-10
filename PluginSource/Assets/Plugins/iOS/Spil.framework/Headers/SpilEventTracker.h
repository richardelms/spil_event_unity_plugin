//
//  SpilEventTracker.h
//  trackerSample
//
//  Copyright (c) 2015 Spil Games. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface SpilEventTracker : NSObject

@property (nonatomic, retain) NSString *adjustId;

+(SpilEventTracker*)sharedInstance;

-(void)startWithAppId:(NSString*)apiKey;

-(void)setCustomBundleId:(NSString*)bundleId;
-(NSString*)getBundleId;
-(NSString*)getAppId;

-(void)setAdvancedLogging:(BOOL)advancedLoggingEnabled;
-(BOOL)getAdvancedLoggingEnabled;
-(void)setPluginInformation:(NSString*)pluginNameParam pluginVersion:(NSString*)pluginVersionParam;
-(void)staging:(Boolean)stagingEnabled;
-(BOOL)debugModeEnabled;

-(void) trackEvent:(NSString*)name;
-(void) trackEvent:(NSString*)name withParameters:(NSDictionary *)parameters;
-(void) trackEvent:(NSString*)name onResponse:(void (^)(id response))block;
-(void) trackEvent:(NSString*)name withParameters:(NSDictionary *)parameters onResponse:(void (^)(id response))block;

-(void) trackInstantEvent:(NSString*)eventName onResponse:(void (^)(id response))block;
-(void) trackInstantEvent:(NSString*)eventName withParameters:(NSDictionary*)eventData onResponse:(void (^)(id response))block;

-(void)applicationDidEnterBackground:(UIApplication *)application;
-(void)applicationDidBecomeActive:(UIApplication *)application;

-(void)registerBlock:(id)blockToSave forUID:(NSString*)UID;
-(void)executeBlockWithUID:(NSString*)UID withResponse:(id)response;

#ifdef UNITY
-(void)UnityListenerDidEnterBackground:(NSNotification *)note;
-(void)UnityListenerDidBecomeActive:(NSNotification *)note;
-(void)UnityListenerDidRegisterDevice:(NSNotification *)note;
-(void)UnityListenerDidFailRegisterDevice:(NSNotification *)note;
-(void)UnityListenerDidReceiveRemoteNotification:(NSNotification *)note;
#endif

-(NSString*)getPushKey;
-(void)setPushKey:(NSString*)pushKey;

-(void)isUnity:(BOOL)unityEnabled;
-(BOOL)isUnity;

-(void)checkForNewSubdomain;

@end
