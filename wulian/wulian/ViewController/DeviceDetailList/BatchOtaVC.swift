//
//  BatchOtaVC.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2024 Tuya Inc. (https://developer.tuya.com/)

import UIKit

class BatchOtaVC: UITableViewController {
    
    var home: ThingSmartHome
    
    init(home: ThingSmartHome) {
        self.home = home
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        self.navigationController?.navigationBar.prefersLargeTitles = false
        
        if #available(iOS 13.0, *) {
            let appearance = UINavigationBarAppearance()
            appearance.configureWithOpaqueBackground()
            appearance.backgroundColor = UIColor.white
            self.navigationController?.navigationBar.standardAppearance = appearance;
            self.navigationController?.navigationBar.scrollEdgeAppearance = self.navigationController?.navigationBar.standardAppearance
        } else {
            // Fallback on earlier versions
        }
        
        
        
        self.tableView.register(UITableViewCell.self, forCellReuseIdentifier: "cell")
        self.title = "batch ota"
        
        self.loadData()
    }

    var infos: [ThingUpgradeListInfo] = [] //需要升级的设备固件信息
    var devices: [String: ThingSmartDevice] = [:] //需要升级的设备
    var status: [String: String] = [:] //需要升级的设备状态
    
    func loadData() {
        SVProgressHUD.show()
        //ThingUpgradeListManager 批量 OTA 管理类
        ThingUpgradeListManager.sharedInstance().getUpgradeDevices(inFamily: self.home.homeId) { infos in
            print("BatchOtaVC 查询家庭下需要进行 OTA 升级的设备及固件信息成功")
            SVProgressHUD.dismiss()
            self.infos = infos

            infos.forEach { info in
                let device = ThingSmartDevice(deviceId: info.devId) //新建需要升级的设备实例,若当前用户没有该设备,返回 nil
                device?.delegate = self
                if (device != nil) {
                    //将 id 号为 devId 的设备更改为 device
                    self.devices.updateValue(device!, forKey: info.devId)
                }
                
                let upgradeInfo = ThingUpgradeInfo(firmwares: info.upgradeList)
                if (upgradeInfo.matchUpgradeCondition == false) {
                    self.status.updateValue("can't grade", forKey: info.devId)//将 id 号为 devId 的设备升级状态更改为 “can't grade”
                }else if (upgradeInfo.isUpgrading == false) {
                    self.status.updateValue("need upgrade", forKey: info.devId)//将 id 号为 devId 的设备升级状态更改为 “need upgrade”
                }else{
                    self.status.updateValue("upgrading", forKey: info.devId)//将 id 号为 devId 的设备升级状态更改为 “upgrading”
                }
            }
            
            self.tableView.reloadData()
        } failure: { error in
            SVProgressHUD.dismiss()
            SVProgressHUD.showError(withStatus: "error")
        }
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return self.infos.count
    }

    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = UITableViewCell(style: .value1, reuseIdentifier: "cell")
        let info = self.infos[indexPath.row]
        cell.textLabel?.text = info.name
        
        cell.detailTextLabel?.text = self.status[info.devId]
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        let info = self.infos[indexPath.row]
        
        let upgradeInfo = ThingUpgradeInfo(firmwares: info.upgradeList)
        if (upgradeInfo.matchUpgradeCondition == false) {return}

        if (self.status[info.devId] != nil && self.status[info.devId]! == "upgrading") {return}

        let device = self.devices[info.devId]
        device?.startFirmwareUpgrade(info.upgradeList) //发起升级
    }
    
}

extension BatchOtaVC: ThingSmartDeviceDelegate {
    //监听升级状态变化
    func device(_ device: ThingSmartDevice, otaUpdateStatusChanged statusModel: ThingSmartFirmwareUpgradeStatusModel) {
        if (statusModel.upgradeStatus == ThingSmartDeviceUpgradeStatusTimeout || statusModel.upgradeStatus == ThingSmartDeviceUpgradeStatusFailure) {
            self.status.updateValue("fail", forKey: device.deviceModel.devId) //将 id 号为 devId 的设备升级状态更改为 “fail”
        }else{
            self.status.updateValue("upgrading", forKey: device.deviceModel.devId)//将 id 号为 devId 的设备升级状态更改为 “upgrading”
        }
        self.tableView.reloadData()
    }
    
}
