# YFLTAdsSDK

亿帆轻量级 iOS 广告 SDK 的公开二进制发布仓库。仅包含 Podspec、预编译 XCFramework、公开接口头文件及许可证，不包含 SDK 实现源码或开发工程。

## CocoaPods 接入

```ruby
pod 'YFLTAdsSDK', '6.1.5.0'
```

Pod 名称为 `YFLTAdsSDK`，二进制与模块名称保持 `YFAdsSDK`，代码仍使用：

```objc
#import <YFAdsSDK/YFAdsSDK.h>
```

```swift
import YFAdsSDK
```

支持 iOS 11 及以上，包含 iOS arm64 与模拟器 arm64 / x86_64 静态切片。CocoaPods 自动处理系统库和 `-ObjC` 链接，无需额外资源 Bundle 或 SDK Pod 依赖。请勿同时手动链接相同 Framework 或安装旧的 `YFAdsSDK` Pod。

XCFramework 位于 `release/YFAdsSDK/YFAdsSDK.xcframework`。发布副本已移除内部 `PrivateHeaders`，SDK 二进制保持不变。

许可证见 [LICENSE](LICENSE)。

## 2026-11-25 构建更新

`6.1.5.0` 已按当前源码重新归档，包含 11 月开屏与插屏关闭遮罩等修复。SDK 二进制及 `6.1.5.0` tag 已替换为最新构建，名称和版本号保持不变。

已有该版本缓存的项目需要重新下载，清理 `YFLTAdsSDK` 缓存并重新安装依赖后再构建。新项目按上面的 Podfile 正常安装即可。

```sh
pod cache clean YFLTAdsSDK --all
```

若项目的 `Pods` 中已有旧包，还需移除已安装的旧 SDK 后重新运行 `pod install --repo-update`。
