#ifndef _QMLVIEWER_H
#define _QMLVIEWER_H

#include <QString>

class EnhancedQmlApplicationEngine;
class QFileSystemWatcher;

class QmlViewer
{
public:
    QmlViewer();

    void load(const QString &filePath);

private:
    EnhancedQmlApplicationEngine *m_engine;
    QFileSystemWatcher *m_watcher;
};

#endif
