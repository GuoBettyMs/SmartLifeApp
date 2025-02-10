//
//  DeviceStatusBehaveCell.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit
import NotificationCenter

class DeviceStatusBehaveCell: UITableViewCell {
    // MARK: - Property
    var controls = [UIControl]()

    //只上报: 表示设备不能接收云端的指令,只能将数据上传到云端
    //只读: 表示设备不接收外部指令, 只能获取数据并上传到云端
    //举例: 温度传感器: 只能测量温度并上传数据到云端，属于“只读/只上报”设备。
    
    //只下发: 表示设备不主动上传数据,只接收指令并执行相应的动作(如云端发出指令:开关灯、调节亮度)
    //只写: 表示设备不主动上传数据,只接收指令并执行相应的动作
    //举例: 智能窗帘: 通过手机 App 控制窗帘的开合，但窗帘不会主动告诉你当前的开合状态
    
    //举例: 智能灯泡: 可以接收云端的控制指令（如通过手机 App 开关灯、调节亮度），同时可以将当前状态（如亮度、颜色）上传到云端，属于“可下发可上报”设备。
    var isReadOnly: Bool = false {
        didSet {
            isReadOnly ? disableControls() : enableControls()
        }
    }
    
    // MARK: - Lifecycle
    override func awakeFromNib() {
        super.awakeFromNib()
        
        NotificationCenter.default.addObserver(self, selector: #selector(deviceOffline), name: .deviceOffline, object: nil)
        NotificationCenter.default.addObserver(self, selector: #selector(deviceOnline), name: .deviceOnline, object: nil)
    }

    deinit {
        NotificationCenter.default.removeObserver(self, name: .deviceOnline, object: nil)
        NotificationCenter.default.removeObserver(self, name: .deviceOffline, object: nil)
    }
    
    // MARK: - Device status reaction
    @objc func deviceOffline() {
        disableControls()
    }
    
    @objc func deviceOnline() {
        if !isReadOnly {
            enableControls()
        }
    }

    func enableControls() {
        for control in controls {
            control.isEnabled = true
        }
    }
    
    func disableControls() {
        for control in controls {
            control.isEnabled = false
        }
    }
}
