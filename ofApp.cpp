#include "ofApp.h"

int windowW = 1024;
int windowH = 640;
int mouseX = 0;
int mouseY = 0;

//--------------------------------------------------------------
// gui window
void ofApp::setupGui(){
    gui.setup();
    // ofHideCursor();
    gui.add(
        colorA.setup("colorA", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255))
    );
    gui.add(
        colorB.setup("colorB", ofColor(100, 100, 140), ofColor(0, 0), ofColor(255, 255))
    );
}

void ofApp::drawGui(ofEventArgs & args){
    gui.draw();
}

// main window

//--------------------------------------------------------------

void ofApp::setup(){

}

void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor color1(colorA);
    ofColor color2(colorB);
    ofBackgroundGradient(color1, color2, OF_GRADIENT_LINEAR);

    // gui.draw();

}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    // ofBackground(255, x, y);
    mouseX = x;
    mouseY = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    windowW = w;
    windowH = h;
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
