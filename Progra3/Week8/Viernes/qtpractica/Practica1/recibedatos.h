#ifndef RECIBEDATOS_H
#define RECIBEDATOS_H

#include <QDialog>
#include <QVector>
#include <QComboBox>
#include <QWidget>
namespace Ui {
class RecibeDatos;
}

class RecibeDatos : public QDialog
{
    Q_OBJECT
    QVector<int>* vector;

public:
    RecibeDatos(QVector<int>*);
    void setVector(QVector<int>*);
    QVector<int>* getVector();
    QString toString(int);
    ~RecibeDatos();
    QComboBox* getCB();
private slots:
    void on_llenar_clicked();

private:
    Ui::RecibeDatos *ui;
};

#endif // RECIBEDATOS_H
