#ifndef _URLINTERCEPTOR_H
#define _URLINTERCEPTOR_H

#include <QQmlAbstractUrlInterceptor>
#include <QQmlEngine>

class UrlInterceptor: public QObject, public QQmlAbstractUrlInterceptor
{
    Q_OBJECT

public:
    QUrl intercept(const QUrl& path, QQmlAbstractUrlInterceptor::DataType type) override;
    static UrlInterceptor* self();

signals:
    void newFile(const QUrl& path);

private:
    Q_DISABLE_COPY(UrlInterceptor);

    UrlInterceptor();
    ~UrlInterceptor() override;
};

#endif
