#include "time_table.h"

time_table::time_table(QObject *parent)
    : QObject{parent}
{
    QWidget win;
    win.setWindowTitle("Simple Table Widget Example");

    QTableWidget* tab =new QTableWidget(&win);
    tab->setRowCount(5);
    tab->setColumnCount(5);
    tab->setHorizontalHeaderLabels(QStringList() << "Monday" << "Tuesday" << "Wednesday" << "Thursday" << "Friday");
        // Populate the table
    QStringList timetableData = {"Math", "History", "English", "Physics", "Chemistry"};
    for (int row = 0; row < timetableData.size(); ++row) {
        QTableWidgetItem *item = new QTableWidgetItem(timetableData[row]);
        tab->setItem(row, 0, item);
    }

    // Set headers

    // Create a layout and set the table widget as its central widget
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(tab);
    win.setLayout(layout);

    win.show();
}
