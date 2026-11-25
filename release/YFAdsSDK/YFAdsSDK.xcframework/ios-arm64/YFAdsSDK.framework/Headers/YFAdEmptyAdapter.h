//  Created by ldm on 2023/05/04.
//  Copyright © 2023 FC. All rights reserved.
//

#import <YFAdsSDK/YFAdBaseAdPosition.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN
@protocol FCAdEmptyAdapterDelegate <NSObject>

@optional

@end

@interface YFAdEmptyAdapter : YFAdBaseAdPosition

@property (nonatomic, weak) id<FCAdEmptyAdapterDelegate> delegate;
- (instancetype)initWithSupplier:(nullable YFAdEventModel *)supplier adspot:(id)adspot error:(NSError *)error;
- (instancetype)initWithSupplier:(YFAdEventModel *)supplier adspot:(id)adspot videoFrame:(CGRect)videoFrame;
@end

NS_ASSUME_NONNULL_END
