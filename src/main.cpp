#include <QGuiApplication>

#include "qmlviewer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QmlViewer viewer;
    viewer.load(app.arguments()[1]);

    return app.exec();
}
