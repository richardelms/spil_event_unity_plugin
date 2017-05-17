//
//  Currency.h
//  Spil
//
//  Created by Frank Slofstra on 17/05/16.
//  Copyright © 2016 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Currency : NSObject

@property (assign, nonatomic) int id;
@property (strong, nonatomic) NSString *name;
@property (assign, nonatomic) int type;
@property (assign, nonatomic) int initialValue;
@property (strong, nonatomic) NSString *imageUrl;
@property (strong, nonatomic) NSString *displayName;
@property (strong, nonatomic) NSString *displayDescription;

-(id)initWithDictionary:(NSDictionary*)dict;

-(NSMutableDictionary*)toJSONObject;

@end
