/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *mainMenuPage;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *playGameButton;
    QVBoxLayout *verticalLayout_3;
    QPushButton *tutorialButton;
    QPushButton *highscoresButton;
    QLabel *titleLabel;
    QWidget *tutorialPage;
    QWidget *analyticsPage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 801, 601));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        mainMenuPage = new QWidget();
        mainMenuPage->setObjectName("mainMenuPage");
        mainMenuPage->setAutoFillBackground(false);
        mainMenuPage->setStyleSheet(QString::fromUtf8("QWidget#mainMenuPage{\n"
"	background-image: url(:/img/img/apocalypseBackground.jpg);\n"
"}"));
        horizontalLayoutWidget = new QWidget(mainMenuPage);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(240, 470, 301, 131));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        playGameButton = new QPushButton(horizontalLayoutWidget);
        playGameButton->setObjectName("playGameButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playGameButton->sizePolicy().hasHeightForWidth());
        playGameButton->setSizePolicy(sizePolicy);
        playGameButton->setAutoFillBackground(false);
        playGameButton->setStyleSheet(QString::fromUtf8("QWidget#playGameButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: green;\n"
"	background-color: rgb(170, 255, 127);\n"
"	font: 9px \"8514oem\";\n"
"}\n"
"\n"
"QWidget#playGameButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: green;\n"
"	background-color: rgb(0, 255, 0);\n"
"	font: 9px \"8514oem\";\n"
"}\n"
""));

        horizontalLayout_3->addWidget(playGameButton);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        tutorialButton = new QPushButton(horizontalLayoutWidget);
        tutorialButton->setObjectName("tutorialButton");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tutorialButton->sizePolicy().hasHeightForWidth());
        tutorialButton->setSizePolicy(sizePolicy1);
        tutorialButton->setStyleSheet(QString::fromUtf8("QWidget#tutorialButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: red;\n"
"	background-color: rgb(255, 170, 127);\n"
"	font: 9px \"8514oem\";\n"
"}\n"
"\n"
"QWidget#tutorialButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: red;\n"
"	background-color: rgb(255, 0, 127);\n"
"	font: 9px \"8514oem\";\n"
"}"));

        verticalLayout_3->addWidget(tutorialButton);

        highscoresButton = new QPushButton(horizontalLayoutWidget);
        highscoresButton->setObjectName("highscoresButton");
        sizePolicy1.setHeightForWidth(highscoresButton->sizePolicy().hasHeightForWidth());
        highscoresButton->setSizePolicy(sizePolicy1);
        highscoresButton->setStyleSheet(QString::fromUtf8("QWidget#highscoresButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: blue;\n"
"	background-color: rgb(170, 170, 255);\n"
"	font: 9px \"8514oem\";\n"
"}\n"
"\n"
"QWidget#highscoresButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: blue;\n"
"	background-color: rgb(0, 85, 255);\n"
"	font: 9px \"8514oem\";\n"
"}"));

        verticalLayout_3->addWidget(highscoresButton);


        horizontalLayout_3->addLayout(verticalLayout_3);

        titleLabel = new QLabel(mainMenuPage);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(30, 30, 481, 81));
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(230, 230, 230);\n"
"	font: 18pt \"Snap ITC\";\n"
"}"));
        stackedWidget->addWidget(mainMenuPage);
        tutorialPage = new QWidget();
        tutorialPage->setObjectName("tutorialPage");
        stackedWidget->addWidget(tutorialPage);
        analyticsPage = new QWidget();
        analyticsPage->setObjectName("analyticsPage");
        stackedWidget->addWidget(analyticsPage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        playGameButton->setText(QCoreApplication::translate("MainWindow", "Play Game", nullptr));
        tutorialButton->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        highscoresButton->setText(QCoreApplication::translate("MainWindow", "Highscores", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "End of World Survival Simulator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
