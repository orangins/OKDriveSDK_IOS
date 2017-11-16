//
// Created by 123456 on 16/1/4.
// Copyright (c) 2016 okchexian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OKDriveConfig.h"
#import "OKSetUpResult.h"
#import "Trip.h"

typedef void (^OKdriveSetupHandler)(BOOL success, OKSetUpResult *res);

typedef NS_ENUM(NSInteger, DriveStatus) {
    DriveStatusWait,
    DriveStatusRegisterRegion,
    DriveStatusCheckSpeed,
    DriveStatusDriving,
    DriveStatusUpload

};

@protocol OKDriveEventDelegate <NSObject>

@optional

- (void)onTripStart:(Trip *)trip;

- (void)onTripEnd:(Trip *)trip;


@end

@interface OKDriveSDK : NSObject

@property(nonatomic, weak) id <OKDriveEventDelegate> delegate;

+ (OKDriveSDK *)instance;

- (void)setup:(OKDriveConfig *)config callBack:(OKdriveSetupHandler)block;

- (BOOL)startDriving;

- (void)endDriving;

- (void)destory;
@end
