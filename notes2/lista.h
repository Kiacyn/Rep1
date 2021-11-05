#ifndef LISTA_H
#define LISTA_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QListWidgetItem>

namespace Ui {
class Lista;
}

class Lista : public QDialog
{
    Q_OBJECT

public:
    explicit Lista(QWidget *parent = nullptr);
    ~Lista();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_listWidget_currentRowChanged(int currentRow);

   // QString on_buttonBox_accepted();

private:
    Ui::Lista *ui;

    int rmSelected = -1;
};

#endif // LISTA_H
