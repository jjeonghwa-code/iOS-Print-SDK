//
//  KiteViewController.h
//  Kite Print SDK
//
//  Created by Konstadinos Karayannis on 12/24/14.
//  Copyright (c) 2014 Deon Botha. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OLProductTemplate.h"

@class OLPrintOrder;

@protocol OLKiteDelegate <NSObject>

@optional
- (BOOL)shouldShowAddMorePhotosInReview;

@end

@interface OLKiteViewController : UIViewController

@property (weak, nonatomic) id<OLKiteDelegate> delegate;

- (id)initWithAssets:(NSArray *)assets;

@end