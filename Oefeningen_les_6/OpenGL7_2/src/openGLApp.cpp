#include "openGLApp.h"

OpenGLApp::OpenGLApp()
{
    setWindowTitle("OpenGL App");
    resize(1280, 720);
    initView();
}

void OpenGLApp::initView()
{
    setCentralWidget(&scene);
}