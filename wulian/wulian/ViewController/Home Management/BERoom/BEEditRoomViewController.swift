//
//  BEEditRoomViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BEEditRoomViewController : UITableViewController {
    
    @IBOutlet weak var roomField : UITextField!
    
    var room : ThingSmartRoomModel?
    var homeId : Int64 = 0
    
    override func viewWillAppear(_ animated: Bool) {
        if let room = room {
            roomField.text = room.name
            roomField.becomeFirstResponder() //显示焦点,显示键盘
        }
    }
    
    @IBAction func tapSave() {
        roomField.resignFirstResponder()
        let newRoomName = roomField.text ?? ""
        if let room = room, homeId != 0 {
            ThingSmartRoomBiz.sharedInstance().updateHomeRoom(withName: newRoomName, roomId: room.roomId, homeId: homeId) {[weak self] room in
                guard let self = self else { return }
                let action = UIAlertAction(title: NSLocalizedString("OK", comment: ""), style: .default) { [weak self] _ in
                    guard let self = self else { return }
                    print("BEEditRoomViewController 更新房间 name、id 成功")
                    self.navigationController?.popViewController(animated: true)
                }
                
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Success", comment: ""), message: "Eidt Room", actions: [action])
            } failure: {[weak self] error in
                guard let self = self else { return }
                let errorMessage = error?.localizedDescription ?? ""
                Alert.showBasicAlert(on: self, with: "Failed to Eidt Room", message: errorMessage)
            }
        } else {
            Alert.showBasicAlert(on: self, with: "Failed to Eidt Room", message: "")
        }
    }
}
