#ifndef _ENHANCEDQMLAPPLICATIONENGINE_H
#define _ENHANCEDQMLAPPLICATIONENGINE_H

#include <QQmlApplicationEngine>

class EnhancedQmlApplicationEngine: public QQmlApplicationEngine
{
    Q_OBJECT

public:
    explicit EnhancedQmlApplicationEngine(QObject *parent = nullptr);

    Q_INVOKABLE void clearCache();
};

#endif
