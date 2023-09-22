/********************************************************************************
** Form generated from reading UI file 'dialog_myclassmates.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_MYCLASSMATES_H
#define UI_DIALOG_MYCLASSMATES_H

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

class Ui_Dialog_myClassmates
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QComboBox *filter;
    QLineEdit *filter_input;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog_myClassmates)
    {
        if (Dialog_myClassmates->objectName().isEmpty())
            Dialog_myClassmates->setObjectName(QString::fromUtf8("Dialog_myClassmates"));
        Dialog_myClassmates->resize(508, 389);
        verticalLayout = new QVBoxLayout(Dialog_myClassmates);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog_myClassmates);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        frame = new QFrame(Dialog_myClassmates);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(0, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        filter = new QComboBox(frame);
        filter->setObjectName(QString::fromUtf8("filter"));
        filter->setGeometry(QRect(10, 10, 101, 22));
        filter_input = new QLineEdit(frame);
        filter_input->setObjectName(QString::fromUtf8("filter_input"));
        filter_input->setGeometry(QRect(140, 10, 113, 22));

        verticalLayout->addWidget(frame);

        tableView = new QTableView(Dialog_myClassmates);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        buttonBox = new QDialogButtonBox(Dialog_myClassmates);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog_myClassmates);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog_myClassmates, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog_myClassmates, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog_myClassmates);
    } // setupUi

    void retranslateUi(QDialog *Dialog_myClassmates)
    {
        Dialog_myClassmates->setWindowTitle(QCoreApplication::translate("Dialog_myClassmates", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_myClassmates", "My classmates Level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_myClassmates: public Ui_Dialog_myClassmates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_MYCLASSMATES_H
