//
//  Deck.h
//  Matchismo
//
//  Created by Phil Wee on 1/3/14.
//  Copyright (c) 2014 Philster. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
