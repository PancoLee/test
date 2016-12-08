//
//  Common.h
//  YuanHangSafetyIOS
//
//  Created by Xxb－Apple on 16/2/16.
//  Copyright © 2016年 tjpld.com. All rights reserved.
//

#ifndef Common_h
#define Common_h


#define STATUS_BAR_HEIGHT [UIApplication sharedApplication].statusBarFrame.size.height
#define NAV_BAR_HEIGHT self.navigationController.navigationBar.frame.size.height
#define TAB_BAR_HEIGHT self.tabBarController.tabBar.frame.size.height

//判断是否为iPhone
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

//判断是否为iPad
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

//判断是否为ipod
#define IS_IPOD ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])

// 判断是否为 iPhone 5SE
#define iPhone5SE [[UIScreen mainScreen] bounds].size.width == 320.0f && [[UIScreen mainScreen] bounds].size.height == 568.0f

// 判断是否为iPhone 6/6s
#define iPhone6_6s [[UIScreen mainScreen] bounds].size.width == 375.0f && [[UIScreen mainScreen] bounds].size.height == 667.0f

// 判断是否为iPhone 6Plus/6sPlus
#define iPhone6Plus_6sPlus [[UIScreen mainScreen] bounds].size.width == 414.0f && [[UIScreen mainScreen] bounds].size.height == 736.0f

//判断 iOS 8 或更高的系统版本
#define IOS_VERSION_8_OR_LATER (([[[UIDevice currentDevice] systemVersion] floatValue] >=8.0)? (YES):(NO))

//判断 iOS 10 或更高的系统版本
#define IOS10 ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)

//获取系统版本
#define SYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]

//弱引用/强引用
#define WS(weakSelf)  __weak __typeof(&*self)weakSelf = self;
//#define SS(strongSelf)  __strong __typeof(&*self)strongSelf = self;

//获取屏幕宽度与高度
#define DEVICE_WIDTH [UIScreen mainScreen].bounds.size.width
#define DEVICE_HEIGHT [UIScreen mainScreen].bounds.size.height

//获取屏幕分辨率
#define RESOLUTION_W DEVICE_WIDTH*[UIScreen mainScreen].scale
#define RESOLUTION_H DEVICE_HEIGHT*[UIScreen mainScreen].scale

//获取通知中心
#define LRNotificationCenter [NSNotificationCenter defaultCenter]

#define KEY_WINDOW [UIApplication sharedApplication].keyWindow

//设置随机颜色
#define LRRandomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0 green:arc4random_uniform(256)/255.0 blue:arc4random_uniform(256)/255.0 alpha:1.0]

//RGB颜色转换（16进制->10进制）
#define COLOR_FROM_RGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

//设置RGB颜色
#define LRRGBColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

//设置RGBA颜色
#define LRRGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(r)/255.0 blue:(r)/255.0 alpha:a]

//clear背景颜色
#define LRClearColor [UIColor clearColor]

//自定义高效率的 NSLog (项目开发中，我们会在许多地方加上Log，但是发布的时候又不想用这些Log，我们也不可能一个一个的删除，所以自定义Log是必然的！)
#ifdef DEBUG
#define NSLog(format, ...) printf("\n[%s] %s [第%d行] %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#else
#define NSLog(format, ...)
#endif

//由角度转换弧度 由弧度转换角度
#define LRDegreesToRadian(x) (M_PI * (x) / 180.0)
#define LRRadianToDegrees(radian) (radian*180.0)/(M_PI)

//获取当前语言
#define LRCurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])

//使用ARC和MRC
#if __has_feature(objc_arc)
// ARC
#else
// MRC
#endif

//判断是真机还是模拟器
#if TARGET_OS_IPHONE
//iPhone Device
#endif

#if TARGET_IPHONE_SIMULATOR
//iPhone Simulator
#endif

//判断是否横屏
#define IS_LANDSCAPE  (DEVICE_HEIGHT < DEVICE_WIDTH) ? YES : NO

//判断对象是否为空
#define IS_NULL(obj) obj == nil ? YES : (obj == (id)[NSNull null] ? YES : NO)
#define IS_NOT_NULL(obj) obj != nil ? (obj != (id)[NSNull null] ? YES : NO) : NO

//设置当前app主风格
#define MAIN_COLOR COLOR_FROM_RGB(0x0c6aa2)

#define SCALE(x) x * DEVICE_HEIGHT/568.0f
//#define SCALE(x) x * DEVICE_HEIGHT/667.0f
//#define SCALE(x) x * DEVICE_HEIGHT/736.0f

#define VerifyValue(value) ({id tmp; if ([value isKindOfClass:[NSNull class]]||[value isEqualToString:@""]||value == nil) tmp = @"暂无内容"; else tmp = value; tmp;})

//自定义键盘Bar上按钮
static NSString *const TitleWithBack = @"返回";
static NSString *const TitleWithClear = @"清除";
static NSString *const TitleWithSave = @"保存";

static NSString *const AlertWithTypeDepartment = @"请选择责任部门或违章类型";
static NSString *const AlertWithOperationType = @"请选择操作类型";
static NSString *const AlertWithRectifyType = @"请选择整改类型";
static NSString *const AlertWithHaveRectify = @"该人员已有整改记录，无法继续整改";
static NSString *const AlertWithOperation = @"您即将处理一条隐患";

//处罚类型
static NSString *const AlertWithNoneOPeration = @"无处理";
static NSString *const AlertWithRectify = @"整改";
static NSString *const AlertWithPunish = @"处罚";

//警示文字
static NSString *const AlertWithDepartment = @"请先删除责任部门";
static NSString *const AlertWithType = @"请先删除违章类型";
static NSString *const SurePass =  @"确定复查合格?";
static NSString *const UnPass = @"确定复查不合格?";

//流程文字
static NSString *const TitleWithComplete = @"完成";
static NSString *const TitleWithReceive = @"待领取";
static NSString *const TitleWithRectify = @"待整改";
static NSString *const TitleWithReview = @"待复查";
static NSString *const TitleWithHandle = @"待处理";

static NSString *const TitleWithList = @"隐患列表";
static NSString *const TitleWithListFinish = @"隐患归档";

//人员相关操作
static NSString *const ReportHidden = @"上报隐患";
static NSString *const ReceiveHidden = @"领取隐患";
static NSString *const RectifyHidden = @"整改隐患";
static NSString *const ReviewHidden = @"复查隐患";
static NSString *const CommentHidden = @"批示";
static NSString *const HandleHidden = @"处理";

//操作按钮提示
static NSString *const BtnTitleWithRectify = @"整改";
static NSString *const BtnTitleWithHandle = @"处理";
static NSString *const BtnTitleWithReview = @"复查";
static NSString *const BtnTitleWithReceive = @"领取";

//按钮弹出提示title
static NSString *const AlertWithReceiveHidden = @"您即将领取一条隐患";
static NSString *const AlertWithHandleHidden = @"请选择处理类型";

//SVProgressHUD title
static NSString *const SVProgressWithDecideTitle = @"正在判断处理情况请稍后";
static NSString *const SVProgressWithSubmitTitle = @"正在提交您的处罚决定，请稍后";
static NSString *const SVProgressWithPunishTitle = @"正在提交您的领取决定，请稍后";



//消息通知
static NSString *const PushDataType_XCLB = @"巡查列表";
static NSString *const PushDataType_XXTZ = @"消息通知";
static NSString *const PushDataType_ZGKH = @"整改考核";
static NSString *const PushDataType_HZ = @"回执";
static NSString *const PushDataType_AQJD = @"安全交底";
static NSString *const PushDataType_TCDL = @"退出登录";
static NSString *const PushDataType_HTDB = @"合同待办";
static NSString *const PushDataType_ZJDB = @"资金待办";


//广播类型
static NSString *const NotificationType_XCLB = @"NotificationXCLB";
static NSString *const NotificationType_XXTZ = @"NotificationXXTZ";
static NSString *const NotificationType_ZGKH = @"NotificationZGKH";
static NSString *const NotificationType_HZ = @"NotificationHZ";
static NSString *const NotificationType_AQJD = @"NotificationAQJD";
static NSString *const NotificationType_TCDL = @"NotificationTCDL";
static NSString *const NotificationType_HTDB = @"NotificationHTDB";
static NSString *const NotificationType_ZJDB = @"NotificationZJDB";


//远航财务

//区别是资金使用详情,资金使用借款详情还是费用计提详情
static NSString *const FundUseInfoWithFundUseBorrowInfo = @"FundUseInfoWithFundUseBorrowInfo";


static NSString *const ContractChangeInfo = @"合同变更审批";
static NSString *const ContractSignInfo = @"合同签订审批";
static NSString *const FundUseBorrowInfo = @"借款申请审批";
static NSString *const FundUseAppendInfo = @"资金借款冲账申请审批";
static NSString *const FundUsePreGetInfo = @"费用计提申请审批";


static NSString *const SVProgressWithSubmitFlow = @"正在提交流程";
static NSString *const SVProgressWithReturnFlow = @"正在退回流程";

#endif /* Common_h */
