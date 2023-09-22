#include "Headers/student_con.h"
#include "build/ui_headers/ui_student_con.h"

#include "Headers/dialog_student_form.h"
//#include<QtCharts>

#include<QChartView>
#include<QBarSet>
#include<QBarSeries>
#include<QtCharts>
#include"Headers/dialog_myclassmates.h"
#include"Headers/dialog_std_teacher_info.h"
student::student(QWidget *parent, SQL_con *db) :
    QWidget(parent),
    ui(new Ui::student),mysql_db(db)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->connect_wid);
 ui->stackedWidget->show();
}

student::~student()
{
    delete ui;
//delete mysql_db;

delete proxyModel;

}


void student::on_connect_clicked()
{
    if (mysql_db && mysql_db->isConnected())
    {
        this->name = ui->name_edit->text();
        this->surname = ui->surname_edit->text();
        QString pass= ui->pass_edit->text();
        qDebug()<< name ;
        qDebug()<< pass ;
        qDebug() << "MySQL DB is connected.";
        QList <QString> list ;
        list<<name<<surname <<pass;
        bool state = mysql_db->user_connection("student",list);
        if (state){

            ui->stackedWidget->setCurrentWidget(ui->main_std_wid);
            ui->stackedWidget->show();
//            Qstring str =;
            ui->welcome_label->setText("Welcome "+name+" "+surname );

        // Use the mysql_db object here
    }
    else
    {
        qDebug() << "MySQL DB is not connected.";
    }

}
}




//}

void student::on_logout_btn_clicked()
{
//if (mysql_db->md)
//{
//    mysql_db->md->removeRows(0, mysql_db->md->rowCount());
//    delete mysql_db->md;
//    mysql_db->md = nullptr;
//    delete proxyModel;
//    proxyModel =nullptr;
//}

//ui->tableView->reset();
ui->main_std_wid->close();
ui->stackedWidget->setCurrentWidget(ui->connect_wid);
ui->stackedWidget->show();


}




void student::on_info_btn_clicked()
{
std_info* info_diag= new std_info(nullptr,"Alter", mysql_db);

info_diag->show_user_info(name,surname);
//info_diag->update_user_info(items) ;
info_diag->show();

}






void student::on_time_table_btn_clicked()
{
QStringList items= mysql_db->select_user(QString("select class from student WHERE name='%1' and surname='%2'").arg(name).arg(surname));
if (items.isEmpty()){
    return ;
}
TimeTable* table = new TimeTable();
int std_level = items[0].toInt() ;
table->show_time_table(std_level);
table->show();
}


void student::on_classmates_btn_clicked()
{
QStringList items= mysql_db->select_user(QString("select class from student WHERE name='%1' and surname='%2'").arg(name).arg(surname));
if (items.isEmpty()){
    return ;
}
qDebug()<<items[0].toInt();
int std_level = items[0].toInt() ;
Dialog_myClassmates* my_mates = new Dialog_myClassmates(nullptr,mysql_db);
bool a =my_mates->show_my_classmates(std_level);
 my_mates->show();

}


void student::on_teachers_btn_clicked()
{
// get_best_grades();
 QStringList items= mysql_db->select_user(QString("select class from student WHERE name='%1' and surname='%2'").arg(name).arg(surname));
 if (items.isEmpty()){
    return ;
 }
 int std_level = items[0].toInt() ;
 Dialog_std_teacher_info* teacher_info = new Dialog_std_teacher_info(nullptr,mysql_db);
 bool a = teacher_info->show_my_teachers(std_level);
 teacher_info->show();

}


void student::on_create_new_user_btn_clicked()
{
 if (mysql_db && mysql_db->isConnected()){
    qDebug()<<"aaa";
    std_info* info_diag= new std_info(nullptr,"Create", mysql_db);
    info_diag->show();
    //    info_diag->l
 }
}





void student::on_delete_account_clicked()
{
 QList<QString> list ;
// list << name << surname;
 bool a = mysql_db->remove_user("student",list);
 qDebug()   << a ;
 ui->stackedWidget->setCurrentWidget(ui->connect_wid);
}

void student::get_best_grades()
{
// mysql_db->select_user("select name username from student Where ");

}

