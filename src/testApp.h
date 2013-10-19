#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "ofxParticleEmitter.h"
// #include "partisynth.h"

class testApp : public ofBaseApp{
public:
    
    void setup();
    void update();
    void draw();

    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    // TODO: partisynth-handling properties and functions need to be defined
    
    // TODO: can this be moved into partisynth object?
    void audioOut(float * input, int bufferSize, int nChannels);
    
    // TODO: eventually remove pretty much everything from here on down
    void setPhaseAdderTarget();
    void updateEmitters();
    void updateProperties(int x, int y);
    void updateProperties();
    
    ofSoundStream soundStream;

    float 	pan;
    int		sampleRate;
    bool 	bNoise;    
    float 	volume;

    vector <float> lAudio;
    vector <float> rAudio;
    
    //------------------- for the wave synthesis
    float 	targetFrequency;
    float 	phase;
    float 	phaseAdder;
    float 	phaseAdderTarget;
    
    bool    updateParticleTexture;
    string  xmlFilename;
    string  texFilename;
    bool paused;
    char waveform;
    char screenID;
    float phaseAdderTargetTween;
    float volumeWaveformAdjustment;
    float volumeFrequencyAdjustment;
    float volumeAdjustment;
    
    float height;
    float heightPct;
protected:
	
    int                         numEmitters;
    vector <ofxParticleEmitter> emitters;
};
