#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "student_con.h"
#include "Sql_con.h"
#include <QMainWindow>
#include<QStackedWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_home_btn_clicked();
    void on_student_btn_clicked();
    void on_teacher_btn_clicked();

    void on_close_btn_clicked();

    void on_minimize_btn_clicked();

    void on_resizebtn_clicked();

private:
    Ui::MainWindow *ui;
    student* std ;
//    Teacher_module* teacher;
public :
    SQL_con mysql_db;

};
#endif // MAINWINDOW_H
