//
//  GLView.h
//  FisheyeDewarp
//
//  Created by Jian on 2/25/17.
//  Copyright © 2017 TUTK. All rights reserved.
//

#if __has_feature(modules)
@import GLKit;
#else
#import <GLKit/GLKit.h>
#endif

#import "type.hh"

typedef NS_ENUM(NSInteger, ColorSpaceType)
{
    ColorSpace_RGBA8,
    ColorSpace_RGB565
};

typedef struct ZoomResult
{
    CGFloat scale;
    CGPoint viewport;
} ZoomResult;

@interface GLView : UIView
{
    NSTimer *slideFctorTimer;
    CGFloat slideFactor;
}

// readonly properties
@property (nonatomic, readonly) NSInteger framesPerSecond;
@property (nonatomic, readonly) KIDewarpMode mode;  // current mode
@property (nonatomic, readonly) BOOL needsCalibration;

// init
-(instancetype)init;
-(instancetype)initWithFrame: (CGRect)frame;
-(instancetype)initWithCoder: (NSCoder *)aDecoder;   // storyboard


/// setters
//
// camera image center
-(void)setCenterPoint: (CGPoint)point;

// switch modes: original, cylinder, and flatten
-(void)setMode: (KIDewarpMode)mode;

// fps (AVAPI)
-(void)setDisplayFPS: (BOOL)displayFPS;

// automatically set the height with 16 x 9 ratio
-(void)setWidth: (CGFloat)width;

-(void)setCutoff: (float)cutoff;

-(void)setOrientation: (KICameraOrientation)orientation;

// For different frame size
-(void)setMaxSrollSize:(CGFloat)size;

// gestures
-(CGPoint)offsetFrame: (float) offsetX
                withY: (float) offsetY;
-(ZoomResult)setScale: (float)scale;
-(float)getScale;
-(void)addPanGesture;
-(void)addPinchGesture;

// update texture with image or data
-(void)updateFrame:(UIImage *)image;
-(void)updateFrame: (NSData *)data
          withSize: (CGSize)size;
-(void)updateFrame: (NSData *)data
          withSize: (CGSize)size
     andColorSpace: (ColorSpaceType)colorSpace;

@end
