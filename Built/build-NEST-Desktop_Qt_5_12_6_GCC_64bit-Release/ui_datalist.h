/********************************************************************************
** Form generated from reading UI file 'datalist.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATALIST_H
#define UI_DATALIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataList
{
public:

    void setupUi(QWidget *DataList)
    {
        if (DataList->objectName().isEmpty())
            DataList->setObjectName(QString::fromUtf8("DataList"));
        DataList->resize(400, 296);

        retranslateUi(DataList);

        QMetaObject::connectSlotsByName(DataList);
    } // setupUi

    void retranslateUi(QWidget *DataList)
    {
        DataList->setWindowTitle(QApplication::translate("DataList", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataList: public Ui_DataList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATALIST_H
