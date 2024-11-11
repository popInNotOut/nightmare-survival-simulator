/********************************************************************************
** Form generated from reading UI file 'buildingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUILDINGWINDOW_H
#define UI_BUILDINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_BuildingWindow
{
public:

    void setupUi(QDialog *BuildingWindow)
    {
        if (BuildingWindow->objectName().isEmpty())
            BuildingWindow->setObjectName("BuildingWindow");
        BuildingWindow->resize(1209, 604);

        retranslateUi(BuildingWindow);

        QMetaObject::connectSlotsByName(BuildingWindow);
    } // setupUi

    void retranslateUi(QDialog *BuildingWindow)
    {
        BuildingWindow->setWindowTitle(QCoreApplication::translate("BuildingWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuildingWindow: public Ui_BuildingWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUILDINGWINDOW_H
