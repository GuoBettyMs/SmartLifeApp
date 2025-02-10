//
/**
 *    Copyright (c) 2023 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class WTLDeviceController;

typedef void (^CHIPDeviceDPReportCallback)(NSString *scopedNodeId, NSDictionary *dps);

typedef void (^CHIPDeviceOnlineCallback)(NSString *scopedNodeId, BOOL online);

typedef void (^CHIPDeviceControlStateCallback)(NSString *scopedNodeId, BOOL state);

@interface WTLThingDPEnginManager : NSObject

@property (nonatomic, strong) NSString *dpEnginVersion;

+ (instancetype)sharedInstance;

//matter转换引擎初始化
- (int)setUpThingMatterEngine:(uint64_t)compressFabricId;

//获取matter转换引擎版本
- (NSString *)getThingMatterEngineVersion;

//在dp引擎内创建一个转换文件节点
/**
 * @brief 在引擎内创建一个转换文件节点 app端使用
 *
 * @param path 文件的完整路径
 * @param filekey 文件key 一般为：pid_schameId 只要在控制及上报时传入这个key就可完成转换
 * @return int 成功返回OPRT_OK 失败返回错误码
 */
- (int)setProductEngineJson:(NSString *)path fileKey:(NSString *)filekey;


//dp数据使用matter接口下发
- (void)sendThingDps:(WTLDeviceController *)controller
              nodeId:(uint64_t)deviceID
                 dps:(NSArray<NSDictionary *> *)dps
             fileKey:(NSString *)filekey
             success:(void(^)(void))success
             failure:(void(^)(NSError *error))failure;

///dp上报监听 在线状态上报监听
- (void)registerMatterDPReportcb:(CHIPDeviceDPReportCallback)dpReportCallback;

- (void)registerMatterDPStatecb:(CHIPDeviceControlStateCallback)dpStateCallback;

//订阅matter子设备状态上报
- (void)subscribeMatterAttribute:(WTLDeviceController *)controller
                          nodeId:(uint64_t)deviceID
                         fileKey:(NSString *)filekey
                         success:(void(^)(void))success
                         failure:(void(^)(NSError *error))failure;

//设备在线状态查询
- (void)getOnlineStatus:(WTLDeviceController *)controller
                 nodeId:(uint64_t)deviceID
               interval:(uint64_t)interval;

//设备dp状态查询
- (void)queryDpsDps:(WTLDeviceController *)controller
             nodeId:(uint64_t)deviceID
                dps:(NSArray *)dps
            fileKey:(NSString *)filekey
            success:(void(^)(void))success
            failure:(void(^)(NSError *error))failure;

//查询设备所有dps
- (void)queryAllDps:(WTLDeviceController *)controller
             nodeId:(uint64_t)deviceID
            fileKey:(NSString *)filekey
            success:(void(^)(void))success
            failure:(void(^)(NSError *error))failure;

//将Tlv data 转换成 json
+ (nullable NSString *)TlvBytesToJson:(NSData *)tlvByteData;

// 判断是否有 开关 dps
- (BOOL)containsOnOffWithDps:(NSArray<NSDictionary *> *)dps fileKey:(NSString *)filekey;

@end

NS_ASSUME_NONNULL_END
