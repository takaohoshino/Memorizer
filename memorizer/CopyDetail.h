//
//  CopyDetail.h
//  memorizer
//
//  Created by 星野嵩夫 on 2015/02/26.
//  Copyright (c) 2015年 星野嵩夫. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CopyDetail : UIViewController<UITableViewDataSource,UITableViewDelegate>
@property (weak, nonatomic) IBOutlet UITableView *CopyTableView;
@property (weak, nonatomic) IBOutlet UILabel *mylabel;

@end
