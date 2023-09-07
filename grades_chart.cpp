#include "grades_chart.h"
Grades_chart::Grades_chart(QObject *parent,SQL_con* db)
    : QObject(parent),mysql_db(db)
{

}

QChartView *Grades_chart::Create_chart()


{
    QList<QStringList >items =fetch_values();
    QBarSet *set0 = new QBarSet("Level: 1");
    QBarSet *set1 = new QBarSet("Level: 2");
    QBarSet *set2 = new QBarSet("Level: 3");
    qDebug()<<items[0];
    qDebug()<<items[1];
    qDebug()<<items[2];

    qDebug()<<items[0][0]<<items[0][1]<<items[0][2];



    *set0 << items[0][2].toDouble()<<0<<0 ;
    *set1 <<0<< items[1][2].toDouble()<<0;
    *set2 <<0<<0<< items[2][2].toDouble();


     series = new QBarSeries();
    series->append(set0);
    series->append(set1);
    series->append(set2);
    //    series->append(set3);
    //    series->append(set4);

    chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Best Students");
    chart->setAnimationOptions(QChart::SeriesAnimations);


    QStringList categories;
    categories << QString("%1 %2").arg(items[0][0]).arg(items[0][1])<<QString("%1 %2").arg(items[1][0]).arg(items[1][1])<< QString("%1 %2").arg(items[2][0]).arg(items[2][1]);
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    //    chart->createDefaultAxes();
    chart->addAxis(axisX,Qt::AlignBottom);
    series->attachAxis(axisX);

    auto axisY = new QValueAxis;
    axisY->setRange(0,20);
    chart->addAxis(axisY,Qt::AlignLeft);
    series->attachAxis(axisY);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);


    chartView = new QChartView(chart);
    return chartView ;

}

QList<QStringList> Grades_chart::fetch_values()
{    QList<QStringList > big_list;
    QStringList  grades_list;

    grades_list = mysql_db->select_user("SELECT name, surname, grade FROM student WHERE class = '1' AND grade = (SELECT MAX(grade) FROM student WHERE class = '1')");
    big_list.append(grades_list );

    grades_list = mysql_db->select_user("SELECT name, surname, grade FROM student WHERE class = '2' AND grade = (SELECT MAX(grade) FROM student WHERE class = '2')");
    big_list.append(grades_list );
    grades_list = mysql_db->select_user("SELECT name, surname, grade FROM student WHERE class = '3' AND grade = (SELECT MAX(grade) FROM student WHERE class = '3')");
    big_list.append(grades_list);
    qDebug()<< big_list;
    return big_list;
}
