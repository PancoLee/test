//
//  LoginViewController.m
//  YuanHangSafetyIOS
//
//  Created by Xxb－Apple on 16/2/16.
//  Copyright © 2016年 tjpld.com. All rights reserved.
//

#import "LoginViewController.h"

@interface LoginViewController ()

@end

@implementation LoginViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor yellowColor];
    
    [self initControl];
    
    
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
//    [self updateApp];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)initControl {
    
    LoginView *loginView = [[LoginView alloc] init];
    self.loginView = loginView;
    loginView.depthPreset = DepthPresetDepth5;
    loginView.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:loginView];
    loginView.layer.cornerRadius = 10;
    loginView.layer.shadowRadius = 3;
    loginView.layer.shadowOpacity = 0.5;
    loginView.layer.shadowOffset = CGSizeMake(0, 1);
    
    loginView.tbUserName.delegate = self;
    loginView.tbPassWord.delegate = self;
    
    [loginView.tbUserName addTarget:self action:@selector(nextOnKeyboard:) forControlEvents:UIControlEventEditingDidEndOnExit];
    [loginView.tbPassWord addTarget:self action:@selector(nextOnKeyboard:) forControlEvents:UIControlEventEditingDidEndOnExit];
    [loginView.loginBtn addTarget:self action:@selector(sumbit:) forControlEvents:UIControlEventTouchUpInside];
    
    WS(ws);
    
    [loginView mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(ws.view.mas_top).offset(SCALE(100.f));
        make.left.equalTo(ws.view.mas_left).offset(20);
        make.right.equalTo(ws.view.mas_right).offset(-20);
        make.height.mas_equalTo(SCALE(340));
    }];
    
    UITapGestureRecognizer *gesture = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(hidenKeyboard)];
    gesture.numberOfTapsRequired = 1;
    [loginView addGestureRecognizer:gesture];
    
    UITapGestureRecognizer *gestureT = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(hidenKeyboard)];
    gestureT.numberOfTapsRequired = 1;
    [self.view addGestureRecognizer:gestureT];
}

-(BOOL)textFieldShouldBeginEditing:(UITextField *)textField {
    NSTimeInterval animationDuration = 0.30f;
    [UIView beginAnimations:@"ResizeForKeyboard" context:nil];
    [UIView setAnimationDuration:animationDuration];
    float width = self.view.frame.size.width;
    float height = self.view.frame.size.height;
    CGRect rect=CGRectMake(0.0f,-100,width,height);
    self.view.frame = rect;
    [UIView commitAnimations];
    return YES;
}

- (void)resumeView {
    NSTimeInterval animationDuration = 0.30f;
    [UIView beginAnimations:@"ResizeForKeyboard" context:nil];
    [UIView setAnimationDuration:animationDuration];
    float width = self.view.frame.size.width;
    float height = self.view.frame.size.height;
    CGRect rect = CGRectMake(0.0f,0.0f,width,height);
    self.view.frame = rect;
    [UIView commitAnimations];
}

- (void)hidenKeyboard {
    [self.loginView.tbUserName resignFirstResponder];
    [self.loginView.tbPassWord resignFirstResponder];
    [self resumeView];
}

- (void)nextOnKeyboard:(TextField *)sender {
    if (sender == self.loginView.tbUserName) {
        [self.loginView.tbPassWord becomeFirstResponder];
    }else if (sender == self.loginView.tbPassWord){
        [self hidenKeyboard];
    }
}

- (void)sumbit:(id)sender {
    
    [self hidenKeyboard];
    
    ReadDocumentViewController *readDocumentViewController = [[ReadDocumentViewController alloc] init];
    UINavigationController *nv = [[UINavigationController alloc] initWithRootViewController:readDocumentViewController];
    [self presentViewController:nv animated:YES completion:nil];
}
@end
