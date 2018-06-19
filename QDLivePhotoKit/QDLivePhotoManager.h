//
//  QDLivePhotoManager.h
//  QDLivePhotoKit
//
//  Created by Daniel on 2018/6/19.
//  Copyright © 2018年 Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kNameTempFile       @"tmp.mov"
#define kNameImageFile      @"generated_livephoto.jpg"
#define kNameMovieFile      @"generated_livephoto.mov"

#define kPathTempFile      [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0] stringByAppendingPathComponent:kNameTempFile]
#define kPathImageFile     [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0] stringByAppendingPathComponent:kNameImageFile]
#define kPathMovieFile     [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0] stringByAppendingPathComponent:kNameMovieFile]

NS_ASSUME_NONNULL_BEGIN

@class AVURLAsset;

@interface QDLivePhotoManager : NSObject

+ (instancetype)sharedManager;

- (void)saveLivePhotoWithAsset:(nonnull AVURLAsset *)asset completionHandler:(void (^)(BOOL success))completionHandler;

- (void)saveLivePhotoWithPath:(nonnull NSString *)path completionHandler:(void (^)(BOOL success))completionHandler;

@end

NS_ASSUME_NONNULL_END
