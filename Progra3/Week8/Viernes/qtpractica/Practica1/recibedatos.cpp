#include "recibedatos.h"
#include "ui_recibedatos.h"
#include <QVector>
#include <QDebug>
#include <QString>
RecibeDatos::RecibeDatos(QVector<int>* vect) :
    QDialog(0),
    ui(new Ui::RecibeDatos)
{
    vector = vect;
    ui->setupUi(this);
}

RecibeDatos::~RecibeDatos()
{
    delete ui;
}

void RecibeDatos::setVector(QVector<int>* vect){
    this->vector = vect;
}

QVector<int>* RecibeDatos::getVector(){
    return vector;
}

QString RecibeDatos::toString(int i){
    QString a = QString::number((*vector)[i]);
    return a;

}
QComboBox* RecibeDatos::getCB(){
    return (ui->comboNum);
}

void RecibeDatos::on_llenar_clicked()
{
   /* ui->comboNum->clear();
    for(int i = 0; i< (*vector).size(); i++){
        qDebug()<<  (*vector)[i]<<endl;

        ui->comboNum->addItem( toString(i));
    }
    */
}
