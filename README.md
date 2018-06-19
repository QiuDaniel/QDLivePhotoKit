# QDLivePhotoKit
Generate Live Photo from mp4 file

## Installation

### CocoaPods

The preferred installation method is with [CocoaPods](http://cocoapods.org). Add the following to your Podfile:
```ruby
pod 'QDLivePhotoKit', '~> 0.1.0'
```
## Usage

### Get the file as AVURLAsset
```objective-c
[[QDLivePhotoManager sharedManager] saveLivePhotoWithAsset:urlAsset completionHandler:^(BOOL success) {
        
    if (success) {
        NSLog(@"success");
        
    } else {
        NSLog(@"fail");
    }
}];
```
### Get the file path

you must have the authority to access the file with path

```objective-c
[[QDLivePhotoManager sharedManager] saveLivePhotoWithPath:path completionHandler:^(BOOL success) {
        
    if (success) {
        NSLog(@"success");
        
    } else {
        NSLog(@"fail");
    }
}];
```

## Requirements

iOS9.1 or later. Requires ARC

## License

QDLivePhotoKit is released under the MIT license. See [LICENSE](https://github.com/QiuDaniel/QDLivePhotoKit/blob/master/LICENSE) for details.

