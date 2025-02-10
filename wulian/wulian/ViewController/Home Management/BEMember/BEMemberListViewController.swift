//
//  BEMemberListViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BEMemberListViewController : UITableViewController {
    var currentHome : ThingSmartHomeModel?
    var memberList : [ThingSmartHomeMemberModel] = []
    
    override func viewWillAppear(_ animated: Bool) {
        currentHome = ThingSmartFamilyBiz.sharedInstance().getCurrentFamily()
        if let model = currentHome {
            ThingSmartMemberBiz.sharedInstance().getHomeMemberList(withHomeId: model.homeId) {[weak self] members  in
                guard let self = self else { return }
                print("BEMemberListViewController 获取成员列表成功")
                self.memberList = members
                self.tableView.reloadData()
            } failure: {[weak self] error in
                guard let self = self else { return }
                let errorMessage = error?.localizedDescription ?? ""
                Alert.showBasicAlert(on: self, with: "Failed to get member list", message: errorMessage)
            }
        } else {
            memberList = []
            self.tableView.reloadData()
        }
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return memberList.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "BEMemberListCell")!
        let member = memberList[indexPath.row]
        cell.textLabel?.text = member.name
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        //获取被点击行的对应数据 (即 memberList[indexPath.row])，并将这个数据作为 sender 参数传递给 prepare(for:sender:) 方法,最后启动指定标识符(即 "BEShowMember")的 segue
        self.performSegue(withIdentifier: "BEShowMember", sender: memberList[indexPath.row])
    }
    
    ///  点击 tableView 指定行,根据指定标识符 identifier 的 segue 跳转到指定视图控制器 destinationVC
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "BEShowMember" else { return }
        guard let model = sender as? ThingSmartHomeMemberModel else { return }
        //确认是跳转到 BEMemberDetailViewController
        let destinationVC = segue.destination as! BEMemberDetailViewController
        destinationVC.member = model
    }
}
