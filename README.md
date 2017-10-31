OKDriveSDK_iOS
===

## 【安装】

#### 【使用CocoaPods】

```objc
platform :ios, '8.0'
pod 'OKDriveSDK_IOS', :git =>'https://github.com/orangins/OKDriveSDK_IOS.git'
```

## 【示例】
#### 自动检测行程
```objc
#import "OKDriveConfig.h"
#import "OKDriveSDK.h"
#import "OKSetUpResult.h"

OKDriveConfig *config = [[OKDriveConfig alloc] init];
config.appKey = @"appkey";
config.userId = @"userid";
config.autoDrive = YES;
OKDriveSDK *driveSDK = [OKDriveSDK instance];
[driveSDK setup:config callBack:^(BOOL success, OKSetUpResult *result) {
	if(success){
		/*success code here*/
	}
	else{
		/*failed code here*/
	}
}];
```
#### 行程状态
```objc

 driveSDK.tripStartHandler = ^() {

        NSLog(@"tripStartHandler   行程开始");
 
 };

 driveSDK.tripEndHandler = ^() {

        NSLog(@"tripEndHandler   行程结束");
 
 };
```

#### 手动控制行程
```objc
#import "OKDriveConfig.h"
#import "OKDriveSDK.h"
#import "OKSetUpResult.h"

OKDriveConfig *config = [[OKDriveConfig alloc] init];
config.appKey = @"appkey";
config.userId = @"userid";
config.autoDrive = NO; //这里需要设置为NO
[driveSDK setup:config callBack:^(BOOL success, OKSetUpResult *result) {
	if(success){
		/*success code here*/
	}
	else{
		/*failed code here*/
	}
}];

/*************手动开始行程************/
[driveSDK startDriving];
    
/************手动结束行程************/
[driveSDK endDriving];
```
#### 彻底关闭OKDrive
```
//内存回收
[driveSDK destory];
```
## 【注意事项】
- TARGETS-->Capabilities-->Backgroound Modes-->Location updates
- App描述中需要加入关于电池的说明，例如“我们使用手机定位技术在后台运行并跟踪您的驾驶行为，可能会显著增加电量消耗，因此我们建议您在夜间或非开车时间对手机充电”
- App审核信息-->备注，需要说明为什么需要定位服务

## 【联系方式】
- 有问题请致信：okdrive#okchexian.com（请讲#替换成@）
