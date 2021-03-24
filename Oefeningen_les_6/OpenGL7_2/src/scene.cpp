#include "scene.h"
#include <GLUT/glut.h>

Scene::Scene(QWidget *parent) : QOpenGLWidget(parent)
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

	glEnable(GL_COLOR_MATERIAL);

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

	drawAxis();

	drawCube();

	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
}

void Scene::keyPressEvent(QKeyEvent *e)
{
	nav.processKeyEvent(e);
}

void Scene::mouseMoveEvent(QMouseEvent *e)
{
	nav.processMouseEvent(e);
}

void Scene::drawAxis()
{
	// X - Y - Z
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
}

void Scene::addLight()
{
	glEnable(GL_LIGHT1);
	GLfloat light1_position[] = {0.0f, 0.0f, 0.0f, 0.0f};
	GLfloat light_diffuse[] = {1.0, 0.0, 0.0, 1.0};
	GLfloat light_ambient[] = {1.0, 0.0, 0.0, 1.0};
	GLfloat light_specular[] = {1.0, 1.0, 0.0, 1.0};
	glLightfv(GL_LIGHT1, GL_POSITION, light1_position);
	glLightfv(GL_LIGHT1, GL_DIFFUSE, light_diffuse);
	glLightfv(GL_LIGHT1, GL_AMBIENT, light_ambient);
	glLightfv(GL_LIGHT1, GL_SPECULAR, light_specular);
}

void Scene::drawCube()
{
	glBegin(GL_QUADS); // Begin drawing the color cube with 6 quads
		// Top face (y = 1.0f)
		// Define vertices in counter-clockwise (CCW) order with normal pointing out
		glColor3f(0.0f, 1.0f, 0.0f); // Green
		glVertex3f(1.0f, 1.0f, -1.0f);
		glVertex3f(-1.0f, 1.0f, -1.0f);
		glVertex3f(-1.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);

		// Bottom face (y = -1.0f)
		glColor3f(1.0f, 0.5f, 0.0f); // Orange
		glVertex3f(1.0f, -1.0f, 1.0f);
		glVertex3f(-1.0f, -1.0f, 1.0f);
		glVertex3f(-1.0f, -1.0f, -1.0f);
		glVertex3f(1.0f, -1.0f, -1.0f);

		// Front face  (z = 1.0f)
		glColor3f(1.0f, 0.0f, 0.0f); // Red
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(-1.0f, 1.0f, 1.0f);
		glVertex3f(-1.0f, -1.0f, 1.0f);
		glVertex3f(1.0f, -1.0f, 1.0f);

		// Back face (z = -1.0f)
		glColor3f(1.0f, 1.0f, 0.0f); // Yellow
		glVertex3f(1.0f, -1.0f, -1.0f);
		glVertex3f(-1.0f, -1.0f, -1.0f);
		glVertex3f(-1.0f, 1.0f, -1.0f);
		glVertex3f(1.0f, 1.0f, -1.0f);

		// Left face (x = -1.0f)
		glColor3f(0.0f, 0.0f, 1.0f); // Blue
		glVertex3f(-1.0f, 1.0f, 1.0f);
		glVertex3f(-1.0f, 1.0f, -1.0f);
		glVertex3f(-1.0f, -1.0f, -1.0f);
		glVertex3f(-1.0f, -1.0f, 1.0f);

		// Right face (x = 1.0f)
		glColor3f(1.0f, 0.0f, 1.0f); // Magenta
		glVertex3f(1.0f, 1.0f, -1.0f);
		glVertex3f(1.0f, 1.0f, 1.0f);
		glVertex3f(1.0f, -1.0f, 1.0f);
		glVertex3f(1.0f, -1.0f, -1.0f);
	glEnd();
}