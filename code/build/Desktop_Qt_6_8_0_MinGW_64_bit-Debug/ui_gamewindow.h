/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QStackedWidget *stackedWidget;
    QWidget *buildPage;
    QWidget *gridLayoutWidget;
    QGridLayout *grid;
    QPushButton *finishButton;
    QPushButton *backToMainMenuButton;
    QLabel *selectBlocksLabel;
    QLabel *selectDisasterLabel;
    QLabel *errorMessageLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QWidget *simulationPage;
    QWidget *gameOverPage;

    void setupUi(QDialog *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName("GameWindow");
        GameWindow->resize(1034, 670);
        GameWindow->setStyleSheet(QString::fromUtf8("QWidget#GameWindow{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));\n"
"}"));
        stackedWidget = new QStackedWidget(GameWindow);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 20, 991, 631));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        buildPage = new QWidget();
        buildPage->setObjectName("buildPage");
        buildPage->setStyleSheet(QString::fromUtf8("QWidget#buildPage{\n"
"	background-image: url(:/img/img/apocalypseBackgroundGameWindow.jpg);\n"
"}"));
        gridLayoutWidget = new QWidget(buildPage);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 20, 631, 591));
        grid = new QGridLayout(gridLayoutWidget);
        grid->setObjectName("grid");
        grid->setContentsMargins(0, 0, 0, 0);
        finishButton = new QPushButton(buildPage);
        finishButton->setObjectName("finishButton");
        finishButton->setGeometry(QRect(670, 510, 311, 101));
        finishButton->setStyleSheet(QString::fromUtf8("QWidget#finishButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 30pt \"Algerian\";\n"
"}\n"
"\n"
"QWidget#finishButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 30pt \"Algerian\";\n"
"}\n"
""));
        backToMainMenuButton = new QPushButton(buildPage);
        backToMainMenuButton->setObjectName("backToMainMenuButton");
        backToMainMenuButton->setGeometry(QRect(670, 10, 311, 51));
        backToMainMenuButton->setStyleSheet(QString::fromUtf8("QWidget#backToMainMenuButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 15pt \"Algerian\";\n"
"}\n"
"\n"
"QWidget#backToMainMenuButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 15pt \"Algerian\";\n"
"}"));
        selectBlocksLabel = new QLabel(buildPage);
        selectBlocksLabel->setObjectName("selectBlocksLabel");
        selectBlocksLabel->setGeometry(QRect(670, 70, 311, 191));
        selectBlocksLabel->setStyleSheet(QString::fromUtf8("QLabel#selectBlocksLabel{\n"
"	background-color: black;\n"
"}"));
        selectBlocksLabel->setScaledContents(true);
        selectDisasterLabel = new QLabel(buildPage);
        selectDisasterLabel->setObjectName("selectDisasterLabel");
        selectDisasterLabel->setGeometry(QRect(670, 320, 311, 181));
        selectDisasterLabel->setStyleSheet(QString::fromUtf8("QLabel#selectDisasterLabel{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));
        errorMessageLabel = new QLabel(buildPage);
        errorMessageLabel->setObjectName("errorMessageLabel");
        errorMessageLabel->setGeometry(QRect(670, 270, 311, 41));
        verticalLayoutWidget = new QWidget(buildPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(680, 80, 291, 171));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(buildPage);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(680, 330, 291, 161));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        stackedWidget->addWidget(buildPage);
        simulationPage = new QWidget();
        simulationPage->setObjectName("simulationPage");
        simulationPage->setStyleSheet(QString::fromUtf8("QWidget#simulationPage{\n"
"	background-color: white;\n"
"}"));
        stackedWidget->addWidget(simulationPage);
        gameOverPage = new QWidget();
        gameOverPage->setObjectName("gameOverPage");
        gameOverPage->setStyleSheet(QString::fromUtf8("QWidget#gameOverPage{\n"
"	background-color: white;\n"
"}"));
        stackedWidget->addWidget(gameOverPage);

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QDialog *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "Dialog", nullptr));
        finishButton->setText(QCoreApplication::translate("GameWindow", "Finish", nullptr));
        backToMainMenuButton->setText(QCoreApplication::translate("GameWindow", "Back to Main Menu", nullptr));
        selectBlocksLabel->setText(QString());
        selectDisasterLabel->setText(QString());
        errorMessageLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
