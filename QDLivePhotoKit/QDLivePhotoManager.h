//
//  QDLivePhotoManager.h
//  QDLivePhotoKit
//
//  Created by Daniel on 2018/6/19.
//  Copyright © 2018年 Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface QDLivePhotoManager : NSObject

+ (instancetype)sharedManager;

- (void)saveLivePhotoWithPath:(nonnull NSString *)path completionHandler:(void (^)(BOOL success))completionHandler;

@end

NS_ASSUME_NONNULL_END
