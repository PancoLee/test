//
//  ReadDocumentViewController.m
//  yuanhang
//
//  Created by 陈万海 on 16/9/18.
//  Copyright © 2016年 tjpld.com. All rights reserved.
//

#import "ReadDocumentViewController.h"

@interface ReadDocumentViewController ()

@end

@implementation ReadDocumentViewController
@synthesize urlString,navName,webView,progressView;

- (instancetype)initWithUrl:(NSString *)url withName:(NSString *)name {
    self = [super init];
    if (self) {
        self.urlString = url;
        self.navName = name;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self initWebView];
    [self initNavigation];
    [self initProgressView];
}

- (void)initNavigation {
    
    self.navigationItem.title = navName;
}

- (void)initWebView {
    webView = [[WKWebView alloc] init];
    
    webView.UIDelegate = self;
    webView.navigationDelegate = self;
    
    [self.view addSubview:webView];
    
    WS(ws);
    [webView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(ws.view.mas_top);
        make.left.equalTo(ws.view.mas_left);
        make.right.equalTo(ws.view.mas_right);
        make.bottom.equalTo(ws.view.mas_bottom);
    }];
    
    [webView addObserver:self forKeyPath:@"estimatedProgress" options:NSKeyValueObservingOptionNew| NSKeyValueObservingOptionOld context:nil];
    NSString *path = [[NSBundle mainBundle] pathForResource:@"haha.pdf" ofType:nil];
    NSURL *url = [NSURL fileURLWithPath:path];
    [webView loadRequest:[NSURLRequest requestWithURL:url]];
}

- (void)initProgressView {
    
    progressView = [[UIProgressView alloc] init];
    [self.view addSubview:progressView];
    
    WS(ws);
    [progressView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(ws.mas_topLayoutGuideBottom);
        make.left.equalTo(ws.view.mas_left);
        make.right.equalTo(ws.view.mas_right);
        make.height.mas_equalTo(2);
    }];
}

- (void)observeValueForKeyPath:(NSString *)keyPath ofObject:(id)object change:(NSDictionary *)change context:(void *)context{
    if ([keyPath isEqual: @"estimatedProgress"] && object == webView) {
        [self.progressView setAlpha:1.0f];
        [self.progressView setProgress:webView.estimatedProgress animated:YES];
        if(webView.estimatedProgress >= 1.0f)
        {
            [UIView animateWithDuration:0.3 delay:0.3 options:UIViewAnimationOptionCurveEaseOut animations:^{
                [self.progressView setAlpha:0.0f];
            } completion:^(BOOL finished) {
                [self.progressView setProgress:0.0f animated:NO];
            }];
        }
    }
    else {
        [super observeValueForKeyPath:keyPath ofObject:object change:change context:context];
    }
}

- (void)dealloc {
    [webView removeObserver:self forKeyPath:@"estimatedProgress"];
    
    // if you have set either WKWebView delegate also set these to nil here
    [webView setNavigationDelegate:nil];
    [webView setUIDelegate:nil];
}

@end
