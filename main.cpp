#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){


	ofGLFWWindowSettings settings;
	settings.setSize(1024, 768);
	settings.setPosition(glm::vec2(300,0));
	settings.resizable = true;
	settings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN
	auto mainWindow = ofCreateWindow(settings);


	settings.setSize(300, 600);
	settings.setPosition(glm::vec2(0,0));
	settings.resizable = true;
	// uncomment next line to share main's OpenGL resources with gui
	//settings.shareContextWith = mainWindow;
	auto guiWindow = ofCreateWindow(settings);
	guiWindow->setVerticalSync(false);

	auto mainApp = std::make_shared<ofApp>();
	mainApp->setupGui();
	ofAddListener(guiWindow->events().draw, mainApp.get(), &ofApp::drawGui);

	ofRunApp(mainWindow, mainApp);
	ofRunMainLoop();



	// //Use ofGLFWWindowSettings for more options like multi-monitor fullscreen
	// ofGLWindowSettings settings;
	// settings.setSize(1024, 768);
	// settings.windowMode = OF_WINDOW; //can also be OF_FULLSCREEN

	// auto window = ofCreateWindow(settings);

	// ofRunApp(window, make_shared<ofApp>());
	// ofRunMainLoop();

}
