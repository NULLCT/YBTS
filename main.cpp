﻿#include "ofApp.h"
#include "ofMain.h"

int main() {
  srand(time(NULL));
  ofSetEscapeQuitsApp(false);
  ofGLFWWindowSettings settings; // OpenFrameWorks setting

  settings.title =
      "ISBNCTRLSYSv1.1(github.com/NULLCT/ISBNCTRLSYS) | Made by NULLCT"; // Title
  settings.setSize(1200, 600);                                       // Size
  settings.resizable = false; // non resiable

  ofCreateWindow(settings);     // attach settings
  return ofRunApp(new ofApp()); // create ofApp
}
