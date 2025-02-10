//
//  BECreateHomeViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import CoreLocation
import ThingSmartFamilyBizKit

class BECreateHomeViewController : UITableViewController {
    @IBOutlet weak var homeName: UITextField!
    @IBOutlet weak var homeCity:UITextField!
    
    var latitude: CLLocationDegrees = 0
    var longitude: CLLocationDegrees = 0
    
    let locationManager = CLLocationManager()
    
    @IBAction func createHome(_ sender: Any) {
        let homeName = homeName.text ?? ""
        let geoName = homeCity.text ?? ""
        
        //创建家庭请求参数模型 requestModel
        let requestModel = ThingSmartFamilyRequestModel()
        requestModel.name = homeName
        requestModel.geoName = geoName //家庭地址
        requestModel.latitude = latitude //家庭地址纬度
        requestModel.longitude = longitude //家庭地址经度
        
        //家庭管理类 ThingSmartFamilyBiz
        ThingSmartFamilyBiz.sharedInstance().addFamily(with: requestModel) {[weak self] homeId in
            guard let self = self else { return }
            print("BECreateHomeViewController 创建家庭成功,家庭 ID: \(homeId)")
            let action = UIAlertAction(title: NSLocalizedString("OK", comment: ""), style: .default) { [weak self] _ in
                guard let self = self else { return }
                self.navigationController?.popViewController(animated: true)
            }
            
            Alert.showBasicAlert(on: self, with: NSLocalizedString("Success", comment: ""), message: NSLocalizedString("Successfully added new home.", comment: ""), actions: [action])
        } failure: {[weak self] error in
            guard let self = self else { return }
            let errorMessage = error?.localizedDescription ?? ""
            Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Add New Home", comment: ""), message: errorMessage)
        }
    }
    
    func autoGetCity() {
        ThingSmartFamilyBiz.sharedInstance().getCityInfo(latitude, longitude: longitude) {[weak self] cityModel in
            print("BECreateHomeViewController 获取家庭城市信息成功")
            guard let self = self else {return}
            self.homeCity.text = (cityModel.province ?? "") + " " + (cityModel.city ?? "") + " " + (cityModel.area ?? "")
        } failure: {[weak self] error in
            guard let self = self else {return}
            Alert.showBasicAlert(on: self, with: "Failed to get city info", message: "")
        }
    }
    
    override func viewDidLoad() {
        locationManager.requestWhenInUseAuthorization() //申请地址权限来获取 Wi-Fi 的名称
        
        if CLLocationManager.locationServicesEnabled() {
            //app 开启了地址权限
            locationManager.delegate = self
            locationManager.desiredAccuracy = kCLLocationAccuracyBest //地址精准度
            locationManager.startUpdatingLocation() //开始更新地址
        } else {
            Alert.showBasicAlert(on: self, with: NSLocalizedString("Cannot Access Location", comment: ""), message: NSLocalizedString("Please make sure if the location access is enabled for the app.", comment: ""))
        }
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if indexPath.section == 0, indexPath.row == 2 {
            autoGetCity()
        }
    }
}

extension BECreateHomeViewController : CLLocationManagerDelegate {
    //更新地址
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        guard let location = manager.location?.coordinate else { return }
        longitude = location.longitude
        latitude = location.latitude
    }
}
