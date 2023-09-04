#ifndef STUDENT_CON_H
#define STUDENT_CON_H

#include <QWidget>
#include <QDebug>
#include"Sql_con.h"
#include"timetable.h"
namespace Ui {
class student;
}

class student : public QWidget
{
    Q_OBJECT

public:
    explicit student(QWidget *parent = nullptr,SQL_con *db = nullptr);
    ~student();
private:
    QString name ="";
    QString surname="";
    int id ;
private slots:

    void on_connect_clicked();



    void on_info_btn_clicked();

    void on_logout_btn_clicked();

    void create_new_user_btn();// create new user btn

    void on_time_table_btn_clicked();

    void on_classmates_btn_clicked();

    void on_teachers_btn_clicked();

private:
    Ui::student *ui;
    SQL_con *mysql_db;

    QSortFilterProxyModel* proxyModel;
};



#endif // STUDENT_CON_H
