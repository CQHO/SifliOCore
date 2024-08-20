//
//  SFDataUtil.h
//  SifliOCore
//
//  Created by Sean on 2023/11/1.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SFDataUtil : NSObject

/// 将数据输出为16进制字符串 100字节上限，超过截断.
/// - Parameter data: 数据
+ (NSString *)hexStringFromData100:(NSData *)data;
+ (NSString *)summary:(NSData *)data;

/// 切割数据
/// - Parameters:
///   - data: 源数据
///   - upperlimit: 最大长度
+ (NSArray<NSData *> *)splitData:(NSData *)data upperlimit:(NSInteger)upperlimit;

+ (NSData *)convertUint16ToUint8Data:(uint16_t)value;

+ (uint32_t)covertDataToUnit32:(NSData *)data;

+ (uint16_t)covertDataToUnit16:(NSData *)data;

+ (NSData *)convertUInt16ToData:(uint16_t)value;
+ (NSData *)convertUInt32ToData:(uint32_t)value;

+ (uint8_t)getByteFromData:(NSData *)data index:(NSInteger)index;
+ (uint16_t)getUint16FromData:(NSData *)data index:(NSInteger)index;
+ (uint32_t)getUint32FromData:(NSData *)data index:(NSInteger)index;


/// CRC 从swit迁移而来
/// - Parameters:
///   - data:
///   - offset:
///   - length: 
+ (uint32_t) CRC32_MPEG2:(NSData *)data offset:(NSInteger)offset length:(NSInteger)length;

/// 使用一个字节对目标数据做crc补齐
/// - Parameters:
///   - srcData:数据
///   - padding: 0x00,0x20
+ (NSData *) appendCRCWithData:(NSData *)srcData paddingByte:(uint8_t)padding;

@end

NS_ASSUME_NONNULL_END
