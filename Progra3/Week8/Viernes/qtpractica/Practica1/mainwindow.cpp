#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recibedatos.h"
#include "tomadatos.h"
#include <QDebug>
MainWindow::MainWindow(QVector<int>*vect, RecibeDatos* a, TomaDatos* b) :
    QMainWindow(0),
    ui(new Ui::MainWindow)
{
    this->vector = vect;
    this->recibe = a;
    this->toma = b;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setVector(QVector<int>* vect){
    this->vector = vect;
}

QVector<int>* MainWindow::getVector(){
    return vector;
}

RecibeDatos* MainWindow::getRecibe(){
    return recibe;
}

TomaDatos* MainWindow::getToma(){
    return toma;
}

void MainWindow::on_TomaD_clicked()
{
    (*toma).setModal(true);
    (*toma).exec();

}

void MainWindow::on_RecibeD_clicked()
{
    QComboBox *a;
    a = (*recibe).getCB();
    //((*recibe).getCB()).clear();
    (*a).clear();
    for(int i = 0; i< (*vector).size(); i++){
        qDebug()<<  (*vector)[i]<<endl;
        (*a).addItem( (*recibe).toString(i));
        //((*recibe).getCB()).addItem( (*recibe).toString(i));
    }
    (*recibe).setModal(true);
    (*recibe).exec();
}
