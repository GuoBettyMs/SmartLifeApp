//
//  MessageThrottleViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2024 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartMessageKit

class MessageThrottleViewController : UITableViewController {
    @IBOutlet weak var systemInput: UITextField!
    
    @IBOutlet weak var phoneInput: UITextField!
    
    @IBOutlet weak var smsInput: UITextField!
    
    
    let messageSetting = ThingSmartMessagePushSetting()
    
    override func viewDidLoad() {
        messageSetting.getDeviceAlarmThrottleTime(with: .system) { time in
            print("MessageSettingViewController 查询设备系统推送通道的告警节流时间成功")
            self.systemInput.text = "\(time)"
        }
        
        messageSetting.getDeviceAlarmThrottleTime(with: .phone) { time in
            self.phoneInput.text = "\(time)"
        }
        
        messageSetting.getDeviceAlarmThrottleTime(with: .SMS) { time in
            self.smsInput.text = "\(time)"
        }
    }
    
    
    
    @IBAction func systemEnd(sender:UITextField) {
        if let content = systemInput.text, let minute = Int(content) {
            let requestModel = ThingSmartDeviceAlarmThrottleTimeRequestModel()
            requestModel.minute = minute
            requestModel.pushChannel = .system //推送通道
            messageSetting.setDeviceAlarmThrottleTimeWith(requestModel) { result in
                print("MessageSettingViewController 设置设备系统推送通道的告警节流时间成功")
            }
        }
    }
    
    @IBAction func phoneEnd(sender:UITextField) {
        if let content = phoneInput.text, let minute = Int(content) {
            let requestModel = ThingSmartDeviceAlarmThrottleTimeRequestModel()
            requestModel.minute = minute
            requestModel.pushChannel = .phone
            messageSetting.setDeviceAlarmThrottleTimeWith(requestModel) { result in
                
            }
        }
    }
    
    @IBAction func smsEnd(sender:UITextField) {
        if let content = smsInput.text, let minute = Int(content) {
            let requestModel = ThingSmartDeviceAlarmThrottleTimeRequestModel()
            requestModel.minute = minute
            requestModel.pushChannel = .SMS
            messageSetting.setDeviceAlarmThrottleTimeWith(requestModel) { result in
                
            }
        }
    }
}
