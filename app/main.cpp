#include "mainwindow.h"

#include <QApplication>
#include <QLibraryInfo>
#include <QTranslator>
// #include <stdio.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator qtTranslator;
    QString locale = QLocale::system().name();
    bool res = qtTranslator.load("qt_" + locale, QLibraryInfo::path(QLibraryInfo::TranslationsPath));
    if(res)
        a.installTranslator(&qtTranslator);

    MainWindow w;
    w.show();
    return a.exec();
}
