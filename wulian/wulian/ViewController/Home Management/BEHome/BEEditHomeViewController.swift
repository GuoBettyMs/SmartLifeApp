//
//  BEEditHomeViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BEEditHomeViewController : UITableViewController {
    
    @IBOutlet weak var nameLabel : UITextField!
    @IBOutlet weak var cityLabel : UITextField!
    @IBOutlet weak var latitudeLabel : UITextField!
    @IBOutlet weak var longitudeLabel : UITextField!
    
    var home : ThingSmartHomeModel?
    
    override func viewWillAppear(_ animated: Bool) {
        if let model = home {
            nameLabel.text = model.name
            cityLabel.text = model.geoName
            latitudeLabel.text = "\(model.latitude)"
            longitudeLabel.text = "\(model.longitude)"
        } else {
            Alert.showBasicAlert(on: self, with: "No Home", message: "")
        }
    }
    
    /// 点击故事版中右侧的导航栏按钮 (即 bar button item),进行保存
    @IBAction func tapSave() {
        let requestModel = ThingSmartFamilyRequestModel()//创建家庭请求参数模型 requestModel
        requestModel.name = nameLabel.text ?? ""
        requestModel.geoName = cityLabel.text ?? ""
        requestModel.latitude = Double(latitudeLabel.text ?? "") ?? 0
        requestModel.longitude = Double(longitudeLabel.text ?? "") ?? 0
        
        if let model = home {
            ThingSmartFamilyBiz.sharedInstance().updateFamily(withHomeId: model.homeId, model: requestModel) {
                print("BEEditHomeViewController 更新家庭信息成功")
                let action = UIAlertAction(title: NSLocalizedString("OK", comment: ""), style: .default) { [weak self] _ in
                    guard let self = self else { return }
                    self.navigationController?.popViewController(animated: true)
                }
                
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Success", comment: ""), message: NSLocalizedString("Update Home", comment: ""), actions: [action])
            } failure: {[weak self] error in
                guard let self = self else { return }
                let errorMessage = error?.localizedDescription ?? ""
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to update home", comment: ""), message: errorMessage)
            }
        }
    }
}
