#ifndef TOMADATOS_H
#define TOMADATOS_H

#include <QDialog>

namespace Ui {
class TomaDatos;
}

class TomaDatos : public QDialog
{
    Q_OBJECT
    QVector<int>* vector;
public:
    TomaDatos(QVector<int>*);
    void setVector(QVector<int>*);
    QVector<int>* getVector();
    ~TomaDatos();

private slots:
    void on_button_pasar_clicked();

private:
    Ui::TomaDatos *ui;
};

#endif // TOMADATOS_H
