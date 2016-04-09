//
//  MBProgressHUD+MBProgressHUD.h
//  MBProgressHUDDemoPerson
//
//  Created by ylgwhyh on 16/3/11.
//  Copyright © 2016年 com.hyh. All rights reserved.
//  参考：https://github.com/pupboss/MBProgressHUD-LJ
//  本类别源地址：https://github.com/mrhyh/iOS-Person-Collection

#import "MBProgressHUD.h"

@interface MBProgressHUD (YL)

#pragma mark 当 MBProgressHUD 更新的时候，只需要将本程序中另外的的两个文件替换即可。

+ (void)showSuccess:(NSString *)success toView:(UIView *)view;
+ (void)showError:(NSString *)error toView:(UIView *)view;

/******************显示一会儿后自动隐藏的*******************/
/**
 * 显示到windows,只显示文字
 */
+ (MBProgressHUD *)showMessage:(NSString *)message;

/**
 *  显示到windows,显示文字和图片
 *  @param 图片名必须为png格式
 */
+ (void)showMessage:(NSString *)message imageName:(NSString *)imageName;
+ (void)showMessage:(NSString *)message imageName:(NSString *)imageName toView:(UIView *)view;

/******************显示后需要手动关闭*******************/
+ (MBProgressHUD *)showMessage:(NSString *)message toView:(UIView *)view;


/**
 *  隐藏加载到windows上的HUD
 */
+ (void)hideHUD;
/**
 *  隐藏加载到view上的HUD
 *  @param view
 */
+ (void)hideHUDForView:(UIView *)view;

@end
