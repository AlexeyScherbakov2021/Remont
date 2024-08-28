#ifndef REMONTSTEP_H
#define REMONTSTEP_H

#include "remontstepstatus.h"

#include <QDateTime>
#include <QString>


class RemontStep
{
public:
    int id;
    int RemontMId;
    int StatusId;
    // QString status;
    QString Comment;
    QDateTime dateStep;
    RemontStepStatus status;

    RemontStep() : id{0} {}
};

#endif // REMONTSTEP_H
