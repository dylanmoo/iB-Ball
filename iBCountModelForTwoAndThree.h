//
//  iBDataCenter.h
//  iB-Ball
//
//  Created by Zhengzhong Zhao on 2/17/13.
//  Copyright (c) 2013 Snowmanzzz. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef enum CountType {
    CountForNormal = 1,
    CountForTwo,
    CountForThree,
    CountForHotZone
} CountType;

@interface iBCountModelForTwoAndThree : NSObject {
    NSString *_dataPath;
}

@property (nonatomic, assign) NSInteger shootingTimes;
@property (nonatomic, assign) NSInteger goalTimes;

@property (nonatomic, assign) NSInteger totalShootingTimes;
@property (nonatomic, assign) NSInteger totalGoalTimes;

@property (nonatomic) CountType whatTypeOfCountingAreWeIn;
@property (nonatomic, strong) NSManagedObjectContext *managedObjectContext;

//@property (nonatomic, strong) NSMutableDictionary *hotzoneDict;
+ (NSMutableDictionary *)hotzoneDict;

@property (copy) NSString *docPath;


- (float)getRatioForThisTime;
- (float)getRatioForOverall;
// do the data persistense stuff
- (void)saveData;
- (void)loadData;



@end

