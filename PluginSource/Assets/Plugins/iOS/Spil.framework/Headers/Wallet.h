//
//  Wallet.h
//  Spil
//
//  Copyright © 2016 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PlayerCurrency.h"
#import "Bundle.h"

@interface Wallet : NSObject

@property (strong, nonatomic) NSMutableArray *currencies; // PlayerCurrency
@property (nonatomic) int offset;
@property (strong, nonatomic) NSString* logic;

-(id)init;
-(id)initWithDictionary:(NSDictionary*)data;

-(NSDictionary*)toJSONObject;
-(NSString*)toJSONString;

-(NSArray*)getCurrenciesJSONArray;

-(PlayerCurrency*)getCurrency:(int)id;

-(NSArray*)getUpdatedCurrencies;

-(BOOL)hasEnoughCurrencyForBundle:(Bundle*)bundle;

-(void)reset;

-(void)resetDeltas;

@end
