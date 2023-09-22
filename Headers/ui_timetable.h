/********************************************************************************
** Form generated from reading UI file 'timetable.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETABLE_H
#define UI_TIMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TimeTable
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TimeTable)
    {
        if (TimeTable->objectName().isEmpty())
            TimeTable->setObjectName(QString::fromUtf8("TimeTable"));
        TimeTable->resize(609, 359);
        verticalLayout = new QVBoxLayout(TimeTable);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(TimeTable);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        tableWidget = new QTableWidget(TimeTable);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);

        buttonBox = new QDialogButtonBox(TimeTable);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TimeTable);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, TimeTable, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, TimeTable, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(TimeTable);
    } // setupUi

    void retranslateUi(QDialog *TimeTable)
    {
        TimeTable->setWindowTitle(QCoreApplication::translate("TimeTable", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TimeTable", "Time table: class 3 ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeTable: public Ui_TimeTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETABLE_H
