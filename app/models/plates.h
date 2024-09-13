#ifndef PLATES_H
#define PLATES_H

#include <QDateTime>

struct Plate
{
    int id;
    int idModul;
    QDateTime createDate;
    QString number;
    QString numberFW;
    QString VNFT;
    QString numberDoc;

    Plate() : id{0}, idModul{0} {}
};

#endif // PLATES_H
