#ifndef CLAIM_H
#define CLAIM_H

#include <QDateTime>
#include <QString>


class Claim
{
public:
    int id;
    QString Number;
    QDateTime DateClaim;
    QString FromWho;
    int TypeClaimId;
    QString Organization;
    QString ObjectInstall;
    QString Descript;
    int TypeComplectId;
    QString VNFT;
    int Quantity;
    int TypeDeviceId;
    QString NumberModul;
    QString NumberNewModul;
    QString NumberDevice;
    QDateTime DateOut;
    bool IsGuarantee;
    QString Reason;
    QDateTime DateRepair;
    QString DoRepair;
    QString FileAnswer;
    QString TextResult;
    QString TypeClaimString;
    QString TypeComplectString;
    QString TypeDeviceString;

    Claim() : id(0) {}

};

#endif // CLAIM_H
