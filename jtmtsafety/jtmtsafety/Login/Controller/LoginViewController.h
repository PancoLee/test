//
//  LoginViewController.h
//  YuanHangSafetyIOS
//
//  Created by Xxb－Apple on 16/2/16.
//  Copyright © 2016年 tjpld.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LoginView.h"
#import "ReadDocumentViewController.h"

@interface LoginViewController : UIViewController<UITextFieldDelegate>

@property (nonatomic, strong) LoginView *loginView;

@end
