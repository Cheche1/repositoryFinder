//
//  Repositorie.h
//  GithubRepositoriesFinder
//
//  Created by ids beca on 20/02/17.
//  Copyright © 2017 ids beca. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Repositorie : NSObject
{
NSString *name;
NSString *descp;
NSString *url;
NSString *created_at;
NSString *watchers;
}

@property(nonatomic, retain) NSString *name;
@property(nonatomic, retain) NSString *descp;
@property(nonatomic, retain) NSString *url;
@property(nonatomic, retain) NSString *crated_at;
@property(nonatomic, retain) NSString *watchers;
@end
