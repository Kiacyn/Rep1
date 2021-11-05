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

private:
    Ui::Plan *ui;
};

#endif // PLAN_H
