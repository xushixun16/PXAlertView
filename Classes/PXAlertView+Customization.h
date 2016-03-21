//
//  PXAlertView+Customization.h
//  PXAlertViewDemo
//
//  Created by Michal Zygar on 21.10.2013.
//  Copyright (c) 2013 panaxiom. All rights reserved.
//

#import "PXAlertView.h"

@interface PXAlertView (Customization)

- (void)setWindowTintColor:(UIColor *)color;
- (void)setBackgroundColor:(UIColor *)color;

- (void)setTitleColor:(UIColor *)color;
- (void)setTitleFont:(UIFont *)font;

- (void)setMessageColor:(UIColor *)color;
- (void)setMessageFont:(UIFont *)font;
- (void)setMessageAlignment:(NSTextAlignment)alignment;

- (void)setCancelButtonBackgroundColor:(UIColor *)color;
- (void)setOtherButtonBackgroundColor:(UIColor *)color;

- (void)setCancelButtonFont:(UIFont *)font;
- (void)setOtherButtonFont:(UIFont *)font;

- (void)setCancelButtonBackgroundColor:(UIColor *)color titleColor:(UIColor *)titleColor;
- (void)setOtherButtonBackgroundColor:(UIColor *)color titleColor:(UIColor *)titleColor;

- (void)setFrame:(CGRect)rect;

- (UIView *)alertView;
@end