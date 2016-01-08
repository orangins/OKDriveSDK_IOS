//
// Created by 123456 on 16/1/4.
// Copyright (c) 2016 okchexian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OKDriveConfig.h"

typedef void (^OKdriveSetupHandler)(BOOL success, NSError *error);

@interface OKDriveSDK : NSObject
+ (OKDriveSDK *)instance;

- (void)setup:(OKDriveConfig *)config callBack:(OKdriveSetupHandler)block;

- (BOOL)startDriving;

- (void)endDriving;

- (void)destory;
@end