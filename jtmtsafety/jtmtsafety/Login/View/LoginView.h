//
//  LoginView.h
//  jtmtsafety
//
//  Created by 陈万海 on 2016/11/29.
//  Copyright © 2016年 陈万海. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface LoginView : UIView

@property (nonatomic, strong) UIImageView *logoImage;

@property (nonatomic, strong) UILabel *titleLb;

@property (nonatomic, strong) TextField *tbUserName;

@property (nonatomic, strong) TextField *tbPassWord;

@property (nonatomic, strong) FlatButton *loginBtn;

@end
