#ifndef GRADES_CHART_H
#define GRADES_CHART_H

#include <QObject>
#include<QtCharts>
#include"Headers/Sql_con.h"
class Grades_chart : public QObject
{
    Q_OBJECT
public:
    explicit Grades_chart(QObject *parent = nullptr,SQL_con* db=nullptr);
   QChartView* Create_chart(QList<QStringList >items );
    QList<QStringList > fetch_values();
   void update_values(QList<QStringList >items);
signals:

   private:
//    QChartView *chartView;
    SQL_con* mysql_db;
public:
    QChart *chart;
    QBarSeries*  series;
    QBarCategoryAxis *axisX ;
    QValueAxis* axisY;
    QChartView *chartView ;
    QStringList categories;
    QBarSet *set0;
    QBarSet *set1;
    QBarSet *set2;
};

#endif // GRADES_CHART_H
