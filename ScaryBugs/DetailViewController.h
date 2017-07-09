//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Bhuvana on 7/9/17.
//  Copyright © 2017 Bhuvana. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

