//
//  FaceModel.h
//  FaceKeyboard

//  Company：     SunEee
//  Blog:        devcai.com
//  Communicate: 2581502433@qq.com

//  Created by ruofei on 16/3/30.
//  Copyright © 2016年 ruofei. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, FaceThemeStyle)
{
    FaceThemeStyleSystemEmoji,       //30*30
    FaceThemeStyleCustomEmoji,       //40*40
    FaceThemeStyleGif                //60*60
};

@interface FaceModel : NSObject

///** 表情标题 */
@property (nonatomic, copy) NSString *faceTitle;
///** 表情图片 */
@property (nonatomic, copy) NSString *faceIcon;



@end


@class WBEmoticonGroup;

@interface WBEmoticon : NSObject
@property (nonatomic, strong) NSString *chs;  ///< 例如 [吃惊]
@property (nonatomic, strong) NSString *cht;  ///< 例如 [吃驚]
@property (nonatomic, strong) NSString *gif;  ///< 例如 d_chijing.gif
@property (nonatomic, strong) NSString *png;  ///< 例如 d_chijing.png
@property (nonatomic, strong) NSString *code; ///< 例如 0x1f60d
@property (nonatomic, weak) WBEmoticonGroup *group;

@end
@interface WBEmoticonGroup : NSObject
@property (nonatomic, strong) NSString *groupID; ///< 例如 com.sina.default
@property (nonatomic, assign) NSInteger version;
@property (nonatomic, strong) NSString *nameCN; ///< 例如 浪小花
@property (nonatomic, strong) NSString *nameEN;
@property (nonatomic, strong) NSString *nameTW;
@property (nonatomic, assign) NSInteger displayOnly;
@property (nonatomic, assign) NSInteger groupType;
@property (nonatomic, strong) NSArray<WBEmoticon *> *emoticons;
@end
@interface FaceThemeModel : NSObject

@property (nonatomic, assign) FaceThemeStyle themeStyle;
@property (nonatomic, copy)   NSString *themeIcon;
@property (nonatomic, copy)   NSString *themeDecribe;
@property (nonatomic, strong) NSArray *faceModels;

@end
