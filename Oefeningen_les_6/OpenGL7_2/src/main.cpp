#include <QApplication>
#include "openGLApp.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	OpenGLApp openGLApp;
	app.setActiveWindow(&openGLApp);
	openGLApp.show();
	return app.exec();
}