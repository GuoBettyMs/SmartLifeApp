//
//  MessageDNDModel.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2024 Tuya Inc. (https://developer.tuya.com/)

import Foundation

class MessageDNDModel : Codable {
    var timerId : Int
    var startTime : String //开始时间
    var endTime : String //结束时间
    var devIds : String //设备 ID 列表
    var loops : String //每周重复次数
    var timezoneId : String
    var timezone : String
    var allDevIds : Bool //所有设备是否都支持免打扰设置（DND）当该值为 true 时，devIDs 可以为空
    
    enum CodingKeys: String, CodingKey {
        case timerId = "id"
        case startTime
        case endTime
        case devIds
        case loops
        case timezoneId
        case timezone
        case allDevIds
    }
}
