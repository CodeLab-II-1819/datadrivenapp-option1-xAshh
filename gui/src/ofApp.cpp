#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	bird.load("bird.png");
	c1.set(51, 255, 255);
	c2.set(255, 255, 255);
	myFont.load("Fake Serif.ttf", 160);
	plainText.load("Fake Serif.ttf", 30);
	bigText.load("Fake Serif.ttf", 200);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {
	ofBackgroundGradient(c2, c1, OF_GRADIENT_LINEAR);//Background Colour

	/*Icon Image*/
	ofSetColor(102, 255, 255);
	bird.draw(1450, -10, 400, 400 );//Draw Bird


	/*Title Box*/
	ofSetColor(0, 0, 0);
	ofNoFill();
	ofDrawRectangle(10, 10, -100, 1450, 200);//Title
	myFont.drawString("Twitter Go", 450, 235);

	/*Output Box*/
	ofDrawRectangle(750, 300, -100, 1200, 700); //Output
	bigText.drawString("Output Area", 900, 750);


	/*Search Bar*/
	ofDrawRectangle(10, 300, -100, 650, 50); 
	ofDrawRectangle(600, 300, -100, 60, 50);
	plainText.drawString("Search Bar", 300, 360);
	plainText.drawString("Go!", 640, 360);


	/*Query Boxes*/
	ofSetColor(255, 90, 90);
	ofFill();

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



	/*Query Text*/
	ofSetColor(0, 0, 0);
	ofNoFill();

	plainText.drawString("Query 1", 180, 450);
	plainText.drawString("Query 2", 180, 560);
	plainText.drawString("Query 3", 180, 670);
	plainText.drawString("Query 4", 180, 785);
	plainText.drawString("Query 5", 180, 900);

	plainText.drawString("Query 6", 535, 450);
	plainText.drawString("Query 7", 535, 560);
	plainText.drawString("Query 8", 535, 670);
	plainText.drawString("Query 9", 535, 785);
	plainText.drawString("Query 10", 535, 900);

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
