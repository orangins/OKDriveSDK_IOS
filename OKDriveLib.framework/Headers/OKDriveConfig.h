//
// Created by 123456 on 16/1/4.
// Copyright (c) 2016 okchexian. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface OKDriveConfig : NSObject
@property(nonatomic, strong) NSString *appKey;
@property(nonatomic, strong) NSString *userId;
@property(nonatomic, strong) NSString *idfa;
@property(nonatomic, assign) BOOL autoDrive;
/***
 * 上传crash日志，默认 NO
 */
@property(nonatomic, assign) BOOL uploadCrashLog;
/**
 * crash日志id，默认userId
 */
@property(nonatomic, strong) NSString *crashLogId;

@end