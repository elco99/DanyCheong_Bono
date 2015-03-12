#include "mainwindow.h"
#include <QApplication>
#include "recibedatos.h"
#include "tomadatos.h"
#include <QVector>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    
    QVector<int>vector;
    RecibeDatos recibe(& vector);
    TomaDatos toma(& vector);
    MainWindow w(& vector, &recibe,&toma);
    w.show();

    return a.exec();
}
