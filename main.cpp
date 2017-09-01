#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QThread>
#include <QQuickView>
#include "contentsprovider.h"
#include "workerthread.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQuickView viewer;

    ContentsProvider * const contentsprovider = new ContentsProvider(&app);

    viewer.rootContext()->setContextProperty("contentsprovider", contentsprovider);
//    viewer.rootContext()->setContextProperty("myModel", QVariant::fromValue(mytest->m_dataList));

    WorkerThread * const workerthread = new WorkerThread();
    // Move to a sub thread
    QThread * const appThread = new QThread();
    workerthread->moveToThread(appThread);
    appThread->setObjectName("QTagLib_WorkerThread");
    appThread->start();

    viewer.setSource(QUrl("qrc:/qml/main.qml"));
    viewer.show();

    return app.exec();
}
