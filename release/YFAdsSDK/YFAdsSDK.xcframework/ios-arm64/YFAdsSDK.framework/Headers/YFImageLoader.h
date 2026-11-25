#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, YFImageCacheType) {
    YFImageCacheTypeNone, YFImageCacheTypeDisk, YFImageCacheTypeMemory
};
typedef void (^YFImageCompletion)(UIImage * _Nullable image, NSError * _Nullable error, YFImageCacheType cacheType, NSURL * _Nullable URL);

/// Cancels this subscriber; a shared download continues while other subscribers remain.
@interface YFImageRequest : NSObject
- (void)cancel;
@end

@interface YFImageLoader : NSObject
+ (instancetype)sharedLoader;
/// Memory + disk cache for creatives. Completion is asynchronous on the main queue.
/// Formats follow system ImageIO capabilities, including WebP where available (first frame only).
/// At most 6 downloads per loader; responses exceeding 20 MiB are cancelled during receipt.
- (YFImageRequest *)loadImageAtURL:(nullable NSURL *)URL completion:(nullable YFImageCompletion)completion;
/// SDK-owned artwork persists under Application Support, including across process launches.
/// A nil name selects the ordinary creative cache (7 days / 64 MiB).
- (YFImageRequest *)loadImageAtURL:(nullable NSURL *)URL persistentCacheName:(nullable NSString *)cacheName completion:(nullable YFImageCompletion)completion;
- (void)clearMemory;
/// Clears creative caches only; in-flight requests cannot repopulate the cleared cache.
- (void)clearCacheWithCompletion:(nullable dispatch_block_t)completion;
/// Clears one SDK-owned artwork namespace without touching other SDK data.
- (void)clearPersistentCacheNamed:(NSString *)cacheName completion:(nullable dispatch_block_t)completion;
@end

/// Call from the main thread, like other UIKit operations. Reuse cancels the prior request.
@interface UIImageView (YFImageLoading)
- (void)yf_loadImageWithURL:(nullable NSURL *)URL;
- (void)yf_loadImageWithURL:(nullable NSURL *)URL completed:(nullable YFImageCompletion)completion;
- (void)yf_loadImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable UIImage *)placeholder;
- (void)yf_loadImageWithURL:(nullable NSURL *)URL placeholderImage:(nullable UIImage *)placeholder completed:(nullable YFImageCompletion)completion;
- (void)yf_cancelImageLoad;
@end
NS_ASSUME_NONNULL_END
