//
//  XQListMenuCollectionViewCell.h
//  分类菜单选择器
//
//  Created by 徐强 on 15/11/12.
//  Copyright © 2015年 xuqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XQListMenuConfig.h"

#define arrowUpTitle @"---上箭头---"
#define arrowDownTitle @"---下箭头---"

@interface XQListMenuCollectionViewCell : UICollectionViewCell

@property (nonatomic, weak) UIButton *cellBtn;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, assign) BOOL showingArrow;

@end
