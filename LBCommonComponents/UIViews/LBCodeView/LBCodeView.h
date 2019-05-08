//
//  LBCodeView.h
//  Driver
//
//  Created by 刘彬 on 2019/5/7.
//  Copyright © 2019 BIN. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LBCodeView : UIView
@property (nonatomic,strong,readonly)NSArray<UIButton *> *codeShowButtons;
@property(nonatomic,copy)void(^codeInputFinish)(NSString *code);

- (instancetype)initWithFrame:(CGRect)frame numbersCount:(NSUInteger)count space:(CGFloat)space;
@end

NS_ASSUME_NONNULL_END
