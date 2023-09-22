/********************************************************************************
** Form generated from reading UI file 'dialog_std_teacher_info.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STD_TEACHER_INFO_H
#define UI_DIALOG_STD_TEACHER_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_std_teacher_info
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QComboBox *filter;
    QLineEdit *filter_input;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_std_teacher_info)
    {
        if (Dialog_std_teacher_info->objectName().isEmpty())
            Dialog_std_teacher_info->setObjectName(QString::fromUtf8("Dialog_std_teacher_info"));
        Dialog_std_teacher_info->resize(572, 466);
        verticalLayout = new QVBoxLayout(Dialog_std_teacher_info);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog_std_teacher_info);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        frame = new QFrame(Dialog_std_teacher_info);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        filter = new QComboBox(frame);
        filter->setObjectName(QString::fromUtf8("filter"));
        filter->setGeometry(QRect(10, 10, 101, 22));
        filter_input = new QLineEdit(frame);
        filter_input->setObjectName(QString::fromUtf8("filter_input"));
        filter_input->setGeometry(QRect(170, 10, 113, 22));

        verticalLayout->addWidget(frame);

        tableView = new QTableView(Dialog_std_teacher_info);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        buttonBox = new QDialogButtonBox(Dialog_std_teacher_info);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog_std_teacher_info);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_std_teacher_info, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_std_teacher_info, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_std_teacher_info);
    } // setupUi

    void retranslateUi(QDialog *Dialog_std_teacher_info)
    {
        Dialog_std_teacher_info->setWindowTitle(QCoreApplication::translate("Dialog_std_teacher_info", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_std_teacher_info", "My teachers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_std_teacher_info: public Ui_Dialog_std_teacher_info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STD_TEACHER_INFO_H
