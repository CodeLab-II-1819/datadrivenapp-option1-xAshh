#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	c1.set(51, 255, 255);
	c2.set(255, 255, 255);


}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackgroundGradient(c2, c1, OF_GRADIENT_LINEAR);

	ofSetColor(0, 0, 0);
	ofNoFill();
	ofDrawRectangle(10, 10, -100, 1450, 200);//Title

	ofDrawRectangle(750, 300, -100, 1200, 700); //Output

	ofDrawRectangle(10, 300, -100, 650, 50); //Search bar
	ofDrawRectangle(600, 300, -100, 60, 50);

	ofDrawRectangle(10, 400, -100, 270, 50); //Query 1
	ofDrawRectangle(10, 525, -100, 270, 50); //Query 2
	ofDrawRectangle(10, 650, -100, 270, 50); //Query 3
	ofDrawRectangle(10, 775, -100, 270, 50); //Query 4
	ofDrawRectangle(10, 900, -100, 270, 50); //Query 5

	ofDrawRectangle(390, 400, -100, 270, 50); //Query 6
	ofDrawRectangle(390, 525, -100, 270, 50); //Query 7
	ofDrawRectangle(390, 650, -100, 270, 50); //Query 8
	ofDrawRectangle(390, 775, -100, 270, 50); //Query 9
	ofDrawRectangle(390, 900, -100, 270, 50); //Query 10
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
