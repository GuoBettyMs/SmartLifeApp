//
//  BERoomListViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BERoomListViewController : UITableViewController {
    var currentHome : ThingSmartHomeModel?
    var roomList : [ThingSmartRoomModel] = []
    
    override func viewWillAppear(_ animated: Bool) {
        currentHome = ThingSmartFamilyBiz.sharedInstance().getCurrentFamily()
        if let model = currentHome {
            ThingSmartRoomBiz.sharedInstance().getRoomList(withHomeId: model.homeId) {[weak self] rooms in
                guard let self = self else {return}
                print("BERoomListViewController 获取房间列表成功")
                self.roomList = rooms
                self.tableView.reloadData()
            } failure: { [weak self] error in
                guard let self = self else { return }
                let errorMessage = error?.localizedDescription ?? ""
                Alert.showBasicAlert(on: self, with: "Failed to Get Room", message: errorMessage)
            }
        }
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return roomList.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "BERoomListCell")!
        let room = roomList[indexPath.row]
        cell.textLabel?.text = room.name
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        //获取被点击行的对应数据 (即 roomList[indexPath.row])，并将这个数据作为 sender 参数传递给 prepare(for:sender:) 方法,最后启动指定标识符(即 "BEShowRoom")的 segue
        self.performSegue(withIdentifier: "BEShowRoom", sender: roomList[indexPath.row])
    }
    
    // MARK: - Navigation
    ///  点击 tableView 指定行,根据指定标识符 identifier 的 segue 跳转到指定视图控制器 destinationVC
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "BEShowRoom" else { return }
        guard let model = sender as? ThingSmartRoomModel else { return }
        //确认是跳转到 BERoomDetailViewController
        let destinationVC = segue.destination as! BERoomDetailViewController
        destinationVC.room = model
    }
}
