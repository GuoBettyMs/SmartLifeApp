//
//  ThingSmartMainTableViewController.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit

//登录成功后的主页面
class ThingSmartMainTableViewController: UITableViewController {
    // MARK: - IBOutlet
    @IBOutlet weak var logoutButton: UIButton!
    
    // MARK: - Lifecycle
    override func viewDidLoad() {
        super.viewDidLoad()
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
    }
    
    // MARK: - IBAction
    @IBAction func logoutTapped(_ sender: UIButton) {
        let alertViewController = UIAlertController(title: nil, message: NSLocalizedString("You're going to log out this account.", comment: "User tapped the logout button."), preferredStyle: .actionSheet)
        let logoutAction = UIAlertAction(title: NSLocalizedString("Logout", comment: "Confirm logout."), style: .destructive) { [weak self] (action) in
            guard let self = self else { return }

            switch ThingSmartUser.sharedInstance().regFrom {
            case .otherType:
                print("ThingSmartMainTableViewController 匿名用户退出登录并注销")
                ThingSmartUser.sharedInstance().deleteAnonymousAccount(success: {
                    let storyboard = UIStoryboard(name: "Main", bundle: nil)
                    let vc = storyboard.instantiateInitialViewController()
                    self.window?.rootViewController = vc
                }, failure: {
                    [weak self] (error) in
                       guard let self = self else { return }
                       Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Log Out", comment: "Failed to Log Out"), message: error?.localizedDescription ?? "")
                })
            default:
                print("ThingSmartMainTableViewController 退出登录")
                ThingSmartUser.sharedInstance().loginOut {
                    let storyboard = UIStoryboard(name: "Main", bundle: nil)
                    let vc = storyboard.instantiateInitialViewController()
                    self.window?.rootViewController = vc
                } failure: {
                    [weak self] (error) in
                       guard let self = self else { return }
                       Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Log Out", comment: "Failed to Log Out"), message: error?.localizedDescription ?? "")
                }
            }
        }
        
        let cancelAction = UIAlertAction(title: NSLocalizedString("Cancel", comment: "Cancel"), style: .cancel)
        
        alertViewController.popoverPresentationController?.sourceView = sender
        
        alertViewController.addAction(logoutAction)
        alertViewController.addAction(cancelAction)
        
        self.present(alertViewController, animated: true, completion: nil)
    }

    // MARK: - Table view data source
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        
        // Logout button row tapped
        if indexPath.section == 0 && indexPath.row == 1 {
            logoutButton.sendActions(for: .touchUpInside)
        }else if indexPath.section == 3 && indexPath.row == 1 {
            //家庭粗略模型 ThingSmartHomeModel,家庭详细模型 ThingSmartHome 
            guard let current = ThingSmartFamilyBiz.sharedInstance().getCurrentFamily() else {return}
            guard let home = ThingSmartHome(homeId: current.homeId) else {return}
            let vc = DeviceDetailKitVC(home: home)
            self.navigationController?.pushViewController(vc, animated: true)
        }else if indexPath.section == 3 && indexPath.row == 2 {
            guard let current = ThingSmartFamilyBiz.sharedInstance().getCurrentFamily() else {return}
            guard let home = ThingSmartHome(homeId: current.homeId) else {return}
            let vc = BatchOtaVC(home: home)
            self.navigationController?.pushViewController(vc, animated: true)
        }
    }
}
