#pragma once

#include <QMainWindow>
#include "scene.h"

class OpenGLApp : public QMainWindow
{
    Q_OBJECT

public:
    OpenGLApp();

    void initView();
private:
    Scene scene;
};