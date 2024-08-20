//
//  SFFileUtil.h
//  SifliOCore
//
//  Created by Sean on 2023/12/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFFileUtil : NSObject
+ (BOOL)isFileExist:(NSString *)filePath;


/// 枚举一个目录下的所有文件，包含子目录
/// - Parameter fileDir: 目录
+ (NSArray<NSString *> *)listFilesInDir:(NSString *)fileDir;
@end

NS_ASSUME_NONNULL_END
