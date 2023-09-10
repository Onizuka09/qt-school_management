#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
MainWindow::MainWindow(QWidget *parent): QMainWindow(parent)
    , ui(new Ui::MainWindow),mysql_db ("QMYSQL" ,"localhost","moktar","0000", "qt5"),chart(nullptr,&mysql_db)
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
    ui->stackedWidget->addWidget(std);


    teacher = new Teacher_module(this,&mysql_db);
    ui->stackedWidget->addWidget(teacher);
//    set_chart();
    QList<QStringList >items =chart.fetch_values();
    chartView = chart.Create_chart(items );
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
    ui->stackedWidget->setCurrentWidget(teacher);
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

