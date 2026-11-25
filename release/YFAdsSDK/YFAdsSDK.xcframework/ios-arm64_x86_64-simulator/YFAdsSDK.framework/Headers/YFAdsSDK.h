//
//  YFAdsSDK.h>
//  YFAdsSDK
//
//  Created by 麻明康 on 2024/11/26.
//

#import <Foundation/Foundation.h>

//! Project version number for YFAdsSDK.
FOUNDATION_EXPORT double YFAdsSDKVersionNumber;

//! Project version string for YFAdsSDK.
FOUNDATION_EXPORT const unsigned char YFAdsSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <YFAdsSDK/PublicHeader.h>
#import <YFAdsSDK/ADXNativeAd.h>
#import <YFAdsSDK/ADXNativeAdsManager.h>
#import <YFAdsSDK/ADXNativeMediaView.h>
#import <YFAdsSDK/NSArray+Addition.h>
#import <YFAdsSDK/NSString+YFUrlEncode.h>
#import <YFAdsSDK/UIButton+YFEdge.h>
#import <YFAdsSDK/UIImage+YFImageEffects.h>
#import <YFAdsSDK/UITapGestureRecognizer+YFBlock.h>
#import <YFAdsSDK/UIView+ViewVisiable.h>
#import <YFAdsSDK/UIView+YFAutoLayout.h>
#import <YFAdsSDK/YFAd.h>
#import <YFAdsSDK/YFAdBannerDelegate.h>
#import <YFAdsSDK/YFAdBannerView600x100.h>
#import <YFAdsSDK/YFAdBaseBannerView.h>
#import <YFAdsSDK/YFAdBaseVideoBannerView.h>
#import <YFAdsSDK/YFAdBannerView600x150.h>
#import <YFAdsSDK/YFAdBannerViewN600x260.h>
#import <YFAdsSDK/YFAdBannerViewN600x260R.h>
#import <YFAdsSDK/YFAdBannerViewR600x150.h>
#import <YFAdsSDK/YFAdBannerViewR640x100.h>
#import <YFAdsSDK/YFAdBaseAdPosition.h>
#import <YFAdsSDK/YFAdBaseAdapter.h>
#import <YFAdsSDK/YFAdBaseCustomView.h>
#import <YFAdsSDK/YFAdBaseDelegate.h>
#import <YFAdsSDK/YFAdBaseView.h>
#import <YFAdsSDK/YFAdCommonDelegate.h>
#import <YFAdsSDK/YFAdDetailViewController.h>
#import <YFAdsSDK/YFAdEmptyAdapter.h>
#import <YFAdsSDK/YFAdFeedbackView.h>
#import <YFAdsSDK/YFAdFusionBanner.h>
#import <YFAdsSDK/YFAdFusionBannerDelegate.h>
#import <YFAdsSDK/YFAdFusionBannerView.h>
#import <YFAdsSDK/YFAdImage.h>
#import <YFAdsSDK/YFAdInteractionType.h>
#import <YFAdsSDK/YFAdInterstitial.h>
#import <YFAdsSDK/YFAdInterstitialDelegate.h>
#import <YFAdsSDK/YFAdInterstitialViewProtocol.h>
#import <YFAdsSDK/YFAdMarkImageView.h>
#import <YFAdsSDK/YFAdMedia.h>
#import <YFAdsSDK/YFAdMediaDelegate.h>
#import <YFAdsSDK/YFAdMediaMetal.h>

#import <YFAdsSDK/YFAdModel.h>
//#import <YFAdsSDK/NSObject+YFAdModel.h>
//#import <YFAdsSDK/YFAdClassInfo.h>

#import <YFAdsSDK/YFAdNative.h>
#import <YFAdsSDK/YFAdReportModel.h>
#import <YFAdsSDK/YFAdResponseModel.h>
#import <YFAdsSDK/YFAdRewardVideo.h>
#import <YFAdsSDK/YFAdRewardVideoDelegate.h>
#import <YFAdsSDK/YFAdSDKManager.h>
#import <YFAdsSDK/YFAdSDKSetting.h>
#import <YFAdsSDK/YFAdSplash.h>
#import <YFAdsSDK/YFAdSplashAdExtraDataModel.h>
#import <YFAdsSDK/YFAdSupplierDelegate.h>
#import <YFAdsSDK/YFAdSupplierManager.h>
#import <YFAdsSDK/YFAdUtils.h>
#import <YFAdsSDK/YFAdView.h>
#import <YFAdsSDK/YFAdXBannerView.h>
#import <YFAdsSDK/YFAdXBannerView600x410.h>
#import <YFAdsSDK/YFAdXBannerViewB600x400.h>
#import <YFAdsSDK/YFAdBannerViewTextOverlay.h>
#import <YFAdsSDK/YFAdsAnimationView.h>
#import <YFAdsSDK/YFAdsCloseButton.h>
#import <YFAdsSDK/YFAdsCountButton.h>
#import <YFAdsSDK/YFAdsDetailButton.h>

#import <YFAdsSDK/YFAppENVInfo.h>
#import <YFAdsSDK/YFBannerView.h>



#import <YFAdsSDK/YFFusionBannerAdapter.h>

#import <YFAdsSDK/YFGlobalMotionActionHandler.h>
#import <YFAdsSDK/YFGlobalMotionManager.h>
#import <YFAdsSDK/YFGlobalMotionModel.h>
#import <YFAdsSDK/YFGlobalTwistManager.h>

#import <YFAdsSDK/YFInterstitialAd.h>
#import <YFAdsSDK/YFInterstitialAdapter.h>
#import <YFAdsSDK/YFInvoker.h>

#import <YFAdsSDK/YFKit.h>
#import <YFAdsSDK/YFKitImpressionTimer.h>

#import <YFAdsSDK/YFManager.h>
#import <YFAdsSDK/YFMaterialMeta.h>
#import <YFAdsSDK/YFMotionManager.h>
#import <YFAdsSDK/YFRequestModel.h>
#import <YFAdsSDK/YFRewardVideoAdapter.h>
#import <YFAdsSDK/YFRewardedVideoAd.h>
#import <YFAdsSDK/YFRouter.h>
#import <YFAdsSDK/YFSerialQueue.h>
#import <YFAdsSDK/YFSplashAdapter.h>
#import <YFAdsSDK/YFSplashButton.h>
#import <YFAdsSDK/YFSplashEnum.h>

#import <YFAdsSDK/YFTouchReportView.h>
#import <YFAdsSDK/YFVideoAd.h>
#import <YFAdsSDK/YFVideoAdViewController.h>
#import <YFAdsSDK/YFWeakProxy.h>
#import <YFAdsSDK/YFAdBaseViewController.h>
#import <YFAdsSDK/YFEnvelopeIntertitialAdViewController.h>
#import <YFAdsSDK/YFAdEnvelopeIntertitialAdViewController.h>
#import <YFAdsSDK/YFAdsIntertitialAdDelayTimer.h>
#import <YFAdsSDK/YFAdMediaProtocol.h>
#import <YFAdsSDK/YFVideoView.h>

#import <YFAdsSDK/YFPrivateKit.h>

/// >= 6.0.4.1 +++
#import <YFAdsSDK/NSString+Size.h>

/// >= 6.0.5.0 +++
#import <YFAdsSDK/YFSourceDataTool.h>
#import <YFAdsSDK/YFDeviceInfo.h>
#import <YFAdsSDK/YFAdInterstitialViewProtocol.h>
#import <YFAdsSDK/YFAdDBManager.h>
#import <YFAdsSDK/YFAdTopPush.h>
#import <YFAdsSDK/YFAdTopPushView.h>
#import <YFAdsSDK/YFAdTopPushProtocol.h>
#import <YFAdsSDK/YFAdTopPushAdInfoProtocol.h>
#import <YFAdsSDK/YFAdTopPushViewController.h>

#import <YFAdsSDK/YFInterstitialCarouselViewController.h>
#import <YFAdsSDK/YFInterstitialCarouselNavigationController.h>
#import <YFAdsSDK/YFAdBaseAdapter+interstitial.h>
#import <YFAdsSDK/YFBaseAdProtocol.h>
#import <YFAdsSDK/YFAdReportWorker.h>

// 关联顶推
#import <YFAdsSDK/YFIntertitialWithTopPushManager.h>
// 激励服务端验证
#import <YFAdsSDK/YFRewardedVideoModel.h>
#import <YFAdsSDK/YFAdRSAEncrypt.h>

#import <YFAdsSDK/YFAdsSplashWindow.h>
#import <YFAdsSDK/YFAdAuthModel.h>
#import <YFAdsSDK/YFAdCouponModel.h>
#import <YFAdsSDK/YFAdCouponMinView.h>
#import <YFAdsSDK/YFAdCouponNormalView.h>

//#import <YFAdsSDK/YFGradientView.h>
//#import <YFAdsSDK/NSObject+YFAdModel.h>
//#import <YFAdsSDK/UIApplication+YFAds.h>
//#import <YFAdsSDK/YFAdConst.h>
//#import <YFAdsSDK/YFAdError.h>
//#import <YFAdsSDK/YFAdLogManager.h>
//#import <YFAdsSDK/YFAdxDataManager.h>


///// log
//#import <YFAdsSDK/YFLog.h>
//
//// Main macros
//#import <YFAdsSDK/YFLogMacros.h>
//#import <YFAdsSDK/YFAssertMacros.h>
//
//// Capture ASL
//#import <YFAdsSDK/YFASLLogCapture.h>
//
//// Loggers
//#import <YFAdsSDK/YFLoggerNames.h>
//
//#import <YFAdsSDK/YFASLLogger.h>
//#import <YFAdsSDK/YFFileLogger.h>
//#import <YFAdsSDK/YFOSLogger.h>
//
//// Extensions
//#import <YFAdsSDK/YFContextFilterLogFormatter.h>
//#import <YFAdsSDK/YFContextFilterLogFormatter+Deprecated.h>
//#import <YFAdsSDK/YFDispatchQueueLogFormatter.h>
//#import <YFAdsSDK/YFMultiFormatter.h>
//#import <YFAdsSDK/YFFileLogger+Buffering.h>
////#import <YFAdsSDK/YFFileLogger+Internal.h>
//// etc
//#import <YFAdsSDK/YFAbstractDatabaseLogger.h>
//#import <YFAdsSDK/YFLog+LOGV.h>
//#import <YFAdsSDK/YFLegacyMacros.h>

// Image loading and logging are compiled into YFAdsSDK.
#import <YFAdsSDK/YFLegacyMacros.h>
#import <YFAdsSDK/YFMultiFormatter.h>
#import <YFAdsSDK/YFLog+LOGV.h>
#import <YFAdsSDK/YFAbstractDatabaseLogger.h>
#import <YFAdsSDK/YFFileLogger+Buffering.h>
#import <YFAdsSDK/YFDispatchQueueLogFormatter.h>
#import <YFAdsSDK/YFContextFilterLogFormatter.h>
#import <YFAdsSDK/YFContextFilterLogFormatter+Deprecated.h>
#import <YFAdsSDK/YFOSLogger.h>
#import <YFAdsSDK/YFFileLogger.h>
#import <YFAdsSDK/YFASLLogger.h>
#import <YFAdsSDK/YFLoggerNames.h>
#import <YFAdsSDK/YFASLLogCapture.h>
#import <YFAdsSDK/YFAssertMacros.h>
#import <YFAdsSDK/YFLogMacros.h>
#import <YFAdsSDK/YFLog.h>
#import <YFAdsSDK/YFCocoaLumberjack.h>
#import <YFAdsSDK/YFImageLoader.h>
