#include "plot.h"
#include "ui_plot.h"

Plot::Plot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Plot)
{
    ui->setupUi(this);


//    setCentralWidget(ui->customPlot);
    ui->customPlot->addGraph();
    ui->customPlot->xAxis->setRange(0, 4500);
    ui->customPlot->yAxis->setRange(-500, 4500);


}

Plot::~Plot()
{
    delete ui;
}

void Plot::resizeEvent(QResizeEvent *event)
{
    QSize newSize = event->size();
    ui->customPlot->resize(newSize.width(), newSize.height()/1.5);
    QWidget::resizeEvent(event);
}

