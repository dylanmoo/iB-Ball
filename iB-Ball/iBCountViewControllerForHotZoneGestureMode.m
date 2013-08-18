//
//  iBCountViewControllerForHotZoneGestureMode.m
//  iB-Ball
//
//  Created by Snowmanzzz on 13-8-18.
//  Copyright (c) 2013年 Snowmanzzz. All rights reserved.
//

#import "iBCountViewControllerForHotZoneGestureMode.h"

@interface iBCountViewControllerForHotZoneGestureMode ()

@end

@implementation iBCountViewControllerForHotZoneGestureMode

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)swipeLeft:(id)sender {
    self.numberWeScore++;
    self.numberWeTry++;
    [self.delegate gestureInfoChange:self.numberWeScore and:self.numberWeTry];
}

- (IBAction)swipeRight:(id)sender {
    self.numberWeTry++;
    [self.delegate gestureInfoChange:self.numberWeScore and:self.numberWeTry];
}

@end
