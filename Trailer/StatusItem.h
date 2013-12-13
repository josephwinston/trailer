//
//  StatusItem.h
//  Trailer
//
//  Created by Paul Tsochantaris on 13/12/2013.
//  Copyright (c) 2013 HouseTrip. All rights reserved.
//

@class StatusItem;


#define STATUSITEM_PADDING 3.0


@protocol StatusItemDelegate <NSObject>

- (void)statusItemTapped:(StatusItem *)statusItem;

@end


@interface StatusItem : NSView

- (id)initWithFrame:(NSRect)frame label:(NSString *)label attributes:(NSDictionary *)attributes delegate:(id<StatusItemDelegate>)delegate;

@property (nonatomic) BOOL highlighted;

@end
