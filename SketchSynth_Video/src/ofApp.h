#pragma once
#include "ofMain.h"
#include "ofxCv.h"
#include "ofxGui.h"
#include "ofxDropdown.h"

#define BUFFER_SIZE 8192
#define SAMPLE_RATE 44100
#define INITIAL_BUFFER_SIZE 512
#define BIT 512


class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void exit();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    
    ofVideoPlayer moviePlay;
    
    ofDirectory dir;
    vector<ofVideoPlayer> movies;
    
    float line;
    
    int	maxHertz;
    int	minHertz;
    
    double sineBufferLeft[514];
    double sineBufferRight[514];
    
    float remainderLeft;
    float remainderRight;
    float ampLeft[BIT];
    float ampRight[BIT];
    int hertzScaleLeft[BIT];
    int hertzScaleRight[BIT];
    float phasesLeft[BIT];
    float phasesRight[BIT];
    
    
    ofPixels moviePixel;
    bool fullscreen;
    
    float sidebarPosX;
    float sidebarWidth;


    // GUI
    void setGui(vector<ofSoundDevice> _d, int _id);
    int defaultDeviceID;
    ofxPanel gui;
    ofxFloatSlider overlap;
    ofxFloatSlider hifq;
    ofxFloatSlider lofq;
    ofxFloatSlider speed;
    ofxFloatSlider thresholdMovie;
    ofxFloatSlider thresholdSynthTracking;
    ofxFloatSlider thresholdPlayZone;
    ofxFloatSlider thresholdWaveTable;
    ofxToggle changeMonitor;
    ofxToggle edgeOn;
    ofxFloatSlider edgeFactor1;
    ofxFloatSlider edgeFactor2;
    ofxToggle bwOn;
    ofxFloatSlider bwContrast;
    ofxFloatSlider bwBright;

    ofxToggle pixelOn;
    ofxIntSlider pixelW;
    ofxIntSlider pixelH;

    ofxButton openFileButton;
    ofxToggle invertColorToggle;
    ofxFloatSlider volumeSlider;
    ofxFloatSlider movieVolumeSlider;
    ofxIntSlider deviceID;
    unique_ptr<ofxIntDropdown> intDropdown;
    ofParameter<int> guiAudioDevice;    
    
    ofxLabel mainGui;
    ofxLabel effectGui;
    ofxLabel audioGui;
    
    
    // open
    void openFileButtonPressed();
    void deviceIDChanged(int & _deviceID);
    
    ofParameter<int> deviceNum;
    void processOpenFileSelection(ofFileDialogResult openFileResult);
    ofVideoPlayer changeMovieSize(ofVideoPlayer _m);
    
    void mouseReleasedEvent(ofMouseEventArgs & mouse);
    void openFile();
    
    
    // audio
    float getFreq(float _yPos);
    float getAmp(float _x, float _y);
        
    bool bPlaying;
    void setAudio(ofSoundStreamSettings settings);
    ofSoundStreamSettings setAudioDevice();
    //    ofSoundStreamSettings setWinAudioDevice();
    ofSoundDevice defaultInputDevice;
    vector<ofSoundDevice> audioInputDeviceList;
    ofSoundStreamSettings settings;
    void audioOut(ofSoundBuffer & buffer);
    ofSoundStream soundStream;
    
    
    // ofCV
    void setDefaultImage(ofVideoPlayer & _m);
    ofImage thresh;
    ofImage invertImg;
    ofImage gray, edge, sobel;
    ofVec2f calMovieRatio();
    ofPixels calEdgePixels();
    ofPixels calThresPixels();
    ofPixels calBrightness();

    
    ofFbo processRectPixelFBO;
    void calRectPixelFBO();
    
    // Pixel Effect
    
    
    // info / menu
    void drawFramerate();
    void drawInfo();
    void displaySidebar();
    void drawMovie();
    void drawSpectrum();
    void drawThresholdImg();
        
    
};
