#pragma once

#include "ofMain.h"
#include <GLFW/glfw3.h>

class ofxSecondWindow {
    
public:
	ofxSecondWindow();
	~ofxSecondWindow();
    void setup(const char *name, int xpos, int ypos, int width, int height, bool undecorated);
    void begin();
    void end();
    void show();
    void hide();
    void close();
    void setSize(int newWidth, int newHeight, bool resizeCentered = false);
    void setPosition(int newX, int newY);
    void setToMonitor(int monitorId, bool resize = false);
    int getWidth();
    int getHeight();
    int getPositionX();
    int getPositionY();
    int getMonitorsCount();
    int getMonitorWidth(int monitorId = 0);
    int getMonitorHeight(int monitorId = 0);
    bool isInited();
    
private:
    GLFWwindow *mainWindow, *auxWindow;
    bool bInited;
};
