//
//  BEMemberDetailViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartFamilyBizKit

class BEMemberDetailViewController : UITableViewController {
    var member : ThingSmartHomeMemberModel?
    @IBOutlet weak var memberIdLabel : UILabel!
    @IBOutlet weak var memberNameLabel : UILabel!
    @IBOutlet weak var memberRoleLabel : UILabel!
    @IBOutlet weak var memberAccountLabel : UILabel!
    
    override func viewWillAppear(_ animated: Bool) {
        if let model = member {
            memberIdLabel.text = "\(model.memberId)"
            memberNameLabel.text = model.name
            memberAccountLabel.text = model.userName
            switch model.role {
            case .owner : memberRoleLabel.text = "Owner"
            case .admin : memberRoleLabel.text = "Admin"
            case .member : memberRoleLabel.text = "Member"
            default :
                memberRoleLabel.text = ""
            }
        }
    }
    
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        if let cell = tableView.cellForRow(at: indexPath) {
            if cell.tag == 1 {
                
            } else if cell.tag == 2 {
                tapDelete()
            }
        }
    }
    
    func tapDelete() {
        ThingSmartMemberBiz.sharedInstance().removeHomeMember(withMemberId: member!.memberId) {[weak self] in
            guard let self = self else { return }
            let action = UIAlertAction(title: NSLocalizedString("OK", comment: ""), style: .default) { [weak self] _ in
                guard let self = self else { return }
                print("BEMemberDetailViewController 删除成员成功")
                self.navigationController?.popViewController(animated: true)
            }
            
            Alert.showBasicAlert(on: self, with: NSLocalizedString("Success", comment: ""), message: "Delete Member", actions: [action])
        } failure: {[weak self] error in
            guard let self = self else { return }
            let errorMessage = error?.localizedDescription ?? ""
            Alert.showBasicAlert(on: self, with: "Failed to Delete Member", message: errorMessage)
        }
    }
    /// 点击故事版中右侧的导航栏按钮 (即 bar button item),根据指定标识符 identifier 的 segue 跳转到指定视图控制器 destinationVC
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        guard segue.identifier == "BEShowEditMember" else { return }
        //确认是跳转到 BEEditMemberViewController
        let destinationVC = segue.destination as! BEEditMemberViewController
        destinationVC.member = member
    }
}
