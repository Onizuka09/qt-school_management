#ifndef TIME_TABLE_H
#define TIME_TABLE_H

#include <QObject>
#include <QTableWidget>
#include <QStringList>
#include <QTableWidgetItem>
#include <QDebug>
#include <QWidget>
#include<QHBoxLayout>
class time_table : public QObject
{
    Q_OBJECT
public:
    explicit time_table(QObject *parent = nullptr);
public :


signals:

};

#endif // TIME_TABLE_H
