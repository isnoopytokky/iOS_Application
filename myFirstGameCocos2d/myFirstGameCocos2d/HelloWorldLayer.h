//
//  HelloWorldLayer.h
//  myFirstGameCocos2d
//
//  Created by Kanokwan on 10/25/2556 BE.
//  Copyright Kanokwan 2556. All rights reserved.
//


#import <GameKit/GameKit.h>

// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer <GKAchievementViewControllerDelegate, GKLeaderboardViewControllerDelegate>
{
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;

@end
