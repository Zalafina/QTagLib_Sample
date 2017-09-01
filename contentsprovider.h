#ifndef CONTENTSPROVIDER_H
#define CONTENTSPROVIDER_H

#include <QObject>

class ContentsProvider : public QObject
{
    Q_OBJECT
public:
    explicit ContentsProvider(QObject *parent = 0);

    static ContentsProvider* instance(void);

signals:

public slots:

protected:
    // Registe Instance
    void registeInstance(ContentsProvider* pInstance);

private:
    // this pointer.
    static ContentsProvider* mp_this;
};

#endif // CONTENTSPROVIDER_H
