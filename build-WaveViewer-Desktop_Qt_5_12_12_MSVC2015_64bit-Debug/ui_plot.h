/********************************************************************************
** Form generated from reading UI file 'plot.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLOT_H
#define UI_PLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Plot
{
public:
    QWidget *centralwidget;
    QCustomPlot *customPlot;
    QScrollBar *horizontalScrollBar;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Plot)
    {
        if (Plot->objectName().isEmpty())
            Plot->setObjectName(QString::fromUtf8("Plot"));
        Plot->resize(711, 460);
        centralwidget = new QWidget(Plot);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        customPlot = new QCustomPlot(centralwidget);
        customPlot->setObjectName(QString::fromUtf8("customPlot"));
        customPlot->setGeometry(QRect(0, 0, 701, 331));
        customPlot->setMouseTracking(false);
        customPlot->setTabletTracking(false);
        customPlot->setAutoFillBackground(false);
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(30, 360, 160, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 360, 47, 13));
        Plot->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Plot);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 711, 20));
        Plot->setMenuBar(menubar);
        statusbar = new QStatusBar(Plot);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Plot->setStatusBar(statusbar);

        retranslateUi(Plot);

        QMetaObject::connectSlotsByName(Plot);
    } // setupUi

    void retranslateUi(QMainWindow *Plot)
    {
        Plot->setWindowTitle(QApplication::translate("Plot", "MainWindow", nullptr));
        label->setText(QApplication::translate("Plot", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Plot: public Ui_Plot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLOT_H
