//
//  MasterViewController.h
//  Dockt
//
//  Created by Mike Nguyen on 10/25/2013.
//  Copyright (c) 2013 teamYEEZUS. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
