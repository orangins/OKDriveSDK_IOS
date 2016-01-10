
Pod::Spec.new do |s|
  s.name             = "OKDriveSDK_IOS"
  s.version          = "0.0.1"
  s.summary          = "OKDriveSDK IOS"

  s.homepage         = "https://github.com/orangins/OKDriveSDK_IOS"
  s.license          = 'MIT'
  s.author           = { "FJL" => "470987684@qq.com" }
  s.source           = { :git => "https://github.com/orangins/OKDriveSDK_IOS.git", :tag => s.version.to_s }
 
  s.platform     = :ios, '8.0'
  s.requires_arc = true

  s.source_files = 'Classes/*.*'
 
  s.public_header_files = 'Classes/*.h'
  s.frameworks ="SystemConfiguration", "CoreLocation", "CoreMotion"
  s.libraries = "z.1.1.3", "sqlite3"
  s.ios.vendored_frameworks = 'OKDriveSDK.framework'
  s.dependency "FMDB"
  s.dependency "FMDB/SQLCipher"
  s.dependency "Qiniu"
  s.dependency "SSZipArchive"
  s.dependency "Reachability"
  s.dependency "MJExtension"

end
