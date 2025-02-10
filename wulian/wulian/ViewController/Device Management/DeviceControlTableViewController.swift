//
//  DeviceControlTableViewController.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit
import NotificationCenter
import ThingSmartDeviceKit

class DeviceControlTableViewController: UITableViewController {

    // MARK: - Property
    var device: ThingSmartDevice? //存放了设备相关的所有功能
    var targetSchemaModel : ThingSmartSchemaModel? //每个功能点被封装成一个 ThingSmartSchemaModel 对象
    
    // MARK: - Lifecycle
    override func viewDidLoad() {
        super.viewDidLoad()

        navigationItem.title = device?.deviceModel.name
        device?.delegate = self //监听设备状态的改变，如在线状态、移除通知、功能点状态改变等
        NotificationCenter.default.addObserver(self, selector: #selector(deviceHasRemoved(_:)), name: .SVProgressHUDDidDisappear, object: nil)
    }
    
    override func viewDidLayoutSubviews() {
        super.viewDidLayoutSubviews()
        
        detectDeviceAvailability() //判断在线离线状态
    }

    override func viewDidDisappear(_ animated: Bool) {
        super.viewDidDisappear(animated)
        
        SVProgressHUD.dismiss()
        NotificationCenter.default.removeObserver(self, name: .SVProgressHUDDidDisappear, object: nil)
    }
    
    // MARK: - Navigation
    /// 点击故事版中右侧的导航栏按钮 (即 bar button item),根据指定标识符 identifier 的 segue 跳转到指定视图控制器 destinationVC
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "show-device-detail" else { return }
        let vc = segue.destination as! DeviceDetailTableViewController
        vc.device = device
    }
    
    // MARK: -  Private Method
    private func detectDeviceAvailability() {
        if let isOnline = device?.deviceModel.isOnline, !isOnline {
            NotificationCenter.default.post(name: .deviceOffline, object: nil)
            SVProgressHUD.show(withStatus: NSLocalizedString("The device is offline. The control panel is unavailable.", comment: ""))
        } else {
            NotificationCenter.default.post(name: .deviceOnline, object: nil)
            SVProgressHUD.dismiss()
        }
    }
    
    private func publishMessage(with dps: NSDictionary) {
        guard let dps = dps as? [AnyHashable : Any] else { return }
        //使用自动选择通道的方式 (ThingDevicePublishModeAuto),依次检查通道是否可用并控制
        
        device?.publishDps(dps, success: {
            print("DeviceControlTableViewController 下发成功")//状态上报通过 deviceDpsUpdate 方法回调
        }, failure: { (error) in
            let errorMessage = error?.localizedDescription ?? ""
            SVProgressHUD.showError(withStatus: errorMessage)
        })
    }
    
    @objc private func deviceHasRemoved(_ notification: Notification) {
        guard let key = notification.userInfo?[SVProgressHUDStatusUserInfoKey] as? String,
              key.contains("removed")
        else { return }
        navigationController?.popViewController(animated: true)
    }
    
    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        if (targetSchemaModel != nil) {
            return 1
        }
        return device?.deviceModel.schemaArray?.count ?? 0
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let defaultCell = UITableViewCell(style: .default, reuseIdentifier: nil)
        guard let device = device else { return defaultCell }
        
        let schema = targetSchemaModel != nil ? targetSchemaModel! : device.deviceModel.schemaArray[indexPath.row]
        let dps = device.deviceModel.dps
        var isReadOnly = false
        let cellIdentifier = DeviceControlCell.cellIdentifier(with: schema)
        let cell = tableView.dequeueReusableCell(withIdentifier: cellIdentifier.rawValue)!

        if let mode = schema.mode { //mode 类型, rw: send and report | ro: only report (相当于只读)| wr: only send
            isReadOnly = mode == "ro"
        }
        
        switch cellIdentifier {
        case .switchCell:
            guard let cell = cell as? SwitchTableViewCell,
                  let dps = dps,
                  let dpID = schema.dpId,
                  let isOn = dps[dpID] as? Bool
            else { break }
            
            cell.label.text = schema.name
            cell.switchButton.isOn = isOn
            cell.isReadOnly = isReadOnly
            
            cell.switchAction = { [weak self] switchButton in
                guard let self = self,
                      let dpID = schema.dpId
                else { return }
                
                self.publishMessage(with: [dpID : switchButton.isOn])
            }

        case .sliderCell:
            guard let cell = cell as? SliderTableViewCell,
                  let dps = dps,
                  let dpID = schema.dpId,
                  let value = dps[dpID] as? Int
            else { break }
            
            cell.label.text = schema.name
            cell.detailLabel.text = String(value)
            cell.slider.minimumValue = Float(schema.property.min)
            cell.slider.maximumValue = Float(schema.property.max)
            cell.slider.isContinuous = false
            cell.slider.value = Float(value)
            cell.isReadOnly = isReadOnly
            
            cell.sliderAction = { [weak self] slider in
                guard let self = self,
                      let dpID = schema.dpId
                else { return }
                
                let step = Float(schema.property.step)
                let roundedValue = round(slider.value / step) * step
                self.publishMessage(with: [dpID : Int(roundedValue)])
            }
            
        case .enumCell: //tableviewcell 带 disclosure indicator
            guard let cell = cell as? EnumTableViewCell,
                  let dps = dps,
                  let dpID = schema.dpId,
                  let option = dps[dpID] as? String,
                  let range = schema.property.range as? [String]
            else { break }
            
            cell.label.text = schema.name
            cell.optionArray = range
            cell.currentOption = option
            cell.isReadOnly = isReadOnly
            
            cell.selectAction = { [weak self] option in
                guard let self = self else { return }
                self.publishMessage(with: [dpID : option])
            }
            
        case .stringCell: //tableviewcell 带 textfield、 button
            guard let cell = cell as? StringTableViewCell,
                  let dps = dps,
                  let dpID = schema.dpId
            else { break }
            
            let value = dps[dpID] ?? ""
            var text = ""
            
            //若 value 为整数, 处理值为整数的 string 格式;若不是,处理值为字符串或 None
            ((value as? Int) != nil) ? (text = String(value as! Int)) : (text = value as? String ?? "")
            
            cell.label.text = schema.name
            cell.textField.text = text
            cell.isReadOnly = isReadOnly
            
            cell.buttonAction = { [weak self] text in
                guard let self = self else { return }
                self.publishMessage(with: [dpID : text]) //下发 textField 最终内容
            }
            
        case .labelCell:
            guard let cell = cell as? LabelTableViewCell,
                  let dps = dps,
                  let dpID = schema.dpId,
                  let value = dps[dpID]
            else { break }
            
            var text = ""

            ((value as? Int) != nil) ? (text = String(value as! Int)) : (text = value as? String ?? "")
            
            cell.label.text = schema.name
            cell.detailLabel.text = text
        
        case .textviewCell:
            guard let cell = cell as? TextViewTableViewCell,
                  let dps = dps,
                  let dpID = schema.dpId,
                  let value = dps[dpID]
            else { break }
            
            cell.title.text = schema.name
            cell.textview.text = ""
            if let data = try? JSONSerialization.data(withJSONObject: value, options: []) as Data,
               let s = String.init(data: data, encoding: .utf8) {
                cell.textview.text = s
            }
        }

        return cell
    }

}
//监听设备状态的改变，如在线状态、移除通知、功能点状态改变等
extension DeviceControlTableViewController: ThingSmartDeviceDelegate {
    func deviceInfoUpdate(_ device: ThingSmartDevice) {
        print("DeviceControlTableViewController  当前设备信息更新，例如设备名称修改、设备在线离线状态等")
        detectDeviceAvailability()
        tableView.reloadData()
    }
    
    func deviceRemoved(_ device: ThingSmartDevice) {
        print("DeviceControlTableViewController 当前设备被移除")
        NotificationCenter.default.post(name: .deviceOffline, object: nil)
        SVProgressHUD.showError(withStatus: NSLocalizedString("The device has been removed.", comment: ""))
    }
    
    func device(_ device: ThingSmartDevice, dpsUpdate dps: [AnyHashable : Any]) {
        print("DeviceControlTableViewController 设备的 dps 状态发生变化,数据上报到云端，刷新界面 UI")
        detectDeviceAvailability()
        tableView.reloadData()
    }
}
