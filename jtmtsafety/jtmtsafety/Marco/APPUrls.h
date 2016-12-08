//
//  APPUrls.h
//  YuanHangSafetyIOS
//
//  Created by Xxb－Apple on 16/2/16.
//  Copyright © 2016年 tjpld.com. All rights reserved.
//

#ifndef APPUrls_h
#define APPUrls_h

//远航安全
//公司外网
#define KBASEURL @"http://60.29.76.194:8080/safety/"
//婷姐测试网
//#define KBASEURL @"http://192.168.1.128:8080/safety/"
//公司内网
//#define KBASEURL @"http://192.168.16.7:8080/safety/"
//远航部署外网
//#define KBASEURL @"http://60.29.0.169:8081/safety/"



/* 登陆 */
#define KLOGIN [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/loginApp"]

/* 待领取 待复查 待处理*/
#define KGETPROBLEMBYSTATE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getProblemByState"]

/* 待整改 */
#define KFINDBYSTATEANDDEP [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/findByStateAndDep"]

/* 隐患列表（未完成） */
#define KPROBLEMLIST [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/problemList"]

/* 隐患列表（归档） */
#define KPROBLEMLISTFINISH [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/problemListFinish"]

/* 隐患问题时间轴 */
#define KGETPROBLEMBYTIMEAXIS [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getProblemByTimeAxis"]

/* 读取责任部门 */
#define KFINDORGBYNAME [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/findOrgByName"]

/* 读取违章类型（二级） */
#define KFINDCHECKTYPEBYNAME [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/findCheckTypeByName"]

/* 巡查列表 */
#define KFINDALLDAILYCHECK [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/findAllDailyCheck"]

/* 日常巡查 */
#define KREPORTCHECKDAILY [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/reportCheckDaily"]

/* 整改处罚 */
#define KSUPERVISIONREPORT [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/supervisionReport"]

/* 根据选择的责任部门和处罚类型判断是处罚还是整改 */
#define KGETBOOLEANBYDEPANDTYPE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getBooleanByDepAndType"]

/* 提交问题领取 */
#define KRECEIVEPROBLEM [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/receiveProblem"]

/* 提交整改处罚信息 */
#define KSETTYPE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/setType"]

/* 提交整改信息 */
#define KRECTIFICATIONPROBLEM [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/rectificationProblem"]

/* 提交复查信息 */
#define KREVIEWPROBLEM [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/reviewProblem"]

/* 领导批示 */
#define KSAVENOTE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/saveNote"]

/* 读取接收消息列表 */
#define KGETMESSAGEBYUID [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getMessageByUid"]

/* 监察大队读取复查列表（监察大队） */
#define KGETLISTREVIEW [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getListReview"]

/* 复查列表详细（监察大队） */
#define KGETLISTREVIEWDETAIL [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getListReviewDetail"]

/* 复查计划详细（监察大队） */
#define KGETLISTPLANREVIEW [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getListPlanReview"]

/*监察大队反馈每一条的复查信息（监察大队） */
#define KSAVECHECKREIVEW [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/saveCheckReivew"]

/* 读取交底计划列表（队长） */
#define KGETDISCLOSUREPLANLIST [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getDisclosurePlanList"]

/* 读取交底消息列表（队长） */
#define KGETDISCLOSURECONTENT [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getDisclosureContent"]

/* 根据每一条消息ID反馈落实信息（队长） */
#define KSAVESELFCHECK [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/saveSelfCheck"]

/* 读取接收消息列表  */
#define KGETMESSAGEBYUID [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getMessageByUid"]

/* 消息确认接收  */
#define KSAVEMESSAGEDATE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/saveMessageDate"]

/* 发送消息  */
#define KSENDMESSAGE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/sendMessage"]

/* 读取接收人列表  */
#define KGETORGUSER [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getOrgUser"]

/* 根据状态获取个数  */
#define KGETCOUNTBYSTATE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getCountByState"]

/* 更新时间戳  */
#define KUPDATETIMESTAMP [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/updateTimeStamp"]

/* 读取检查任务列表页  */
#define KGETCHECKPLAN [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getCheckPlan"]

/* 读取检查任务对应的检查条目页  */
#define KGETCHECKPLANDETAIL [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getCheckPlanDetail"]

/* 提交完成检查计划  */
#define KFINISHPLAN [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/finishPlan"]

/* 提交完成检查的签字和图片  */
#define KUPLOADPLAN [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/uploadPlan"]

/* 读取作业许可列表  */
#define KGETWORKPERMIT [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getWorkPermit"]

/* 培训计划名称 */
#define KGETTRAINPLANNAME [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getTrainPlanName"]

/* 授课方式字典 */
#define KGETTRAINWAY [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getTrainWay"]

/* 回执详情  */
#define KGETMESSAGEDETAIL [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getMessageDetail"]

/* 查看消息每个人的接收情况  */
#define KGETMESSAGEREAD [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getMessageRead"]

/* 提交回执  */
#define KSAVEMESSAGERECEIPT [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/saveMessageReceipt"]

/*  安全交底自查后，推送消息 */
#define KPUSHMESSAGE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/pushMessage"]

/*  查询接收人分组信息 */
#define KGETORGUSERGROUP [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/getOrgUserGroup"]

/*  值班信息 */
#define KFINDDUTYPLANBYDATE [NSString stringWithFormat:@"%@%@",KBASEURL,@"app/findDutyPlanByDate"]



//公司外网
#define KPUSHURL @"http://60.29.76.194:8080/PushApplication/"
//婷姐测试网
//#define KPUSHURL @"http://192.168.1.128:8080/PushApplication/"
//公司内网
//#define KPUSHURL @"http://192.168.16.7:8080/PushApplication/"
//远航部署外网
//#define KPUSHURL @"http://60.29.0.169:8081/PushApplication/"

/* 推送登陆 */
#define KLOGINIOS [NSString stringWithFormat:@"%@%@",KPUSHURL,@"loginIOS"]
/* 获取最新消息 */
#define KGETDATA [NSString stringWithFormat:@"%@%@",KPUSHURL,@"getData"]
/* 消息变为已读 */
#define KCHANGETOREAD [NSString stringWithFormat:@"%@%@",KPUSHURL,@"changeToRead"]
/* 退出登录*/
#define KLOGOFFIOS [NSString stringWithFormat:@"%@%@",KPUSHURL,@"logoffIOS"]
/* 后台进入前台后获取用户信息 */
#define KGETUSERINFO [NSString stringWithFormat:@"%@%@",KPUSHURL,@"getUserInfo"]


//远航财务
//公司内网
#define KFMISBASEURL @"http://192.168.16.7:8080/fmis/"
//远航测试
//#define KFMISBASEURL @"http://10.128.71.7:8080/fmis/"


/* 查询待办事项数量*/
#define KGETTODOITEMNUM [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getTodoItemNum"]

/* 待办合同(预算，资金使用)列表*/
#define KGETTODOITEMS [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getTodoItems"]

/* 待办合同(预算，资金使用)列表(有查询条件)*/
#define KGETTODOITEMSWITHQUERY [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getTodoItemsWithQuery"]

/* 合同签订详情*/
#define KGETCONTRACTSIGNINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getContractSignInfo"]

/* 资金使用详情*/
#define KGETFUNDUSEINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getFundUseInfo"]

/* 资金使用借款冲账详情*/
#define KGETFUNDUSEAPPENDINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getFundUseAppendInfo"]

/* 资金使用借款详情*/
#define KGETFUNDUSEBORROWINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getFundUseBorrowInfo"]

/* 预算申请详情*/
#define KGETBUDGETAPPLYINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getBudgetApplyInfo"]

/* 预算追加详情*/
#define KGETBUDGETAPPENDINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getBudgetAppendInfo"]

/* 预算调整详情*/
#define KGETBUDGETCHANGEINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getBudgetChangeInfo"]

/* 合同变更详情*/
#define KGETCONTRACTCHANGEINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getContractChangeInfo"]

/* 查看审批意见*/
#define KGETCOMMENTS [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getComments"]

/* 获取提交人员*/
#define KGETNEXTPERSONS [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getNextPersons"]

/* 提交流程*/
#define KGOTONEXTNODE [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/goToNextNode"]

/* 获取退回节点*/
#define KGETRETURNNODES [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getReturnNodes"]

/* 退回流程*/
#define KGOTORETURNNODE [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/goToReturnNode"]

/* 按合同ID获取合同详情*/
#define KGETCONTRACTINFO [NSString stringWithFormat:@"%@%@",KFMISBASEURL,@"app/getContractInfo"]

#endif /* APPUrls_h */
