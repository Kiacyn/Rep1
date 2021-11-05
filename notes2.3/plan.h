#ifndef PLAN_H
#define PLAN_H

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>

namespace Ui {
class Plan;
}

class Plan : public QDialog
{
    Q_OBJECT

public:
    explicit Plan(QWidget *parent = nullptr);
    ~Plan();

private slots:
    void on_buttonBox_accepted();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



    void on_listWidget_currentRowChanged(int currentRow);

private:
    Ui::Plan *ui;
    int rmSelected = -1;
};

#endif // PLAN_H
