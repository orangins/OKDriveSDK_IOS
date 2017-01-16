
Pod::Spec.new do |s|
  s.name             = "OKDriveSDK_IOS"
  s.version          = "0.2.1"
  s.summary          = "OKDriveSDK IOS"
  s.homepage         = "https://github.com/orangins/OKDriveSDK_IOS"
  s.license          = 'Apache License, Version 2.0'
  s.author           = { "FJL" => "470987684@qq.com" }
  s.source           = { :git => "https://github.com/orangins/OKDriveSDK_IOS.git", :tag => s.version.to_s }
  s.platform     = :ios, '8.0'
  #s.source_files = 'Classes/*.*'
  #s.source_files = '*./{h,a}'
  #s.public_header_files = 'Classes/*.h'
  s.frameworks ="SystemConfiguration", "CoreLocation", "CoreMotion"
  s.libraries = "z.1.1.3", "sqlite3"
  
  s.ios.vendored_frameworks = 'OKDriveLib.framework'
  s.dependency "FMDB",'~>2.5'
  s.dependency "FMDB/SQLCipher"
  s.dependency "Qiniu",'~>7.0.16'
  s.dependency "Reachability",'~>3.2'
  s.dependency "MJExtension",'~>3.0.8'
  s.dependency "FCUtility", :git => "https://github.com/fjliang/FCUtility.git"

  s.requires_arc = true 

end
