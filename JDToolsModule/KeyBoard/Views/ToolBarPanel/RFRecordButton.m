//
//  RFRecordButton.m
//  FaceKeyboard

//  Company：     SunEee
//  Blog:        devcai.com
//  Communicate: 2581502433@qq.com

//  Created by ruofei on 16/3/29.
//  Copyright © 2016年 ruofei. All rights reserved.
//

#import "RFRecordButton.h"
#import "UIView+JDShade.h"
#import "JDToolsModuleHeader.h"

#define kGetColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]

@implementation RFRecordButton

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.hidden = YES;
//        self.backgroundColor = kGetColor(247, 247, 247);

        [self setTitle:@"按住  说话" forState:UIControlStateNormal];
        [self.titleLabel setFont:[UIFont systemFontOfSize:15]];
        [self setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
//        [self setBackgroundImage:[UIImage resizableImageWithImageName:@"img_talk_btn_bg"] forState:UIControlStateNormal];
        self.layer.cornerRadius = 17.0f;
//        self.layer.borderWidth = 0.5;
//        self.layer.borderColor = HEXCOLOR(0x21b2e5).CGColor;
        self.layer.masksToBounds = true;
        
        [self addTarget:self action:@selector(recordTouchDown) forControlEvents:UIControlEventTouchDown];
        [self addTarget:self action:@selector(recordTouchUpOutside) forControlEvents:UIControlEventTouchUpOutside];
        [self addTarget:self action:@selector(recordTouchUpInside) forControlEvents:UIControlEventTouchUpInside];
        [self addTarget:self action:@selector(recordTouchDragEnter) forControlEvents:UIControlEventTouchDragEnter];
        [self addTarget:self action:@selector(recordTouchDragInside) forControlEvents:UIControlEventTouchDragInside];
        [self addTarget:self action:@selector(recordTouchDragOutside) forControlEvents:UIControlEventTouchDragOutside];
        [self addTarget:self action:@selector(recordTouchDragExit) forControlEvents:UIControlEventTouchDragExit];
    }
    return self;
}

- (void)setButtonStateWithRecording
{
//    [self setBackgroundImage:[UIImage imageWithColor:THEXCOLOR(0xbe3f8b)] forState:UIControlStateNormal];
    [self setTitle:@"松开  结束" forState:UIControlStateNormal];
}
- (void)setButtonStateWithNormal
{
//    [self setBackgroundImage:[UIImage resizableImageWithImageName:@"img_talk_btn_bg"] forState:UIControlStateNormal];
    [self setTitle:@"按住  说话" forState:UIControlStateNormal];
}


#pragma mark -- 事件方法回调
- (void)recordTouchDown
{
    if (self.recordTouchDownAction) {
        self.recordTouchDownAction(self);
    }
}

- (void)recordTouchUpOutside
{
    if (self.recordTouchUpOutsideAction) {
        self.recordTouchUpOutsideAction(self);
    }
}

- (void)recordTouchUpInside
{
    if (self.recordTouchUpInsideAction) {
        self.recordTouchUpInsideAction(self);
    }
}

- (void)recordTouchDragEnter
{
    if (self.recordTouchDragEnterAction) {
        self.recordTouchDragEnterAction(self);
    }
}

- (void)recordTouchDragInside
{
    if (self.recordTouchDragInsideAction) {
        self.recordTouchDragInsideAction(self);
    }
}

- (void)recordTouchDragOutside
{
    if (self.recordTouchDragOutsideAction) {
        self.recordTouchDragOutsideAction(self);
    }
}

- (void)recordTouchDragExit
{
    if (self.recordTouchDragExitAction) {
        self.recordTouchDragExitAction(self);
    }
}


//解决按钮放在屏幕底部，touchdown事件延迟响应的问题

/**
    iOS7之后提供了做滑手势导致的这个问题
    self.navigationController.interactivePopGestureRecognizer.delaysTouchesBegan = NO; 即可
 */
//- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent *)event
//{
//    BOOL inside = [super pointInside: point withEvent: event];
//    
//    if (inside && !self.highlighted)
//    {
//        self.highlighted = YES;
//        [self sendActionsForControlEvents:UIControlEventTouchDown];
//    }
//    
//    return inside;
//}

@end
