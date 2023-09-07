#include "timetable.h"
#include "ui_timetable.h"

TimeTable::TimeTable(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TimeTable)
{
    ui->setupUi(this);

}

TimeTable::~TimeTable()
{
    delete ui;
}

void TimeTable::show_time_table(int level)
{
    ui->label->setText(QString ("Time table Level: %1").arg(level));
    QStringList daysOfWeek = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    QStringList subjects ;
    if (level==3)
    subjects = {"Advanced Math", "Economics", "Literature", "Computer Science"};
    else if (level == 2)
    subjects = {"French", "Arabic", "english", "japenese"};
    else if (level == 1)
    subjects = {"MATH", "arabic", "french", "physics"};
    ui->tableWidget->setRowCount(daysOfWeek.size());
    ui->tableWidget->setVerticalHeaderLabels(daysOfWeek);
    ui->tableWidget->setColumnCount(subjects.size());
    ui->tableWidget->setHorizontalHeaderLabels(subjects);

    QSqlQuery query;

    if (query.exec(QString("SELECT subject, days, duration FROM subjects_table WHERE level = '%1'").arg(level))) // Adjust the query as needed
    {
            while (query.next()) {

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
