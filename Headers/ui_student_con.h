/********************************************************************************
** Form generated from reading UI file 'student_con.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_CON_H
#define UI_STUDENT_CON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_student
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_std;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *connect_wid;
    QFrame *frame_6;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *name_edit;
    QLabel *label_4;
    QLineEdit *surname_edit;
    QLabel *label_3;
    QLineEdit *pass_edit;
    QPushButton *create_new_user_btn;
    QPushButton *connect;
    QFrame *line;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QWidget *main_std_wid;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *delete_account;
    QLabel *welcome_label;
    QPushButton *info_btn;
    QPushButton *logout_btn;
    QFrame *frame_5;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QPushButton *time_table_btn;
    QPushButton *classmates_btn;
    QPushButton *teachers_btn;

    void setupUi(QWidget *student)
    {
        if (student->objectName().isEmpty())
            student->setObjectName(QString::fromUtf8("student"));
        student->resize(820, 569);
        verticalLayout = new QVBoxLayout(student);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(student);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 50));
        frame_2->setMaximumSize(QSize(16777215, 50));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_std = new QLabel(frame_2);
        label_std->setObjectName(QString::fromUtf8("label_std"));
        label_std->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_std);


        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame_3);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setFrameShape(QFrame::Box);
        connect_wid = new QWidget();
        connect_wid->setObjectName(QString::fromUtf8("connect_wid"));
        frame_6 = new QFrame(connect_wid);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(320, 50, 271, 111));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Plain);
        formLayout = new QFormLayout(frame_6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(frame_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        name_edit = new QLineEdit(frame_6);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, name_edit);

        label_4 = new QLabel(frame_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        surname_edit = new QLineEdit(frame_6);
        surname_edit->setObjectName(QString::fromUtf8("surname_edit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, surname_edit);

        label_3 = new QLabel(frame_6);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        pass_edit = new QLineEdit(frame_6);
        pass_edit->setObjectName(QString::fromUtf8("pass_edit"));
        pass_edit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(2, QFormLayout::FieldRole, pass_edit);

        create_new_user_btn = new QPushButton(connect_wid);
        create_new_user_btn->setObjectName(QString::fromUtf8("create_new_user_btn"));
        create_new_user_btn->setGeometry(QRect(310, 180, 131, 22));
        connect = new QPushButton(connect_wid);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(510, 170, 80, 22));
        line = new QFrame(connect_wid);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(290, 50, 20, 171));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        frame_7 = new QFrame(connect_wid);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(40, 50, 241, 241));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(frame_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);

        stackedWidget->addWidget(connect_wid);
        main_std_wid = new QWidget();
        main_std_wid->setObjectName(QString::fromUtf8("main_std_wid"));
        verticalLayout_5 = new QVBoxLayout(main_std_wid);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(9, 9, 9, 9);
        frame_4 = new QFrame(main_std_wid);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setMaximumSize(QSize(16777215, 50));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Plain);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        delete_account = new QPushButton(frame_4);
        delete_account->setObjectName(QString::fromUtf8("delete_account"));
        delete_account->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(delete_account);

        welcome_label = new QLabel(frame_4);
        welcome_label->setObjectName(QString::fromUtf8("welcome_label"));
        welcome_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(welcome_label);

        info_btn = new QPushButton(frame_4);
        info_btn->setObjectName(QString::fromUtf8("info_btn"));
        info_btn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(info_btn);

        logout_btn = new QPushButton(frame_4);
        logout_btn->setObjectName(QString::fromUtf8("logout_btn"));
        logout_btn->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(logout_btn);


        verticalLayout_5->addWidget(frame_4);

        frame_5 = new QFrame(main_std_wid);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Plain);
        frame_5->setLineWidth(1);
        gridLayout = new QGridLayout(frame_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame_5);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        label_5 = new QLabel(frame_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        time_table_btn = new QPushButton(frame_5);
        time_table_btn->setObjectName(QString::fromUtf8("time_table_btn"));
        time_table_btn->setMinimumSize(QSize(0, 35));
        time_table_btn->setMaximumSize(QSize(16777215, 35));

        gridLayout->addWidget(time_table_btn, 1, 0, 1, 1);

        classmates_btn = new QPushButton(frame_5);
        classmates_btn->setObjectName(QString::fromUtf8("classmates_btn"));
        classmates_btn->setMinimumSize(QSize(0, 35));
        classmates_btn->setMaximumSize(QSize(16777215, 35));

        gridLayout->addWidget(classmates_btn, 1, 1, 1, 1);

        teachers_btn = new QPushButton(frame_5);
        teachers_btn->setObjectName(QString::fromUtf8("teachers_btn"));
        teachers_btn->setMinimumSize(QSize(0, 35));
        teachers_btn->setMaximumSize(QSize(16777215, 35));

        gridLayout->addWidget(teachers_btn, 1, 2, 1, 1);


        verticalLayout_5->addWidget(frame_5);

        stackedWidget->addWidget(main_std_wid);

        verticalLayout_3->addWidget(stackedWidget);


        verticalLayout_2->addWidget(frame_3);


        verticalLayout->addWidget(frame);


        retranslateUi(student);
        QObject::connect(logout_btn, &QPushButton::clicked, welcome_label, qOverload<>(&QLabel::clear));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(student);
    } // setupUi

    void retranslateUi(QWidget *student)
    {
        student->setWindowTitle(QCoreApplication::translate("student", "Form", nullptr));
        label_std->setText(QCoreApplication::translate("student", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Student Module</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("student", "name", nullptr));
        label_4->setText(QCoreApplication::translate("student", "surname", nullptr));
        label_3->setText(QCoreApplication::translate("student", "passowrd ", nullptr));
        create_new_user_btn->setText(QCoreApplication::translate("student", "create new account ", nullptr));
        connect->setText(QCoreApplication::translate("student", "login", nullptr));
        label_7->setText(QCoreApplication::translate("student", "<html><head/><body><p><img src=\":/images/stduent_icon.png\"/></p></body></html>", nullptr));
        delete_account->setText(QCoreApplication::translate("student", "delete accout", nullptr));
        welcome_label->setText(QCoreApplication::translate("student", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Welcome </span></p></body></html>", nullptr));
        info_btn->setText(QCoreApplication::translate("student", "My INFO", nullptr));
        logout_btn->setText(QCoreApplication::translate("student", "Log out", nullptr));
        label->setText(QCoreApplication::translate("student", "<html><head/><body><p align=\"center\"><img src=\":/images/schoolTimetable.png\"/></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("student", "<html><head/><body><p align=\"center\"><img src=\":/images/teacher_icon.png\"/></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("student", "<html><head/><body><p align=\"center\"><img src=\":/images/classmates.png\"/></p></body></html>", nullptr));
        time_table_btn->setText(QCoreApplication::translate("student", "My TimeTable ", nullptr));
        classmates_btn->setText(QCoreApplication::translate("student", "My classmates", nullptr));
        teachers_btn->setText(QCoreApplication::translate("student", "My teachers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class student: public Ui_student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_CON_H
