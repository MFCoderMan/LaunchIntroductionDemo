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

@property (nonatomic, strong) UIColor *currentColor;
@property (nonatomic, strong) UIColor *nomalColor;
+(instancetype)sharedWithImages:(NSArray *) imageNames;
+(instancetype)sharedWithImages:(NSArray *) imageNames buttonImage:(NSString *) buttonImageName buttonFrame:(CGRect ) frame;

@end
