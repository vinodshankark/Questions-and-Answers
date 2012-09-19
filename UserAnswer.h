//
//  UserAnswer.h
//  
//
//  Created by Kris Fields on 9/18/12.
//
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Answer, User;

@interface UserAnswer : NSManagedObject

@property (nonatomic) int32_t user_id;
@property (nonatomic) int32_t answer_id;
@property (nonatomic) int32_t user_answer_id;
@property (nonatomic, retain) User *user;
@property (nonatomic, retain) Answer *answer;

@end
