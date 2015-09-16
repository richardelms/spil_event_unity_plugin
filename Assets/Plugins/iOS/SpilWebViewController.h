//
//  SpilWebViewController.h
//  trackerSample
//
//  Created by Martijn van der Gun on 5/28/15.
//  Copyright (c) 2015 Martijn van der Gun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SpilWebViewController : UIViewController<UIWebViewDelegate>

@property (strong, nonatomic) NSString *callbackUID;

-(void)setupWebview:(NSDictionary*)options;


@end
