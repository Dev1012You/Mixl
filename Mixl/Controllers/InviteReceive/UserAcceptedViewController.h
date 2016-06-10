//
//  UserAcceptedViewController.h
//  Mixl
//
//  Created by John Pacheco on 4/19/16.
//  Copyright © 2016 John. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UserAcceptedViewController : BaseViewController
@property (weak, nonatomic) IBOutlet UIImageView *imgSender;
@property (weak, nonatomic) IBOutlet UIImageView *imgRecipient;
@property (weak, nonatomic) IBOutlet UILabel *lblAcceptedName;

@end
