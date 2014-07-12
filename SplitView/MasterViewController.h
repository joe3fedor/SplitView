//
//  MasterViewController.h
//  SplitView
//
//  Created by Joseph Fedor on 7/12/14.
//  Copyright (c) 2014 Joseph Fedor. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
