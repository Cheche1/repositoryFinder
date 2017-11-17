//
//  contributorsViewCell.h
//  GithubRepositoriesFinder
//
//  Created by ids beca on 21/02/17.
//  Copyright © 2017 ids beca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface contributorsViewCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *loginLabel;
@property (nonatomic, weak) IBOutlet UILabel *locationLabel;
@property (nonatomic, weak) IBOutlet UILabel *emailLabel;
@property (nonatomic, weak) IBOutlet UILabel *blogLabel;
@property (nonatomic, weak) IBOutlet UILabel *contributionsLabel;
@property (nonatomic, weak) IBOutlet UILabel *followLabel;
@property (nonatomic, weak) IBOutlet UIImageView *avatarRepo;
@end
