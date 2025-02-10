//
//  MessageAlarmViewController.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2024 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartMessageKit

class MessageAlarmViewController : UITableViewController {
    let message = ThingSmartMessage()
    var messageList : [ThingSmartMessageListModel] = [] //消息列表数据模型
    
    override func viewDidLoad() {
        //消息列表请求数据模型
        let requestModel = ThingSmartMessageListRequestModel()
        requestModel.msgType = .alarm //消息类型, 告警信息
        requestModel.limit = 15 //消息列表的最大请求数量
        requestModel.offset = 0 //已请求的消息列表总量
        message.fetchList(with: requestModel) {[weak self] list in
            guard let self = self else {return}
            print("MessageAlarmViewController 查询消息列表成功")
            self.messageList = list
            self.tableView.reloadData()
        } failure: { error in
            
        }
    }
    
    override func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    override func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return messageList.count
    }
    
    override func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = tableView.dequeueReusableCell(withIdentifier: "MessageContentCell")! as? MessageContentCell
        cell?.titleLabel.text = messageList[indexPath.row].msgTypeContent //信息标题
        cell?.contentLabel.text = messageList[indexPath.row].msgContent //信息内容
        return cell!
    }
    
    override func tableView(_ tableView: UITableView, heightForRowAt indexPath: IndexPath) -> CGFloat {
        return 100
    }
}
