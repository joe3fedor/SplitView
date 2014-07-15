//
//  TableViewController.h
//  SplitView
//
//  Created by Joseph Fedor on 7/12/14.
//  Copyright (c) 2014 Joseph Fedor. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface TableViewController : UITableViewController

@property (nonatomic, retain) NSArray *siteNames2;
@property (nonatomic, retain) NSArray *siteAddresses2;

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
