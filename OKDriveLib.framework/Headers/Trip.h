//
// Created by 123456 on 15/11/6.
// Copyright (c) 2015 ___FULLUSERNAME___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Trip : NSObject
@property(nonatomic, assign) int64_t id;

@property(nonatomic, copy) NSString *driverId;
@property(nonatomic, assign) int64_t timestamp;
@property(nonatomic, assign) int64_t timestampEnd;
@property(nonatomic, assign) double driveTime;
@property(nonatomic, copy) NSString *startTime;
@property(nonatomic, copy) NSString *endTime;
@property(nonatomic, assign) NSInteger autoStart;
//平均速度
@property(nonatomic, assign) double averageSpeed;
//距离
@property(nonatomic, assign) double distance;
//系统版本
@property(nonatomic, copy) NSString *deviceVersion;
//设备模型  @"DEVICE"
@property(nonatomic, copy) NSString *deviceMode;
//设备类型 @"ipone"
@property(nonatomic, copy) NSString *deviceType;
//版本号 0.0.1
@property(nonatomic, copy) NSString *buildNumber;

@property(nonatomic, assign) NSInteger tripEnd;

@property(nonatomic, copy) NSString *applicationId;
@property(nonatomic, copy) NSString *tripType;
@property(nonatomic, copy) NSString *timezone;
//屏幕分辨率
@property(nonatomic, copy) NSString *features;
//trip数据格式版本
@property(nonatomic, copy) NSString *tripVersion;

@property(nonatomic, assign) NSInteger isUpload;

@end




