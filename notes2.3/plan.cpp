#include "plan.h"
#include "ui_plan.h"

Plan::Plan(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Plan)
{
    ui->setupUi(this);
}

Plan::~Plan()
{
    delete ui;
}

void Plan::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    if(str == "")
    return;
    QListWidgetItem *item = new QListWidgetItem;

    item->setText(QString(str));
    item->setCheckState(Qt::Unchecked);

    ui->listWidget->addItem(item);
}


void Plan::on_pushButton_2_clicked()
{
    if(rmSelected != -1)
    {
   QListWidgetItem *it = ui->listWidget->takeItem(rmSelected);
   delete it;
   ui->listWidget->setCurrentRow(-1);

    }
}




void Plan::on_listWidget_currentRowChanged(int currentRow)
{
     rmSelected = currentRow;
}

