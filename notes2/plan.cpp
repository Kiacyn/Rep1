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
