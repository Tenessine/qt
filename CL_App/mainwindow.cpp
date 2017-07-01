#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "libethash-cl/ethash_cl_miner.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}

MainWindow::~MainWindow()
{
    delete ui;
}
