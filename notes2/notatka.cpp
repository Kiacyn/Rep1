#include "notatka.h"
#include "ui_notatka.h"

Notatka::Notatka(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Notatka)
{
    ui->setupUi(this);
}

Notatka::~Notatka()
{
    delete ui;

}

QString Notatka::on_buttonBox_accepted()
{

    QString noteName = QFileDialog::getSaveFileName(this);
    QFile file(noteName);
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Uwaga","Nie mozna zapisac:" + file.errorString());
        return 0;
    }
    //currentFile = noteName;

    QTextStream out(&file);
    QString text = ui->textEdit->toPlainText();
    out << text;
    file.close();
    return noteName;


}
