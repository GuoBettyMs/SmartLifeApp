//
//  BERecommendRoomViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BERecommendRoomViewController : UITableViewController {
    var recommendRoomNames : [String] = []
    var index : Int = 0
    
    override func viewWillAppear(_ animated: Bool) {
        ThingSmartRoomBiz.sharedInstance().getRecommendRooms {[weak self] rooms in
            guard let self = self else {return}
            print("BERecommendRoomViewController  获取推荐的房间名称成功")
            self.recommendRoomNames = rooms
            self.tableView.reloadData()
        } failure: {[weak self] error in
            guard let self = self else {return}
            let errorMessage = error?.localizedDescription ?? ""
            Alert.showBasicAlert(on: self, with: "Failed to Get Recommend Room", message: errorMessage)
        }
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return recommendRoomNames.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "BERecommendRoomCell")!
        let room = recommendRoomNames[indexPath.row]
        cell.textLabel?.text = room
        if indexPath.row == index {
            cell.accessoryType = .checkmark
        } else {
            cell.accessoryType = .none
        }
        return cell
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        //默认单元格
        for cell in tableView.visibleCells {
            cell.accessoryType = .none
        }
        //选定的单元格带 “☑️”
        if let cell = tableView.cellForRow(at: indexPath) {
            cell.accessoryType = .checkmark
        }
        
        index = indexPath.row
    }
    
    @IBAction func tapAdd() {
        let roomName = recommendRoomNames[index]
        if let home = ThingSmartFamilyBiz.sharedInstance().getCurrentFamily() {
            ThingSmartRoomBiz.sharedInstance().addHomeRoom(withName: roomName, homeId: home.homeId) {[weak self] room in
                guard let self = self else { return }
                let action = UIAlertAction(title: NSLocalizedString("OK", comment: ""), style: .default) { [weak self] _ in
                    guard let self = self else { return }
                    print("BERecommendRoomViewController 新增房间成功")
                    self.navigationController?.popViewController(animated: true)
                }
                
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Success", comment: ""), message: "Add Room", actions: [action])
            } failure: {[weak self] error in
                guard let self = self else { return }
                let errorMessage = error?.localizedDescription ?? ""
                Alert.showBasicAlert(on: self, with: "Failed to Add Room", message: errorMessage)
            }
        }
        
    }
}
