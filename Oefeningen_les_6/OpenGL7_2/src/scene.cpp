#include "scene.h"
#include <GLUT/glut.h>

Scene::Scene(QWidget* parent) : QOpenGLWidget(parent)
{
	connect(&timer, SIGNAL(timeout()), this, SLOT(update()));
    setFocusPolicy(Qt::StrongFocus);
	setMouseTracking(true);
}

void Scene::initializeGL()
{
    QOpenGLWidget::initializeGL();

    glShadeModel(GL_SMOOTH);

    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);

    GLfloat light0_position[] = {0.1f, 0.1f, 0.1f, 0.1f};
	GLfloat light_diffuse[] = {1.0, 1.0, 1.0, 1.0};
	glLightfv(GL_LIGHT0, GL_POSITION, light0_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);

	timer.start(50);
}

void Scene::resizeGL(int width, int height)
{
    if ((width <= 0) || (height <= 0))
		return;

	glViewport(0, 0, width, height);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	GLdouble aspect_ratio = (GLdouble)width / (GLdouble)height;
	gluPerspective(40.0, aspect_ratio, 1.0, 100.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

void Scene::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	nav.lookAt();

	glDisable(GL_LIGHTING);
	glBegin(GL_LINES);
		glColor3f(1.0, 0.0, 0.0);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(10.0, 0.0, 0.0);
		glColor3f(0.0, 1.0, 0.0);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(0.0, 10.0, 0.0);
		glColor3f(0.0, 0.0, 1.0);
		glVertex3f(0.0, 0.0, 0.0);
		glVertex3f(0.0, 0.0, 10.0);
	glEnd();
	glEnable(GL_LIGHTING);

	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
}

void Scene::keyPressEvent(QKeyEvent* e)
{
	nav.processEvent(e);
}