#ifndef STUDENT_CON_H
#define STUDENT_CON_H

#include <QWidget>
#include <QDebug>
#include"Headers/Sql_con.h"
#include"Headers/timetable.h"
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


    void on_time_table_btn_clicked();

    void on_classmates_btn_clicked();

    void on_teachers_btn_clicked();

    void on_create_new_user_btn_clicked();


    void on_delete_account_clicked();
    void get_best_grades();
private:
    Ui::student *ui;
    SQL_con *mysql_db;

    QSortFilterProxyModel* proxyModel;
};



#endif // STUDENT_CON_H
