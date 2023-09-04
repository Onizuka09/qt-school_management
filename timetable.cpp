#include "timetable.h"
#include "ui_timetable.h"

TimeTable::TimeTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TimeTable)
{
    ui->setupUi(this);
    this->show_time_table();
}

TimeTable::~TimeTable()
{
    delete ui;
}

void TimeTable::show_time_table()
{
    QStringList daysOfWeek = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    QStringList subjects = {"Advanced Math", "Economics", "Literature", "Computer Science"};
    ui->tableWidget->setRowCount(daysOfWeek.size());
    ui->tableWidget->setVerticalHeaderLabels(daysOfWeek);
    ui->tableWidget->setColumnCount(subjects.size());
    ui->tableWidget->setHorizontalHeaderLabels(subjects);

    QSqlQuery query;

    if (query.exec("SELECT subject, days, duration FROM subjects_table WHERE level = 3")) // Adjust the query as needed
    {
        // Populate the timetable grid based on the SQL query results
        while (query.next()) {
            qDebug()<<"aaaaa";
            QString subjectName = query.value(0).toString();
            QString days = query.value(1).toString();
            int duration = query.value(2).toInt();

            // Split the 'days' string to get individual days
            QStringList daysList = days.split(",");
            qDebug()<<daysList;
            for (const QString &day : daysList) {
                int row = daysOfWeek.indexOf(day.trimmed());
                int col = subjects.indexOf(subjectName);
                qDebug()<<row<<col;
                if (row != -1 && col != -1) {
                    QString cellValue = QString::number(duration) + "(min)";
                    qDebug()<<cellValue ;
                    ui->tableWidget->setItem(row, col, new QTableWidgetItem(cellValue));
                }
            }
        }
    }
    else {
        qDebug()<<query.lastError().text();
    }
}
