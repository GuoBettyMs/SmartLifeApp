//
// ThingSmartTimer.h
// ThingSmartTimerKit
//
// Copyright (c) 2014-2021 Thing Inc. (https://developer.thing.com)

#ifndef ThingSmart_ThingSmartTimer
#define ThingSmart_ThingSmartTimer

#import <ThingSmartUtil/ThingSmartUtil.h>

/// The detailed model of the timer.
@interface ThingTimerModel : NSObject

/// The ID of the timer.
@property (nonatomic, strong) NSString *timerId;

/// The date.
@property (nonatomic, strong) NSString *date;

/// The time when the timer runs.
@property (nonatomic, strong) NSString *time;

/// The status of the timer.
@property (nonatomic, assign) BOOL     status;

/// The loop of the timer.
@property (nonatomic, strong) NSString *loops;

/// The action DPs of the timer.
@property (nonatomic, strong) NSDictionary *dps;

/// The zone ID of the timer.
@property (nonatomic, strong) NSString *timezoneId;

/// The alias name of the timer.
@property (nonatomic, copy)   NSString *aliasName;

/// Specifies whether the timer push notification is enabled. If the value is set to `yes`, when the timer runs, the app receives a push notification.
@property (nonatomic, assign) BOOL     isAppPush;

/// The ID of a timer task.
@property (nonatomic, strong) NSString *timerTaskId;

@end

/// The task model of the timer.
@interface ThingTimerTaskModel : NSObject

/// The name of the task.
@property (nonatomic, strong) NSString  *taskName;

// The status of the task.
@property (nonatomic, assign) NSInteger status;

@end

@interface ThingCategoryTimersModel : NSObject

@property (nonatomic, strong) NSString *taskName;

@property (nonatomic, assign) NSInteger categoryStatus;

@property (nonatomic, strong) NSArray<ThingTimerModel *> *timers;

@end

/// @brief ThingSmartTimer provides basic timing capabilities and supports device timing and group timing. The device timing function supports Wi-Fi devices, Bluetooth mesh sub-devices, and Zigbee sub-devices.
///
/// ThingSmartTimer also encapsulates the API operations to add, delete, and check timer data for device data points (DPs). After the timer data is configured for the app in the calls of the timing API operations, the hardware module automatically runs the scheduled tasks based on the timing requirements. Multiple timers can be included in the same timer task.
@interface ThingSmartTimer : NSObject

/// Returns a list of timer tasks.
/// @param devId The ID of the device to which the timer tasks are assigned.
/// @param success Called when the task is finished. A list of ThingTimerTaskModel is returned.
/// @param failure Called when the task is interrupted by an error.
- (void)getTimerTaskStatusWithDeviceId:(NSString *)devId
                               success:(void(^)(NSArray<ThingTimerTaskModel *> *list))success
                               failure:(ThingFailureError)failure;


/// Returns all timers that are configured for a specified device.
/// @param devId The ID of the device for which the timers are configured.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)getAllTimerWithDeviceId:(NSString *)devId
                        success:(ThingSuccessDict)success
                        failure:(ThingFailureError)failure;


/// Updates the time zone of a specified device.
/// @param devId The ID of the device for which the time zone is updated.
/// @param timezoneId The ID of the time zone, such as "Asia/Shanghai".
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)updateTimerWithDeviceId:(NSString *)devId
                     timezoneId:(NSString *)timezoneId
                        success:(ThingSuccessHandler)success
                        failure:(ThingFailureError)failure;


/// Cancels the ongoing request.
- (void)cancelRequest;


#pragma mark - Timer

/// Sets timers for each device or group.
/// @note The maximum number of timers per device or group is 30.
/// @param task The task name of the timer.
/// @param loops The number of loops.
/// @param bizId Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType Set the value to `0` for device timing and `1` for group timing.
/// @param time The timing clocks for timer tasks.
/// @param dps The command dictionary.
/// @param status A Boolean value that specifies whether to enable the timer.
/// @param isAppPush A Boolean value that specifies whether to enable the push notification.
/// @param aliasName The remarks for the task.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)addTimerWithTask:(NSString *)task
                   loops:(NSString *)loops
                   bizId:(NSString *)bizId
                 bizType:(NSUInteger)bizType
                    time:(NSString *)time
                     dps:(NSDictionary *)dps
                  status:(BOOL)status
               isAppPush:(BOOL)isAppPush
               aliasName:(NSString *)aliasName
                 success:(ThingSuccessHandler)success
                 failure:(ThingFailureError)failure;

/// Set timers for each device or group and return timerTaskId in success.
/// @note The maximum number of timings per device or group is 30.
/// @param task The task name of the timer.
/// @param loops Number of loop.
/// @param bizId If it is a device, here is the device Id; if it is a group, here is the group id.
/// @param bizType Pass 0 if the type is device, otherwise, 1 for the group.
/// @param time Timed clocks under timed tasks.
/// @param dps Command Dictionary.
/// @param status A boolean value indicates whether to turn on the timer.
/// @param isAppPush A boolean value indicates whether to turn on the push notification.
/// @param aliasName The remark for the task.
/// @param success Called when the task finishes successfully, contains the timerId.
/// @param failure Called when the task is interrupted by an error.
- (void)addTimerIdWithTask:(NSString *)task
                             loops:(NSString *)loops
                             bizId:(NSString *)bizId
                           bizType:(NSUInteger)bizType
                              time:(NSString *)time
                               dps:(NSDictionary *)dps
                            status:(BOOL)status
                         isAppPush:(BOOL)isAppPush
                         aliasName:(NSString *)aliasName
                successWithTimerId:(ThingSuccessID)success
                           failure:(ThingFailureError)failure;


/// Returns all the timers for a specified task of the device or group.
/// @param bizId Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType Set the value to `0` for device timing and `1` for group timing.
/// @param success Called when the task is finished. A list of ThingCategoryTimersModel is returned.
/// @param failure Called when the task is interrupted by an error.
- (void)getTimerTaskListWithBizId:(NSString *)bizId
                     bizType:(NSUInteger)bizType
                     success:(void(^)(NSArray<ThingCategoryTimersModel *> *list))success
                     failure:(ThingFailureError)failure;


/// Returns the timer for a specified task of the device or group.
/// @param task The name of the timer task.
/// @param bizId Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType Set the value to `0` for device timing and `1` for group timing.
/// @param success Called when the task is finished. A list of ThingTimerTaskModel is returned.
/// @param failure Called when the task is interrupted by an error.
- (void)getTimerListWithTask:(NSString *)task
                       bizId:(NSString *)bizId
                     bizType:(NSUInteger)bizType
                     success:(void(^)(NSArray<ThingTimerModel *> *list))success
                     failure:(ThingFailureError)failure;


/// Updates the specified timer information about a specified task for the device or group.
/// @param timerId The timer ID for the update process.
/// @param loops The number of loops in the format of "0000000". Each bit of the string specifies whether to update the timer on a specific day within a week. `0`: disables the update. `1`: enables the update. Each bit means the following days in sequence from left to right: Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday. For example, `0100000` means every Monday.
/// @param bizId Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType Set the value to `0` for device timing and `1` for group timing.
/// @param time The scheduled time, such as `18:00`.
/// @param dps The command dictionary.
/// @param status A Boolean value that indicates whether to enable the timer.
/// @param isAppPush A Boolean value that indicates whether to enable the push notification.
/// @param aliasName The remarks for the task.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)updateTimerWithTimerId:(NSString *)timerId
                         loops:(NSString *)loops
                         bizId:(NSString *)bizId
                       bizType:(NSUInteger)bizType
                          time:(NSString *)time
                           dps:(NSDictionary *)dps
                        status:(BOOL)status
                     isAppPush:(BOOL)isAppPush
                     aliasName:(NSString *)aliasName
                       success:(ThingSuccessHandler)success
                       failure:(ThingFailureError)failure;


/// Updates the timer status of a specified task for the device or group.
/// @param timerId The timer ID for the update process.
/// @param bizId Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType Set the value to `0` for device timing and `1` for group timing.
/// @param status A Boolean value that indicates whether to enable the timer.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)updateTimerStatusWithTimerId:(NSString *)timerId
                               bizId:(NSString *)bizId
                             bizType:(NSUInteger)bizType
                              status:(BOOL)status
                             success:(ThingSuccessHandler)success
                             failure:(ThingFailureError)failure;


/// Updates the status of all-time clocks for a specific task.
/// @param task The name of the timer task.
/// @param bizId Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType Set the value to `0` for device timing and `1` for group timing.
/// @param status A Boolean value that indicates whether to enable the timer.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)updateTimerStatusWithTask:(NSString *)task
                            bizId:(NSString *)bizId
                          bizType:(NSUInteger)bizType
                           status:(BOOL)status
                          success:(ThingSuccessHandler)success
                          failure:(ThingFailureError)failure;


/// Deletes a single timer.
/// @param timerId The timer ID for the delete process.
/// @param bizId Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType Set the value to `0` for device timing and `1` for group timing.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)removeTimerWithTimerId:(NSString *)timerId
                         bizId:(NSString *)bizId
                       bizType:(NSUInteger)bizType
                       success:(ThingSuccessHandler)success
                       failure:(ThingFailureError)failure;


/// Deletes all timers from a specific task.
/// @param task The name of the timer task.
/// @param bizId Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType Set the value to `0` for device timing and `1` for group timing.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)removeTimerWithTask:(NSString *)task
                      bizId:(NSString *)bizId
                    bizType:(NSUInteger)bizType
                    success:(ThingSuccessHandler)success
                    failure:(ThingFailureError)failure;


/// Modifies common timing status of multiple timer IDs or deletes multiple timers in a request.
/// @param timerIds The timer IDs for the batch operation.
/// @param bizId The service ID. Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType The service type. Set the value to `0` for device timing and `1` for group timing.
/// @param updateType The type of update. Valid values: `0`: disables the timer. `1`: enables the timer. `2`: deletes the timer.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)updateTimerStatusWithTimerIds:(NSArray<NSString *> *)timerIds
                                bizId:(NSString *)bizId
                              bizType:(NSUInteger)bizType
                           updateType:(int)updateType
                              success:(ThingSuccessHandler)success
                              failure:(ThingFailureError)failure;


/// Modifies all timing status of a timer task or delete a timer.
/// @param task The name of the timer task.
/// @param bizId The service ID. Set the value to a device ID for device timing and a group ID for group timing.
/// @param bizType The service type. Set the value to `0` for device timing and `1` for group timing.
/// @param updateType The type of update. Valid values: `0`: disables the timer. `1`: enables the timer. `2`: deletes the timer.
/// @param success Called when the task is finished.
/// @param failure Called when the task is interrupted by an error.
- (void)updateTimerTaskStatusWithTask:(NSString *)task
                                bizId:(NSString *)bizId
                              bizType:(NSUInteger)bizType
                           updateType:(NSUInteger)updateType
                              success:(ThingSuccessHandler)success
                              failure:(ThingFailureError)failure;

@end

#endif
