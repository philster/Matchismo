//
//  Card.m
//  Matchismo
//
//  Created by Phil Wee on 1/3/14.
//  Copyright (c) 2014 Philster. All rights reserved.
//

#import "Card.h"

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
