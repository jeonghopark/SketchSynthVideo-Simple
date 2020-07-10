#ifndef __APPLE_CC__
#pragma comment(linker, "/subsystem:windows /entry:mainCRTStartup")
#endif

#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"


//========================================================================
int main( ){
    
    ofGLFWWindowSettings settings;
    settings.setSize(1080 + 280, 810);
    settings.resizable = false;
    shared_ptr<ofAppBaseWindow> mainWindow = ofCreateWindow(settings);

    ofRunApp( new ofApp());
    
}
