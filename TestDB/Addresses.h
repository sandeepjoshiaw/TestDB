//
//  Addresses.h
//  TestDB
//
//  Created by Sandeep Joshi on 31/12/15.
//  Copyright © 2015 Sandeep Joshi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Person;

@interface Addresses : NSManagedObject

@property (nonatomic, retain) NSString *city;
@property (nonatomic, retain) NSString *street;
@property (nonatomic, retain) Person *person;

@end