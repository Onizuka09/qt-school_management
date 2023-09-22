/********************************************************************************
** Form generated from reading UI file 'teacher_module.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_MODULE_H
#define UI_TEACHER_MODULE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Teacher_module
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
    QWidget *con_wid;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QFrame *line;
    QFrame *frame_6;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *name_edit;
    QLabel *label_4;
    QLineEdit *surname_edit;
    QLabel *label_3;
    QLineEdit *pass_edit;
    QPushButton *create_new_user_btn;
    QPushButton *login_btn;
    QLabel *label_std_2;
    QWidget *main_wid;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *delete_account;
    QLabel *welcome_label;
    QPushButton *info_btn;
    QPushButton *logout_btn;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_8;
    QTableView *tableView;
    QWidget *tab_2;

    void setupUi(QWidget *Teacher_module)
    {
        if (Teacher_module->objectName().isEmpty())
            Teacher_module->setObjectName(QString::fromUtf8("Teacher_module"));
        Teacher_module->resize(820, 569);
        verticalLayout = new QVBoxLayout(Teacher_module);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(Teacher_module);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(0, 50));
        frame_2->setMaximumSize(QSize(16777215, 50));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_std = new QLabel(frame_2);
        label_std->setObjectName(QString::fromUtf8("label_std"));
        label_std->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_std);


        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Plain);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(frame_3);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        con_wid = new QWidget();
        con_wid->setObjectName(QString::fromUtf8("con_wid"));
        frame_7 = new QFrame(con_wid);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(60, 60, 241, 241));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_7);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_7 = new QLabel(frame_7);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_6->addWidget(label_7);

        line = new QFrame(con_wid);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(310, 60, 20, 171));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        frame_6 = new QFrame(con_wid);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(360, 60, 271, 111));
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

        create_new_user_btn = new QPushButton(con_wid);
        create_new_user_btn->setObjectName(QString::fromUtf8("create_new_user_btn"));
        create_new_user_btn->setGeometry(QRect(350, 190, 131, 22));
        login_btn = new QPushButton(con_wid);
        login_btn->setObjectName(QString::fromUtf8("login_btn"));
        login_btn->setGeometry(QRect(550, 190, 80, 22));
        label_std_2 = new QLabel(con_wid);
        label_std_2->setObjectName(QString::fromUtf8("label_std_2"));
        label_std_2->setGeometry(QRect(90, 10, 311, 30));
        label_std_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        stackedWidget->addWidget(con_wid);
        main_wid = new QWidget();
        main_wid->setObjectName(QString::fromUtf8("main_wid"));
        verticalLayout_5 = new QVBoxLayout(main_wid);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        frame_4 = new QFrame(main_wid);
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

        frame_5 = new QFrame(main_wid);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setMinimumSize(QSize(0, 40));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Plain);
        verticalLayout_7 = new QVBoxLayout(frame_5);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_5);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_7->addWidget(label);


        verticalLayout_5->addWidget(frame_5);

        tabWidget = new QTabWidget(main_wid);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_8 = new QVBoxLayout(tab);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_8->addWidget(tableView);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        verticalLayout_5->addWidget(tabWidget);

        stackedWidget->addWidget(main_wid);

        verticalLayout_3->addWidget(stackedWidget);


        verticalLayout_2->addWidget(frame_3);


        verticalLayout->addWidget(frame);


        retranslateUi(Teacher_module);

        stackedWidget->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Teacher_module);
    } // setupUi

    void retranslateUi(QWidget *Teacher_module)
    {
        Teacher_module->setWindowTitle(QCoreApplication::translate("Teacher_module", "Form", nullptr));
        label_std->setText(QCoreApplication::translate("Teacher_module", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Teacher Module</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("Teacher_module", "<html><head/><body><p><img src=\":/images/teachers_icon.jpeg\"/></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Teacher_module", "name", nullptr));
        label_4->setText(QCoreApplication::translate("Teacher_module", "surname", nullptr));
        label_3->setText(QCoreApplication::translate("Teacher_module", "passowrd ", nullptr));
        create_new_user_btn->setText(QCoreApplication::translate("Teacher_module", "create new account ", nullptr));
        login_btn->setText(QCoreApplication::translate("Teacher_module", "login", nullptr));
        label_std_2->setText(QCoreApplication::translate("Teacher_module", "<html><head/><body><p><span style=\" font-size:20pt;\">Connect:</span></p></body></html>", nullptr));
        delete_account->setText(QCoreApplication::translate("Teacher_module", "delete accout", nullptr));
        welcome_label->setText(QCoreApplication::translate("Teacher_module", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Welcome </span></p></body></html>", nullptr));
        info_btn->setText(QCoreApplication::translate("Teacher_module", "My INFO", nullptr));
        logout_btn->setText(QCoreApplication::translate("Teacher_module", "Log out", nullptr));
        label->setText(QCoreApplication::translate("Teacher_module", "<html><head/><body><p><span style=\" font-size:14pt;\">My students: </span></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Teacher_module", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Teacher_module", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Teacher_module: public Ui_Teacher_module {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_MODULE_H
