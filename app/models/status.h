#ifndef STATUS_H
#define STATUS_H

#include <QDateTime>
#include <QString>


class Status
{
public:
    int id;
    int idDevice;
    int idStatus;
    QString nameStatus;
    QDateTime dateStatus;
    QString Comment;

    Status() : id(0), dateStatus(QDateTime::currentDateTime()) {}
};


#endif // STATUS_H
