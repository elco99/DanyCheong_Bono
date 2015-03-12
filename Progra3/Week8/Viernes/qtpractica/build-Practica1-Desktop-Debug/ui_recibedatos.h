/********************************************************************************
** Form generated from reading UI file 'recibedatos.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECIBEDATOS_H
#define UI_RECIBEDATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_RecibeDatos
{
public:
    QComboBox *comboNum;
    QPushButton *llenar;

    void setupUi(QDialog *RecibeDatos)
    {
        if (RecibeDatos->objectName().isEmpty())
            RecibeDatos->setObjectName(QStringLiteral("RecibeDatos"));
        RecibeDatos->resize(400, 300);
        comboNum = new QComboBox(RecibeDatos);
        comboNum->setObjectName(QStringLiteral("comboNum"));
        comboNum->setGeometry(QRect(150, 120, 85, 27));
        llenar = new QPushButton(RecibeDatos);
        llenar->setObjectName(QStringLiteral("llenar"));
        llenar->setGeometry(QRect(140, 70, 99, 27));

        retranslateUi(RecibeDatos);

        QMetaObject::connectSlotsByName(RecibeDatos);
    } // setupUi

    void retranslateUi(QDialog *RecibeDatos)
    {
        RecibeDatos->setWindowTitle(QApplication::translate("RecibeDatos", "Dialog", 0));
        llenar->setText(QApplication::translate("RecibeDatos", "Llenar", 0));
    } // retranslateUi

};

namespace Ui {
    class RecibeDatos: public Ui_RecibeDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECIBEDATOS_H
