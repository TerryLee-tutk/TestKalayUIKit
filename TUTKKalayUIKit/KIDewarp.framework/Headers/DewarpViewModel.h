//
//  DewarpViewModel.h
//  FisheyeDewarp
//
//  Created by jian li on 3/2/17.
//  Copyright © 2017 TUTK. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>



@interface DewarpViewModel : NSObject

-(void)adjustCenter: (UIImage *)image
         pointBlock: (void (^)(CGPoint center))pointBlock
         errorBlock: (void (^)(NSError *error))errorBlock;

@end
