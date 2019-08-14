#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QSqlQuery>
#include <QSqlError>
#include <QMap>
#include <QDebug>
#include "dbconnectionmanager.h"

class DBManager
{
public:
    Q_DISABLE_COPY(DBManager)

    static DBManager& instance();
    std::pair<DBTypes::DBResult, QSqlQuery> execute(const std::string& queryText, const QVariantList& args = {});

private:
    DBManager() = default;
    DBConnectionManager m_connectionManager;
};

#endif // DBMANAGER_H
