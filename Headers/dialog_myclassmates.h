#ifndef DIALOG_MYCLASSMATES_H
#define DIALOG_MYCLASSMATES_H

#include <QDialog>
#include"Headers/Sql_con.h"
#include <QSortFilterProxyModel>
#include <QTableView>
namespace Ui {
class Dialog_myClassmates;
}

class Dialog_myClassmates : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_myClassmates(QWidget *parent = nullptr,SQL_con* db=nullptr);
    ~Dialog_myClassmates();
    bool show_my_classmates(int level);
    void applyFilter();

private slots:
    void on_filter_input_textChanged(const QString &arg1);

private:
    Ui::Dialog_myClassmates *ui;
    SQL_con* my_db;
    QSortFilterProxyModel* proxyModel;
    QSqlQueryModel* md;
};

#endif // DIALOG_MYCLASSMATES_H
