//
//  Cardcell.swift
//  TuyaAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2023 Tuya Inc. (https://developer.tuya.com/)

import Foundation
import ThingSmartDeviceCoreKit

protocol CardCellDelegate : AnyObject {
    func clickCardView(viewModel: CardCellViewModel)
    func clickSwitchView(viewModel: CardCellViewModel, dps:Dictionary<AnyHashable, Any>)
    func clickOperableDpView(viewModel: CardCellViewModel, smartDp: ThingSmartDp)
}

class CardCellViewModel {
    var name : String!
    var icon : String!
    var device : ThingSmartDevice?
    var group : ThingSmartGroup?
    var dpParser : ThingSmartDpParser! //功能点解析器
}

typealias OperableDpViewClickBlock = (_ viewModel :ThingSmartDp)-> Void

//常用功能单独 view
class OperableDpView : UIView {
    private var iconLabel : UILabel!
    private var title : UILabel!
    private var status : UILabel!
    var iconColor : UIColor?  {
        didSet{
            iconLabel.textColor = iconColor
        }
    }
    
    private var viewModel:ThingSmartDp! //DP 功能点，根据不同 DP 类型，还细分出不同子类，比如 `ThingSmartLightDp
    var clickBlock : OperableDpViewClickBlock?
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        setup()
    }
    
    required init?(coder: NSCoder) {
        super.init(coder: coder)
        setup()
    }
    
    private func setup() {
        iconLabel = UILabel();
        iconLabel.textAlignment = .center
        iconLabel.font = UIFont(name: "iconfont", size: 24)
        
        title = UILabel();
        title.font = UIFont.systemFont(ofSize: 15,weight: .bold)
        title.textAlignment = .center
        
        status = UILabel();
        status.font = UIFont.systemFont(ofSize: 13)
        status.textAlignment = .center
        status.textColor = UIColor.gray
        
        addSubview(iconLabel)
        addSubview(title)
        addSubview(status)
        
        iconLabel.translatesAutoresizingMaskIntoConstraints = false
        iconLabel.topAnchor.constraint(equalTo: self.topAnchor).isActive = true
        iconLabel.centerXAnchor.constraint(equalTo: self.centerXAnchor).isActive = true
        iconLabel.widthAnchor.constraint(equalToConstant: 40).isActive = true
        iconLabel.heightAnchor.constraint(equalToConstant: 40).isActive = true
        
        title.translatesAutoresizingMaskIntoConstraints = false
        title.topAnchor.constraint(equalTo: iconLabel.bottomAnchor, constant: 5).isActive = true
        title.leftAnchor.constraint(equalTo: self.leftAnchor, constant: 5).isActive = true
        title.rightAnchor.constraint(equalTo: self.rightAnchor, constant: -5).isActive = true
        
        status.translatesAutoresizingMaskIntoConstraints = false
        status.topAnchor.constraint(equalTo: title.bottomAnchor, constant: 5).isActive = true
        status.leftAnchor.constraint(equalTo: self.leftAnchor, constant: 5).isActive = true
        status.rightAnchor.constraint(equalTo: self.rightAnchor, constant: -5).isActive = true
        
        self.addGestureRecognizer(UITapGestureRecognizer(target: self,
                                                         action: #selector(clickView)))
        self.isUserInteractionEnabled = true
    }
    
    @objc private func clickView() {
        guard let cb = clickBlock else { return }
        cb(viewModel)
    }
    
    func update(viewModel:ThingSmartDp) {
        self.viewModel = viewModel
        iconLabel.text = viewModel.iconFont()
        title.text = viewModel.titleStatus
        status.text = viewModel.valueStatus
    }
}

class Cardcell: UITableViewCell {
    @IBOutlet weak var deviceCardView: UIView!
    
    @IBOutlet weak var deviceIcon: UIImageView!
    @IBOutlet weak var deviceName: UILabel!
    
    @IBOutlet weak var deviceDisplayDpStatus: UILabel!
    @IBOutlet weak var deviceDisplayDpStatusTopLayout: NSLayoutConstraint!
    
    @IBOutlet weak var deviceSwitch: UISwitch! //快捷开关,控制设备的启动和停止
    @IBOutlet weak var deviceSwitchWidthLayout: NSLayoutConstraint!
    
    @IBOutlet weak var deviceOperableDpView: UIView! //常用功能底层 view(最多显示4个)
    
    @IBOutlet weak var deviceOperableDpViewHeightLayout: NSLayoutConstraint!
    
    weak var cellDelegate : CardCellDelegate?
    
    private var viewModel : CardCellViewModel!
    
    static private let deviceOperableDpViewHeight : CGFloat = 95.0
    
    class func cellHeight(viewModel: CardCellViewModel) -> CGFloat {
        //一排四
        var operableDpLine = viewModel.dpParser.operableDp.count / 4
        operableDpLine += (viewModel.dpParser.operableDp.count % 4 == 0) ? 0 : 1
        
        var h = 90.0;
        if (operableDpLine > 0) {
            h += deviceOperableDpViewHeight * CGFloat(operableDpLine) + 15.0
        }
        return h
    }
    
    override func awakeFromNib() {
        super.awakeFromNib()
        deviceDisplayDpStatus.font = UIFont(name: "iconfont", size: 13)
        deviceDisplayDpStatus.textColor = UIColor.gray
        deviceOperableDpView.backgroundColor = UIColor.lightGray.withAlphaComponent(0.1)
        deviceOperableDpView.layer.cornerRadius = 5
        
        deviceCardView.addGestureRecognizer(UITapGestureRecognizer(target: self,
                                                                   action: #selector(clickCardView)))
        deviceCardView.isUserInteractionEnabled = true
        
        //deviceSwitch 为 true 时设备启动,false 设备停止
        deviceSwitch.addTarget(self, action: #selector(clickSwitchView), for: .touchUpInside)
    }
    
    //MARK: 设备整体点击事件
    @objc private func clickCardView() {
        cellDelegate?.clickCardView(viewModel:viewModel)
    }
    
    //MARK: 快捷开关事件
    @objc private func clickSwitchView() {
        //快捷开关配置类型:
//        有状态：(即上报下发,设备既可以接收云端的指令，也可以将数据上传到云端)，可以下发开关状态给设备，同时设备有状态变化也会上报云端。
//        无状态：(即只下发,接收指令并执行相应的动作)，设备并不会上报状态，云端无从得知开关的真实状态，因此每次下发给设备的状态是对当前状态取反。
        //快捷开关由多个 DP 组成时，只要其中有 1 个 DP 为 只下发 类型，那么该开关就会被解析成 无状态 类型
        
        //获取设备状态数据，并将其赋值给 dps (NSDictionary 类型）
        guard let dps = viewModel.dpParser.switchDp?.publishSwitchCommands(deviceSwitch.isOn) else {
            return
        }
        
        //dps 属性（NSDictionary 类型）定义了当前设备的状态，称作数据点（DP，Data Point）或功能点。
        //dps 字典里的每个 key 对应一个设备功能的 dpId，value 对应一个设备功能的 dpValue ，dpValue 为该设备功能的值。[String : Any]()
        cellDelegate?.clickSwitchView(viewModel:viewModel,dps: dps)
    }
    
    func update(viewModel : CardCellViewModel) {
        self.viewModel = viewModel
        deviceName.text = viewModel.name
        deviceIcon.imageFrom(urlStr: viewModel.icon)
        
        deviceSwitch.isHidden = viewModel.dpParser.switchDp == nil //switchDp: 快捷开关功能点,为空时表示无快捷开关
        deviceSwitch.isOn = (viewModel.dpParser.switchDp != nil) ? viewModel.dpParser.switchDp!.switchStatus : false
        
        dealDisplayDpStatus() //可操作功能点的状态 ui
        dealOperableDpView() //处理可操作功能点 view
    }
    
    private func dealDisplayDpStatus() {
        var displayDpStatus = ""
        var sep = ""
        for smartDp in viewModel.dpParser.displayDp { //遍历展示型 DP 功能点
            if (smartDp.schemaModel.property?.type != "string") {
                displayDpStatus += sep + smartDp.iconFont() + smartDp.valueStatus
                sep = "  "
            }
        }
        print("Cardcell dealDisplayDpStatus, \(displayDpStatus)")
        deviceDisplayDpStatus.text = displayDpStatus
        deviceDisplayDpStatusTopLayout.constant = deviceDisplayDpStatus.text?.count == 0 ? 0 : 5
    }
    
    private func dealOperableDpView() {
        deviceOperableDpView.isHidden = viewModel.dpParser.operableDp.count == 0 //operableDp: 操作型 DP 功能点
        
        if (deviceOperableDpView.isHidden) {
            deviceOperableDpViewHeightLayout.constant = 0.0
            return
        }
        deviceOperableDpView.subviews.forEach { subView in
            subView.removeFromSuperview()
        }
        
        var topV : UIView? = nil
        var leftV : UIView? = nil
        var _l = 0
        var _c = 0
        
        
        let colors : [UIColor] = [UIColor(red: 0x60/255.0, green: 0xCE/255.0, blue: 0xFF/255.0, alpha: 1.0),
                                  UIColor(red: 0x44/255.0, green: 0xDB/255.0, blue: 0x5E/255.0, alpha: 1.0),
                                  UIColor(red: 0xFF/255.0, green: 0xAE/255.0, blue: 0x89/255.0, alpha: 1.0),
                                  UIColor(red: 0xFF/255.0, green: 0xD6/255.0, blue: 0x66/255.0, alpha: 1.0),
        ]
        
        var isOnline = true
        var isUpgrading = false
        
        if (viewModel.device != nil) {
            isOnline = viewModel.device!.deviceModel.isOnline
            
            let ota : ThingSmartDeviceOTAModel?
            ota = ThingCoreCacheService.sharedInstance().getDeviceOtaInfo(withDevId: viewModel.device!.deviceModel.devId)
            
            if (ota != nil) {
                isUpgrading = ota!.otaUpgradeStatus == ThingSmartDeviceOTAModelUpgradeStatusUpgrading
            }
        }

        var isActive = isOnline;
        if (viewModel.dpParser.switchDp != nil) {
            isActive = viewModel.dpParser.switchDp!.switchStatus || viewModel.dpParser.switchDp!.writeOnlySwitch;
        }
        
        var isItemEnable = true
        
        if (!isActive || !isOnline || isUpgrading) {
            isItemEnable = false;
        }
        
        //增加每个可操作的功能点
        for item  in viewModel.dpParser.operableDp {
            let oneDpView = OperableDpView()
            deviceOperableDpView.addSubview(oneDpView)
            oneDpView.update(viewModel: item)
            
            //MARK: 常用功能的单独点击事件
            oneDpView.clickBlock = {[weak self] (viewModel: ThingSmartDp) in
                guard let ws = self else { return }
                ws.cellDelegate?.clickOperableDpView(viewModel: ws.viewModel, smartDp: item)
            }
            oneDpView.alpha = isItemEnable ? 1 : 0.3;
            oneDpView.iconColor = colors[_c%4]
            
            oneDpView.translatesAutoresizingMaskIntoConstraints = false
            if (topV == nil) {
                oneDpView.topAnchor.constraint(equalTo: deviceOperableDpView.topAnchor).isActive = true
            } else {
                oneDpView.topAnchor.constraint(equalTo: topV!.bottomAnchor).isActive = true
            }
            
            if (leftV == nil) {
                oneDpView.leftAnchor.constraint(equalTo: deviceOperableDpView.leftAnchor).isActive = true
            } else {
                oneDpView.leftAnchor.constraint(equalTo: leftV!.rightAnchor).isActive = true
            }
            oneDpView.heightAnchor.constraint(equalToConstant: Cardcell.deviceOperableDpViewHeight).isActive = true
            oneDpView.widthAnchor.constraint(equalTo:deviceOperableDpView.widthAnchor , multiplier: 1.0/4).isActive = true
            
            _c += 1
            leftV = oneDpView
            
            if (_c >= 4) {
                _l += 1
                _c = 0
                topV = oneDpView
                leftV = nil
            }
        }
        _l += (_c == 0) ? 0 : 1
        deviceOperableDpViewHeightLayout.constant = CGFloat(_l) * Cardcell.deviceOperableDpViewHeight
    }
}

extension ThingSmartDp {
    func iconFont() -> String {
        var rtn = CardIconFontServer.sharedInstance.iconForKey(self.iconname)
        
        if (rtn == nil) {
            rtn =  CardIconFontServer.sharedInstance.iconForKey("icon-dp_what")
        }
        
        return rtn ?? self.iconname
    }
}

extension UIImageView {
    static private var _bindUrlKey: String = "_bindUrlKey" //用于使用 Objective-C 运行时函数将 URL 字符串与 UIImageView 实例关联
    static private var _urlCache: Dictionary<String, UIImage> = Dictionary() //缓存，用于存储与各自 URL（字符串键）关联的下载图像
    
    private var _bindUrl: String? { //提供了 getter 和 setter 来访问特定对象的关联 URL 字符串
        set {
            objc_setAssociatedObject(self, &UIImageView._bindUrlKey, newValue, objc_AssociationPolicy.OBJC_ASSOCIATION_COPY_NONATOMIC)
        }
        
        get {
            if let rs = objc_getAssociatedObject(self, &UIImageView._bindUrlKey) as? String {
                return rs
            }
            return nil
        }
    }
    
    func imageFrom(urlStr:String?){
        if (_bindUrl == urlStr) { // 检查提供的 urlStr 是否与已经绑定的URL (_bindUrl) 相同
            return //退出,避免重复下载
        }
        _bindUrl = urlStr
        image = nil //清除任何先前的图像
        
        guard let _urlStr = urlStr else {
            return
        }
        let cacheImage = UIImageView._urlCache[_urlStr]
        
        if (cacheImage != nil) { //检查缓存的图像字典中是否存在 “_urlStr” 关键值 的 UIImage
            self.image = cacheImage //在缓存中找到，直接使用缓存的图像设置 image 属性 UIImageView 并退出该函数
            return
        }
        
        guard let url = URL(string: _urlStr) else { return }
         
        DispatchQueue.global().async { [weak self] in //在后台线程执行图像下载以避免阻塞主线程
            if let data = try? Data(contentsOf: url){
                if (self?._bindUrl != _urlStr) { //再次检查绑定的 URL 是否发生新的更改
                    return //发生更改,退出函数,防止在下载过程中 URL 关联发生更改,依旧设置图像
                }
                if let image = UIImage(data:data){
                    DispatchQueue.main.async{
                        UIImageView._urlCache[_urlStr] = image //将下载的图像存储到 _urlCache 供将来使用
                        self?.image = image
                    }
                }
            }
        }
    }
}

class CardIconFontServer {
    private lazy var jsonMap: Dictionary<String, String> = {
        guard let path = Bundle.main.path(forResource: "iconfont", ofType: "json") else {//尝试获取应用程序主包中名为 “iconfont.json” 的 JSON 文件的文件路径。
            return [:]
        }
        
        if (!FileManager().fileExists(atPath: path)) {
            return [:]
        }
        
        guard let str = try? String(contentsOfFile: path, encoding: .utf8), //尝试将文件内容读取为 UTF-8 编码的字符串
              let data = str.data(using: .utf8), //将字符串数据转换为适合 JSON 解析的数据对象
              let json = try? JSONSerialization.jsonObject(with: data) else { //尝试将数据对象解析为 JSON 并返回表示解析数据的通用对象
            return [:]
        }
        
        return json as? Dictionary<String, String> ?? [:]
    } ()
    
    static let sharedInstance = CardIconFontServer()
    
    func iconForKey(_ key:String) -> String? {
        guard let value = jsonMap[key] else { return nil } //检查所提供的内容 key 是否存在于 jsonMap 字典中
        var c : UInt32 = 0
        let scanner = Scanner(string: value)
        scanner.scanHexInt32(&c) //尝试从字符串中扫描十六进制整数 value 并将其存储在 c 变量中
        return String(format: "%C", u_short(c)) //u_short（16 位无符号整数) 转为字符串
    }
}
