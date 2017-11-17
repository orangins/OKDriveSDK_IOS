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
@property(nonatomic, copy) NSString *timezone;
@property(nonatomic, copy) NSString *tripType;
@property(nonatomic, copy) NSString *startTime;
@property(nonatomic, copy) NSString *endTime;
@property(nonatomic, assign) NSInteger autoStart;
//最大空闲时间 -1
@property(nonatomic, assign) NSInteger maxIdleTimeSeconds;
//motion 频率
@property(nonatomic, assign) NSInteger accelerometerFrequency;
//平均速度
@property(nonatomic, assign) double averageSpeed;
//距离
@property(nonatomic, assign) double distance;
//最小速度 0
@property(nonatomic, assign) double minDriveSpeedMPS;
//行程ID  @""
@property(nonatomic, copy) NSString *trackingId;
//系统版本
@property(nonatomic, copy) NSString *deviceVersion;
//@""
@property(nonatomic, copy) NSString *sessionId;
//设备模型  @"DEVICE"
@property(nonatomic, copy) NSString *deviceMode;
//设备类型 @"ipone"
@property(nonatomic, copy) NSString *deviceType;
//版本号 0.0.1
@property(nonatomic, copy) NSString *buildNumber;

@property(nonatomic, assign) NSInteger tripEnd;


@end




