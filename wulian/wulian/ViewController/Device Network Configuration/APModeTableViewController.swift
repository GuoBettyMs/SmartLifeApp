//
//  APModeTableViewController.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit
import ThingSmartActivatorKit

class APModeTableViewController: UITableViewController {
    // MARK: - IBOutlet
    @IBOutlet weak var ssidTextField: UITextField!
    @IBOutlet weak var passwordTextField: UITextField!
    
    // MARK: - Property
    var token: String = ""
    private var isSuccess = false
    
    // MARK: - Lifecycle
    override func viewDidLoad() {
        super.viewDidLoad()
        
        requestToken() //获取 Token 需要上传当前的 homeId，因此需要确保处于登录状态并至少创建了一个家庭。
    }
    
    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        stopConfigWifi()
    }

    // MARK: - IBAction
    @IBAction func searchTapped(_ sender: UIBarButtonItem) {
        startConfiguration()
    }
    
    // MARK: - Private Method
    private func requestToken() {
        guard let homeID = Home.current?.homeId else { return }
        SVProgressHUD.show(withStatus: NSLocalizedString("Requesting for Token", comment: ""))
        
        ThingSmartActivator.sharedInstance()?.getTokenWithHomeId(homeID, success: { [weak self] (token) in
            guard let self = self else { return }
            //Token 的有效期为 10 分钟，且配置成功后就会失效。再次配网时，需要重新查询 Token
            print("APModeTableViewController 获取 token 成功")
            self.token = token ?? ""
            SVProgressHUD.dismiss()
        }, failure: { (error) in
            let errorMessage = error?.localizedDescription ?? ""
            SVProgressHUD.showError(withStatus: errorMessage)
        })
    }
    
    private func startConfiguration() {
        SVProgressHUD.show(withStatus: NSLocalizedString("Configuring", comment: ""))
        
        let ssid = ssidTextField.text ?? "" //Wi-Fi 名称
        let password = passwordTextField.text ?? ""
        ThingSmartActivator.sharedInstance()?.delegate = self //调用代理,监听配网结果的回调。
        //开始配网,回调 didReceiveDevice
        ThingSmartActivator.sharedInstance()?.startConfigWiFi(.AP, ssid: ssid, password: password, token: token, timeout: 100) //配网模式: AP 模式
    }
    
    //停止配网
    private func stopConfigWifi() {
        if !isSuccess {
            SVProgressHUD.dismiss()
        }
        ThingSmartActivator.sharedInstance()?.delegate = nil
        ThingSmartActivator.sharedInstance()?.stopConfigWiFi()
    }
    
}

extension APModeTableViewController: ThingSmartActivatorDelegate {
    //配网代理回调
    func activator(_ activator: ThingSmartActivator, didReceiveDevice deviceModel: ThingSmartDeviceModel?, error: Error?) {
        
        if deviceModel != nil && error == nil {
            // Success
            
            let name = deviceModel?.name ?? NSLocalizedString("Unknown Name", comment: "Unknown name device.")
            print("APModeTableViewController 设备成功连接到 Wi-Fi 网络，并与云端建立连接", name)
            SVProgressHUD.showSuccess(withStatus: NSLocalizedString("Successfully Added \(name)", comment: "Successfully added one device."))
            isSuccess = true
            navigationController?.popViewController(animated: true) //返回上一页
        }
        
        if let error = error {
            // Error
            print("APModeTableViewController 设备配网失败 \(error.localizedDescription)")
            SVProgressHUD.showError(withStatus: error.localizedDescription)
        }
    }
    // v4.0.0 新增：特殊安全设备在配网过程会回调中间过程
    func activator(_ activator: ThingSmartActivator, didPassWIFIToSecurityLevelDeviceWithUUID uuid: String) {
        
        //引导用户手机连接到与 `- startConfigWiFi:password:token:` 入参的 ssid 相同的 Wi-Fi 上
        SVProgressHUD.dismiss()
        Alert.showBasicAlert(on: self, with: "SecurityLevelDevice", message: "continue pair? (Please check you phone connected the same Wi-Fi as you Inputed)", actions: [
            UIAlertAction(title: "cancel", style: .cancel),
            UIAlertAction(title: "continue", style: .destructive, handler: { _ in
                
                ThingSmartActivator.getSSID({ wifi in
                    if wifi == self.ssidTextField.text ?? "" {
                        ThingSmartActivator.sharedInstance()?.continueConfigSecurityLevelDevice()
                    }
                    SVProgressHUD.show(withStatus: NSLocalizedString("Configuring", comment: ""))
                }, failure: {_ in
                    SVProgressHUD.show(withStatus: NSLocalizedString("当前手机的 wifi 名称 不对", comment: ""))
                })
//                let wifi = getCurrentWiFi() //获取当前手机的 wifi 名称
//                if wifi == ssidTextField.text ?? "" {
//                    ThingSmartActivator.sharedInstance()?.continueConfigSecurityLevelDevice()
//                }
//                
//                SVProgressHUD.show(withStatus: NSLocalizedString("Configuring", comment: ""))
            })
        ])
    }
}
