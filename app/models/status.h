#ifndef STATUS_H
#define STATUS_H

#include <QDateTime>
#include <QString>


class Status
{
public:
    enum Stat {
        NONE,               // нет статуса
        CREATE,             // создан
        FAULTY,             // неисправен на производстве
        CORRECT,            // исправен на производстве
        INSTALL,            // установен в оборудовании
        SHIPPED,            // отгружен
        WORK,               // в работе
        FAULTY_ON_OBJECT,   // неисправен на объекте
        FAULTY_ON_OSO,      // неисправен в ОСО
        REMONT,             // в ремонте
        CORRECT_OSO         // исправен б/у в осо
    };


public:
    int id;
    int idDevice;
    Stat idStatus;
    QString nameStatus;
    QDateTime dateStatus;
    QString Comment;

    Status() : id(0), dateStatus(QDateTime::currentDateTime()) {}
};


#endif // STATUS_H
