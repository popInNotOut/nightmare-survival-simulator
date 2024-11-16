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
#include <QtWidgets/QListWidget>
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
    QWidget *highscoresPage;
    QLabel *highscorePageFloodLabel;
    QLabel *highscorePageWildfireLabel;
    QLabel *highscorePageTornadoLabel;
    QPushButton *highscorePageBackToMainMenuButton;
    QLabel *highscoresLabel;
    QLabel *highscorePageFloodValueLabel;
    QLabel *highscorePageWildfireValueLabel;
    QLabel *highscorePageTornadoValueLabel;
    QPushButton *clearHighscoresButton;
    QPushButton *clearRunLogButton;
    QListWidget *runLogListWidget;
    QLabel *runLogLabel;

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
        highscoresPage = new QWidget();
        highscoresPage->setObjectName("highscoresPage");
        highscoresPage->setStyleSheet(QString::fromUtf8("QWidget#highscoresPage{\n"
"	background-image: url(:/img/img/highscoresBackground.jpg);\n"
"}"));
        highscorePageFloodLabel = new QLabel(highscoresPage);
        highscorePageFloodLabel->setObjectName("highscorePageFloodLabel");
        highscorePageFloodLabel->setGeometry(QRect(50, 170, 61, 61));
        highscorePageFloodLabel->setStyleSheet(QString::fromUtf8("QLabel#highscorePageFloodLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        highscorePageFloodLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/flood.jpg")));
        highscorePageFloodLabel->setScaledContents(true);
        highscorePageWildfireLabel = new QLabel(highscoresPage);
        highscorePageWildfireLabel->setObjectName("highscorePageWildfireLabel");
        highscorePageWildfireLabel->setGeometry(QRect(50, 240, 61, 61));
        highscorePageWildfireLabel->setStyleSheet(QString::fromUtf8("QLabel#highscorePageWildfireLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        highscorePageWildfireLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/wildfire.jpg")));
        highscorePageWildfireLabel->setScaledContents(true);
        highscorePageTornadoLabel = new QLabel(highscoresPage);
        highscorePageTornadoLabel->setObjectName("highscorePageTornadoLabel");
        highscorePageTornadoLabel->setGeometry(QRect(50, 310, 61, 61));
        highscorePageTornadoLabel->setStyleSheet(QString::fromUtf8("QLabel#highscorePageTornadoLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"}"));
        highscorePageTornadoLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/tornado.jpg")));
        highscorePageTornadoLabel->setScaledContents(true);
        highscorePageBackToMainMenuButton = new QPushButton(highscoresPage);
        highscorePageBackToMainMenuButton->setObjectName("highscorePageBackToMainMenuButton");
        highscorePageBackToMainMenuButton->setGeometry(QRect(580, 20, 201, 51));
        highscorePageBackToMainMenuButton->setStyleSheet(QString::fromUtf8("QWidget#highscorePageBackToMainMenuButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 11pt \"Algerian\";\n"
"}\n"
"\n"
"QWidget#highscorePageBackToMainMenuButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 11pt \"Algerian\";\n"
"}"));
        highscoresLabel = new QLabel(highscoresPage);
        highscoresLabel->setObjectName("highscoresLabel");
        highscoresLabel->setGeometry(QRect(50, 100, 441, 61));
        highscoresLabel->setStyleSheet(QString::fromUtf8("QLabel#highscoresLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"	background-color: white;\n"
"	font: 9pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        highscorePageFloodValueLabel = new QLabel(highscoresPage);
        highscorePageFloodValueLabel->setObjectName("highscorePageFloodValueLabel");
        highscorePageFloodValueLabel->setGeometry(QRect(120, 180, 371, 41));
        highscorePageFloodValueLabel->setStyleSheet(QString::fromUtf8("QLabel#highscorePageFloodValueLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	background-color: white;\n"
"	font: 9pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        highscorePageWildfireValueLabel = new QLabel(highscoresPage);
        highscorePageWildfireValueLabel->setObjectName("highscorePageWildfireValueLabel");
        highscorePageWildfireValueLabel->setGeometry(QRect(120, 250, 371, 41));
        highscorePageWildfireValueLabel->setStyleSheet(QString::fromUtf8("QLabel#highscorePageWildfireValueLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	background-color: white;\n"
"	font: 9pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        highscorePageTornadoValueLabel = new QLabel(highscoresPage);
        highscorePageTornadoValueLabel->setObjectName("highscorePageTornadoValueLabel");
        highscorePageTornadoValueLabel->setGeometry(QRect(120, 320, 371, 41));
        highscorePageTornadoValueLabel->setStyleSheet(QString::fromUtf8("QLabel#highscorePageTornadoValueLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 0);\n"
"	background-color: white;\n"
"	font: 9pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        clearHighscoresButton = new QPushButton(highscoresPage);
        clearHighscoresButton->setObjectName("clearHighscoresButton");
        clearHighscoresButton->setGeometry(QRect(50, 420, 191, 51));
        clearHighscoresButton->setStyleSheet(QString::fromUtf8("QWidget#clearHighscoresButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"}\n"
"\n"
"QWidget#clearHighscoresButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"}"));
        clearRunLogButton = new QPushButton(highscoresPage);
        clearRunLogButton->setObjectName("clearRunLogButton");
        clearRunLogButton->setGeometry(QRect(50, 480, 191, 51));
        clearRunLogButton->setStyleSheet(QString::fromUtf8("QWidget#clearRunLogButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"}\n"
"\n"
"QWidget#clearRunLogButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"}"));
        runLogListWidget = new QListWidget(highscoresPage);
        runLogListWidget->setObjectName("runLogListWidget");
        runLogListWidget->setGeometry(QRect(520, 180, 261, 181));
        runLogLabel = new QLabel(highscoresPage);
        runLogLabel->setObjectName("runLogLabel");
        runLogLabel->setGeometry(QRect(520, 110, 261, 61));
        runLogLabel->setStyleSheet(QString::fromUtf8("QLabel#runLogLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 178, 102, 255), stop:0.55 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"	background-color: white;\n"
"	font: 9pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        stackedWidget->addWidget(highscoresPage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        playGameButton->setText(QCoreApplication::translate("MainWindow", "Play Game", nullptr));
        tutorialButton->setText(QCoreApplication::translate("MainWindow", "Tutorial", nullptr));
        highscoresButton->setText(QCoreApplication::translate("MainWindow", "Highscores", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "End of World Survival Simulator", nullptr));
        highscorePageFloodLabel->setText(QString());
        highscorePageWildfireLabel->setText(QString());
        highscorePageTornadoLabel->setText(QString());
        highscorePageBackToMainMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Main Menu", nullptr));
        highscoresLabel->setText(QCoreApplication::translate("MainWindow", "Highscores (max survival time in seconds)", nullptr));
        highscorePageFloodValueLabel->setText(QString());
        highscorePageWildfireValueLabel->setText(QString());
        highscorePageTornadoValueLabel->setText(QString());
        clearHighscoresButton->setText(QCoreApplication::translate("MainWindow", "Clear Highscores", nullptr));
        clearRunLogButton->setText(QCoreApplication::translate("MainWindow", "Clear Run Log", nullptr));
        runLogLabel->setText(QCoreApplication::translate("MainWindow", "Run Log", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
