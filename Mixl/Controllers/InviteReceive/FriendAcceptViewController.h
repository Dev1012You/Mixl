//
//  FriendAcceptViewController.h
//  Mixl
//
//  Created by John Pacheco on 5/18/16.
//  Copyright © 2016 John. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FriendAcceptViewController : BaseViewController

@property (weak, nonatomic) IBOutlet UIImageView *imgWantedUser;
@property (weak, nonatomic) IBOutlet UILabel *lblWantedUserName;

@property (strong, nonatomic) NSString* friendRequestUserId;

@end
