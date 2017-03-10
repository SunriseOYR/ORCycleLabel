
Pod::Spec.new do |s|
    s.name         = "ORCycleLabel"
    s.version      = "1.0.0"
    s.ios.deployment_target = '7.0'
    s.summary      = "A label which support loop rolling"
    s.homepage     = "https://github.com/SunriseOYR/ORCycleLabel.git"
    s.license              = { :type => "MIT", :file => "LICENSE" }
    s.author             = { "SunriseOYR" => "sunrise_oy@163.com" }
    s.social_media_url   = ""
    s.source       = { :git => "https://github.com/SunriseOYR/ORCycleLabel.git", :tag => s.version }
    s.source_files  = "ORCycleLabel/*.{h,m}"
    s.resources          = ""
    s.requires_arc = true
end
