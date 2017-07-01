#include "mainwindow.h"
#include <QApplication>
#include "libethash-cl/ethash_cl_miner.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
