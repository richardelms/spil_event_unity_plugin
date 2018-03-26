//
//  Package.h
//  Spil
//
//  Created by Frank Slofstra on 02/02/2018.
//  Copyright © 2018 Spil Games. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Package : NSObject

@property (assign, nonatomic) int id;
@property (strong, nonatomic) NSString *packageId;
@property (strong, nonatomic) NSString *discountLabel;
@property (strong, nonatomic) NSMutableArray *items; // Array of PackageItem's
    
-(id)initWithDictionary:(NSDictionary*)dict;
    
-(NSMutableDictionary*)toJSONObject;
    
@end
