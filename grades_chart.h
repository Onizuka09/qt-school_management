#ifndef GRADES_CHART_H
#define GRADES_CHART_H

#include <QObject>
#include<QtCharts>
#include"Sql_con.h"
class Grades_chart : public QObject
{
    Q_OBJECT
public:
    explicit Grades_chart(QObject *parent = nullptr,SQL_con* db=nullptr);
   QChartView* Create_chart();
    QList<QStringList > fetch_values();
signals:

   private:
    QBarSeries *series;
       QChart *chart ;
    QChartView *chartView;
    SQL_con* mysql_db;
};

#endif // GRADES_CHART_H
