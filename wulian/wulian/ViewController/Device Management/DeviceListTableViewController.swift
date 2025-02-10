//
//  DeviceListTableViewController.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit
import ThingSmartDeviceKit
import ThingSmartDeviceCoreKit

class DeviceListTableViewController: UITableViewController, CardCellDelegate {
    // MARK: - Property
    private var home: ThingSmartHome?
    private var viewModelList : [CardCellViewModel]!
    
    // MARK: - Lifecycle
    override func viewDidLoad() {
        super.viewDidLoad()
        self.tableView.allowsSelection = false
        self.tableView.separatorStyle = .none
        self.tableView.sectionFooterHeight = 15.0
        self.tableView.sectionHeaderHeight = CGFLOAT_MIN

        viewModelList = []
        
        if Home.current != nil {
            home = ThingSmartHome(homeId: Home.current!.homeId)
            home?.delegate = self
            updateHomeDetail() //拉取家庭详细信息,得到 deviceList
        }
    }

    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {

        viewModelList.removeAll()
        
        home?.deviceList.forEach({ deviceModel in
            let viewModel = CardCellViewModel()
            viewModel.dpParser = ThingSmartDpParser.create(withTargetInfo: deviceModel) //创建功能点解析器,快捷获取功能点
            viewModel.device = ThingSmartDevice(deviceId: deviceModel.devId)
            viewModel.name = deviceModel.name
            viewModel.icon = deviceModel.iconUrl
            viewModelList.append(viewModel)
        })

        return viewModelList.count
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return 1
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        guard let cell = tableView.dequeueReusableCell(withIdentifier: "card-cell") as? Cardcell else { return UITableViewCell(style: .default, reuseIdentifier: nil)}
        cell.cellDelegate = self
        let viewModel = viewModelList[indexPath.section]
        cell.update(viewModel: viewModel)
        return cell
    }

    override func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        let viewModel = viewModelList[indexPath.section]
        return Cardcell.cellHeight(viewModel: viewModel)
    }

//    override func tableView(_ tableView: UITableView, viewForFooterInSection section: Int) -> UIView? {
//        let rtn = UIView()
//        rtn.backgroundColor = UIColor.red
//        return rtn
//    }
//
//    override func tableView(_ tableView: UITableView, heightForFooterInSection section: Int) -> CGFloat {
//        return 50.0
//    }
//
    
    // MARK: - Private method
    private func updateHomeDetail() {
        home?.getDataWithSuccess({ (model) in
            print("DeviceListTableViewController 从云端获拉取家庭数据成功")
            self.tableView.reloadData() //刷新 home 的数据，然后更新界面
        }, failure: { [weak self] (error) in
            guard let self = self else { return }
            let errorMessage = error?.localizedDescription ?? ""
            Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Fetch Home", comment: ""), message: errorMessage)
        })
    }
    

    /// 跳转到指定 ThingModelDevice ViewController
    private func jumpThingLinkDeviceControl(_ vc: ThingLinkDeviceControlController, device: ThingSmartDevice) {
        let goThingLinkControl = { () -> Void in
            vc.device = device
            self.navigationController?.pushViewController(vc, animated: true)
        }
        
        if let _ = device.deviceModel.thingModel {
            print("从云端获得 model 并更新缓存")
            goThingLinkControl()
        } else {
            SVProgressHUD.show(withStatus: NSLocalizedString("Fetching Thing Model", comment: ""))
            device.getThingModel { _ in
                print("从云端获得 model 并更新缓存")
                SVProgressHUD.dismiss()
                goThingLinkControl()
            } failure: { error in
                SVProgressHUD.showError(withStatus: NSLocalizedString("Failed to Fetch Thing Model", comment: ""))
            }
        }
    }
    
    private func jumpNormalDeviceControl(_ vc: DeviceControlTableViewController, device: ThingSmartDevice) {
        //子视图和父视图共享同一个数据源 device，当子视图刷新数据时，父视图的数据也会随之更新，从而触发父视图的代理方法 dpsUpdate
        vc.device = device
        navigationController?.pushViewController(vc, animated: true)
    }

    // MARK: - CardCellDelegate
    
    //tableView 单元格点击事件
    func clickCardView(viewModel: CardCellViewModel) {
        jumpDeviceDetail(viewModel: viewModel, smartDp: nil)
    }
    
    //tableViewcell 快捷开关(常用功能)事件
    func clickSwitchView(viewModel: CardCellViewModel, dps:Dictionary<AnyHashable, Any>) {
        
        //假如 viewModel.device != nil, viewModel.group != nil ,只会执行 if 执行块
        if (viewModel.device != nil) {
            viewModel.device!.publishDps(dps, success: {

                print("DeviceListTableViewController device 下发(接收云端的控制指令)成功")//状态上报通过 deviceDpsUpdate 方法回调

            }, failure: { (error) in
                self.tableView.reloadData();
                let errorMessage = error?.localizedDescription ?? ""
                SVProgressHUD.showError(withStatus: errorMessage)
            })
        } else if (viewModel.group != nil) {
            viewModel.group!.publishDps(dps, success: {
                print("DeviceListTableViewController group 下发(接收云端的控制指令)成功")//状态上报通过 deviceDpsUpdate 方法回调
            }, failure: { (error) in
                self.tableView.reloadData();
                let errorMessage = error?.localizedDescription ?? ""
                SVProgressHUD.showError(withStatus: errorMessage)
            })
        }
    }
    
    //MARK: 常用功能的单独点击事件
    func clickOperableDpView(viewModel: CardCellViewModel, smartDp: ThingSmartDp) {
        jumpDeviceDetail(viewModel: viewModel, smartDp: smartDp)
    }
    
    //MARK: 设备全部功能控制面板或单独功能点控制面板的跳转事件
    private func jumpDeviceDetail(viewModel: CardCellViewModel, smartDp: ThingSmartDp?) {
        guard let device = viewModel.device else { return }
        
        let storyboard = UIStoryboard(name: "DeviceList", bundle: nil)
        let isSupportThingModel = device.deviceModel.isSupportThingModelDevice()
        let identifier = isSupportThingModel ? "ThingLinkDeviceControlController" : "DeviceControlTableViewController"
        
        let vc = storyboard.instantiateViewController(withIdentifier: identifier)
        if isSupportThingModel {
            jumpThingLinkDeviceControl(vc as! ThingLinkDeviceControlController, device: device)
        } else {
            let deviceControlTableViewController = vc as! DeviceControlTableViewController
            deviceControlTableViewController.targetSchemaModel = smartDp?.schemaModel //指定的功能点
            jumpNormalDeviceControl(deviceControlTableViewController, device: device)
        }
    }
}

//MARK: - ThingSmartHome Delegate

extension DeviceListTableViewController: ThingSmartHomeDelegate{
    func homeDidUpdateInfo(_ home: ThingSmartHome!) {
        tableView.reloadData()
    }
    
    func home(_ home: ThingSmartHome!, didAddDeivice device: ThingSmartDeviceModel!) {
        tableView.reloadData()
    }
    
    func home(_ home: ThingSmartHome!, didRemoveDeivice devId: String!) {
        tableView.reloadData()
    }
    
    func home(_ home: ThingSmartHome!, deviceInfoUpdate device: ThingSmartDeviceModel!) {
        print("DeviceListTableViewController  当前设备信息更新，例如设备名称修改、设备在线离线状态等")
        tableView.reloadData()
    }
    
    func home(_ home: ThingSmartHome!, device: ThingSmartDeviceModel!, dpsUpdate dps: [AnyHashable : Any]!) {
        print("DeviceListTableViewController 设备的 dps 状态发生变化,数据上报到云端，刷新界面 UI")
        tableView.reloadData()
    }
} 
