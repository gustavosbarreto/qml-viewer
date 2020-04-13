#include "qmlviewer.h"

#include <QQmlContext>
#include <QFileSystemWatcher>

#include "enhancedqmlapplicationengine.h"
#include "urlinterceptor.h"

QmlViewer::QmlViewer()
{
    m_engine = new EnhancedQmlApplicationEngine();
    m_watcher = new QFileSystemWatcher();

    QObject::connect(UrlInterceptor::self(), &UrlInterceptor::newFile, [=](const QUrl &path) {
        m_watcher->addPath(path.toLocalFile());
    });

    m_engine->rootContext()->setContextProperty("$FileSystemWatcher", m_watcher);
    m_engine->rootContext()->setContextProperty("$QmlEngine", m_engine);
    m_engine->setUrlInterceptor(UrlInterceptor::self());
}

void QmlViewer::load(const QString &filePath)
{
    m_engine->rootContext()->setContextProperty("$file", QUrl::fromLocalFile(filePath));
    m_engine->load(QUrl("qrc:///com/github/gustavosbarreto/qml-viewer/qml/main.qml"));
}
