/**
 * Module:   PushMoreSettingViewController
 *
 * Function: 推流相关的更多设置项
 */

#import <UIKit/UIKit.h>

@class PushMoreSettingViewController;

@protocol PushMoreSettingDelegate <NSObject>

// 是否开启静音模式（发送静音数据，但是不关闭麦克风）
- (void)onPushMoreSetting:(PushMoreSettingViewController *)vc muteAudio:(BOOL)mute;

// 是否开启观看端镜像
- (void)onPushMoreSetting:(PushMoreSettingViewController *)vc mirrorVideo:(BOOL)mirror;

// 是否开启后置闪光灯
- (void)onPushMoreSetting:(PushMoreSettingViewController *)vc openTorch:(BOOL)open;

// 是否开启调试信息
- (void)onPushMoreSetting:(PushMoreSettingViewController *)vc debugLog:(BOOL)show;

// 是否添加图像水印
- (void)onPushMoreSetting:(PushMoreSettingViewController *)vc waterMark:(BOOL)enable;

// 是否开启手动点击曝光对焦
- (void)onPushMoreSetting:(PushMoreSettingViewController *)vc touchFocus:(BOOL)enable;

// 本地截图
- (void)onPushMoreSettingSnapShot:(PushMoreSettingViewController *)vc;

@end

@interface PushMoreSettingViewController : UITableViewController
@property (nonatomic, weak) id<PushMoreSettingDelegate> delegate;

/*** 从文件中读取配置 ***/
+ (BOOL)isMuteAudio;
+ (BOOL)isMirrorVideo;
+ (BOOL)isOpenTorch;
+ (BOOL)isShowDebugLog;
+ (BOOL)isEnableDelayCheck;
+ (BOOL)isEnableWaterMark;
+ (BOOL)isEnableTouchFocus;

@end
