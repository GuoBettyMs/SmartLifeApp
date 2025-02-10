//
//  LoginTableViewController.swift
//  ThingAppSDKSample-iOS-Swift
//
//  Copyright (c) 2014-2021 Thing Inc. (https://developer.tuya.com/)

import UIKit
import ThingSmartBaseKit
import AuthenticationServices       //身体验证服务

class LoginTableViewController: UITableViewController {
    // MARK: - IBOutlet
    @IBOutlet weak var countryCodeTextField: UITextField!
    @IBOutlet weak var accountTextField: UITextField!
    @IBOutlet weak var passwordTextField: UITextField!
    @IBOutlet weak var loginButton: UIButton!
    @IBOutlet weak var forgetPasswordButton: UIButton!
    @IBOutlet weak var appleBtn: UIButton!
    
    // MARK: - Lifecycle
    override func viewDidLoad() {
        super.viewDidLoad()

    }
    //按钮点击事件
    @IBAction func login_AppleID(_ sender: UIButton) {
        loginWithApple()
    }
    
    @IBAction func loginTapped(_ sender: UIButton) {
        let account = accountTextField.text ?? ""

        // Simply examine weather the account is an email address of a phone number. Thing SDK will handle the validation.
        if account.contains("@") {
            login(by: .email)
        } else {
            if account.isEmpty {
                login(by: .anonymous)
            }else{
                login(by: .phone)
            }
            
        }
    }
    
    // MARK: - Private Method
    
    func loginWithApple() {
        
        let provider = ASAuthorizationAppleIDProvider()
       let request = provider.createRequest()
       request.requestedScopes = [.email, .fullName]               //AppleID登录时显示姓名和电子邮箱
       
       let controller = ASAuthorizationController(authorizationRequests: [request])        //登录页面
       controller.delegate = self                      //获取用户信息
       controller.presentationContextProvider = self   //获取UI
       controller.performRequests()                    //执行请求
    }
    
    private func login(by type: AccountType) {
        let countryCode = countryCodeTextField.text ?? ""
        let account = accountTextField.text ?? ""
        let password = passwordTextField.text ?? ""
        
        switch type {
        case .email:
            ThingSmartUser.sharedInstance().login(byEmail: countryCode,
                                                 email: account,
                                                 password: password) { [weak self] in
                guard let self = self else { return }
                let storyboard = UIStoryboard(name: "ThingSmartMain", bundle: nil)
                let vc = storyboard.instantiateInitialViewController()
                self.window?.rootViewController = vc

            } failure: { [weak self] (error) in
                guard let self = self else { return }
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Login", comment: ""), message: error?.localizedDescription ?? "")
            }

        case .phone:
            ThingSmartUser.sharedInstance().login(byPhone: countryCode, phoneNumber: account, password: password) { [weak self] in
                guard let self = self else { return }
                let storyboard = UIStoryboard(name: "ThingSmartMain", bundle: nil)
                let vc = storyboard.instantiateInitialViewController()
                self.window?.rootViewController = vc
                
            } failure: { [weak self] (error) in
                guard let self = self else { return }
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Login", comment: ""), message: error?.localizedDescription ?? "")
            }
        case .anonymous:

            let countryCode = "1" // 美国
            let usename = UIDevice.current.name // 设备名称
            
            ThingSmartUser.sharedInstance().registerAnonymous(withCountryCode: countryCode, userName: usename, success: {
                
                let action = UIAlertAction(title: NSLocalizedString("OK", comment: ""), style: .default) { [weak self] _ in

                    guard let self = self else { return }
                    let storyboard = UIStoryboard(name: "ThingSmartMain", bundle: nil)
                    let vc = storyboard.instantiateInitialViewController()
                    self.window?.rootViewController = vc
                }
                
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Registered Anonymous user Successfully", comment: ""), message: NSLocalizedString("匿名用户: \(ThingSmartUser.sharedInstance().userName)", comment: ""), actions: [action])
                
                print("LoginTableViewController 注册匿名用户: \(ThingSmartUser.sharedInstance().nickname) 成功")
                
            }, failure: { error in
                let errorMessage = error?.localizedDescription ?? ""
                Alert.showBasicAlert(on: self, with: NSLocalizedString("Failed to Register", comment: ""), message: errorMessage)
            })

        }
    }
    
    // MARK: - Table view data source
    override func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        //避免点击到按钮区域以外不触发事件,单元格增加点击事件
        if indexPath.section == 1 {
            loginButton.sendActions(for: .touchUpInside)
        } else if indexPath.section == 2 {
            forgetPasswordButton.sendActions(for: .touchUpInside)
        } else if indexPath.section == 3 {
            appleBtn.sendActions(for: .touchUpInside)
        }
    }
}

