Pod::Spec.new do |s|
  s.name = 'YFLTAdsSDK'
  s.version = '6.1.5.0'
  s.summary = '亿帆轻量级 iOS 广告 SDK（XCFramework 二进制接入）'
  s.description = <<-DESC
    通过原版 YFAdsSDK.xcframework 提供开屏、插屏、顶推、融合 Banner 与激励视频广告。
    CocoaPods 安装名称为 YFLTAdsSDK，Framework、模块和公开 API 名称保持 YFAdsSDK。
  DESC
  s.homepage = 'https://github.com/com-yifan/ios-yf-sdk-lite'
  s.author = { 'yifan' => '576661787@qq.com' }
  s.license = { :type => 'GPL-2.0', :file => 'LICENSE' }

  # 每个版本 tag 仅发布预编译 XCFramework 与必要的接入文件。
  s.source = {
    :git => 'https://github.com/com-yifan/ios-yf-sdk-lite.git',
    :tag => s.version.to_s
  }

  s.ios.deployment_target = '11.0'
  s.static_framework = true
  s.module_name = 'YFAdsSDK'
  s.vendored_frameworks = 'release/YFAdsSDK/YFAdsSDK.xcframework'

  s.frameworks = %w[
    Foundation UIKit AdSupport AVFoundation AVKit AudioToolbox
    CoreGraphics CoreImage CoreMedia CoreLocation CoreMotion CoreTelephony
    QuartzCore Security StoreKit SystemConfiguration WebKit Accelerate
    MediaPlayer MobileCoreServices CoreData SafariServices QuickLook MessageUI
  ]
  s.weak_frameworks = 'AppTrackingTransparency'
  s.libraries = 'sqlite3', 'z', 'c++', 'resolv'

  # CocoaPods 识别静态 XCFramework 后，会自动为接入 target 加上 -ObjC。
end
