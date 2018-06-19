//
//  FirstViewController.m
//  Example
//
//  Created by Daniel on 2018/6/19.
//  Copyright © 2018年 Daniel. All rights reserved.
//

#import "FirstViewController.h"
#import <TZImagePickerController/TZImagePickerController.h>
#import <QDLivePhotoKit/QDLivePhotoManager.h>

@interface FirstViewController () <TZImagePickerControllerDelegate>

@end

@implementation FirstViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    TZImagePickerController *imagePickerVC = [[TZImagePickerController alloc] initWithMaxImagesCount:1 delegate:self];
    imagePickerVC.allowPickingImage = NO;
    imagePickerVC.allowPickingVideo = YES;
    [self presentViewController:imagePickerVC animated:YES completion:nil];
}

// MARK: - TZImagePickerControllerDelegate

- (void)imagePickerController:(TZImagePickerController *)picker didFinishPickingVideo:(UIImage *)coverImage sourceAssets:(id)asset {
    
    [[PHImageManager defaultManager] requestAVAssetForVideo:asset options:nil resultHandler:^(AVAsset * _Nullable asset, AVAudioMix * _Nullable audioMix, NSDictionary * _Nullable info) {
        AVURLAsset *urlAsset = (AVURLAsset *)asset;
        UIAlertController *alertController = [UIAlertController alertControllerWithTitle:nil message:@"Generating..." preferredStyle:UIAlertControllerStyleAlert];
        [self presentViewController:alertController animated:YES completion:nil];
        [[QDLivePhotoManager sharedManager] saveLivePhotoWithAsset:urlAsset completionHandler:^(BOOL success) {
            [alertController dismissViewControllerAnimated:YES completion:nil];
            if (success) {
                NSLog(@"success");
                
            } else {
                NSLog(@"fail");
            }
        }];
    }];
    
}



@end
