//
//  customTableCell.h
//  GithubRepositoriesFinder
//
//  Created by ids beca on 20/02/17.
//  Copyright © 2017 ids beca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface customTableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *descLabel;
@property (nonatomic, weak) IBOutlet UILabel *watchersLabel;
@property (nonatomic, weak) IBOutlet UILabel *dateLabel;
@property (nonatomic, weak) IBOutlet UIImageView *avatarRepo;

@end
