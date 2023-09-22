#ifndef DIALOG_STD_TEACHER_INFO_H
#define DIALOG_STD_TEACHER_INFO_H

#include <QDialog>
#include"Headers/Sql_con.h"
namespace Ui {
class Dialog_std_teacher_info;
}

class Dialog_std_teacher_info : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_std_teacher_info(QWidget *parent = nullptr,SQL_con* db=nullptr);
    ~Dialog_std_teacher_info();
    bool show_my_teachers(int level);
void applyFilter();
private slots:
    void on_filter_input_textChanged(const QString &arg1);

private:
    Ui::Dialog_std_teacher_info *ui;
    SQL_con* my_db;
    QSortFilterProxyModel* proxyModel;
    QSqlQueryModel* md;

};

#endif // DIALOG_STD_TEACHER_INFO_H
