#ifndef NOTATKA_H
#define NOTATKA_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class Notatka;
}

class Notatka : public QDialog
{
    Q_OBJECT
    QString fileName;

public:
    explicit Notatka(QWidget *parent = nullptr);
    ~Notatka();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Notatka *ui;
    QString currentFile = "";
};

#endif // NOTATKA_H
