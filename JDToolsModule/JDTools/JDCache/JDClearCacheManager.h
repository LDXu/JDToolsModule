//
//  JDClearCacheManager.h
//  ZMMovie
//
//  Created by JDragon on 2018/9/28.
//  Copyright © 2018 JDragon. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JDClearCacheManager : NSObject

#pragma mark - 计算和清理Cache文件夹总缓存
/*s*
 *  获取Cache文件夹缓存的总大小(Snapshots除外,没有权限获取)
 *
 *  @param path 要获取的文件夹 路径
 *
 *  @return 返回path路径下文件夹的大小
 */
+ (NSString *)getCacheSize;

/**
 *  获取Cache文件夹缓存的总大小(Snapshots除外,没有权限获取)
 *  @return 是否清除成功
 */
+ (BOOL)clearCache;
+ (void)readyClearCache;


#pragma mark - 计算和清理指定路径文件夹总缓存
/*s*
 *  获取path路径下文件夹的大小
 *
 *  @param path 要获取的文件夹 路径
 *
 *  @return 返回path路径下文件夹的大小
 */
+ (NSString *)getCacheSizeWithFilePath:(NSString *)path;

/**
 *  清除path路径下文件夹的缓存
 *
 *  @param path  要清除缓存的文件夹 路径
 *
 *  @return 是否清除成功
 */
+ (BOOL)clearCacheWithFilePath:(NSString *)path;

#pragma mark - 计算和清理WebKit文件夹的WKWebKit总缓存
/*s*
 *  获取WKWebKit路径下文件夹的大小
 *  @return 返回WKWebKit路径下文件夹的大小
 */
+ (NSString *)getWKWebKitCacheSize;

/**
 *  清除WKWebKit路径下文件夹的缓存
 *  @return 是否清除成功
 */
+ (BOOL)clearWKWebKitCache;



#pragma mark - 计算和清理SDImageCache--default文件夹的总缓存
/*s*
 *  获取SDImageCache--default路径下文件夹的大小
 *  @return 返回SDImageCache--default路径下文件夹的大小
 */
+ (NSString *)getSDImageDefaultCacheSize;

/**
 *  清除SDImageCache--default路径下文件夹的缓存
 *  @return 是否清除成功
 */
+ (BOOL)clearSDImageDefaultCache;



#pragma mark - 计算和清理JDBanner文件夹的总缓存
/**
 获取JDBanner路径下文件夹的大小

 @return 返回JDBanner路径下文件夹的大小
 */
+ (NSString *)getJDBannerImageDefaultCacheSize;

/**
 清除JDBanner路径下文件夹的缓存

 @return 是否清除成功
 */
+ (BOOL)clearJDBannerImageDefaultCache;

#pragma mark - MAC电脑模拟器下计算和清理WebKit文件夹的WKWebKit总缓存
/*s*
 *  获取模拟器下WKWebKit路径下文件夹的大小
 *  @return 返回WKWebKit路径下文件夹的大小
 */
+ (NSString *)getSimulatorWKWebKitCacheSize;

/**
 *  清除模拟器下WKWebKit路径下文件夹的缓存
 *  @return 是否清除成功
 */
+ (BOOL)clearSimulatorWKWebKitCache;

@end

NS_ASSUME_NONNULL_END
