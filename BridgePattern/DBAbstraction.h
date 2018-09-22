//
//  DBAbstraction.h
//  BridgePattern
//
//  Created by zhulin on 2018/9/22.
//  Copyright © 2018年 zhulin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FormatEnum.h"


@interface DBAbstraction : NSObject

- (void)transform:(TransformToType)type;

@end
