/********************************************************************************
** Form generated from reading UI file 'dialog_teacher_form.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TEACHER_FORM_H
#define UI_DIALOG_TEACHER_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_teacher_form
{
public:
    QLabel *diag_title;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *name_edit;
    QLabel *label_2;
    QLineEdit *surname_edit;
    QLabel *label_4;
    QLineEdit *passwd_edit;
    QWidget *layoutWidget_2;
    QFormLayout *formLayout_2;
    QComboBox *subjects_combobox;
    QLabel *label_3;
    QLabel *label_5;
    QSpinBox *level_edit;
    QFrame *frame;
    QPushButton *close_diag_btn;
    QPushButton *save_diag_btn;

    void setupUi(QDialog *Dialog_teacher_form)
    {
        if (Dialog_teacher_form->objectName().isEmpty())
            Dialog_teacher_form->setObjectName(QString::fromUtf8("Dialog_teacher_form"));
        Dialog_teacher_form->resize(427, 290);
        diag_title = new QLabel(Dialog_teacher_form);
        diag_title->setObjectName(QString::fromUtf8("diag_title"));
        diag_title->setGeometry(QRect(160, 10, 121, 41));
        layoutWidget = new QWidget(Dialog_teacher_form);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 181, 121));
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

        layoutWidget_2 = new QWidget(Dialog_teacher_form);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(230, 70, 181, 101));
        formLayout_2 = new QFormLayout(layoutWidget_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setVerticalSpacing(12);
        formLayout_2->setContentsMargins(0, 6, 0, 5);
        subjects_combobox = new QComboBox(layoutWidget_2);
        subjects_combobox->setObjectName(QString::fromUtf8("subjects_combobox"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, subjects_combobox);

        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_5);

        level_edit = new QSpinBox(layoutWidget_2);
        level_edit->setObjectName(QString::fromUtf8("level_edit"));
        level_edit->setMinimum(1);
        level_edit->setMaximum(3);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, level_edit);

        frame = new QFrame(Dialog_teacher_form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(90, 230, 311, 41));
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

        retranslateUi(Dialog_teacher_form);

        QMetaObject::connectSlotsByName(Dialog_teacher_form);
    } // setupUi

    void retranslateUi(QDialog *Dialog_teacher_form)
    {
        Dialog_teacher_form->setWindowTitle(QCoreApplication::translate("Dialog_teacher_form", "Dialog", nullptr));
        diag_title->setText(QCoreApplication::translate("Dialog_teacher_form", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Dialog_teacher_form", "Name", nullptr));
        name_edit->setInputMask(QString());
        label_2->setText(QCoreApplication::translate("Dialog_teacher_form", "surname", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_teacher_form", "password", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_teacher_form", "Subject", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_teacher_form", "Levels", nullptr));
        close_diag_btn->setText(QCoreApplication::translate("Dialog_teacher_form", "CLOSE", nullptr));
        save_diag_btn->setText(QCoreApplication::translate("Dialog_teacher_form", "SAVE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_teacher_form: public Ui_Dialog_teacher_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TEACHER_FORM_H
