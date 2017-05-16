//
//  BundleItem.h
//  Spil
//
//  Copyright © 2016 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PlayerItem.h"

@interface BundleItem : NSObject

@property (assign, nonatomic) int id;
@property (assign, nonatomic) int amount;

-(id)initWithDictionary:(NSDictionary*)dict;

-(NSDictionary*)toJSONObject;

-(PlayerItem*)getItem;

@end
