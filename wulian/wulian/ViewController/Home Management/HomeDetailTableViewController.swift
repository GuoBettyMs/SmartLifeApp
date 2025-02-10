//
//  HomeDetailTableViewController.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit
import ThingSmartDeviceKit

class HomeDetailTableViewController: UITableViewController {
    
    // MARK: - IBOutlet
    @IBOutlet weak var homeIDLabel: UILabel!
    @IBOutlet weak var homeNameLabel: UILabel!
    @IBOutlet weak var cityLabel: UILabel!
    @IBOutlet weak var weatherConditionLabel: UILabel!
    @IBOutlet weak var temperatureLabel: UILabel!
    @IBOutlet weak var dismissButton: UIButton!
    
    
    // MARK: - Property
    var homeModel: ThingSmartHomeModel?
    var home: ThingSmartHome?

    //MARK: - Lifecycle
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        guard let model = homeModel else { return }
        
        home = ThingSmartHome(homeId: model.homeId)
        
        homeIDLabel.text = String(model.homeId)
        homeNameLabel.text = model.name
        cityLabel.text = model.geoName
        
        home?.getWeatherSketch(success: { [weak self] (weatherModel) in
            guard let self = self else { return }
            print("HomeDetailTableViewController 获取天气状况成功")
            self.weatherConditionLabel.text = weatherModel?.condition
            self.temperatureLabel.text = weatherModel?.temp
        }) { [weak self] error in
            guard let self = self else { return }
            let errorMessage = error?.localizedDescription ?? ""
            Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Fetch Weather", comment: ""), message: errorMessage)
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
    }

    // MARK: - IBAction
    @IBAction func dismiss(_ sender: UIButton) {
        let alertVC = UIAlertController(title: NSLocalizedString("Dismiss This Home", comment: ""), message: NSLocalizedString("You're going to dismiss this home.", comment: ""), preferredStyle: .actionSheet)
        let action = UIAlertAction(title: NSLocalizedString("Dismiss", comment: "Dismiss a home."), style: .destructive) { [weak self] (action) in
            guard let self = self else { return }
            
            self.home?.dismiss(success: {
                print("HomeDetailTableViewController 忽略该家庭成功")
                Home.current = nil
                self.navigationController?.popViewController(animated: true)
            }, failure: { [weak self] error in
                guard let self = self else { return }
                let errorMessage = error?.localizedDescription ?? ""
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Dismiss", comment: "Failed to dismiss a home."), message: errorMessage)
            })
        }
        
        let cancelAction = UIAlertAction(title: NSLocalizedString("Cancel", comment: ""), style: .cancel, handler: nil)
        alertVC.addAction(action)
        alertVC.addAction(cancelAction)
        
        alertVC.popoverPresentationController?.sourceView = sender
        
        self.present(alertVC, animated: true, completion: nil)
    }

    // MARK: - Navigation
    /// 点击故事版中右侧的导航栏按钮 (即 bar button item),跳转到指定视图控制器 EditHomeTableViewController
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "edit-home" else { return }

        let destination = segue.destination as! EditHomeTableViewController
        destination.home = home
    }
    
    // MARK: - Table view data source
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        guard indexPath.section == 1 else { return }
        
        dismissButton.sendActions(for: .touchUpInside)
    }
}
