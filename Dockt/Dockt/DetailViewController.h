//
//  DetailViewController.h
//  Dockt
//
//  Created by Mike Nguyen on 10/25/2013.
//  Copyright (c) 2013 teamYEEZUS. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
