#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "ui/supportcanvas2d.h"
#include <QMainWindow>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    ~MainWindow();

    void canvasSetup(QStringList args);
    void displayCanvas();

private:
    SupportCanvas2D *m_supportcanvas;
};
#endif // MAINWINDOW_H
