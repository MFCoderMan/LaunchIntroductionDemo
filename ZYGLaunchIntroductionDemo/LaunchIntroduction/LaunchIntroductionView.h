//
//  LaunchIntroductionView.h
//  ZYGLaunchIntroductionDemo
//
//  Created by ZhangYunguang on 16/4/7.
//  Copyright © 2016年 ZhangYunguang. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kScreen_height  [[UIScreen mainScreen] bounds].size.height
#define kScreen_width   [[UIScreen mainScreen] bounds].size.width

@interface LaunchIntroductionView : UIView
/**
 *  选中page的指示器颜色，默认白色
 */
@property (nonatomic, strong) UIColor *currentColor;
/**
 *  其他状态下的指示器的颜色，默认
 */
@property (nonatomic, strong) UIColor *nomalColor;
/**
 *  不带按钮的引导页，滑动到最后一页，再向右滑直接隐藏引导页
 *
 *  @param imageNames 背景图片数组
 *
 *  @return   LaunchIntroductionView对象
 */
+(instancetype)sharedWithImages:(NSArray *) imageNames;
/**
 *  带按钮的引导页
 *
 *  @param imageNames      背景图片数组
 *  @param buttonImageName 按钮的图片
 *  @param frame           按钮的frame
 *
 *  @return LaunchIntroductionView对象
 */
+(instancetype)sharedWithImages:(NSArray *) imageNames buttonImage:(NSString *) buttonImageName buttonFrame:(CGRect ) frame;

/**
 用storyboard创建的project调用此方法

 @param storyboardName storyboardName
 @param imageNames 图片名字数组
 @return LaunchIntroductionView对象
 */
+ (instancetype)sharedWithStoryboardName:(NSString *)storyboardName images:(NSArray *)imageNames;

/**
 用storyboard创建的project调用此方法

 @param storyboardName storyboardName
 @param imageNames 图片名字数组
 @param buttonImageName 按钮图片名字
 @param frame 按钮的frame
 @return LaunchIntroductionView对象
 */
+(instancetype)sharedWithStoryboard:(NSString *)storyboardName images:(NSArray *) imageNames buttonImage:(NSString *) buttonImageName buttonFrame:(CGRect ) frame;


@end
