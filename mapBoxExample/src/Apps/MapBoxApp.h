#pragma once

#include "ofMain.h"
#include "ofxiPhone.h"
#include "ofxiPhoneExtras.h"
#include "RMMapKit.h"

class MapBoxApp : public ofxiPhoneApp {
	
public:
    
     MapBoxApp ();
    ~MapBoxApp ();
    
	void setup();
	void update();
	void draw();
	void exit();
	
	void touchDown(ofTouchEventArgs &touch);
	void touchMoved(ofTouchEventArgs &touch);
	void touchUp(ofTouchEventArgs &touch);
	void touchDoubleTap(ofTouchEventArgs &touch);
	void touchCancelled(ofTouchEventArgs &touch);

	void lostFocus();
	void gotFocus();
	void gotMemoryWarning();
	void deviceOrientationChanged(int newOrientation);
    
    // font for writing latitude longitude info
    ofTrueTypeFont font;
    //GPS
    ofxiPhoneCoreLocation * coreLocation;
    CLLocationCoordinate2D userGPSLocation ;
	
    // instance of ofxiPhoneMapKit
    // all MapKit related functionality is through this object
    RMMapKit mapKit;
    bool hasGPS;

};

