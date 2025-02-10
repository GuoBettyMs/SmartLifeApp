//
//  LoginTableViewController-Apple.swift
//  wulian
//
//  Created by user on 2025/1/20.
//

import AuthenticationServices

extension LoginTableViewController: ASAuthorizationControllerDelegate{
    // MARK: 遵守ASAuthorizationControllerDelegate - 用户信息授权成功
        func authorizationController(controller: ASAuthorizationController, didCompleteWithAuthorization authorization: ASAuthorization) {
            
            //当判断结果是否为某个类型时，可用switch值绑定，也可用iflet或guard做
            switch authorization.credential {
            case let appleIDCredential as ASAuthorizationAppleIDCredential:         //case let 值绑定,AppleID认证
    //            print("用户状态: \(appleIDCredential.realUserStatus)")                            //用户状态--是否是真人，非100%保证
                
                // MARK: 苹果登录用户信息 - userID
                //每个用户的userID在同一开发者账号(team)下的所有App都是一样的，可以用该唯一标识符与自己后台系统的账号体系绑定起来
                //通常和主键一起被存在后端数据库，用来区分用户
                let userID = appleIDCredential.user
                print("userID: \(userID)")

                // MARK: 苹果登录用户信息 - name
                //<#身份信息(name,email)仅第一次登录时可获得#>，官方建议获得后立即保存在本地，也可防止因网络等而造成的数据丢失
                var name = ""
                if appleIDCredential.fullName?.familyName != nil || appleIDCredential.fullName?.givenName != nil{
                    
                    //用户首次登录,将name保存到一个key (kNameFromAppleID)中
                    let familyName = appleIDCredential.fullName?.familyName ?? ""
                    let givenName = appleIDCredential.fullName?.givenName ?? ""
                    name = "\(familyName)-\(givenName)"
//                    UserDefaults.standard.setValue(name, forKey: kNameFromAppleID)
                }else{
                    
                    //用户非首次登录,从本地key(kNameFromAppleID)中取出name
//                    name = UserDefaults.standard.string(forKey: kNameFromAppleID) ?? ""
                }
                print("name: \(name)")
                
                // MARK: 苹果登录用户信息 - email
                //用户可隐藏真实邮箱,使用苹果提供的虚拟代理邮箱(固定后缀:privaterelay.appleid.com)
                //用户填写虚拟邮箱时,邮件将通过苹果中转服务发送,详见文档https://developer.apple.com/documentation/sign_in_with_apple/sign_in_with_apple_js/communicating_using_the_private_email_relay_service
                var email = ""
                if let unwrappedEmail = appleIDCredential.email{
                    
                    //用户首次登录,将email保存到一个key (kEmailFromAppleID)中
                    email = unwrappedEmail
//                    UserDefaults.standard.setValue(email, forKey: kEmailFromAppleID)
                }else{
                    
                    //用户非首次登录,从本地key(kEmailFromAppleID)中取出email
//                    email = UserDefaults.standard.string(forKey: kEmailFromAppleID) ?? ""
                }
                print("email: \(email)")
                
                // MARK: 苹果登录用户信息 - identityToken、authorizationCode
                //对Token、authorizationCode 连续解包
                guard let identityToken = appleIDCredential.identityToken,
                      let authorizationCode = appleIDCredential.authorizationCode else { return }
    //            print("identityToken: \(String(decoding: identityToken, as: UTF8.self))")             //把data类型转为String
    //            print("authorizationCode: \(String(decoding: authorizationCode, as: UTF8.self))")
                
                // MARK: LeanCloud 配置苹果登录(失败)
                //在LeanCloud 配置苹果登录:内置账户->设置->第三方集成, https://leancloud.cn/docs/leanstorage_guide-swift.html#hash330594267 其他对象的登录->第三方账户登录
                //传identityToken和authorizationCode去服务端,并在服务端做如下操作
                //1.用苹果提供的公钥对identityToken验签
                //2.用authorizationCode换取accessToken和refreshToken
                //3.若验签成功，可以根据userID(查询数据库)判断账号是否已存在，若存在，则返回自己账号系统的登录态，若不存在，则创建一个新的账号，并返回对应的登录状态给App
                //<#注#>:1和2我们只需传token和code,其余工作后端云服务已帮我们做好
                //<#注#>:验签目的；若直接发送用户信息去后台，中途可能被挟持并篡改，需验证信息来源(主要是userID)为此开发者传的（也即信息为苹果提供的）
                //使用 Apple Sign In 登录云服务
//                let appleData: [String: Any] = [
//                    "uid": userID,                                                              // 从 Apple 获取到的 User Identifier
//                    "identity_token": String(decoding: identityToken, as: UTF8.self),           //从苹果获取到的 identityToken
//                    "code": String(decoding: authorizationCode, as: UTF8.self)                  //从苹果获取到的 Authorization Code
//                ]
                
                
                let countryCode = countryCodeTextField.text ?? ""
                let account = accountTextField.text ?? ""
                
                let credential = String(decoding: identityToken, as: UTF8.self)//authorization.credential

                ThingSmartUser.sharedInstance().loginByAuth2(withType: "ap", countryCode: countryCode, accessToken: credential, extraInfo:     ["userIdentifier": "apple_user","email": account,"nickname": "appleId-\(Int.random(in: 0...2))","snsNickname": ""], success: {
                    print("login success")
                    
                    let storyboard = UIStoryboard(name: "ThingSmartMain", bundle: nil)
                    let vc = storyboard.instantiateInitialViewController()
                    self.window?.rootViewController = vc
                    
                }, failure: { (error) in
                    if let e = error {
                       print("login failure: \(e)")
                    }
                })

            case let passwordCredential as ASPasswordCredential:            //case let 值绑定,密码认证
                let _ = passwordCredential.user
                let _ = passwordCredential.password
            default:
                break
            }
        }
        
        // MARK: 遵守ASAuthorizationControllerDelegate - 用户信息授权失败
        func authorizationController(controller: ASAuthorizationController, didCompleteWithError error: Error) {
            print("苹果认证服务登录失败: \(error)")
        }
}

extension LoginTableViewController: ASAuthorizationControllerPresentationContextProviding{
    
    // MARK: 遵守presentationContextProvider - 在当前页面present苹果登录页面
    func presentationAnchor(for controller: ASAuthorizationController) -> ASPresentationAnchor { view.window! }
}
