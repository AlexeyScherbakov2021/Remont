#ifndef BASEMODEL_H
#define BASEMODEL_H

#include <repomssql.h>

template <typename T>
class BaseModel
{
public:
    QList<T> list;
    virtual void Load(T& toList) {}
    virtual T GetItem(int id) = 0;
    virtual void FindSerial(const QString &serialNumber) = 0;
    virtual void Insert(T& item) {}

    BaseModel<T>(RepoMSSQL *rep) : repo{rep} {}
    BaseModel<T>();

protected:
    RepoMSSQL *repo;

};







#endif // BASEMODEL_H
