#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"grades_chart.h"
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
    , ui(new Ui::MainWindow),mysql_db ("QMYSQL" ,"localhost","moktar","0000", "qt5")
{
    ui->setupUi(this);
    bool state =mysql_db.connect();
    if (state){
        ui->status_label->setText("connected");
        ui->status_label->setStyleSheet("background-color: green;");
    }
    else {
//        Notification::showError("Error","Unable to connect to ");
        ui->status_label->setText("disconnected");
        ui->status_label->setStyleSheet("background-color: red;");

    }

    std = new student(this, &mysql_db);
//    teacher = new Teacher_module();
    ui->stackedWidget->addWidget(std);
//    ui->stackedWidget->addWidget(teacher);
    Grades_chart chart(nullptr,&mysql_db);
    //    chart.fetch_values();
    QChartView* chartView = chart.Create_chart( );

    ui->chart_frame_lay->addWidget(chartView );
    ui->scorll_frame->hide();
}
void MainWindow::on_student_btn_clicked(){

    ui->stackedWidget->setCurrentWidget(std);
    ui->stackedWidget->show();
    ui->scorll_frame->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_home_btn_clicked()
{

    ui->stackedWidget->setCurrentWidget(ui->p1);
    ui->stackedWidget->show();
    ui->scorll_frame->hide();


}

void MainWindow::on_teacher_btn_clicked(){
    ui->stackedWidget->setCurrentWidget(ui->p3);
    ui->stackedWidget->show();

    ui->scorll_frame->show();

}


void MainWindow::on_close_btn_clicked()
{
    this->close();
}


void MainWindow::on_minimize_btn_clicked()
{
//    this->resize(800,600);
    this->showNormal();

}


void MainWindow::on_resizebtn_clicked()
{
    this->showFullScreen();
}

