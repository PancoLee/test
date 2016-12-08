//
//  ReadDocumentViewController.h
//  yuanhang
//
//  Created by 陈万海 on 16/9/18.
//  Copyright © 2016年 tjpld.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h> 

@interface ReadDocumentViewController : UIViewController<WKUIDelegate,WKNavigationDelegate>

@property (nonatomic, copy) NSString *urlString;

@property (nonatomic, copy) NSString *navName;

- (instancetype)initWithUrl:(NSString *)url withName:(NSString *)name;

@property (nonatomic, strong) WKWebView *webView;

@property (nonatomic, strong) UIProgressView *progressView;

@end
