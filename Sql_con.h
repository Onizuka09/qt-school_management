#ifndef SQL_CON_H
#define SQL_CON_H
#include<database_info.h>
#include<QtSql>
#include<QDebug>
#include<QVariant>
#include<QList>
//#include
class SQL_con
{
private:
    QString db_type ="";
    QString hostname ="" ;
    QString username ="";
    QString passwd ="";
    QString db_name="";
    QSqlDatabase db ;
    bool is_connected = false;
public:
    QSqlQueryModel* md = nullptr;
    SQL_con(QString db_type , QString hostname,QString username , QString passwd,QString db_name );
    ~SQL_con();
    bool   connect ();
    void disconnect ();
    bool isConnected() const;
    bool check_user_exist(QString table_name, QString name,QString sername);
    bool update_user(QString table_name,QVariantList& items);
    bool insert_user(QString table_name,QVariantList& items );
    QList<QString> select_user(QString cmd);
    bool user_connection(QString table_name, QList <QString>& credentials);
    bool remove_user(QString table_name, QList<QString>& list);
    QSqlQueryModel* load_all_table_data(QString table_name);
};

#endif // SQL_CON_H
