#include "contentsprovider.h"

ContentsProvider* ContentsProvider::mp_this = NULL;

ContentsProvider::ContentsProvider(QObject *parent) : QObject(parent)
{
    registeInstance(this);
}

ContentsProvider *ContentsProvider::instance(void)
{
    Q_ASSERT(mp_this != NULL);

    return mp_this;
}

QString ContentsProvider::getImagePath(void)
{
    qDebug("ContentsProvider::getImagePath()");
    return QString("pics/image_01.png");
}

void ContentsProvider::registeInstance(ContentsProvider *pInstance)
{
    mp_this = pInstance;
}
