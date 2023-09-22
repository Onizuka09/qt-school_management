#ifndef DIALOG_TEACHER_FORM_H
#define DIALOG_TEACHER_FORM_H

#include <QDialog>
#include"Headers/Sql_con.h"
namespace Ui {
class Dialog_teacher_form;
}

class Dialog_teacher_form : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_teacher_form(QWidget *parent = nullptr,QString type= "", SQL_con* db= nullptr );
    ~Dialog_teacher_form();

private:
    bool create_new_user();
    bool update_user_data();
    void onAboutToQuit();
public:
    bool show_user_info(QString name, QString surname);
private slots:
    void on_close_diag_btn_clicked();

    void on_save_diag_btn_clicked();


    void on_level_edit_valueChanged(int level);

private:
    Ui::Dialog_teacher_form *ui;
    SQL_con* my_db ;
    QString type="";
};

#endif // DIALOG_TEACHER_FORM_H
