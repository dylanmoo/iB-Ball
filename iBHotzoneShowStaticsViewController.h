//
//  iBHotzoneShowStaticsViewController.h
//  iB-Ball
//
//  Created by Snowmanzzz on 5/17/13.
//  Copyright (c) 2013 Snowmanzzz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "iBDataCenterForHotzone.h"

@interface iBHotzoneShowStaticsViewController : UIViewController
@property (nonatomic, weak) NSMutableDictionary *dataCenter;
- (IBAction)showStatics:(id)sender;

@end
