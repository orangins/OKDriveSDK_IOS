OKDriveSDK_IOS
===
- 自动检测行程

## <a id="Installation"></a> Installation【安装】

#### From CocoaPods【使用CocoaPods】

```ruby
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
[[OKDriveSDK instance] setup:config callBack:^(BOOL success, NSError *error) {
    
    
}];
```
# <a id="Examples"></a>【注意事项】
- TARGETS-->Capabilities-->Backgroound Modes-->Location updates
