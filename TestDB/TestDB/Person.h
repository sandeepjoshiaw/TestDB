//
//  Person.h
//  TestDB
//
//  Created by Sandeep Joshi on 31/12/15.
//  Copyright © 2015 Sandeep Joshi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Person : NSObject

@property (nonatomic, retain) NSString *first;
@property (nonatomic, retain) NSString *last;
@property (nonatomic, retain) NSSet *addresses;
@property (nonatomic, retain) NSSet *vehicles;

@end