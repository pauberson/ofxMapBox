//
//  CustomAppViewController.m
//  Created by lukasz karluk on 8/02/12.
//

#import "MapBoxAppViewController.h"
#import "ofxiPhoneExtras.h"

@implementation MapBoxAppViewController

- (id) initWithFrame:(CGRect)frame app:(ofxiPhoneApp *)app {

    ofxiPhoneGetOFWindow()->setOrientation( OF_ORIENTATION_DEFAULT );   //-- default portait orientation.    
    
    return self = [super initWithFrame:frame app:app];
}

- (BOOL) shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation {
    return NO;
}

@end