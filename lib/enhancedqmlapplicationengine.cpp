#include "enhancedqmlapplicationengine.h"

EnhancedQmlApplicationEngine::EnhancedQmlApplicationEngine(QObject *parent)
    : QQmlApplicationEngine(parent)
{

}

void EnhancedQmlApplicationEngine::clearCache()
{
    trimComponentCache();
    clearComponentCache();
    trimComponentCache();
}
