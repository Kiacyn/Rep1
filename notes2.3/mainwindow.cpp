#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "notatka.h"
#include "plan.h"
#include "lista.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //File = Notatka.on_buttonBox_accepted();
   // ui->listWidgetNotes->addItem(new Ui::Notatka);

      // File = notatka.on_buttonBox_accepted();


    //QDirModelObj = new QDirModel();
       // loadDirecory();

      //  QModelIndex ModelIndex = QDirModelObj->index("C:/");

       // ui->treeView->expand(ModelIndex);
     //   ui->treeView->scrollTo(ModelIndex);
      //  ui->treeView->setCurrentIndex(ModelIndex);
      //  ui->treeView->resizeColumnToContents(0);
       // timer = new QTimer;
      //  connect(timer, SIGNAL(timeout()), this, SLOT(loadDirecory()));
       // timer->start(10000); // Update every 10 sec



    //QDir().mkdir("MyFolder");
   // QString sPath = "C:\\Users\\Przybylson\\Documents\\build-notes2-Desktop_Qt_6_2_0_MinGW_64_bit-Debug\\MyFolder";

    //QFileSystemModel *model = new QFileSystemModel;
   // model->setRootPath((QDir::currentPath()));
   // QTreeView *listN = new QTreeView();
   // listN->setModel(model);

    //filemodel = new QFileSystemModel(this);
   // filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
   // filemodel->setRootPath(sPath);
//
   // ui->listViewNotes->setModel(filemodel);

    //ui->listWidgetNotes->addItem(currentFile);
    //ui->listWidgetNotes->addItem("krew");

}



void MainWindow::on_actionNotatka_triggered()
{
    Notatka notatka;
    notatka.setModal(true);
    notatka.exec();
    if(!notatka.on_buttonBox_accepted().isNull())
    {
        MainWindow::fileName = notatka.on_buttonBox_accepted();
        fileName = notatka.on_buttonBox_accepted();
        ui->listWidgetNotes->addItem(fileName);
       // ui->listViewNotes->addItem(notatka.on_buttonBox_accepted());
    }




    //Ui::Notatka *notatka = new Ui::Notatka();


}

void MainWindow::on_actionPlan_triggered()
{
    Plan plan;
    plan.setModal(true);
    plan.exec();
}


void MainWindow::on_actionLista_triggered()
{
    Lista lista;
    lista.setModal(true);
    lista.exec();
}

MainWindow::~MainWindow()
{
    delete ui;
}
