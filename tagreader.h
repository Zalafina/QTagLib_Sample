#ifndef TAGREADER_H
#define TAGREADER_H

#include <QObject>

class TagReader : public QObject
{
    Q_OBJECT
public:
    explicit TagReader(QObject *parent = 0);

signals:

public slots:
};

#endif // TAGREADER_H