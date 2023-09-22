#ifndef TEACHER_MODULE_H
#define TEACHER_MODULE_H

#include <QWidget>
#include"Headers/Sql_con.h"
namespace Ui {
class Teacher_module;
}

class Teacher_module : public QWidget
{
    Q_OBJECT

public:
    explicit Teacher_module(QWidget *parent = nullptr,SQL_con* db=nullptr);
    ~Teacher_module();
    void show_students();
private slots:

    void on_login_btn_clicked();

    void on_create_new_user_btn_clicked();

    void on_delete_account_clicked();

    void on_info_btn_clicked();

    void on_logout_btn_clicked();

private:
    Ui::Teacher_module *ui;
    SQL_con* mysql_db;
    QString name,surname;
    QSortFilterProxyModel* proxyModel;
    QSqlQueryModel* md;
};

#endif // TEACHER_MODULE_H
