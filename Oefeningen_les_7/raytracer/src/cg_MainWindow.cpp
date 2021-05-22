#include "cg_MainWindow.h"
#include <QPainter>
#include <stdio.h>

#include "scene.h"
#include "sphere.h"
#include "pointLight.h"

//--------------------------------------------------------------------
cg_MainWindow::cg_MainWindow()
{
	ui = new Ui_CG_Window();
	ui->setupUi(this);

	m_RayTracer = new RayTracer(ui->drawCanvas);
	m_UseMultipleRays = false;

	mScene = new Scene();
	Sphere* sphere = new Sphere();
	sphere->SetPosition(Vec3(0.0, 0.0, 0.0));
	sphere->SetVectors(Vec3(1.0, 0.0, 0.0), Vec3(0.0, 1.0, 0.0), Vec3(0.0, 0.0, 1.0));
	sphere->SetColor(RGB_Color(1.0f, 1.0f, 1.0f));
	sphere->radius = 9.0f;
	mScene->shapelist.AddShape(sphere);

	PointLight* pointLight = new PointLight();
	pointLight->position = Vec3(-150.0, 150.0, 150.0);
	pointLight->color = RGB_Color(1.0f, 1.0f, 1.0f);
	mScene->pointLightList.pointLights.push_back(pointLight);

	m_RayTracer->SetScene(mScene);

	connect(ui->pushButton_Save, SIGNAL(clicked()), ui->drawCanvas, SLOT(slotSaveImage()));
	connect(ui->pushButton_Render, SIGNAL(clicked()), m_RayTracer, SLOT(slotRender()));
	connect(ui->pushButton_Mode, SIGNAL(clicked()), this, SLOT(slotChangeMode()));
	connect(ui->drawCanvas, SIGNAL(signalSizeChanged(int, int)), m_RayTracer, SLOT(slotSizeChanged(int, int)));
}
//--------------------------------------------------------------------
cg_MainWindow::~cg_MainWindow()
{
	delete ui;
	delete mScene;
	delete m_RayTracer;
}
//--------------------------------------------------------------------
void cg_MainWindow::slotChangeMode()
{
	m_UseMultipleRays = !m_UseMultipleRays;
	printf("Sample mode changed.\n");
	if(m_UseMultipleRays)
	{
		m_RayTracer->useMultipleRays(true);
		ui->pushButton_Mode->setText("  multiple samples / pixel   ");	
	}
	else
	{
		m_RayTracer->useMultipleRays(false);
		ui->pushButton_Mode->setText("  1 sample / pixel   ");
		
	}
}
//--------------------------------------------------------------------
