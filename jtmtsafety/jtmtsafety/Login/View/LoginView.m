//
//  LoginView.m
//  jtmtsafety
//
//  Created by 陈万海 on 2016/11/29.
//  Copyright © 2016年 陈万海. All rights reserved.
//

#import "LoginView.h"


@implementation LoginView

- (instancetype)initWithFrame:(CGRect)frame
{
    if (self = [super initWithFrame:frame]) {
        [self addSubview:self.logoImage];
         [self addSubview:self.titleLb];
        [self addSubview:self.tbUserName];
        [self addSubview:self.tbPassWord];
        [self addSubview:self.loginBtn];
        [self layoutUI];
    }
    return self;
}
#pragma mark - Getter

- (UIImageView *)logoImage
{
    if (!_logoImage) {
        _logoImage = [[UIImageView alloc] init];
        _logoImage.backgroundColor = [UIColor blackColor];
    }
    return _logoImage;
}

- (UILabel *)titleLb
{
    if (!_titleLb) {
        _titleLb = [[UILabel alloc] init];
        _titleLb.text = @"焦炭码头安全管理";
        _titleLb.font = [UIFont systemFontOfSize:15];
        _titleLb.textAlignment = NSTextAlignmentCenter;
        _titleLb.textColor = [UIColor grayColor];
    }
    return _titleLb;
}

- (TextField *)tbUserName
{
    if (!_tbUserName) {
        _tbUserName = [[TextField alloc] init];
        _tbUserName.placeholder = @"用户名";
        _tbUserName.placeholderNormalColor = [UIColor orangeColor];
        _tbUserName.clearButtonMode = UITextFieldViewModeWhileEditing;
    }
    return _tbUserName;
}

- (TextField *)tbPassWord
{
    if (!_tbPassWord) {
        _tbPassWord = [[TextField alloc] init];
        _tbPassWord.placeholder = @"密码";
        _tbPassWord.placeholderNormalColor = [UIColor orangeColor];
        _tbPassWord.clearButtonMode = UITextFieldViewModeWhileEditing;
    }
    return _tbPassWord;
}

- (FlatButton *)loginBtn
{
    if (!_loginBtn) {
        _loginBtn = [[FlatButton alloc] init];
        [_loginBtn setTitle:@"登    录" forState:UIControlStateNormal];
        _loginBtn.backgroundColor = [UIColor blueColor];
        _loginBtn.depthPreset = DepthPresetDepth2;
        _loginBtn.cornerRadius = 8;
    }
    return _loginBtn;
}

- (void)layoutUI {
    
    WS(ws);
    
    [self.logoImage mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(ws.mas_top).offset(SCALE(20.f));
        make.width.mas_equalTo(SCALE(100));
        make.height.mas_equalTo(SCALE(100));
        make.centerX.equalTo(ws.mas_centerX);
    }];
    
    [self.titleLb mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(ws.logoImage.mas_bottom).offset(SCALE(10.f));
        make.left.equalTo(ws.mas_left);
        make.right.equalTo(ws.mas_right);
        make.height.mas_equalTo(SCALE(20));
    }];
    
    [self.tbUserName mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(ws.titleLb.mas_bottom).offset(SCALE(20));
        make.left.equalTo(ws.mas_left).offset(SCALE(20));
        make.right.equalTo(ws.mas_right).offset(-SCALE(20));
        make.height.mas_equalTo(SCALE(30));
    }];
    
    [self.tbPassWord mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(ws.tbUserName.mas_bottom).offset(SCALE(20));
        make.left.equalTo(ws.mas_left).offset(SCALE(20));
        make.right.equalTo(ws.mas_right).offset(-SCALE(20));
        make.height.mas_equalTo(SCALE(30));
    }];
    
    [self.loginBtn mas_makeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(ws.tbPassWord.mas_bottom).offset(SCALE(30));
        make.left.equalTo(ws.mas_left).offset(SCALE(20));
        make.right.equalTo(ws.mas_right).offset(-SCALE(20));
        make.height.mas_equalTo(SCALE(40));
    }];

}


@end
