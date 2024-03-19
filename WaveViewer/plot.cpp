#include "plot.h"
#include "ui_plot.h"

Plot::Plot(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Plot)
{
    ui->setupUi(this);
    setCentralWidget(ui->customPlot);
    ui->customPlot->addGraph();
    ui->customPlot->xAxis->setRange(0, 4500);
    ui->customPlot->yAxis->setRange(-500, 4500);
    ui->customPlot->replot();

}

Plot::~Plot()
{
    delete ui;
}

