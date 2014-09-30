#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(QPixmap(":/images/splash_01.jpg"));
    splash->show();

    Qt::Alignment topRight = Qt::AlignTop | Qt::AlignRight;
    splash->showMessage(QObject::tr("Setting the main window ..."),
                        topRight, Qt::white);

    MainWindow *mainWin = new MainWindow;
    mainWin->show();
    splash->finish(mainWin);
    delete splash;
    return app.exec();
}
