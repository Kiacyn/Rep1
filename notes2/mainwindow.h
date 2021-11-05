#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QDialog>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QListWidget>
#include <QFileSystemModel>
#include <QDir>
#include <QTreeView>
#include <QtCore>
#include <QSortFilterProxyModel>
#include <QtGui>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QString File;


public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString fileName;


private slots:
    void on_actionNotatka_triggered();

    void on_actionPlan_triggered();

    void on_actionLista_triggered();

private:
    Ui::MainWindow *ui;
    //QFileSystemModel *filemodel;

};
#endif // MAINWINDOW_H
