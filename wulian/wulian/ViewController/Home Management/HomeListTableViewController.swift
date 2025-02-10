//
//  HomeListTableViewController.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit
import ThingSmartDeviceKit

class HomeListTableViewController: UITableViewController {
    
    // MARK: - Property
    private let homeManager = ThingSmartHomeManager()
    private var homeList = [ThingSmartHomeModel]()

    // MARK: - Lifecycle
    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        homeManager.getHomeList { [weak self] (homeModels) in
            guard let self = self else { return }
            self.homeList = homeModels ?? []
            self.tableView.reloadData()
        } failure: { [weak self] (error) in
            guard let self = self else { return }
            let errorMessage = error?.localizedDescription ?? ""
            Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Fetch Home List", comment: ""), message: errorMessage)
        }
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()

    }
    
    

    // MARK: - Table view data source

    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }

    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return homeList.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "home-list-cell")!
        cell.accessoryType = .disclosureIndicator
        cell.textLabel?.text = homeList[indexPath.row].name
        
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        
        //获取被点击行的对应数据 (即 homeList[indexPath.row])，并将这个数据作为 sender 参数传递给 prepare(for:sender:) 方法,最后启动指定标识符的 segue
        self.performSegue(withIdentifier: "show-home-detail", sender: homeList[indexPath.row])
    }
    
    // MARK: - Navigation
    ///  点击 tableView 指定行,根据指定标识符 identifier 的 segue 跳转到指定视图控制器 destinationVC
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "show-home-detail" else { return }
        guard let model = sender as? ThingSmartHomeModel else { return }
        
        let destinationVC = segue.destination as! HomeDetailTableViewController
        destinationVC.homeModel = model
    }
}
