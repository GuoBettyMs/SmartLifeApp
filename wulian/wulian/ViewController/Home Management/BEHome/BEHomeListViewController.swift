//
//  BEHomeListViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BEHomeListViewController : UITableViewController {
    var homes : [ThingSmartHomeModel] = []
    
    override func viewWillAppear(_ animated: Bool) {
        homes = []
        ThingSmartFamilyBiz.sharedInstance().getFamilyList(success: { [weak self] homeList in
            guard let self = self else {return}
            print("BEHomeListViewController 获取家庭列表成功")
            for home in homeList {
                switch home.dealStatus {
                case .accept :
                    self.homes.append(home)
                case .pending:
                    print("pending")
                case .reject:
                    print("reject")
                @unknown default:
                    fatalError()
                }
            }
    
            self.tableView.reloadData()
        }, failure: { error in
            
        })
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return homes.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "BEHomeListCell")!
        cell.textLabel?.text = homes[indexPath.row].name
        
        return cell
    }
    
    //MARK: 触发跳转并传递必要的数据
    //<#如果目标控制器需要接收数据，而没有实现 prepare(for:sender:) 方法来处理数据传递，则跳转可能会失败或数据丢失#>
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)

        //获取被点击行的对应数据 (即 homes[indexPath.row])，并将这个数据作为 sender 参数传递给 prepare(for:sender:) 方法,最后启动指定标识符(即 "BEShowDetail")的 segue
        self.performSegue(withIdentifier: "BEShowDetail", sender: homes[indexPath.row])
    }
    
    // MARK: - 用于接收数据并配置目标控制器
    ///  在执行 segue 跳转之前触发,负责数据传递和目标视图控制器的配置
    ///  点击 tableView 指定行,根据指定标识符 identifier 的 segue 跳转到指定视图控制器 destinationVC
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "BEShowDetail" else { return } //检查 segue 的 identifier
        guard let model = sender as? ThingSmartHomeModel else { return } //将 sender 参数 (也就是 homes[indexPath.row]) 强制转换为 ThingSmartHomeModel 类型
        
        //确认是跳转到 BEHomeDetailViewController
        let destinationVC = segue.destination as! BEHomeDetailViewController
        destinationVC.homeModel = model //model 赋值给目标视图控制器的 homeModel 属性
    }
}
