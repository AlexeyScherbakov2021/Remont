#ifndef ENTITY_H
#define ENTITY_H

#include <QString>
#include <repomssql.h>

class RepoMSSQL;

class IEntity
{
public:
    int id;
    QString name;

    virtual bool insert() = 0;
    virtual void select() = 0;

    IEntity(RepoMSSQL *rep);

protected:
    RepoMSSQL *repo;

private:
    IEntity() {}
};


inline IEntity::IEntity(RepoMSSQL *rep) : repo{rep}, id{0}
{

}

#endif // ENTITY_H
