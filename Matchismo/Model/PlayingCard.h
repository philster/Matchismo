//
//  PlayingCard.h
//  Matchismo
//
//  Created by Phil Wee on 1/3/14.
//  Copyright (c) 2014 Philster. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
