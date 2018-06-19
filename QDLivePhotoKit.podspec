

Pod::Spec.new do |s|

  s.name         = "QDLivePhotoKit"
  s.version      = "0.1.0"
  s.summary      = "Generate Live Photo from mp4 file."


  s.homepage     = "https://github.com/QiuDaniel/QDLivePhotoKit"
  s.license      = { :type => 'MIT', :file => 'LICENSE' }
  s.author       = { "qiudan" => "qiudan-098@163.com" }
  s.source       = { :git => "https://github.com/QiuDaniel/QDLivePhotoKit.git", :tag => s.version.to_s }


  s.ios.deployment_target = '9.1'
  s.requires_arc = true

  s.source_files  = "QDLivePhotoKit/*.{h,m}"

end
