//
//  ThingSmartMQTTChannel.h
//  ThingSmartMQTTChannelKit
//
//  Copyright (c) 2014-2024.
//

#import <Foundation/Foundation.h>
#import "NSError+ThingMQTT.h"
#import "ThingSmartMQTTConfigModel.h"
#import <ThingSmartUtil/ThingSmartUtil.h>

NS_ASSUME_NONNULL_BEGIN

@interface ThingSmartPublishMessageModel : NSObject

@property (nonatomic, strong) NSString          *devId;

@property (nonatomic, assign) NSTimeInterval    time; // The timestamp.
@property (nonatomic, assign) NSInteger         protocol; // The protocol.
@property (nonatomic, assign) double            pv; // The version.
@property (nonatomic, strong) NSDictionary      *body; // The body.
@property (nonatomic, strong) NSString          *localKey; // The local key.
@property (nonatomic, assign) NSInteger         publishS;// The sequence.
@property (nonatomic, assign) NSInteger         publishR;// The publishing ID.

@end

@interface ThingSmartResponseMessageModel : NSObject

@property (nonatomic, strong) NSString          *devId;
@property (nonatomic, strong) id                message;  // The mesh array.
@property (nonatomic, assign) NSInteger         protocol; // The protocol.
@property (nonatomic, strong) NSString          *type;
@property (nonatomic, assign) NSInteger         responseS;// The sequence.
@property (nonatomic, assign) NSInteger         responseR;// The response ID.
@property (nonatomic, assign) NSTimeInterval    time;

@end

@class ThingSmartMQTTChannel;

/**
 The MQTT connection state.
 */
typedef NS_ENUM (NSInteger, ThingSmartMqttConnectState){
    ThingSmartMqttConnectStateCreated,
    ThingSmartMqttConnectStateConnecting,
    ThingSmartMqttConnectStateConnected,
    ThingSmartMqttConnectStateDisconnecting,
    ThingSmartMqttConnectStateClose,
    ThingSmartMqttConnectStateError,
};

@protocol ThingSmartMQTTChannelDelegate <NSObject>

@optional

/**
 *  The callback of changes in the MQTT connection channel states.
 */
- (void)mqttChannel:(ThingSmartMQTTChannel *)mqttChannel
       connectState:(ThingSmartMqttConnectState)connectState
              error:(nullable NSError *)error;

/**
 *  Receives the MQTT data.
 */
- (void)mqttChannel:(ThingSmartMQTTChannel *)mqttChannel
  didReceiveMessage:(ThingSmartResponseMessageModel *)message
              topic:(NSString *)topic;

/// Reveives the MQTT origin data.
/// Notice: You need dencrypt the data.
/// @param mqttChannel channel
/// @param data origin data
- (void)mqttChannel:(ThingSmartMQTTChannel *)mqttChannel
didRecevieOriginData:(NSData *)data
              topic:(NSString *)topic;
/**
 *  The callback of changes in the MQTT before reconnect action.
 *  If you return ThingSmartMQTTConfigModel's object, channel will use the passed configuration.
 *  If you return nil, channel will use the lastest config.
 */
- (nullable ThingSmartMQTTConfigModel *)mqttChannelWillReconnectAndChangeConfig:(ThingSmartMQTTChannel *)mqttChannel;

/**
 *  Host needs to be downgraded.
 */
- (void)degradeHost:(NSString *)host;

@end


@protocol ThingSmartMQTTSubscribeCorrectProtocol <NSObject>

- (void)correctDeviceInfo:(NSString *)gwId;

@end


@interface ThingSmartMQTTChannel : NSObject

@property (nonatomic, assign) BOOL quicEnabled;

@property (nonatomic, strong) id<ThingSmartMQTTSubscribeCorrectProtocol> deviceCorrector;

/// Special reconnect enable while App’s state is Background Active.
/// Default is NO.
@property (nonatomic, assign) BOOL backgroundEnabled;

@property (nonatomic, assign) BOOL eventPubAckEnable;
@property (nonatomic, assign) BOOL eventRevEnable;
// Default NO. If YES may causing more power consumption.
@property (nonatomic, assign) BOOL backgroundAutoRec;

+ (instancetype)sharedInstance;

/**
 *  Connects to the MQTT host.
 *
 *  @param mqttConfig The configuration of the MQTT connection.
 */
- (void)startConnectToHostWithMqttConfig:(ThingSmartMQTTConfigModel *)mqttConfig;

/**
 *  Disconnects from the MQTT host.
 */
- (void)close;

/**
 *  The MQTT connection state.
 */
- (ThingSmartMqttConnectState)connectState;

/**
 *  Subscribes to a topic.
 *
 *  @param topic   The topic.
 *  @param success Called when the task is finished.
 *  @param failure Called when the task is interrupted by an error.
 */
- (void)subscribeToTopic:(NSString *)topic
                 devInfo:(nullable NSDictionary *)devInfo
                 success:(nullable ThingSuccessHandler)success
                 failure:(nullable ThingFailureError)failure;

/**
 *  Unsubscribes from a topic.
 *
 *  @param topic   The topic.
 *  @param success Called when the task is finished.
 *  @param failure Called when the task is interrupted by an error.
 */
- (void)unsubscribeToTopic:(NSString *)topic
                   success:(nullable ThingSuccessHandler)success
                   failure:(nullable ThingFailureError)failure;

/**
 *  Publishes the MQTT data.
 *
 *  @param data    The data.
 *  @param topic   The topic.
 *  @param success Called when the task is finished.
 *  @param failure Called when the task is interrupted by an error.
 *  @return The message identifier of the published message. A value of `zero` is returned at the QoS level 0. A message identifier is returned at the QoS level 1 or 2.
 */
- (UInt16)publishMessage:(NSData *)data
                   topic:(NSString *)topic
                 success:(nullable ThingSuccessHandler)success
                 failure:(nullable ThingFailureError)failure;

/**
 *  Publishes MQTT data.
 *
 *  @param messageModel The message model.
 *  @param topic        The topic.
 *  @param success      Called when the task is finished.
 *  @param failure      Called when the task is interrupted by an error.
 */
- (void)publishMessageWithMessageModel:(ThingSmartPublishMessageModel *)messageModel
                                 topic:(NSString *)topic
                               success:(nullable ThingSuccessHandler)success
                               failure:(nullable ThingFailureError)failure;

/**
 *  Adds an MQTT channel delegate.
 *
 *  @param delegate Delegate
 */
- (void)addDelegate:(id<ThingSmartMQTTChannelDelegate>)delegate;

/**
 *  Removes an MQTT channel delegate.
 *
 *  @param delegate The delegate.
 */
- (void)removeDelegate:(id<ThingSmartMQTTChannelDelegate>)delegate;


/// Whether MQTT channel has subscribed to a topic.
/// @param topic topic
- (BOOL)hasSubscribedTopic:(NSString *)topic;

@end

NS_ASSUME_NONNULL_END
