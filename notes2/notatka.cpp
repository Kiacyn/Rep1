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

void Notatka::on_buttonBox_accepted()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Zapisz jako:");
    QFile file(fileName);
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, "Uwaga","Nie mozna zapisac:" + file.errorString());
        return;
    }
    currentFile = fileName;
    QTextStream out(&file);
    QString text = ui ->textEdit -> toPlainText();
    out << text;
    file.close();
}
