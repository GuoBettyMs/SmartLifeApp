//
//  BEInvitationListViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BEInvitationListViewController : UITableViewController {
    
    var recordList : [ThingSmartHomeInvitationRecordModel] = []
    let currentHome = ThingSmartFamilyBiz.sharedInstance().getCurrentFamily()
    
    override func viewWillAppear(_ animated: Bool) {
        if let homeModel = currentHome {
            ThingSmartMemberBiz.sharedInstance().getInvitationRecordList(withHomeId: homeModel.homeId) {[weak self] recodes in
                guard let self = self else {return}
                print("BEInvitationListViewController 获得邀请记录成功")
                self.recordList = recodes
                self.tableView.reloadData()
            } failure: { error in
                
            }
        }
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return recordList.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "BEInvitationListCell")!
        let record = recordList[indexPath.row]
        cell.textLabel?.text = record.name + "-" + record.invitationCode + "-" + "\(record.validTime) hours"
        
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        
        //获取被点击行的对应数据 (即 recordList[indexPath.row])，并将这个数据作为 sender 参数传递给 prepare(for:sender:) 方法,最后启动指定标识符(即 "BEShowInvitation")的 segue
        self.performSegue(withIdentifier: "BEShowInvitation", sender: recordList[indexPath.row])
    }
    
    // MARK: - Navigation
    ///  点击 tableView 指定行,根据指定标识符 identifier 的 segue 跳转到指定视图控制器 destinationVC
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "BEShowInvitation" else { return }
        guard let model = sender as? ThingSmartHomeInvitationRecordModel else { return }
        
        //确认是跳转到 BEInvitationDetailViewController
        let destinationVC = segue.destination as! BEInvitationDetailViewController
        destinationVC.invitation = model
    }
}
