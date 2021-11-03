#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "notatka.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->listWidgetNotes->addItem(currentFile);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNotatka_triggered()
{
    Notatka notatka;
    notatka.setModal(true);
    notatka.exec();
    //currentFile = "";
}
