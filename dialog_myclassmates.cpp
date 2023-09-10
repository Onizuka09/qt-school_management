#include "dialog_myclassmates.h"
#include "ui_dialog_myclassmates.h"

Dialog_myClassmates::Dialog_myClassmates(QWidget *parent,SQL_con* db) :
    QDialog(parent),
    ui(new Ui::Dialog_myClassmates),my_db(db)
{
    ui->setupUi(this);
//    bool sata =show_my_classmates();
//    QStringList list = {"name","surname","age","grade"} ;
    ui->filter->addItems({"name","surname","age","grade"});
}

Dialog_myClassmates::~Dialog_myClassmates()
{
    delete ui;
//    delete model; // Clean up the model in case of an error
//    model = nullptr; // Set model to nullptr to indicate an error

//delete qry;
}
void Dialog_myClassmates::applyFilter()
{
    // Get the selected column and filter text
    QString selectedColumn = ui->filter->currentText();
    QString filterText = ui->filter_input->text();

    // Set the filter on the proxy model
    if (proxyModel)
    {
        proxyModel->setFilterKeyColumn(md->record().indexOf(selectedColumn));
        proxyModel->setFilterFixedString(filterText);
    }
}


bool Dialog_myClassmates::show_my_classmates(int level)
{

    ui->label->setText("My classmates Level: "+QString::number(level));
     md = my_db->load_all_table_data("",QString("select name,surname,age,grade from student where class='%1'").arg(level));
    if (md != nullptr)
    {
        proxyModel = new QSortFilterProxyModel(this);
        proxyModel->setSourceModel(md);
            ui->tableView->setSortingEnabled(true);
            ui->tableView->setModel(proxyModel);
            connect(ui->filter, &QComboBox::currentTextChanged, this, &Dialog_myClassmates::applyFilter);
            connect(ui->filter_input, &QLineEdit::textChanged, this, &Dialog_myClassmates::on_filter_input_textChanged);
//        ui->tableView->setModel(md);
        qDebug() << md->rowCount();
    }
    else
    {
        qDebug() << "Error loading data from the database.";
    }
        return true ;
}


void Dialog_myClassmates::on_filter_input_textChanged(const QString &arg1)
{
//        appllyFilter();
        applyFilter();
}

