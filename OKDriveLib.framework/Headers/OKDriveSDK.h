//
// Created by 123456 on 16/1/4.
// Copyright (c) 2016 okchexian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OKDriveConfig.h"
#import "OKSetUpResult.h"

typedef void (^OKdriveSetupHandler)(BOOL success, OKSetUpResult *res);

@interface OKDriveSDK : NSObject

@property(nonatomic, copy) void (^tripStartHandler)(void);
@property(nonatomic, copy) void (^tripEndHandler)(void);

+ (OKDriveSDK *)instance;

- (void)setup:(OKDriveConfig *)config callBack:(OKdriveSetupHandler)block;

- (BOOL)startDriving;

- (void)endDriving;

- (void)destory;
@end
