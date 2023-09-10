#include "teacher_module.h"
#include "ui_teacher_module.h"
#include<QDebug>
#include "dialog_teacher_form.h"
Teacher_module::Teacher_module(QWidget *parent, SQL_con* db) :
    QWidget(parent),
    ui(new Ui::Teacher_module),mysql_db(db)
{
//    qDebug()<<"db connection: "<<mysql_db->isConnected();
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->con_wid);
    ui->stackedWidget->show();
    }

Teacher_module::~Teacher_module()
{
    delete ui;
}

void Teacher_module::show_students()
{ QStringList items= mysql_db->select_user(QString("select levels from teacher WHERE name='%1' and surname='%2'").arg(name).arg(surname));
    if (items.isEmpty()){
        return ;
    }
    int level = items[0].toInt() ;
    md = mysql_db->load_all_table_data("",QString("select name,surname,age,grade from student where class='%1'").arg(level));
    if (md != nullptr)
    {
        proxyModel = new QSortFilterProxyModel(this);
        proxyModel->setSourceModel(md);
        ui->tableView->setSortingEnabled(true);
        ui->tableView->setModel(proxyModel);

        qDebug() << md->rowCount();
    }
    else
    {
        qDebug() << "Error loading data from the database.";
    }
}


void Teacher_module::on_login_btn_clicked()
{
    if ( mysql_db->isConnected())
    {
        this->name = ui->name_edit->text();
        this->surname = ui->surname_edit->text();
        QString pass= ui->pass_edit->text();
        qDebug()<< name ;
        qDebug()<< pass ;
        qDebug() << "MySQL DB is connected.";
        QList <QString> list ;
        list<<name<<surname <<pass;
        bool state = mysql_db->user_connection("teacher",list);
        if (state){

            ui->stackedWidget->setCurrentWidget(ui->main_wid);
            ui->stackedWidget->show();
            ui->welcome_label->setText(QString("welcome %1 %2").arg(name).arg(surname));
            QFont font = ui->welcome_label->font();
            font.setPointSize(18);
            ui->welcome_label->setFont(font);
            show_students();

        }
        else
        {
            qDebug() << "MySQL DB is not connected.";
        }

    }
}


void Teacher_module::on_create_new_user_btn_clicked()
{

    Dialog_teacher_form* form= new Dialog_teacher_form(nullptr,"Create", mysql_db);
//    info_diag->show_user_info(name,surname);

    form->show();

}


void Teacher_module::on_delete_account_clicked()
{
    QList<QString> list ;
    list << name << surname;
    bool a = mysql_db->remove_user("teacher",list);
    if (a )
    ui->stackedWidget->setCurrentWidget(ui->con_wid);
    else
    qDebug()   << "unnable to remove this user ";

}


void Teacher_module::on_info_btn_clicked()
{
    Dialog_teacher_form* form= new Dialog_teacher_form(nullptr,"Alter", mysql_db);
        form->show_user_info(name,surname);

    form->show();
}


void Teacher_module::on_logout_btn_clicked()
{
    ui->main_wid->close();
    ui->stackedWidget->setCurrentWidget(ui->con_wid);
    ui->stackedWidget->show();
}

