//
//  YFTapBarAnimationView.h
//  YFAdsSDK
//
//  Created by feng on 2023/10/27.
//

#import <UIKit/UIKit.h>
#import <YFAdsSDK/YFAdBaseView.h>
#import <YFAdsSDK/YFSplashEnum.h>
#import <YFAdsSDK/YFMotionManager.h>

NS_ASSUME_NONNULL_BEGIN

@interface YFAdsAnimationView : YFAdBaseView

@property(nonatomic, strong, nullable) YFMotionManager *motionManager;
@property(nonatomic, strong, nullable) UILabel *guideIconView;
@property(nonatomic, strong, nullable) UILabel *guideBarView;
@property(nonatomic, strong) UILabel *word;
@property(nonatomic, strong) UILabel *subword;

@property(nonatomic, copy) void (^toTapBarAnimatioShakeOrTwist)(YFMotionSensitivity motionSensitivity, YFMotionStyle motionStyle, YFMotionJump motionJump ,CMAccelerometerData *_Nullable accelerometerData, CMDeviceMotion *_Nullable motion);

- (instancetype)initWithFrame:(CGRect)frame model:(id)model;
- (instancetype)initOtherplatformModel:(id)model;
- (instancetype)initGdtplatformModel:(id)model;
- (void)toStartMotion;
- (void)toPauseMotion;
- (void)toStopMotion;
- (void)reloadUI:(id)model;
- (void)reLayout;

@end
NS_ASSUME_NONNULL_END
