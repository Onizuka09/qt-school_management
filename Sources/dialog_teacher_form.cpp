#include "Headers/dialog_teacher_form.h"
#include "build/ui_headers/ui_dialog_teacher_form.h"
#include <QCoreApplication>

Dialog_teacher_form::Dialog_teacher_form(QWidget *parent, QString type, SQL_con* db) :
    QDialog(parent),
    ui(new Ui::Dialog_teacher_form), my_db(db)
{
    ui->setupUi(this);
    this->type =type ;
    if (type=="Create"){

//        qDebug()<<"testss";
        ui->diag_title->setText("Creating new USER");
        ui->save_diag_btn->setText("Create");
    }
    else if ("Alter"==type){
        ui->diag_title->setText("My Information");
        ui->save_diag_btn->setText("Save changes");
        ui->name_edit->setDisabled(true);
        ui->surname_edit->setDisabled(true);
    }
    ui->subjects_combobox->addItems( {"Advanced Math", "Economics", "Literature", "Computer Science"});
//    QStringList subjects_list= {"Advanced Math", "Economics", "Literature", "Computer Science","French", "Arabic", "english", "japenese","MATH", "arabic", "french", "physics"};
}

Dialog_teacher_form::~Dialog_teacher_form()
{    qDebug("teacher dialog form was closed")   ;
    if (ui)
    delete ui;

//    qDebug("teacher dialog form was closed")   ;
}

bool Dialog_teacher_form::create_new_user()
{
    ui->diag_title->setText("Creating new USER");
    ui->save_diag_btn->setText("Create");
    QString name = ui->name_edit->text();
    QString surname = ui->surname_edit->text();
    QString pass = ui->passwd_edit->text() ;
    QString level = ui->level_edit->text() ;
    QString subject = ui->subjects_combobox->currentText();
//    QString grade = ui->grade_edit->text() ;

//    qDebug()<< name <<surname << pass<<level<<subject;
    if (name.trimmed().isEmpty() || surname.trimmed().isEmpty() || pass.trimmed().isEmpty()  ){
    qDebug()<<"name or username or passord can't be a white space";

    return false;
    }

    bool state = my_db->check_user_exist("teacher",name,surname);
    if (!state){
    QVariantList items ;
    items << QVariant()<< name <<surname << pass<<level<<subject;

    my_db->insert_user("teacher",items);
    return true; ;
    }
    else {
    qDebug()<<"name and surname "<< name << surname<< "already exist";

    }

    return false ;}

bool Dialog_teacher_form::update_user_data()
{
//    show_user_info()
    QString name = ui->name_edit->text();
QString surname = ui->surname_edit->text();
QString pass = ui->passwd_edit->text() ;
QString level = ui->level_edit->text() ;
QString subject = ui->subjects_combobox->currentText();
//qDebug() << pass<<age<<std_class<<grade;
if ( pass.trimmed().isEmpty()  ){
    qDebug()<<"passord can't be a white space";

    return false;
}

QVariantList list ;
list << pass<<subject<<level<<name <<surname ;
my_db->update_user("teacher",list);
return true;
}

bool Dialog_teacher_form::show_user_info(QString name, QString surname)
{
//    ui->diag_title->setText("My Information");
//    ui->save_diag_btn->setText("Save changes");
    QList<QString> list = my_db->select_user(QString("select * from teacher WHERE name= '%1' and surname= '%2'").arg(name).arg(surname));
    for (int i= 0; i<list.size();++i)
    {
    qDebug()<<list.at(i);
    }
    ui->name_edit->setText(list.at(1));
    ui->surname_edit->setText(list.at(2));
    ui->passwd_edit->setText(list.at(3)) ;
    ui->level_edit->setValue(list.at(4).toInt());
    ui->subjects_combobox->setCurrentText(list.at(5));
//    ui->age_edit->setText(list.at(4)) ;
//    ui->class_edit->setValue(list.at(5).toInt());//setText()
//    ui->grade_edit->setText(list.at(6)) ;
    return true;
}

void Dialog_teacher_form::on_close_diag_btn_clicked()
{

    this->close();


}


void Dialog_teacher_form::on_save_diag_btn_clicked()
{
    if (type=="Create"){
        create_new_user();
    }
    else if ("Alter"==type){
        update_user_data();
    }
}





void Dialog_teacher_form::on_level_edit_valueChanged(int level)
{
    QStringList subjects ;
    if (level==3)
        subjects = {"Advanced Math", "Economics", "Literature", "Computer Science"};
    else if (level == 2)
        subjects = {"French", "Arabic", "english", "japenese"};
    else if (level == 1)
        subjects = {"MATH", "arabic", "french", "physics"};
    else
        return;
    ui->subjects_combobox->clear();

    ui->subjects_combobox->addItems(subjects);

}

