//
//  BLEModeViewController.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit
import ThingSmartBLEKit

class BLEModeViewController: UIViewController {

    // MARK: - Property
    private var isSuccess = false
    
    // MARK: - Lifecycle
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        
        stopConfigBLE()
    }
   
    // MARK: - IBAction
    @IBAction func searchTapped(_ sender: UIBarButtonItem) {
        //ThingSmartBLEManager 单点蓝牙相关类
        ThingSmartBLEManager.sharedInstance().delegate = self //监听蓝牙状态变化通知,回调 bluetoothDidUpdateState
        
        // Start finding un-paired BLE devices.
        ThingSmartBLEManager.sharedInstance().startListening(true) //开始扫描,如果扫描到激活设备，会自动进行连接入网，不会返回扫描结果
        
        SVProgressHUD.show(withStatus: NSLocalizedString("Searching", comment: ""))
    }
    
    // MARK: - Private method
    private func stopConfigBLE() {
        if !isSuccess {
            SVProgressHUD.dismiss()
        }

        ThingSmartBLEManager.sharedInstance().delegate = nil
        ThingSmartBLEManager.sharedInstance().stopListening(true)
    }

}

// MARK: - ThingSmartBLEManagerDelegate
extension BLEModeViewController: ThingSmartBLEManagerDelegate {
    
    /**
     * 扫描到未激活的设备
     *
     * @param uuid 未激活设备 UUID
     * @param productKey 未激活设备产品 key
     */
    // When the BLE detector finds one un-paired BLE device, this delegate method will be called.
    func didDiscoveryDevice(withDeviceInfo deviceInfo: ThingBLEAdvModel) {
        guard let homeID = Home.current?.homeId else {
            SVProgressHUD.showError(withStatus: NSLocalizedString("No Home Selected", comment: ""))
            return
        }
        
        let bleType = deviceInfo.bleType //设备类型，用于区分不同协议的设备
        if bleType == ThingSmartBLETypeBLEWifi || //Wi-Fi 和蓝牙双模设备
            bleType == ThingSmartBLETypeBLEWifiSecurity || //蓝牙设备
            bleType == ThingSmartBLETypeBLEWifiPlugPlay || //Wi-Fi 和蓝牙双模设备，并具备 双模设备蓝牙兜底激活(在设备无法连接 Wi-Fi 路由器，或者 Wi-Fi 路由器无法连接互联网时，将这类设备当成普通蓝牙设备) 能力
            bleType == ThingSmartBLETypeBLEWifiPriorBLE || //Wi-Fi 和蓝牙双模设备，支持优先走 双模设备蓝牙兜底激活
            bleType == ThingSmartBLETypeBLELTESecurity { //LET Cat.1 和 Wi-Fi 双模设备
            print("Please use Dual Mode to pair: %@", deviceInfo.uuid ?? "")
            return
        }
        
        SVProgressHUD.show(withStatus: NSLocalizedString("Activating", comment: "Active BLE."))
        
        // Trying to active the single BLE device.
        ThingSmartBLEManager.sharedInstance().activeBLE(deviceInfo, homeId: homeID) { model in
            print("BLEModeViewController 激活蓝牙设备成功") //激活过程会将设备信息注册到云端
            let name = model.name ?? NSLocalizedString("Unknown Name", comment: "Unknown name device.")
            SVProgressHUD.showSuccess(withStatus: NSLocalizedString("Successfully Added \(name)", comment: "Successfully added one device."))
            self.isSuccess = true
            self.navigationController?.popViewController(animated: true)
            
        } failure: {
            SVProgressHUD.showError(withStatus: NSLocalizedString("Failed to Activate BLE Device", comment: ""))
        }
    }
}
