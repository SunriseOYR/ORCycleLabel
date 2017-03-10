//
//  ORCycleLabel.h
//  NewProduct
//
//  Created by 欧阳荣 on 2017/3/10.
//  Copyright © 2017年 欧阳荣. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    ORTextCycleStyleDefault, //如果文字长度小于label长度，则不滚动
    ORTextCycleStyleAlways, //无论文字长短，一直滚动
} ORTextCycleStyle;

@interface ORCycleLabel : UIView

@property (nonatomic, assign) ORTextCycleStyle style; //默认ORTextCycleStyleDefault
@property (nonatomic, assign) CGFloat interval; //间隔 默认 70
@property (nonatomic, assign) CGFloat rate;//速率 0~1 默认 0.5

@property (nonatomic, copy) NSString *text;
@property (nonatomic, strong) UIFont *font;
@property (nonatomic, strong) UIColor *textColor;
@property (nonatomic, assign) NSTextAlignment textAlignment;


- (void)start;
- (void)pause;
- (void)stop;

@end
