//
//  LivePhotoGenerator.h
//  QDLivePhotoKit
//
//  Created by Daniel on 2018/6/19.
//  Copyright © 2018年 Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LivePhotoGenerator : NSObject

- (instancetype)initWithPath:(nonnull NSString *)path;

- (void)writeMovWithPath:(nonnull NSString *)destPath assetIdentifier:(nonnull NSString *)identifier;

@end

NS_ASSUME_NONNULL_END
