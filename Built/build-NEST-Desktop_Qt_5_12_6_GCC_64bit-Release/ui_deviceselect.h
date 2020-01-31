/********************************************************************************
** Form generated from reading UI file 'deviceselect.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESELECT_H
#define UI_DEVICESELECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_DeviceSelect
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DeviceSelect)
    {
        if (DeviceSelect->objectName().isEmpty())
            DeviceSelect->setObjectName(QString::fromUtf8("DeviceSelect"));
        DeviceSelect->resize(240, 320);
        buttonBox = new QDialogButtonBox(DeviceSelect);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 270, 221, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(DeviceSelect);
        QObject::connect(buttonBox, SIGNAL(accepted()), DeviceSelect, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DeviceSelect, SLOT(reject()));

        QMetaObject::connectSlotsByName(DeviceSelect);
    } // setupUi

    void retranslateUi(QDialog *DeviceSelect)
    {
        DeviceSelect->setWindowTitle(QApplication::translate("DeviceSelect", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceSelect: public Ui_DeviceSelect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESELECT_H
