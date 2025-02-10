//
//  DeviceControlCell.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartDeviceKit

enum DeviceControlCell: String {
    case switchCell   = "device-switch-cell"
    case sliderCell   = "device-slider-cell"
    case enumCell     = "device-enum-cell"//tableviewcell 带 disclosure indicator
    case stringCell   = "device-string-cell"//tableviewcell 带 textfield、 button
    case labelCell    = "device-label-cell"
    case textviewCell = "device-textview-cell"
    
    static func cellIdentifier(with typeStr: String?) -> Self {
        switch typeStr{
        case "bool":
            return .switchCell
        case "enum": //自定义的有限集合值
            return .enumCell
        case "value": //可线性调节类型的数据
            return .sliderCell
        case "bitmap":
            return .labelCell
        case "string":
            return .stringCell
        case "raw": //以二进制形式透传的产品功能
            return .stringCell
        case "array":
            return .textviewCell
        case "struct":
            return .textviewCell
        default: //故障型（Fault）：用于上报和统计故障的功能点，支持多故障，数据只上报。例如温度传感器故障
            return .labelCell
        }
    }
    
    //ThingSmartSchemaModel 每个功能点被封装成一个 ThingSmartSchemaModel 对象
    static func cellIdentifier(with schema: ThingSmartSchemaModel) -> Self {
        let type = schema.type == "obj" ? schema.property.type : schema.type //功能点类型
        return cellIdentifier(with: type)
    }
}
