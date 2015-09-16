//
//  SpilNotificationHelper.h
//  SpilEventTracker
//
//  Created by Martijn van der Gun on 6/18/15.
//  Copyright (c) 2015 Martijn van der Gun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


@interface SpilNotificationHelper : NSObject 

+(void)registerPushNotifications;
+(void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken;

@end
