说明



1.编译xcframework
build setting中 User Script Sandboxing 设置为NO
在执行聚合目标生成xcframework到output目录
2 将xcframework拷贝到 cocoapod git目录覆盖 

3.使用 git push --tags推送最新代码到git

4.使用 
pod trunk push SifliOCore.podspec --allow-warnings
推送podspec到cocoapods