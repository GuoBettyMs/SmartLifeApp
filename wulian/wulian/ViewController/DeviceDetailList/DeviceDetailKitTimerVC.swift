//
//  DeviceDetailKitTimerVC.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import UIKit


class DeviceDetailKitTimerVC: UITableViewController {

    var bizId: String //业务类型为设备，则是设备 ID。业务类型为群组，则是群组 ID
    var isGroup: Bool
    var manager: ThingDeviceTimerManager
    
    var items: [ThingTimerModel] = [] //定时模型


    init(bizId: String, isGroup: Bool) {
        self.bizId = bizId
        self.isGroup = isGroup
        self.manager = ThingDeviceTimerManager()
        super.init(nibName: nil, bundle: nil)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    func setUpNavigationItem() {
        let title = "添加"
        self.navigationItem.rightBarButtonItem = UIBarButtonItem(title: title, style: .plain, target: self, action: #selector(add))
    }
    
    @objc func add() {
        SVProgressHUD.show()
        
        var dps: [AnyHashable: Any] = ["1": true]

        /// 添加定时参数 ThingDeviceTimerAddParams
        /// - Parameter bizType: 业务类型
        ///- Parameter bizId: 业务类型为设备，则是设备 ID。业务类型为群组，则是群组 ID
        ///- Parameter category: 分类
        ///- Parameter loops: 循环次数，格式为 0000000, 从左至右依次表示周日、周一、周二、周三、周四、周五、周六; 每周一循环该任务，则取值为 0100000。0000000 表示只执行一次，1111111 表示每天执行
        ///- Parameter dps: 定时执行的 DP
        /// - Parameter aliasName: 定时别名
        /// - Parameter isAppPush: 定时执行时是否发送 App 推送
        /// - Parameter status: 定时开启状态。
        let params = ThingDeviceTimerAddParams(bizType: isGroup ? .group : .device, bizId: bizId, category: "", loops: "0000000", time: "12:30", dps: dps, aliasName: "新加的定时", isAppPush: true, status: true)
        self.manager.addTimer(params) { [weak self] timerId in
            print("DeviceDetailKitTimerVC 添加新定时成功")
            self?.getTimerList(success: { list in
                print("DeviceDetailKitTimerVC 查询定时列表成功")
                
                self?.items = list
                self?.tableView.reloadData()
                SVProgressHUD.dismiss()
            }, failure: { e in
                SVProgressHUD.dismiss()
            })
        } failure: { e in
            SVProgressHUD.dismiss()
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.tableView.register(UITableViewCell.self, forCellReuseIdentifier: "DeviceDetailListViewControllerReuseIdentifier")
        self.setUpNavigationItem()
        
        SVProgressHUD.show()
        self.getTimerList { [weak self] list in
            print("DeviceDetailKitTimerVC 查询定时列表成功")
            self?.items = list
            self?.tableView.reloadData()
            SVProgressHUD.dismiss()

            //通过 isDeviceCanSync: 接口判断是否支持同步
            guard let self = self, self.isGroup == false && self.manager.isDeviceCanSync(bizId) else {
                return
            }
            manager.syncTimers(list, toDevice: bizId) {
                //仅蓝牙设备支持
                print("DeviceDetailKitTimerVC 定时列表数据同步给设备成功")
            } failure: { e in
                
            }

        } failure: { e in
            SVProgressHUD.dismiss()
        }
        
    }
    
    func getTimerList(success: @escaping ([ThingTimerModel]) -> Void, failure: @escaping (Error) -> Void) {
        let params = ThingDeviceTimerGetParams(bizType: isGroup ? .group : .device, bizId: bizId, category: "")
        self.manager.getTimers(params, success: success, failure: failure)
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return items.count
    }

    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = UITableViewCell(style: .value1, reuseIdentifier: "DeviceDetailListViewControllerReuseIdentifier")
        cell.textLabel?.text = self.items[indexPath.row].time
        cell.detailTextLabel?.text = self.items[indexPath.row].status ? "on" : "off"
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        self.handle(index: indexPath.row)
    }

    func handle(index: Int) {
        if (index >= self.items.count) {return}

        let alert = UIAlertController(title: nil, message: nil, preferredStyle: .actionSheet)
        let timer = self.items[index]
        
        alert.addAction(UIAlertAction(title: "删除", style: .default, handler: { action in
            
            //ThingDeviceTimerRemoveParams 删除定时参数
            let params = ThingDeviceTimerRemoveParams(timerId: timer.timerId, bizType: self.isGroup ? .group : .device, bizId: self.bizId)
            
            SVProgressHUD.show()

            self.manager.removeTimer(params) { [weak self] in
                print("DeviceDetailKitTimerVC 删除定时成功")
                self?.getTimerList { list in
                    print("DeviceDetailKitTimerVC 查询定时列表成功")
                    self?.items = list
                    self?.tableView.reloadData()
                    SVProgressHUD.dismiss()
                } failure: { e in
                    SVProgressHUD.dismiss()
                }
            } failure: { e in
                SVProgressHUD.dismiss()
            }
        }))
        
        alert.addAction(UIAlertAction(title: "更新", style: .default, handler: { action in
            //ThingDeviceTimerRemoveParams 更新定时参数
            let params = ThingDeviceTimerUpdateParams(timerId: timer.timerId, bizType: self.isGroup ? .group : .device, bizId: self.bizId, loops: timer.loops, time: timer.time, dps: timer.dps, aliasName: timer.aliasName, isAppPush: !timer.isAppPush, status: !timer.status)
            
            SVProgressHUD.show()

            self.manager.updateTimer(params) { [weak self] in
                print("DeviceDetailKitTimerVC 更新定时成功")
                self?.getTimerList { list in
                    print("DeviceDetailKitTimerVC 查询定时列表成功")
                    self?.items = list
                    self?.tableView.reloadData()
                    SVProgressHUD.dismiss()
                } failure: { e in
                    SVProgressHUD.dismiss()
                }
            } failure: { e in
                SVProgressHUD.dismiss()
            }
        }))
        
        alert.addAction(UIAlertAction(title: "更新状态", style: .default, handler: { action in
            //ThingDeviceTimerStatusUpdateParams 更新定时状态参数
            let params = ThingDeviceTimerStatusUpdateParams(timerId: timer.timerId, bizType: self.isGroup ? .group : .device, bizId: self.bizId, loops: timer.loops, time: timer.time, dps: timer.dps, aliasName: timer.aliasName, isAppPush: timer.isAppPush, status: !timer.status)
            
            SVProgressHUD.show()

            self.manager.updateTimerStatus(params) { [weak self] in
                print("DeviceDetailKitTimerVC 更新定时状态成功")
                self?.getTimerList { list in
                    print("DeviceDetailKitTimerVC 查询定时列表成功")
                    self?.items = list
                    self?.tableView.reloadData()
                    SVProgressHUD.dismiss()
                } failure: { e in
                    SVProgressHUD.dismiss()
                }
            } failure: { e in
                SVProgressHUD.dismiss()
            }
        }))
        
        alert.addAction(UIAlertAction(title: "取消", style: .cancel))
        self.present(alert, animated: true)
    }
}

