/********************************************************************************
** Form generated from reading UI file 'tomadatos.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOMADATOS_H
#define UI_TOMADATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TomaDatos
{
public:
    QPushButton *button_pasar;
    QSpinBox *num;

    void setupUi(QDialog *TomaDatos)
    {
        if (TomaDatos->objectName().isEmpty())
            TomaDatos->setObjectName(QStringLiteral("TomaDatos"));
        TomaDatos->resize(400, 300);
        button_pasar = new QPushButton(TomaDatos);
        button_pasar->setObjectName(QStringLiteral("button_pasar"));
        button_pasar->setGeometry(QRect(150, 160, 99, 27));
        num = new QSpinBox(TomaDatos);
        num->setObjectName(QStringLiteral("num"));
        num->setGeometry(QRect(180, 100, 48, 27));

        retranslateUi(TomaDatos);

        QMetaObject::connectSlotsByName(TomaDatos);
    } // setupUi

    void retranslateUi(QDialog *TomaDatos)
    {
        TomaDatos->setWindowTitle(QApplication::translate("TomaDatos", "Dialog", 0));
        button_pasar->setText(QApplication::translate("TomaDatos", "Pasar", 0));
    } // retranslateUi

};

namespace Ui {
    class TomaDatos: public Ui_TomaDatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOMADATOS_H
