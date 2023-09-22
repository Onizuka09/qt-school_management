#include "Headers/dialog_std_teacher_info.h"
#include "build/ui_headers/ui_dialog_std_teacher_info.h"

Dialog_std_teacher_info::Dialog_std_teacher_info(QWidget *parent,SQL_con* db) :
    QDialog(parent),
    ui(new Ui::Dialog_std_teacher_info), my_db(db)
{
    ui->setupUi(this);
    ui->frame->show();
    QStringList list = {"name","lastname","subject"} ;
    ui->filter->addItems(list);
}

void Dialog_std_teacher_info::applyFilter()
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

Dialog_std_teacher_info::~Dialog_std_teacher_info()
{
    delete ui;
}

bool Dialog_std_teacher_info::show_my_teachers(int level)
{

    ui->label->setText("My teachers -- Level: "+QString::number(level));
         md = my_db->load_all_table_data("",QString("SELECT name,surname,subject FROM teacher WHERE FIND_IN_SET('%1', levels) > 0").arg(level));
        if (md != nullptr)
        {
             proxyModel = new QSortFilterProxyModel(this);
            proxyModel->setSourceModel(md);
            ui->tableView->setSortingEnabled(true);
            ui->tableView->setModel(proxyModel);
            connect(ui->filter, &QComboBox::currentTextChanged, this, &Dialog_std_teacher_info::applyFilter);
            connect(ui->filter_input, &QLineEdit::textChanged, this, &Dialog_std_teacher_info::applyFilter);
            qDebug() << md->rowCount();
        }
        else
        {
            qDebug() << "Error loading data from the database.";
        }
        return true ;

}
void Dialog_std_teacher_info::on_filter_input_textChanged(const QString &arg1)
{
        //        appllyFilter();
        applyFilter();
}
