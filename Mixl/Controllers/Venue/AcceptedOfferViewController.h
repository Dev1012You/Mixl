//
//  AcceptedOfferViewController.h
//  Mixl
//
//  Created by John Pacheco on 4/20/16.
//  Copyright © 2016 John. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AcceptedOfferViewController : BaseViewController
@property (weak, nonatomic) IBOutlet UIImageView *imgVenue;
@property (weak, nonatomic) IBOutlet UIImageView *imgAcceptedUser;
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;

@property (strong, nonatomic) NSDictionary *offeredUser;
@end
