#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "recibedatos.h"
#include "tomadatos.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QVector<int>* vector;
    RecibeDatos *recibe;
    TomaDatos *toma;
public:
    MainWindow(QVector<int>* = 0, RecibeDatos* = NULL, TomaDatos* = NULL);
    void setVector(QVector<int>*);
    QVector<int>* getVector();
    RecibeDatos* getRecibe();
    TomaDatos* getToma();
    ~MainWindow();

private slots:
    void on_TomaD_clicked();

    void on_RecibeD_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
