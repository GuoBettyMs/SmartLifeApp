//
//  BEHomeDetailViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BEHomeDetailViewController : UITableViewController {
    var homeModel : ThingSmartHomeModel?

    @IBOutlet weak var homeIdLabel : UILabel!
    @IBOutlet weak var homeNameLabel : UILabel!
    @IBOutlet weak var homeCityLabel : UILabel!
    @IBOutlet weak var weatherLabel : UILabel!
    @IBOutlet weak var tempLabel : UILabel!
    
    override func viewDidLoad() {
        ThingSmartFamilyBiz.sharedInstance().addObserver(self) //注册监听，接收家庭事件的回调
    }
    
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        setupUI()
    }
    

    /// 点击故事版中右侧的导航栏按钮 (即 bar button item),根据指定标识符 identifier 的 segue 跳转到指定视图控制器 BEEditHomeViewController
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "BEShowEditHome" else { return }//检查 segue 的 identifier
        //确认是跳转到 BEEditHomeViewController
        let destinationVC = segue.destination as! BEEditHomeViewController
        destinationVC.home = homeModel//通过协议 ThingSmartFamilyBizDelegate 获取 homeModel,homeModel 赋值给目标视图控制器的 home 属性
    }
    
    func setupUI() {
        homeIdLabel.text = String(homeModel!.homeId)
        homeNameLabel.text = homeModel?.name ?? ""
        homeCityLabel.text = homeModel?.geoName ?? ""
        
        ThingSmartFamilyBiz.sharedInstance().getHomeWeatherSketch(withHomeId: homeModel!.homeId) { [weak self] weather in
            guard let self = self else { return }
            print("BEHomeDetailViewController 获取家庭所在地区天气粗略信息成功, 天气: \(weather)")
            
            self.weatherLabel.text = weather.condition
            self.tempLabel.text = weather.temp
        } failure: {[weak self] error in
            guard let self = self else { return }
            let errorMessage = error?.localizedDescription ?? ""
            Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Fetch Weather", comment: ""), message: errorMessage)
        }
    }
}

//MARK: - 家庭管理类的代理协议 ThingSmartFamilyBizDelegate
extension BEHomeDetailViewController : ThingSmartFamilyBizDelegate {
    /**
    * The delegate of home update information, such as the name.
    *
    * @param familyBiz    Instance of family management
    * @param homeModel    The home model.
    */
    func familyBiz(_ familyBiz: ThingSmartFamilyBiz, didUpdateHome homeModel: ThingSmartHomeModel) {
        self.homeModel = homeModel
        setupUI()
    }
}
