#ifndef REMONTSTEPSTATUS_H
#define REMONTSTEPSTATUS_H

#include <QString>


class RemontStepStatus
{
public:
    enum TypeStatus {REMONT, WORK, ALL=500};


public:
    int id;
    QString name;
    bool inWork;
};

#endif // REMONTSTEPSTATUS_H
