/********************************************************************************
** Form generated from reading UI file 'table.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLE_H
#define UI_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_table
{
public:
    QTableView *tableView;

    void setupUi(QWidget *table)
    {
        if (table->objectName().isEmpty())
            table->setObjectName(QString::fromUtf8("table"));
        table->resize(400, 300);
        tableView = new QTableView(table);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(60, 50, 256, 192));
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setDefaultSectionSize(140);
        tableView->verticalHeader()->setVisible(false);

        retranslateUi(table);

        QMetaObject::connectSlotsByName(table);
    } // setupUi

    void retranslateUi(QWidget *table)
    {
        table->setWindowTitle(QApplication::translate("table", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class table: public Ui_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLE_H
