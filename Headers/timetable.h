#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <QDialog>
#include<Sql_con.h>
namespace Ui {
class TimeTable;
}

class TimeTable : public QDialog
{
    Q_OBJECT

public:
    explicit TimeTable(QWidget *parent = nullptr);
    ~TimeTable();
    void show_time_table(int level);

private:
    Ui::TimeTable *ui;

};

#endif // TIMETABLE_H
