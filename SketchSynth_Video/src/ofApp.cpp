#include "ofApp.h"

float sineBuffer2[514] = {0, 0.012268, 0.024536, 0.036804, 0.049042, 0.06131, 0.073547, 0.085785, 0.097992, 0.1102, 0.12241, 0.13455, 0.1467, 0.15884, 0.17093, 0.18301, 0.19507, 0.20709, 0.21909, 0.23105, 0.24295, 0.25485, 0.26669, 0.2785, 0.29025, 0.30197, 0.31366, 0.32529, 0.33685, 0.34839, 0.35986, 0.37128, 0.38266, 0.39395, 0.40521, 0.41641, 0.42752, 0.4386, 0.44958, 0.46051, 0.47137, 0.48215, 0.49286, 0.50351, 0.51407, 0.52457, 0.53497, 0.54529, 0.55554, 0.5657, 0.57578, 0.58575, 0.59567, 0.60547, 0.6152, 0.62482, 0.63437, 0.6438, 0.65314, 0.66238, 0.67151, 0.68057, 0.68951, 0.69833, 0.70706, 0.7157, 0.72421, 0.7326, 0.74091, 0.74908, 0.75717, 0.76514, 0.77298, 0.7807, 0.7883, 0.79581, 0.80316, 0.81042, 0.81754, 0.82455, 0.83142, 0.8382, 0.84482, 0.85132, 0.8577, 0.86392, 0.87006, 0.87604, 0.88187, 0.8876, 0.89319, 0.89862, 0.90396, 0.90912, 0.91415, 0.91907, 0.92383, 0.92847, 0.93295, 0.93729, 0.9415, 0.94556, 0.94949, 0.95325, 0.95691, 0.96039, 0.96375, 0.96692, 0.97, 0.9729, 0.97565, 0.97827, 0.98074, 0.98306, 0.98523, 0.98724, 0.98914, 0.99084, 0.99243, 0.99387, 0.99515, 0.99628, 0.99725, 0.99808, 0.99875, 0.99927, 0.99966, 0.99988, 0.99997, 0.99988, 0.99966, 0.99927, 0.99875, 0.99808, 0.99725, 0.99628, 0.99515, 0.99387, 0.99243, 0.99084, 0.98914, 0.98724, 0.98523, 0.98306, 0.98074, 0.97827, 0.97565, 0.9729, 0.97, 0.96692, 0.96375, 0.96039, 0.95691, 0.95325, 0.94949, 0.94556, 0.9415, 0.93729, 0.93295, 0.92847, 0.92383, 0.91907, 0.91415, 0.90912, 0.90396, 0.89862, 0.89319, 0.8876, 0.88187, 0.87604, 0.87006, 0.86392, 0.8577, 0.85132, 0.84482, 0.8382, 0.83142, 0.82455, 0.81754, 0.81042, 0.80316, 0.79581, 0.7883, 0.7807, 0.77298, 0.76514, 0.75717, 0.74908, 0.74091, 0.7326, 0.72421, 0.7157, 0.70706, 0.69833, 0.68951, 0.68057, 0.67151, 0.66238, 0.65314, 0.6438, 0.63437, 0.62482, 0.6152, 0.60547, 0.59567, 0.58575, 0.57578, 0.5657, 0.55554, 0.54529, 0.53497, 0.52457, 0.51407, 0.50351, 0.49286, 0.48215, 0.47137, 0.46051, 0.44958, 0.4386, 0.42752, 0.41641, 0.40521, 0.39395, 0.38266, 0.37128, 0.35986, 0.34839, 0.33685, 0.32529, 0.31366, 0.30197, 0.29025, 0.2785, 0.26669, 0.25485, 0.24295, 0.23105, 0.21909, 0.20709, 0.19507, 0.18301, 0.17093, 0.15884, 0.1467, 0.13455, 0.12241, 0.1102, 0.097992, 0.085785, 0.073547, 0.06131, 0.049042, 0.036804, 0.024536, 0.012268, 0, -0.012268, -0.024536, -0.036804, -0.049042, -0.06131, -0.073547, -0.085785, -0.097992, -0.1102, -0.12241, -0.13455, -0.1467, -0.15884, -0.17093, -0.18301, -0.19507, -0.20709, -0.21909, -0.23105, -0.24295, -0.25485, -0.26669, -0.2785, -0.29025, -0.30197, -0.31366, -0.32529, -0.33685, -0.34839, -0.35986, -0.37128, -0.38266, -0.39395, -0.40521, -0.41641, -0.42752, -0.4386, -0.44958, -0.46051, -0.47137, -0.48215, -0.49286, -0.50351, -0.51407, -0.52457, -0.53497, -0.54529, -0.55554, -0.5657, -0.57578, -0.58575, -0.59567, -0.60547, -0.6152, -0.62482, -0.63437, -0.6438, -0.65314, -0.66238, -0.67151, -0.68057, -0.68951, -0.69833, -0.70706, -0.7157, -0.72421, -0.7326, -0.74091, -0.74908, -0.75717, -0.76514, -0.77298, -0.7807, -0.7883, -0.79581, -0.80316, -0.81042, -0.81754, -0.82455, -0.83142, -0.8382, -0.84482, -0.85132, -0.8577, -0.86392, -0.87006, -0.87604, -0.88187, -0.8876, -0.89319, -0.89862, -0.90396, -0.90912, -0.91415, -0.91907, -0.92383, -0.92847, -0.93295, -0.93729, -0.9415, -0.94556, -0.94949, -0.95325, -0.95691, -0.96039, -0.96375, -0.96692, -0.97, -0.9729, -0.97565, -0.97827, -0.98074, -0.98306, -0.98523, -0.98724, -0.98914, -0.99084, -0.99243, -0.99387, -0.99515, -0.99628, -0.99725, -0.99808, -0.99875, -0.99927, -0.99966, -0.99988, -0.99997, -0.99988, -0.99966, -0.99927, -0.99875, -0.99808, -0.99725, -0.99628, -0.99515, -0.99387, -0.99243, -0.99084, -0.98914, -0.98724, -0.98523, -0.98306, -0.98074, -0.97827, -0.97565, -0.9729, -0.97, -0.96692, -0.96375, -0.96039, -0.95691, -0.95325, -0.94949, -0.94556, -0.9415, -0.93729, -0.93295, -0.92847, -0.92383, -0.91907, -0.91415, -0.90912, -0.90396, -0.89862, -0.89319, -0.8876, -0.88187, -0.87604, -0.87006, -0.86392, -0.8577, -0.85132, -0.84482, -0.8382, -0.83142, -0.82455, -0.81754, -0.81042, -0.80316, -0.79581, -0.7883, -0.7807, -0.77298, -0.76514, -0.75717, -0.74908, -0.74091, -0.7326, -0.72421, -0.7157, -0.70706, -0.69833, -0.68951, -0.68057, -0.67151, -0.66238, -0.65314, -0.6438, -0.63437, -0.62482, -0.6152, -0.60547, -0.59567, -0.58575, -0.57578, -0.5657, -0.55554, -0.54529, -0.53497, -0.52457, -0.51407, -0.50351, -0.49286, -0.48215, -0.47137, -0.46051, -0.44958, -0.4386, -0.42752, -0.41641, -0.40521, -0.39395, -0.38266, -0.37128, -0.35986, -0.34839, -0.33685, -0.32529, -0.31366, -0.30197, -0.29025, -0.2785, -0.26669, -0.25485, -0.24295, -0.23105, -0.21909, -0.20709, -0.19507, -0.18301, -0.17093, -0.15884, -0.1467, -0.13455, -0.12241, -0.1102, -0.097992, -0.085785, -0.073547, -0.06131, -0.049042, -0.036804, -0.024536, -0.012268, 0, 0.012268};


using namespace cv;
using namespace ofxCv;


//--------------------------------------------------------------
void ofApp::setup() {

#ifdef __APPLE_CC__
#ifdef DEBUG
#else
    ofSetDataPathRoot("../Resources/data");
#endif
#endif

    ofBackground(20);
    ofSetFrameRate(60);

    sidebarPosX = ofGetHeight() * 4 / 3;
    sidebarWidth = ofGetWidth() - sidebarPosX;
    defaultDeviceID = 0;

    setAudio(setAudioDevice());
    setGui(audioInputDeviceList, defaultDeviceID);

    moviePlay.load("PET0981_R-1_LA_720p.mp4");
    moviePlay.setLoopState(OF_LOOP_NORMAL);
    moviePlay.play();

    setDefaultImage(moviePlay);

    for (int i = 0; i < 514; i++) {
        sineBufferLeft[i] = sineBuffer2[i];
        sineBufferRight[i] = sineBuffer2[i];
    }

    bPlaying = false;
    fullscreen = false;
    
}


//--------------------------------------------------------------
void ofApp::setDefaultImage(ofVideoPlayer & _m) {
 
    thresh.allocate(_m.getWidth(), _m.getHeight(), OF_IMAGE_GRAYSCALE);
    moviePixel.allocate(_m.getWidth(), _m.getHeight(), OF_IMAGE_COLOR);
    edge.allocate(_m.getWidth(), _m.getHeight(), OF_IMAGE_GRAYSCALE);
    processRectPixelFBO.allocate(_m.getWidth(), _m.getHeight());

}


//--------------------------------------------------------------
void ofApp::setAudio(ofSoundStreamSettings settings) {

    int _chNum = defaultInputDevice.outputChannels;
    settings.setOutListener(this);
    settings.bufferSize = 512;
    settings.sampleRate = 44100;
    settings.numInputChannels = 0;
    settings.numOutputChannels = _chNum;
    soundStream.setup(settings);

}


//--------------------------------------------------------------
ofSoundStreamSettings ofApp::setAudioDevice() {

    ofSoundStreamSettings _settingsOuput;
    vector<ofSoundDevice> _buffDev = soundStream.getDeviceList();

    for (int i = 0; i < _buffDev.size(); i++) {
        if (_buffDev.at(i).outputChannels > 0) {
            audioInputDeviceList.push_back(_buffDev.at(i));
        }
    }

#ifdef __APPLE_CC__
    for (int i = 0; i < audioInputDeviceList.size(); i++) {
        if (audioInputDeviceList.at(i).name == "Apple Inc.: Built-in Output") {
            defaultDeviceID = i;
            defaultInputDevice = audioInputDeviceList.at(i);
        }
    }
#else
    defaultDeviceID = 0;
    defaultInputDevice = audioInputDeviceList.at(0);
#endif

    _settingsOuput.setOutDevice(defaultInputDevice);
    return _settingsOuput;

}


//--------------------------------------------------------------
void ofApp::setGui(vector<ofSoundDevice> _d, int _id) {

    ofAddListener(ofEvents().mouseReleased, this, &ofApp::mouseReleasedEvent, OF_EVENT_ORDER_BEFORE_APP);

    openFileButton.addListener(this, &ofApp::openFileButtonPressed);
    guiAudioDevice.addListener(this, &ofApp::deviceIDChanged);

    gui.setup();
//    gui.setDefaultWidth(sidebarWidth * 0.8);
    gui.setPosition(sidebarPosX, 60);
    
    gui.add(mainGui.setup("Main", ""));
    mainGui.setBackgroundColor(ofColor(60, 140, 60));
    gui.add(openFileButton.setup("File Open"));
    gui.add(changeMonitor.setup("Change Monitor Viewer", false));
    gui.add(invertColorToggle.setup("Invert colors", false));
    gui.add(bwContrast.setup("Contrast", 1, 0, 6));
    gui.add(bwBright.setup("Brightness", 0, -255, 255));
//    gui.add(thresholdSynthTracking.setup("Movie Synth Threshold", 0.52, 0, 1));
//    gui.add(thresholdPlayZone.setup("PlayZone Contrast", 0.52, 0, 1));
//    gui.add(thresholdWaveTable.setup("WaveTable Contrast", 0.515, 0, 1));
//    gui.add(speed.setup("Speed", 2, 0.1, 10));
    
    gui.add(effectGui.setup("Effect", ""));
    effectGui.setBackgroundColor(ofColor(60, 140, 60));
    gui.add(edgeOn.setup("Edge View", false));
    gui.add(edgeFactor1.setup("Edge Factor 1", 120, 0, 255));
    gui.add(edgeFactor2.setup("Edge Factor 2", 120, 0, 255));
    gui.add(bwOn.setup("Contour View", false));
    gui.add(thresholdMovie.setup("Contour Threshold", 127, 0, 255));
    gui.add(pixelOn.setup("Pixel View", false));
    gui.add(pixelW.setup("Pixel Width Size", 80, 2, 108));
    gui.add(pixelH.setup("Pixel Height Size", 40, 2, 81));

    gui.add(audioGui.setup("Audio", ""));
    audioGui.setBackgroundColor(ofColor(60, 140, 60));
    gui.add(overlap.setup("Overlap", 35, 0.1, 100));
    gui.add(hifq.setup("Hi fq", 5280, 800, 16000));
    gui.add(lofq.setup("LO fq", 50, 20, 700));
    gui.add(movieVolumeSlider.setup("Movie Audio Vol", 0.5, 0, 1.0));
    gui.add(volumeSlider.setup("Volume", 0.85, 0.0, 1.0));

    intDropdown = make_unique<ofxIntDropdown>(guiAudioDevice);

#ifdef __APPLE_CC__
    for (int i = 0; i < _d.size(); i++) {
        string _name = _d.at(i).name;
        int _i = _name.find(':');
        _name.erase(_name.begin(), _name.begin() + _i + 2);
        intDropdown->add(i, _name);
    }
#else
    for (int i = 0; i < _d.size(); i++) {
        string _name = _d.at(i).name;
        intDropdown->add(i, _name.substr(0, 17).append("..."));
    }
#endif

    intDropdown->disableMultipleSelection();
    intDropdown->setDropDownPosition(intDropdown->DD_BELOW);
    guiAudioDevice.set(0);
    gui.add(intDropdown.get());

}


//--------------------------------------------------------------
void ofApp::openFileButtonPressed() {

    bPlaying = false;
    moviePlay.stop();
    
    openFile();

}


//--------------------------------------------------------------
void ofApp::deviceIDChanged(int & _deviceID) {

    defaultInputDevice = audioInputDeviceList.at(_deviceID);
    settings.setOutDevice(defaultInputDevice);
    setAudio(settings);

    string _name = defaultInputDevice.name;
    int _i = _name.find(':');
    _name.erase(_name.begin(), _name.begin() + _i + 2);

    deviceNum.setName(_name);

}


//--------------------------------------------------------------
void ofApp::mouseReleasedEvent(ofMouseEventArgs & mouse) {

    if (thresholdPlayZone.mouseReleased(mouse)) {
//        capturePlayZone();
    }

//    if (thresholdWaveTable.mouseReleased(mouse)) {
//        captureWaveTable();
//    }

}


//--------------------------------------------------------------
void ofApp::update() {

    if (bPlaying) {
        ofSoundStreamStart();
    } else {
        ofSoundStreamStop();
    }

    moviePlay.setVolume(movieVolumeSlider);
    moviePixel.clear();
    moviePlay.update();

    if (invertColorToggle) {
        invert(moviePlay);
    }

    if (edgeOn) {
        moviePixel = calEdgePixels();
    } else if (bwOn) {
        moviePixel = calThresPixels();
    } else if (pixelOn) {
        moviePixel = calBrightness();
        calRectPixelFBO();
    } else {
        moviePixel = calBrightness();
    }
    
    if (moviePlay.isFrameNew() && bPlaying && moviePlay.getPixels().size() > 0) {
        
        for (int i = 0; i < BIT; i++) {
            ampLeft[i] *= 0.91;
            ampRight[i] *= 0.91;
        }
            
        float _width = moviePlay.getWidth();
        float _height = moviePlay.getHeight();
        
        for (int n = 0; n < BIT; n++) {
            int _yRatioLeft = floor(ofMap(n, 0, BIT - 1, 0, _height - 1));
            int _yRatioRight = floor(ofMap(n, 0, BIT - 1, 0, _height - 1));
            ampLeft[n] = (ampLeft[n] * overlap + getAmp(_width * 0.25, _yRatioLeft)) / (overlap + 1);
            hertzScaleLeft[n] = int(getFreq(n));
            ampRight[n] = (ampRight[n] * overlap + getAmp(_width * 0.75, _yRatioRight)) / (overlap + 1);
            hertzScaleRight[n] = int(getFreq(n));
        }

    }
    
}


//--------------------------------------------------------------
float ofApp::getAmp(float _x, float _y) {

    return moviePixel.getColor(_x, _y).getLightness() / 255.0;

}


//--------------------------------------------------------------
float ofApp::getFreq(float _yPos) {
    
    float _freq = 0;
    float _yPosToFreq = ofMap(_yPos, 0, BIT, lofq, hifq);
    _freq = 1 - (log(_yPosToFreq) - log(lofq)) / (log(hifq) - log(lofq));
    _freq *= hifq;

    return _freq;

}


//--------------------------------------------------------------
ofPixels ofApp::calEdgePixels() {
    
    convertColor(moviePlay, gray, CV_RGB2GRAY);
    Canny(gray, edge, edgeFactor1, edgeFactor2, 3);
    edge.update();
    return edge.getPixels();

}


//--------------------------------------------------------------
ofPixels ofApp::calThresPixels() {
    
    convertColor(moviePlay, thresh, CV_RGB2GRAY);
    threshold(thresh, thresholdMovie);
    thresh.update();
    return thresh.getPixels();

}


//--------------------------------------------------------------
ofPixels ofApp::calBrightness() {
    
    cv::Mat image = toCv(moviePlay);
    cv::Mat new_image = cv::Mat::zeros( image.size(), image.type() );
    image.convertTo(new_image, -1, bwContrast, bwBright);
    toOf(new_image, moviePixel);
    return moviePixel;

}


//--------------------------------------------------------------
void ofApp::calRectPixelFBO() {
    
    processRectPixelFBO.begin();
    ofClear(0, 0);

    int _wSize = pixelW;
    int _wStep = floor(moviePixel.getWidth() / float(_wSize));
    int _hSize = pixelH;
    int _hStep = floor(moviePixel.getHeight() / float(_hSize));
    for (int i = 0; i < _wSize; i += 1) {
        for (int j = 0; j < _hSize; j += 1) {
            ofPushStyle();
            ofSetColor(moviePixel.getColor(i * _wStep, j * _hStep).getLightness());
            ofDrawRectangle(i * _wStep, j * _hStep, _wStep, _hStep);
            ofPopStyle();
        }
    }
    processRectPixelFBO.end();
    
    processRectPixelFBO.readToPixels(moviePixel);

}


//--------------------------------------------------------------
void ofApp::draw() {

    drawMovie();
    drawSpectrum();

    displaySidebar();
    gui.draw();

}


//--------------------------------------------------------------
void ofApp::drawMovie() {
    
    if (changeMonitor) {
        moviePlay.draw(0, 0, calMovieRatio().x, calMovieRatio().y);
    } else {
        if (edgeOn) {
            edge.draw(0, 0, calMovieRatio().x, calMovieRatio().y);
        } else if (bwOn) {
            thresh.draw(0, 0, calMovieRatio().x, calMovieRatio().y);
        } else if (pixelOn) {
            processRectPixelFBO.draw(0, 0, calMovieRatio().x, calMovieRatio().y);
        } else {
            ofImage _buff;
            _buff.setFromPixels(moviePixel);
            _buff.draw(0, 0, calMovieRatio().x, calMovieRatio().y);
        }
    }
    
}


//--------------------------------------------------------------
void ofApp::drawSpectrum() {
    
    ofPushStyle();

    float _width = calMovieRatio().x;
    float _height = calMovieRatio().y;
    
    if (bPlaying) {
        
        ofSetColor(120, 255, 180, 220);
        for (int n = 0; n < BIT; n++) {
            float _yRatioLeft = ofMap(n, 0, BIT - 1, 0, _height);
            float _yRatioRight = ofMap(n, 0, BIT - 1, 0, _height);
            
            float _spectrumLineLength = overlap + 200;
            
            if (edgeOn) {
                _spectrumLineLength += 200;
            }
            
            ofDrawLine(_width * 0.25, _yRatioLeft, _width * 0.25 - ampLeft[n] * _spectrumLineLength, _yRatioLeft);
            ofDrawLine(_width * 0.25, _yRatioLeft, _width * 0.25 + ampLeft[n] * _spectrumLineLength, _yRatioLeft);
            
            ofDrawLine(_width * 0.75, _yRatioRight, _width * 0.75 - ampRight[n] * _spectrumLineLength, _yRatioRight);
            ofDrawLine(_width * 0.75, _yRatioRight, _width * 0.75 + ampRight[n] * _spectrumLineLength, _yRatioRight);
        }
        
    }

    ofSetColor(255, 255, 120, 220);
    ofDrawLine(_width * 0.25, 0, _width * 0.25, _height);
    ofDrawLine(_width * 0.75, 0, _width * 0.75, _height);
    
    ofPopStyle();
    
}


//--------------------------------------------------------------
ofVec2f ofApp::calMovieRatio() {
        
    float _ratio = moviePlay.getWidth() / moviePlay.getHeight();
    float _wRatio = 1080 / moviePlay.getWidth();
    float _hRatio = 810 / moviePlay.getHeight();
    float _width = 1080;
    float _height = 810;

    if (_ratio >= 1) {
        _width = 1080;
        _height = moviePlay.getHeight() * _wRatio;
    } else {
        _width = moviePlay.getWidth() * _hRatio;
        _height = 810;
    }

    return ofVec2f(_width, _height);
    
}


//--------------------------------------------------------------
void ofApp::drawThresholdImg() {
    
    float _ratio = moviePlay.getWidth() / moviePlay.getHeight();
    float _wRatio = 280 / moviePlay.getWidth();
    float _hRatio = 210 / moviePlay.getHeight();
    
    float _width = 280;
    float _height = 210;

    if (_ratio >= 1) {
        _width = 280;
        _height = moviePlay.getHeight() * _wRatio;
    } else {
        _width = moviePlay.getWidth() * _hRatio;
        _height = 210;
    }

    ofPushMatrix();
    ofTranslate(0, gui.getHeight() + 60 + 15 * 2);
    
    if (changeMonitor) {
        if (edgeOn) {
            edge.draw(0, 0, _width, _height);
        } else if (bwOn) {
            thresh.draw(0, 0, _width, _height);
        } else {
            ofImage _buff;
            _buff.setFromPixels(moviePixel);
            _buff.draw(0, 0, _width, _height);
        }
    } else {
        moviePlay.draw(0, 0, _width, _height);
    }

    ofDrawLine(_width * 0.25, 0, _width * 0.25, _height);
    ofDrawLine(_width * 0.75, 0, _width * 0.75, _height);
    
    ofPopMatrix();
    
}


//--------------------------------------------------------------
void ofApp::displaySidebar() {

    ofPushMatrix();
    ofTranslate(sidebarPosX, 0);

    drawFramerate();
    drawInfo();
    drawThresholdImg();

    if (bPlaying) {
        ofPushStyle();
        ofSetColor(80, 255, 80);
        ofDrawBitmapString("Play On : " + ofToString(moviePlay.getCurrentFrame()), 10, gui.getHeight() + 60 + 15);
        ofPopStyle();
    } else {
        ofPushStyle();
        ofSetColor(255, 80, 80);
        ofDrawBitmapString("Play Off : 0", 10, gui.getHeight() + 60 + 15);
        ofPopStyle();
    }

    ofPopMatrix();

}


//--------------------------------------------------------------
void ofApp::drawFramerate() {

    ofPushStyle();
    ofSetColor(255);
    ofDrawBitmapString("FPS         : " + ofToString(ofGetFrameRate(), 1), 10, 15);
    ofPopStyle();

}


//--------------------------------------------------------------
void ofApp::drawInfo() {

    ofPushStyle();
    ofSetColor(255);
    ofDrawBitmapString("Play / Stop : Space Bar", 10, 30);
    ofDrawBitmapString("Open File   : key 'o'", 10, 45);
    ofPopStyle();

}


//--------------------------------------------------------------
void ofApp::exit() {

}


//--------------------------------------------------------------
void ofApp::audioOut(ofSoundBuffer & buffer) {

    if (bPlaying) {
        for (int i = 0; i < buffer.getNumFrames(); i += 2) {
            float waveRight = 0.0;
            float remainderRight = 0.0;
            float waveLeft = 0.0;
            float remainderLeft = 0.0;
            
            for (int n = 0; n < BIT; n++) {
                phasesLeft[n] += 512.0 / 44100.0 * hertzScaleLeft[n];
                if (phasesLeft[n] >= 511) {
                    phasesLeft[n] -= 512;
                }
                if (phasesLeft[n] < 0) {
                    phasesLeft[n] = 0;
                }
                
                remainderLeft = phasesLeft[n] - floor(phasesLeft[n]);
                waveLeft += (float)((1-remainderLeft) * sineBufferLeft[1 + (long)phasesLeft[n]] + remainderLeft * sineBufferLeft[2 + (long)phasesLeft[n]]) * ampLeft[n];

                phasesRight[n] += 512.0 / 44100.0 * hertzScaleRight[n];
                if (phasesRight[n] >= 511) {
                    phasesRight[n] -= 512;
                }
                if (phasesRight[n] < 0) {
                    phasesRight[n] = 0;
                }
                
                remainderRight = phasesRight[n] - floor(phasesRight[n]);
                waveRight += (float)((1 - remainderRight) * sineBufferRight[1 + (long)phasesRight[n]] + remainderRight * sineBufferRight[2 + (long)phasesRight[n]]) * ampRight[n];
            }

            waveRight /= 20.0;
            waveLeft /= 20.0;
            waveRight = MAX(MIN(waveRight, 1.0), -1.0);
            waveLeft = MAX(MIN(waveLeft, 1.0), -1.0);

            float _volume = volumeSlider;
            buffer[i * buffer.getNumChannels()] = waveLeft * _volume;
            buffer[i * buffer.getNumChannels() + 1] = waveRight * _volume;
        }
    } else {
        for (int i = 0; i < buffer.getNumFrames(); i += 2) {
            buffer[i * buffer.getNumChannels()] = 0;
            buffer[i * buffer.getNumChannels() + 1] = 0;
        }
    }

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}


//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

    if (key == ' ') {
        bPlaying = !bPlaying;
    }
    
    if (key == 'o' || key == 'O') {
        openFileButtonPressed();
    }

}


//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}


//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}


//--------------------------------------------------------------
void ofApp::openFile() {
    
    ofFileDialogResult openFileResult = ofSystemLoadDialog("Select a mov or mp4");

    if (openFileResult.bSuccess) {
        ofLogVerbose("User selected a file");
        processOpenFileSelection(openFileResult);
    } else {
        ofLogVerbose("User hit cancel");
    }

}


//--------------------------------------------------------------
void ofApp::processOpenFileSelection(ofFileDialogResult openFileResult) {

    ofLogVerbose("getName(): "  + openFileResult.getName());
    ofLogVerbose("getPath(): "  + openFileResult.getPath());

    ofFile file(openFileResult.getPath());

    if (file.exists()) {
        ofLogVerbose("The file exists - now checking the type via file extension");
        string fileExtension = ofToUpper(file.getExtension());

        if (fileExtension == "JPG" || fileExtension == "PNG" || fileExtension == "JPEG") {
//            loadImageProcess(openFileResult.getPath());
        } else if (fileExtension == "MOV" || fileExtension == "MP4") {
            moviePlay.load(openFileResult.getPath());
            moviePlay.play();
            setDefaultImage(moviePlay);
        } else {
            ofSystemAlertDialog("Use a jpg, png or jpeg format for an image \a mov or mp4 format for a movie.");
        }
    }

}


//--------------------------------------------------------------
ofVideoPlayer ofApp::changeMovieSize(ofVideoPlayer _m) {
    
    ofVideoPlayer _buffMovie;
    _buffMovie = _m;
    
    float _ratio = _m.getWidth() / _m.getHeight();
    float _ratioScale = 1280 / _m.getWidth();
    
    if (_ratio >= 1) {
        _ratioScale = 1280 / _m.getWidth();
    } else {
        _ratioScale = 720 / _m.getHeight();
    }
    
    resize(_m, _buffMovie, _ratioScale, _ratioScale);
    cout << _buffMovie.getWidth() << " " << _buffMovie.getHeight() << endl;
    return _buffMovie;
    
}
