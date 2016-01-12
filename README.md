OKDriveSDK_IOS
===
- 自动检测行程

## <a id="Installation"></a> Installation【安装】

#### From CocoaPods【使用CocoaPods】

```objc
platform :ios, '8.0'
pod 'OKDriveSDK_IOS', :git =>'https://github.com/orangins/OKDriveSDK_IOS.git'
```

# <a id="Examples"></a> Examples【示例】
```objc
#import "OKDriveConfig.h"
#import "OKDriveSDK.h"

OKDriveConfig *config = [[OKDriveConfig alloc] init];
config.appKey = @"appkey";
config.userId = @"userid";
config.autoDrive = YES;
OKDriveSDK *driveSDK = [OKDriveSDK instance];
[driveSDK setup:config callBack:^(BOOL success, OKSetUpResult *res) {


}];


/*************手动开始行程************/
config.autoDrive = NO;
[driveSDK setup:config callBack:^(BOOL success, OKSetUpResult *res) {

    if (success) {
        [driveSDK startDriving];
    }

}];
/************手动结束行程************/
[driveSDK endDriving];

//内存回收
[driveSDK destory];
```
# <a id="Examples"></a>【注意事项】
- TARGETS-->Capabilities-->Backgroound Modes-->Location updates
- 集成SDK后会在后台运行并跟踪您的驾驶行为，可能会显著增加电量消耗，因此我们建议您在夜间或非开车时间对手机充电
- App审核信息-->备注，需要说明为什么需要定位服务

# <a id="Examples"></a>【联系方式】
- 有问题请致信：okdrive@okchexian.com
