#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setApplicationName("Pencil Lab");
    QCoreApplication::setOrganizationName("QtProject");
    QCoreApplication::setApplicationVersion(QT_VERSION_STR);

    MainWindow w;
    w.canvasSetup(QCoreApplication::arguments());
    w.displayCanvas();
    w.show();
    return a.exec();
}
