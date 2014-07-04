//
//  DetailViewController.h
//  second
//
//  Created by zrug on 14-6-14.
//  Copyright (c) 2014年 com.zcloud2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
