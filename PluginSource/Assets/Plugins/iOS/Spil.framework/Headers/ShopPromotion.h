//
//  ShopPromotion.h
//  Spil
//
//  Copyright © 2016 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BundlePrice.h"
#import "ImageEntry.h"

@interface ShopPromotion : NSObject

@property (nonatomic, assign) int bundleId;
@property (nonatomic, assign) int amount;
@property (nonatomic, strong) NSMutableArray *prices; // BundlePrice
@property (nonatomic, strong) NSString* discount;
@property (nonatomic, strong) NSString* startDate;
@property (nonatomic, strong) NSString* endDate;
@property (nonatomic, strong) NSMutableArray *imageEntries; // ImageEntry

-(id)initWithDictionary:(NSDictionary*)data;

-(NSDictionary*)toJSONObject;

-(NSString*)getImageUrl:(NSString*)name;

@end
