//
//  MatterViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import UIKit
import ThingSmartMatterKit
import ThingSmartActivatorKit

class MatterViewController: UIViewController {
    
    let tableView = UITableView()
    
    let headerTitleView = UIView()
    
    let titleLabel = UILabel()
    
    let statusView = UITextView()
    
    let scanButton = UIButton()
    
    var deviceList = Array<String>()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        loadUI()
    }
    
    func loadUI(){
        tableView.frame = self.view.bounds
        view.addSubview(tableView)
        tableView.delegate = self
        tableView.dataSource = self
        
        tableView.backgroundColor = .white
        
        headerTitleView.frame = CGRect(x: 0, y: 0, width: view.bounds.size.width, height: 200)
        tableView.tableHeaderView = headerTitleView
        
        headerTitleView.addSubview(titleLabel)
        titleLabel.text = "Matter"
        titleLabel.font = UIFont.systemFont(ofSize: 30)
        titleLabel.frame = CGRectMake(0, 0, view.bounds.size.width, 30)
        titleLabel.textColor = .black
        titleLabel.textAlignment = .center
        
        headerTitleView.addSubview(statusView)
        statusView.font =  UIFont.systemFont(ofSize: 16)
        statusView.text = "Wait for activator"
        statusView.frame = CGRect(x: 0, y: 30, width: view.bounds.size.width, height: 170)
        statusView.textColor = .black
        
        ThingSmartMatterActivator.sharedInstance().delegate = self //设置 matter 代理
    }
    
}

extension MatterViewController : UITableViewDelegate, UITableViewDataSource{
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        if(section == 0){
            return 1
        }else{
            return self.deviceList.count
        }
    }
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 2
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        var cell : UITableViewCell? = tableView.dequeueReusableCell(withIdentifier: "matterCell")
        if(cell == nil){
            cell = UITableViewCell.init(style: .default, reuseIdentifier: "matterCell")
        }
        cell?.textLabel?.font = UIFont.systemFont(ofSize: 20)
        if(indexPath.section == 0){
            cell?.textLabel?.text = NSLocalizedString("Scan Matter QRCode", comment: "")
        }else{
            cell?.textLabel?.text = self.deviceList[indexPath.row]
        }
        return cell!
    }
    
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        
        if(indexPath.section == 0){
            let vc = QRCodeScanerViewController()
            vc.scanCallback = { [weak self] codeStr in
                //Check the matter code is legal or no. Returns nil if it is invalid.
                let paylaod = ThingSmartMatterActivator.sharedInstance().parseSetupCode(codeStr ?? "")
                if let p = paylaod{
                    ThingSmartActivator.sharedInstance()?.getTokenWithHomeId(Home.current!.homeId) { token in
                        guard let t = token else {return}
                        print("MatterViewController 获取 token 成功")
                        
                        //提供必要的配网参数 builder
                        let builder = ThingSmartConnectDeviceBuilder.init(payload: p, spaceId: Home.current!.homeId, token: t)
                        
                        //MARK: 1.连接
                        //尝试进行 connect 连接后，会触发发现回调 matterDeviceDiscoveryed
                        ThingSmartMatterActivator.sharedInstance().connectDevice(with: builder, timeout: 200)
                        self?.statusView.text = "Start Activator"
                    } failure: { _ in

                    }
                }
            }
            navigationController?.pushViewController(vc, animated: true)
        }else{
            //do nothing
        }
    }
}

extension MatterViewController : ThingSmartMatterActivatorDelegate{
    func matterCommissioningStatusUpdate(_ status: ThingMatterStatus) {
        
    }
    
    func matterDeviceScannedAvailableWIFIList(_ list: [ThingSmartMatterNetworkScannedModel]) {
        
    }

    //MARK: 2.连接设备回调
    /// connectDevice(with: 回调,告知业务层配网类型和设备类型
    /// 连接后建立 PASE 会话, 若成功触发 matterCommissioningSessionEstablishmentComplete
    /// - Parameter isThingDevice : 是否是涂鸦设备
    /// - Parameter deviceType : 具体的设备类型
    func matterDeviceDiscoveryed(_ isThingDevice: Bool, deviceType: ThingSmartMatterDeviceType) {
        print("Discoveryed matter device")
    }
    
    func matterDevice(_ payload: ThingSmartMatterSetupPayload, activatorFailed error: Error) {
        let text = self.statusView.text
        self.statusView.text = "\(text ?? "")\nActivator Failed! error: \(error.localizedDescription)"
        
        scrollToBottom()
    }
    

    //MARK: 6.配网成功回调
    /// CASE 会话完成,配网成功上云后, 触发该回调
    /// - Parameter matterDevice:完整的 Matter 设备数据模型
    func matterDeviceActivatorSuccess(_ matterDevice: ThingSmartMatterDeviceModel) {
        let text = self.statusView.text
        self.statusView.text = "\(text ?? "")\nActivator Success!"
        self.deviceList.append(matterDevice.deviceModel?.name ?? "")
        self.tableView.reloadData()
        
        scrollToBottom()
    }
    
    func matterDeviceAttestation(_ device: UnsafeMutableRawPointer, error: Error) {
        let alertControl = UIAlertController(title: "Attestation", message: "Should Continue?", preferredStyle: .alert)
        let alertAction = UIAlertAction(title: "Continue", style: .default) { _ in
            ThingSmartMatterActivator.sharedInstance().continueCommissioningDevice(device, ignoreAttestationFailure: true, error: nil) //忽略未认证信息,并继续配网

        }
        let canAction = UIAlertAction(title: "Cancel", style: .cancel) { _ in
            ThingSmartMatterActivator.sharedInstance().continueCommissioningDevice(device, ignoreAttestationFailure: false, error: nil)//不忽略未认证信息,并继续配网
        }
        
        alertControl.addAction(alertAction)
        alertControl.addAction(canAction)
        
        self.present(alertControl, animated: true)
        
    }
    
    /// 若配网时使用了 MatterSupport 流程（第三方 Wi-Fi、三方 Thread 设备),在 MatterSupport 流程完成后，将触发该方法回调，并自动继续涂鸦配网流程
    /// - Parameter gatewayName: MatterSupport 所使用的 OTBR 网络所属的涂鸦网关 ID，如为空，说明使用的是 HomePod 或 Apple TV
    func matterSupportComplete(_ gatewayName: String) {
        let text = self.statusView.text
        self.statusView.text = "\(text ?? "")\nMatter Suppport Complete!"
        
        scrollToBottom()
    }
    
    //MARK: 3.配网链路回调
    //会根据设备广播包自动选择最合适的配网链路(0涂鸦链路 1第三方 Matter 设备 2分享配网链路)，并回调给业务层进行相应的页面显示
    //需要配置好 Matter Extension Target，否则会配网失败
    func matterRoutingComplete(_ routingType: ThingMatterRoutingType) {
        print("route complete!")
        scrollToBottom()
    }
    
    //MARK: 4.PASE 会话建立成功回调
    //若是涂鸦 Matter 设备,由于子设备依赖 Matter 网关提供的 OTBR 网络进行配网,在建立 CASE 会话前,需要指定网关 ID,可通过参数 deviceModel 提取网关 ID (gatewayId)
    /// - Parameter deviceModel: PASE 会话阶段完成后回调的 Matter 设备模型，可用于部分数据提取(如网关 ID: gatewayId)
    func matterCommissioningSessionEstablishmentComplete(_ deviceModel: ThingSmartMatterDeviceModel) {
        if(deviceModel.matterType == .WIFI){
            //model: 组装的 CASE 会话参数模型
            let model = ThingSmartMatterCommissionModel.init(sSid: "Your WIFI Name", password: "Your WIFI Password")
            
            //MARK: 5.调试
            //为建立完整的 CASE 会话,涂鸦 Matter 设备还需要提供必要的参数( ThingSmartMatterCommissionModel )，组装完毕后再进行调试
            ThingSmartMatterActivator.sharedInstance().commissionDevice(deviceModel, commissionModel: model)
        }
        let text = self.statusView.text
        self.statusView.text = "\(text ?? "")\nMatter Pase Complete!"
        
        scrollToBottom()
    }
    
    //5.5.0才有
//    func matterCommissioningStatusUpdate(_ status: ThingMatterStatus) {
//        let text = self.statusView.text
//        switch status{
//        case .discovery:
//            self.statusView.text = "\(text ?? "")\nMatter Discoverying!"
//            break
//
//        case .connecting:
//            self.statusView.text = "\(text ?? "")\nMatter Connectting!"
//            break
//        case .nocSigning:
//            self.statusView.text = "\(text ?? "")\nMatter Noc Signing!"
//            break
//        case .commissioning:
//            self.statusView.text = "\(text ?? "")\nMatter Commissioning!"
//            break
//        case .activing:
//            self.statusView.text = "\(text ?? "")\nMatter Activing!"
//            break
//        @unknown default:
//            break
//        }
//
//        scrollToBottom()
//    }
    
    //UITextView 自动滚动到最后一行
    private func scrollToBottom(){
        self.statusView.layoutManager.allowsNonContiguousLayout = false //不允许不连续的布局,防止重新设置内容后,重新滚动
        
        //滚动文本视图直到指定范围内的文本可见
        self.statusView.scrollRangeToVisible(NSRange.init(location: self.statusView.text?.count ?? 0 , length: 1))
    }
}
