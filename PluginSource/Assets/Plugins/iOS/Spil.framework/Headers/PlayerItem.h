//
//  PlayerItem.h
//  Spil
//
//  Copyright © 2016 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Item.h"

@protocol PlayerItem
@end

@interface PlayerItem : Item

@property (nonatomic) int amount;
@property (nonatomic) int delta;

-(id)init;
-(id)initWithItem:(Item*)item;
-(id)initWithDictionary:(NSDictionary*)dict;

-(NSDictionary*)toJSONObject:(bool)includeContent;

@end
