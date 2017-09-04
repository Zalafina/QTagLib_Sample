#ifndef CONTENTSPROVIDER_H
#define CONTENTSPROVIDER_H

#include <QObject>
#include <QQmlEngine>
#include <QJSEngine>

class ContentsProvider : public QObject
{
    Q_OBJECT
public:
    explicit ContentsProvider(QObject *parent = 0);

    static ContentsProvider* instance(void);

    Q_INVOKABLE QString getImagePath(void);
signals:

public slots:

protected:
    // Registe Instance
    void registeInstance(ContentsProvider* pInstance);

private:
    // this pointer.
    static ContentsProvider* mp_this;
};

static QObject *contentsprovider_provider(QQmlEngine *engine, QJSEngine *scriptEngine)
{
    Q_UNUSED(engine)
    Q_UNUSED(scriptEngine)

//    ContentsProvider *example = new ContentsProvider();
//    return example;
    return new ContentsProvider();
}

#endif // CONTENTSPROVIDER_H
