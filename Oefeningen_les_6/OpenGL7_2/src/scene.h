#pragma once

#define GL_SILENCE_DEPRECATION
#include <QOpenGLWidget>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QTimer>

#include "navigation.h"

class Scene : public QOpenGLWidget
{
    Q_OBJECT

public:
    Scene(QWidget* parent = 0);

protected:
    void initializeGL();
	void resizeGL(int width, int height);
	void paintGL();
    void keyPressEvent(QKeyEvent* e);
    void mouseMoveEvent(QMouseEvent* e);

private:
    Navigation nav;
    QTimer timer;

    void drawAxis();
    void addLight();
    void drawCube();
};