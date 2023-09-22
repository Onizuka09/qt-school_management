#ifndef DIALOG_STUDENT_FORM_H
#define DIALOG_STUDENT_FORM_H

#include <QDialog>
#include "Headers/Sql_con.h"
namespace Ui {
class std_info;
}

class std_info : public QDialog
{
    Q_OBJECT

public:
    explicit std_info(QWidget *parent = nullptr,QString type="",SQL_con* db = nullptr);
    ~std_info();


private slots:
    void on_close_diag_btn_clicked();

    void on_save_diag_btn_clicked();



private:
    bool create_new_user();
    bool update_user_data();
public:
    bool show_user_info(QString name, QString surname);
private:
    Ui::std_info *ui;
    SQL_con* my_db;
    QString type="";
//    QString name= "";
//    QString surname ="";
};

#endif // DIALOG_STUDENT_FORM_H
