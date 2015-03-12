#include "tomadatos.h"
#include "ui_tomadatos.h"
#include <QDebug>
TomaDatos::TomaDatos(QVector<int>* vect) :
    QDialog(0),
    ui(new Ui::TomaDatos)
{
    vector = vect;
    ui->setupUi(this);
}

TomaDatos::~TomaDatos()
{
    delete ui;
}

void TomaDatos::setVector(QVector<int>* vect){
    this->vector = vect;
}

QVector<int>* TomaDatos::getVector(){
    return vector;
}


void TomaDatos::on_button_pasar_clicked()
{
    (*vector).push_back(ui->num->value());
    for(int i = 0; i< (*vector).size(); i++){
        qDebug()<< (*vector)[i]<<endl;
    }

}
