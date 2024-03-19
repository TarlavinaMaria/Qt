#ifndef PLOT_H
#define PLOT_H

#include <QMainWindow>
#include <QVBoxLayout>

namespace Ui {
class Plot;
}

class Plot : public QMainWindow
{
    Q_OBJECT

public:
    explicit Plot(QWidget *parent = nullptr);
    ~Plot();

private:
    Ui::Plot *ui;
    void resizeEvent(QResizeEvent *event) override;
};

#endif // PLOT_H
