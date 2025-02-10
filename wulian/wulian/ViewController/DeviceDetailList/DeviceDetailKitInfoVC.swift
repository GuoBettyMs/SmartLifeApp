//
//  DeviceDetailKitInfoVC.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import UIKit

class DeviceDetailKitInfoVC: UITableViewController {

    var deviceId: String
    var manager: ThingDeviceInfoManager //设备消息管理类
    var items: [CustomMenuModel] = []
    
    init(deviceId: String) {
        self.deviceId = deviceId
        self.manager = ThingDeviceInfoManager(deviceId: deviceId)
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.tableView.register(UITableViewCell.self, forCellReuseIdentifier: "DeviceDetailListViewControllerReuseIdentifier")
        self.manager.add(self)
        self.loadData()
        
    }
    
    func loadData() {
        SVProgressHUD.show()
        self.manager.fetchDataSuccess { [weak self] info, hardware in
            print("DeviceDetailKitInfoVC 异步获取设备信息，通过网络请求拉取设备信息数据成功")
            var list = [CustomMenuModel]()
            list.append(CustomMenuModel(title: "devId", detail: info.devId))
            list.append(CustomMenuModel(title: "iccid", detail: info.iccid ?? "")) //设备的 ICCID，物联网卡（SIM 卡）的唯一 ID ，仅 CAT.1 类设备有此数据
            list.append(CustomMenuModel(title: "netStrength", detail: info.netStrength ?? "")) //设备信号强度。
            list.append(CustomMenuModel(title: "lanIp", detail: info.lanIp ?? "")) //设备本地 IP 地址
            list.append(CustomMenuModel(title: "ip", detail: info.ip ?? "")) //设备 IP 地址
            list.append(CustomMenuModel(title: "mac", detail: info.mac ?? "")) //设备 MAC 地址
            list.append(CustomMenuModel(title: "timezone", detail: info.timezone ?? "")) //设备时区
            list.append(CustomMenuModel(title: "channel", detail: info.channel ?? "")) //信道号，仅 Zigbee 网关有此数据
            list.append(CustomMenuModel(title: "rsrp", detail: info.rsrp != nil ? "\(info.rsrp!)" : "")) //设备的 RSRP 值，仅 Cat.1 类设备有此数据，用于表示该设备网络的信号强度
            list.append(CustomMenuModel(title: "wifiSignal", detail: info.wifiSignal != nil ? "\(info.wifiSignal!)" : "")) //设备的 Wi-Fi 信号强度
            list.append(CustomMenuModel(title: "homekitCode", detail: info.homekitCode ?? "")) //HOMEKIT 验证码
            list.append(CustomMenuModel(title: "connectAbility", detail: "\(info.connectAbility)")) //设备连接方式
            list.append(CustomMenuModel(title: "vendorName", detail: info.vendorName ?? ""))//设备厂商名称，仅三方 Matter 设备展示
            self?.items = list
            self?.tableView.reloadData()
            SVProgressHUD.dismiss()
        } failure: { e in
            SVProgressHUD.dismiss()
        }

    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return items.count
    }

    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = UITableViewCell(style: .value1, reuseIdentifier: "DeviceDetailListViewControllerReuseIdentifier")
        cell.textLabel?.text = self.items[indexPath.row].title
        cell.detailTextLabel?.text = self.items[indexPath.row].detail
        return cell
    }

}

extension DeviceDetailKitInfoVC: ThingDeviceInfoManagerListener {
    //监听 Wi-Fi 信号的变化
    func deviceInfoManager(_ manager: ThingDeviceInfoManager, wifiSignalDidUpdate wifiSignal: Int32) {
        let item = self.items.first { item in
            return item.title == "wifiSignal"
        }
        item?.detail = "\(wifiSignal)"
        self.tableView.reloadData()
    }
}
