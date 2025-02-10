//
//  TuyaAppSDKWidget.swift
//  TuyaAppSDKWidget
//
//  Created by user on 2025/1/17.
//

import WidgetKit
import SwiftUI
import AppIntents
import ThingSmartBaseKit
import ThingSmartDeviceKit

@available(iOSApplicationExtension 17.0, *)
struct Provider: AppIntentTimelineProvider {
    
    @available(iOSApplicationExtension 17.0, *)
    func timeline(for configuration: TuyaAppSDKWidgetIntent, in context: Context) async -> Timeline<SimpleEntry> {
        // You need init App SDK first
        TuyaAppSDKWidgetDataManager.shared.setup()
        
        let currentDate = Date()
        if !ThingSmartUser.sharedInstance().isLogin {
            let entry = SimpleEntry(date: .now, widgetModel: nil, isLogin: false)
            return Timeline(entries: [entry], policy: .after(Calendar.current.date(byAdding: .minute, value: 30, to: currentDate)!))
        }
        
        let deviceList = await TuyaAppSDKWidgetDataManager.shared.getDataList()
        let modelList = await TuyaAppSDKWidgetDataManager.shared.transToModel(with: deviceList)
        
        var entries: [SimpleEntry] = []
        for (index, model) in modelList.enumerated() {
            let entryDate = Calendar.current.date(byAdding: .minute, value: index*10, to: currentDate)!
            let entry = SimpleEntry(date: entryDate, widgetModel: model, isLogin: true)
            entries.append(entry)
        }
        return Timeline(entries: entries, policy: .atEnd)
    }
    
    func snapshot(for configuration: TuyaAppSDKWidgetIntent, in context: Context) async -> SimpleEntry {
        return SimpleEntry(date: .now, widgetModel: nil, isLogin: false)
    }
    
    func placeholder(in context: Context) -> SimpleEntry {
        return SimpleEntry(date: .now, widgetModel: nil, isLogin: false)
    }
}

struct SimpleEntry: TimelineEntry {
    let date: Date
    let widgetModel : TuyaAppSDKWidgetModel?
    let isLogin : Bool
}

@available(iOSApplicationExtension 17.0, *)
struct TuyaAppSDKWidgetEntryView : View {
    var entry: Provider.Entry

    var body: some View {
        VStack {
            if !entry.isLogin {
                Text("Please login in app")
            } else {
                if let widgetModel = entry.widgetModel {
                    if #available(iOSApplicationExtension 17.0, *) {
                        Button(intent: TuyaAppSDKWidgetActionIntent(devId: widgetModel.devId, switchStatus: widgetModel.switchStatus)) {
                            HStack {
                                Image(uiImage: widgetModel.image ?? UIImage())
                                    .resizable()
                                    .aspectRatio(contentMode: .fill)
                                    .frame(width: 50,height: 50)
                                VStack(alignment: .leading) {
                                    Text(widgetModel.name)
                                    Text(widgetModel.isOnline ? "Online" : "Offline").foregroundStyle(widgetModel.isOnline ? Color.gray : Color.yellow).font(.system(size: 12))
                                }
                                Spacer()
                                if let switchStatus = widgetModel.switchStatus {
                                    VStack {
                                        Circle().frame(width: 15, height: 15).foregroundStyle(switchStatus ? Color.green : Color.red)
                                        Spacer()
                                    }
                                }
                            }
                        }.buttonStyle(.plain)
                    } else {
                        // Fallback on earlier versions
                    }
                } else {
                    Text("No device, please add device in app")
                }
            }
        }
    }
}

@available(iOSApplicationExtension 17.0, *)
struct TuyaAppSDKWidget: Widget {
    let kind: String = "TuyaAppSDKWidget"

    var body: some WidgetConfiguration {
       
        AppIntentConfiguration(kind: kind, intent: TuyaAppSDKWidgetIntent.self, provider: Provider()) { entry in
            if #available(iOS 17.0, *) {
                TuyaAppSDKWidgetEntryView(entry: entry).containerBackground(.white, for: .widget)
            } else {
                TuyaAppSDKWidgetEntryView(entry: entry)
                    .padding()
                    .background()
            }
        }
        .configurationDisplayName("Tuya App SDK Widget")
        .description("This is an example widget.")
        .supportedFamilies([.systemMedium])

    }
}

@available(iOSApplicationExtension 17.0, *)
struct TuyaAppSDKWidgetIntent: WidgetConfigurationIntent {
    static var title: LocalizedStringResource = "Tuya App Widget"
}

@available(iOSApplicationExtension 16, *)
struct TuyaAppSDKWidgetActionIntent: AppIntent {
    
    init() {
        
    }
    
    init(devId:String,switchStatus : Bool?) {
        self.devId = devId
        self.switchStatus = switchStatus
    }
    
    static var title: LocalizedStringResource = "Tuya App Widget"
    
    @Parameter(title: "device id")
    var devId:String
    
    @Parameter(title: "quick switch")
    var switchStatus : Bool?
    
    func perform() async throws -> some IntentResult {
        await exec()
        return .result()
    }
    
    func exec() async {
        await withCheckedContinuation { continuation in
            let smartDevice = ThingSmartDevice(deviceId: devId)
            if let switchStatus {
                let status = !switchStatus
                var dps : [String : Any] = [:]
                smartDevice?.deviceModel.switchDps?.forEach({ dpId in
                    dps[dpId.stringValue] = status
                })
                
                smartDevice?.publishDps(dps, mode: ThingDevicePublishModeInternet) {
                    continuation.resume()
                } failure: { error in
                    continuation.resume()
                }
                
            } else {
                smartDevice?.updateName("智能摄像机", success: {
                    continuation.resume()
                }, failure: { error in
                    continuation.resume()
                })
            }
        }
    }
}


//#Preview(as: .systemSmall) {
//    TuyaAppSDKWidget()
//} timeline: {
//    SimpleEntry(date: .now, configuration: .smiley)
//    SimpleEntry(date: .now, configuration: .starEyes)
//}
