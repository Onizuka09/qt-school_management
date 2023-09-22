/********************************************************************************
** Form generated from reading UI file 'dialog_student_form.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STUDENT_FORM_H
#define UI_DIALOG_STUDENT_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_std_info
{
public:
    QFrame *frame;
    QPushButton *close_diag_btn;
    QPushButton *save_diag_btn;
    QLabel *diag_title;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name_edit;
    QLabel *label_2;
    QLineEdit *surname_edit;
    QLabel *label_4;
    QLineEdit *passwd_edit;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QLabel *label_3;
    QLineEdit *age_edit;
    QLabel *label_5;
    QLineEdit *grade_edit;
    QLabel *label_6;
    QSpinBox *class_edit;

    void setupUi(QDialog *std_info)
    {
        if (std_info->objectName().isEmpty())
            std_info->setObjectName(QString::fromUtf8("std_info"));
        std_info->resize(421, 274);
        frame = new QFrame(std_info);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 210, 311, 41));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        close_diag_btn = new QPushButton(frame);
        close_diag_btn->setObjectName(QString::fromUtf8("close_diag_btn"));
        close_diag_btn->setGeometry(QRect(200, 10, 80, 22));
        close_diag_btn->setStyleSheet(QString::fromUtf8(""));
        save_diag_btn = new QPushButton(frame);
        save_diag_btn->setObjectName(QString::fromUtf8("save_diag_btn"));
        save_diag_btn->setEnabled(true);
        save_diag_btn->setGeometry(QRect(50, 10, 111, 22));
        save_diag_btn->setMinimumSize(QSize(60, 0));
        diag_title = new QLabel(std_info);
        diag_title->setObjectName(QString::fromUtf8("diag_title"));
        diag_title->setGeometry(QRect(140, 10, 121, 41));
        layoutWidget = new QWidget(std_info);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 181, 111));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(12);
        formLayout->setContentsMargins(0, 6, 0, 5);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        name_edit = new QLineEdit(layoutWidget);
        name_edit->setObjectName(QString::fromUtf8("name_edit"));
        name_edit->setInputMethodHints(Qt::ImhNone);
        name_edit->setMaxLength(28);
        name_edit->setFrame(true);
        name_edit->setClearButtonEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, name_edit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        surname_edit = new QLineEdit(layoutWidget);
        surname_edit->setObjectName(QString::fromUtf8("surname_edit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, surname_edit);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        passwd_edit = new QLineEdit(layoutWidget);
        passwd_edit->setObjectName(QString::fromUtf8("passwd_edit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, passwd_edit);

        layoutWidget1 = new QWidget(std_info);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(220, 70, 181, 111));
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setVerticalSpacing(12);
        formLayout_2->setContentsMargins(0, 6, 0, 5);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_3);

        age_edit = new QLineEdit(layoutWidget1);
        age_edit->setObjectName(QString::fromUtf8("age_edit"));
        age_edit->setInputMethodHints(Qt::ImhNone);
        age_edit->setMaxLength(28);
        age_edit->setFrame(true);
        age_edit->setClearButtonEnabled(false);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, age_edit);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        grade_edit = new QLineEdit(layoutWidget1);
        grade_edit->setObjectName(QString::fromUtf8("grade_edit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, grade_edit);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

        class_edit = new QSpinBox(layoutWidget1);
        class_edit->setObjectName(QString::fromUtf8("class_edit"));
        class_edit->setMinimum(1);
        class_edit->setMaximum(3);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, class_edit);


        retranslateUi(std_info);

        QMetaObject::connectSlotsByName(std_info);
    } // setupUi

    void retranslateUi(QDialog *std_info)
    {
        std_info->setWindowTitle(QCoreApplication::translate("std_info", "Dialog", nullptr));
        close_diag_btn->setText(QCoreApplication::translate("std_info", "CLOSE", nullptr));
        save_diag_btn->setText(QCoreApplication::translate("std_info", "SAVE", nullptr));
        diag_title->setText(QCoreApplication::translate("std_info", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("std_info", "Name", nullptr));
        name_edit->setInputMask(QString());
        label_2->setText(QCoreApplication::translate("std_info", "surname", nullptr));
        label_4->setText(QCoreApplication::translate("std_info", "password", nullptr));
        label_3->setText(QCoreApplication::translate("std_info", "age", nullptr));
        age_edit->setInputMask(QString());
        label_5->setText(QCoreApplication::translate("std_info", "grade", nullptr));
        label_6->setText(QCoreApplication::translate("std_info", "class", nullptr));
    } // retranslateUi

};

namespace Ui {
    class std_info: public Ui_std_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STUDENT_FORM_H
