/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *close_btn;
    QPushButton *minimize_btn;
    QPushButton *resizebtn;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_4;
    QLabel *status_label;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *home_btn;
    QPushButton *student_btn;
    QPushButton *teacher_btn;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *p1;
    QLabel *label;
    QWidget *p3;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QFrame *scorll_frame;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_7;
    QFrame *chart_frame;
    QVBoxLayout *chart_frame_lay;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 860);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMinimumSize(QSize(0, 50));
        frame_4->setMaximumSize(QSize(16777215, 50));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setSpacing(12);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(2, 2, 0, 0);
        close_btn = new QPushButton(frame_5);
        close_btn->setObjectName(QString::fromUtf8("close_btn"));
        close_btn->setMaximumSize(QSize(35, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/x.svg"), QSize(), QIcon::Normal, QIcon::Off);
        close_btn->setIcon(icon);

        horizontalLayout_3->addWidget(close_btn);

        minimize_btn = new QPushButton(frame_5);
        minimize_btn->setObjectName(QString::fromUtf8("minimize_btn"));
        minimize_btn->setMaximumSize(QSize(35, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/minimize-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        minimize_btn->setIcon(icon1);

        horizontalLayout_3->addWidget(minimize_btn);

        resizebtn = new QPushButton(frame_5);
        resizebtn->setObjectName(QString::fromUtf8("resizebtn"));
        resizebtn->setMaximumSize(QSize(35, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/maximize-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        resizebtn->setIcon(icon2);

        horizontalLayout_3->addWidget(resizebtn);


        horizontalLayout_2->addWidget(frame_5, 0, Qt::AlignLeft|Qt::AlignTop);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setMinimumSize(QSize(400, 50));
        frame_6->setFrameShape(QFrame::NoFrame);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_6);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(300, 0));
        label_2->setFrameShape(QFrame::Box);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_2);


        horizontalLayout_2->addWidget(frame_6);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(150, 0));
        frame_7->setMaximumSize(QSize(60, 16777215));
        frame_7->setFrameShape(QFrame::NoFrame);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_7);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        status_label = new QLabel(frame_7);
        status_label->setObjectName(QString::fromUtf8("status_label"));
        status_label->setFrameShape(QFrame::Box);
        status_label->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(status_label);


        horizontalLayout_2->addWidget(frame_7, 0, Qt::AlignRight);


        verticalLayout->addWidget(frame_4);

        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(120, 0));
        frame_2->setMaximumSize(QSize(120, 16777215));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frame_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        home_btn = new QPushButton(frame_2);
        home_btn->setObjectName(QString::fromUtf8("home_btn"));

        verticalLayout_3->addWidget(home_btn);

        student_btn = new QPushButton(frame_2);
        student_btn->setObjectName(QString::fromUtf8("student_btn"));

        verticalLayout_3->addWidget(student_btn);

        teacher_btn = new QPushButton(frame_2);
        teacher_btn->setObjectName(QString::fromUtf8("teacher_btn"));

        verticalLayout_3->addWidget(teacher_btn);


        horizontalLayout->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setMinimumSize(QSize(0, 0));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        stackedWidget = new QStackedWidget(frame_3);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        p1 = new QWidget();
        p1->setObjectName(QString::fromUtf8("p1"));
        label = new QLabel(p1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 401, 81));
        stackedWidget->addWidget(p1);
        p3 = new QWidget();
        p3->setObjectName(QString::fromUtf8("p3"));
        label_3 = new QLabel(p3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 10, 171, 61));
        label_5 = new QLabel(p3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(80, 100, 301, 61));
        label_6 = new QLabel(p3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 160, 111, 61));
        stackedWidget->addWidget(p3);

        verticalLayout_2->addWidget(stackedWidget);

        scorll_frame = new QFrame(frame_3);
        scorll_frame->setObjectName(QString::fromUtf8("scorll_frame"));
        scorll_frame->setMinimumSize(QSize(0, 300));
        scorll_frame->setMaximumSize(QSize(16777215, 300));
        scorll_frame->setFrameShape(QFrame::NoFrame);
        scorll_frame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(scorll_frame);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(scorll_frame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(0, 300));
        scrollArea->setMaximumSize(QSize(16777215, 300));
        scrollArea->setFrameShape(QFrame::Box);
        scrollArea->setFrameShadow(QFrame::Plain);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 620, 318));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        chart_frame = new QFrame(scrollAreaWidgetContents_2);
        chart_frame->setObjectName(QString::fromUtf8("chart_frame"));
        chart_frame->setMinimumSize(QSize(0, 300));
        chart_frame->setMaximumSize(QSize(16777215, 300));
        chart_frame->setFrameShape(QFrame::NoFrame);
        chart_frame->setFrameShadow(QFrame::Plain);
        chart_frame_lay = new QVBoxLayout(chart_frame);
        chart_frame_lay->setSpacing(0);
        chart_frame_lay->setObjectName(QString::fromUtf8("chart_frame_lay"));
        chart_frame_lay->setContentsMargins(0, 0, 0, 0);

        verticalLayout_7->addWidget(chart_frame);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(scrollArea);


        verticalLayout_2->addWidget(scorll_frame);


        horizontalLayout->addWidget(frame_3);


        verticalLayout->addWidget(frame);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        close_btn->setText(QString());
        minimize_btn->setText(QString());
        resizebtn->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">School application management</span></p></body></html>", nullptr));
        status_label->setText(QCoreApplication::translate("MainWindow", "STATUS", nullptr));
        home_btn->setText(QCoreApplication::translate("MainWindow", "Home", nullptr));
        student_btn->setText(QCoreApplication::translate("MainWindow", "Student", nullptr));
        teacher_btn->setText(QCoreApplication::translate("MainWindow", "Teacher", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome to the school management application:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "This is the teacher module ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Sorry, We are now out of business ;)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Try later ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
