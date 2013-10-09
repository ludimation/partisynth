#pragma once

#include "ofMain.h"
#include "ofxXmlSettings.h"
#include "ofxParticleEmitter.h"

class partisynth {
    void init();
    void update();
    void draw();
    
    void getAudioOut();
    
    void setPhaseAdderTarget();
    void updateEmitters();
    void updateProperties(int x, int y);
    
    ofSoundStream soundStream;
    
    bool    paused;
    char    displayID; //TODO: used to be "screenID", needs to be updatedin class code
    float 	pan;
    int		sampleRate;
    bool 	bNoise;    
    float 	volume;
    
    vector <float> lAudio;
    vector <float> rAudio;
    
    //------------------- for simple synthesizer
    float 	targetFrequency;
    float 	phase;
    float 	phaseAdder;
    float 	phaseAdderTarget;
    
    char    waveform;
    float   phaseAdderTargetTween;
    float   volumeWaveformAdjustment;
    float   volumeFrequencyAdjustment;
    float   volumeAdjustment;
    
    float height; //TODO: make these
    float heightPct;
protected:
	
	ofxParticleEmitter		m_emitter1, m_emitter2, m_emitter3, m_emitter4, m_emitter5;
    vector <ofxParticleEmitter> emitters;
    
    // TODO: set this internally and create "get" function to use 
    // colorBackgroundJitter in testApp 
    ofColor     colorBackgroundJitter; 
    
};

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
    
    void audioOut(float * input, int bufferSize, int nChannels);
    
    void setPhaseAdderTarget();
    void updateEmitters();
    void updateProperties(int x, int y);
    
    ofSoundStream soundStream;

    float 	pan;
    int		sampleRate;
    bool 	bNoise;    
    float 	volume;

    vector <float> lAudio;
    vector <float> rAudio;
    
    //------------------- for the simple sine wave synthesis
    float 	targetFrequency;
    float 	phase;
    float 	phaseAdder;
    float 	phaseAdderTarget;
    
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
	
	ofxParticleEmitter		m_emitter1, m_emitter2, m_emitter3, m_emitter4, m_emitter5;
    vector <ofxParticleEmitter> emitters;
};
