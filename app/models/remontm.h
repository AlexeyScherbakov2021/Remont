#ifndef REMONTM_H
#define REMONTM_H

#include "basemodel.h"
#include "remontstep.h"
#include <QDateTime>
#include <QString>
#include <repomssql.h>

class RemontM
{
public:
    int id;
    int modulId;
    QString reclamtion;
    QDateTime workDate;
    int reasonId;
    QString reasonName;
    QString action;
    QString defect;
    QString remark;
    QDateTime EndDate;

    QList<RemontStep> listRemStep;

};


#endif // REMONTM_H
