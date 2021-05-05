#ifndef CG_MAINWINDOW_H
#define CG_MAINWINDOW_H

#include <QMainWindow>
#include "./GeneratedFiles/ui_cg_window.h"
#include "RayTracer.h"

class cg_MainWindow: public QMainWindow
{
	Q_OBJECT

public:
	cg_MainWindow();
	virtual ~cg_MainWindow();

	Ui_CG_Window* ui;

public slots:
	void slotChangeMode();

private: 
	RayTracer* m_RayTracer;
	Scene* mScene;
	bool m_UseMultipleRays;

};

#endif 
