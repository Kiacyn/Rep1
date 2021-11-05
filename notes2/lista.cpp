#include "lista.h"
#include "ui_lista.h"

Lista::Lista(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lista)
{
    ui->setupUi(this);
   // QString str;
   // QListWidgetItem *i = new QListWidgetItem(str);
   // ui->listWidget->addItem(i);
   // for(;;)
    //{
       // QString text;// = ui -> listWidget -> toPlainText();
   //  qint64 i=1;
    // QListWidgetItem *item = new QListWidgetItem;
     //QTextStream in(text);
   //  item->setText((QString::number(i)) + text);
   // ui->listWidget->addItem(QString::number(i) + "");

   // }
}

Lista::~Lista()
{
    delete ui;
}

void Lista::on_pushButton_clicked()
{
    QString str = ui->lineEdit->text();
    if(str == "")
    return;
    QListWidgetItem *item = new QListWidgetItem;

    item->setText(QString(str));
    item->setCheckState(Qt::Unchecked);

    ui->listWidget->addItem(item);

    //ui->item->listWidget->addItem(str);

}


void Lista::on_pushButton_2_clicked()
{
    if(rmSelected != -1)
    {
   QListWidgetItem *it = ui->listWidget->takeItem(rmSelected);
   delete it;
   ui->listWidget->setCurrentRow(-1);

    }

}


void Lista::on_listWidget_currentRowChanged(int currentRow)
{
    rmSelected = currentRow;
}


//QString Lista::on_buttonBox_accepted()
//{
  //  QString planName = QFileDialog::getSaveFileName(this);
   // QFile file(planName);
   // if(!file.open(QFile::WriteOnly | QFile::Text))
  //  {
   //     QMessageBox::warning(this, "Uwaga","Nie mozna zapisac:" + file.errorString());
        //return 0;
  //  }
    //currentFile = planName;

  //  QTextStream out(&file);
   // QString text = ui->listWidget->toPlainText();
  //  out << text;
   // file.close();
   // return planName;
//}

