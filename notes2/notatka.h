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
    //QString currentFile = "";

public:
    explicit Notatka(QWidget *parent = nullptr);
    QString currentFile;
    ~Notatka();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::Notatka *ui;

    friend class MainWindow;
};

#endif // NOTATKA_H
