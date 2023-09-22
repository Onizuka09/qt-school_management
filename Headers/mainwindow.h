#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Headers/student_con.h"
#include "Headers/Sql_con.h"
#include <QMainWindow>
#include<QStackedWidget>
#include"Headers/teacher_module.h"
#include"Headers/grades_chart.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void update_value();
private slots:
//void set_chart();
    void on_home_btn_clicked();
    void on_student_btn_clicked();
    void on_teacher_btn_clicked();

    void on_close_btn_clicked();

    void on_minimize_btn_clicked();

    void on_resizebtn_clicked();
public slots:
    void timer_slot();
private:
    Ui::MainWindow *ui;
    student* std ;
    Teacher_module* teacher;
//    Teacher_module* teacher;
public :
    SQL_con mysql_db;
    QChartView* chartView ;//= nullptr;
    Grades_chart chart;
    int a=0;
    QTimer* timer;


};
#endif // MAINWINDOW_H
