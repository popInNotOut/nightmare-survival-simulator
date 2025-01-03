/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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
    QLabel *musicLabel;
    QCheckBox *musicCheckBox;
    QWidget *tutorialPage;
    QPushButton *tutorialPageBackToMainMenuButton;
    QLabel *arrowKeysImageLabel;
    QLabel *arrowKeysDescriptionLabel;
    QLabel *playerLabel;
    QLabel *floodLabel;
    QLabel *playerImageLabel;
    QLabel *robberLabel;
    QLabel *robberImageLabel;
    QLabel *terroristImageLabel;
    QLabel *terroristLabel;
    QLabel *floodImageLabel;
    QLabel *wildfireLabel;
    QLabel *wildfireImageLabel;
    QLabel *tornadoLabel;
    QLabel *tornadoImageLabel;
    QLabel *playerDescriptionLabel;
    QLabel *robberDescriptionLabel;
    QLabel *moveDescriptionLabel;
    QLabel *terroristDescriptionLabel;
    QLabel *floodDescriptionLabel;
    QLabel *rigorousTestingDescriptionLabel;
    QLabel *wildfireDescriptionLabel;
    QLabel *tornadoDescriptionLabel;
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
"	font: 700 14pt \"Bahnschrift\";\n"
"	color: black;\n"
"}\n"
"\n"
"QWidget#playGameButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: green;\n"
"	background-color: rgb(0, 255, 0);\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	color: black;\n"
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
"	font: 700 14pt \"Bahnschrift\";\n"
"	color: black;\n"
"}\n"
"\n"
"QWidget#tutorialButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: red;\n"
"	background-color: rgb(255, 0, 127);\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	color: black;\n"
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
"	font: 700 14pt \"Bahnschrift\";\n"
"	color: black;\n"
"}\n"
"\n"
"QWidget#highscoresButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: blue;\n"
"	background-color: rgb(0, 85, 255);\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	color: black;\n"
"}"));

        verticalLayout_3->addWidget(highscoresButton);


        horizontalLayout_3->addLayout(verticalLayout_3);

        titleLabel = new QLabel(mainMenuPage);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setGeometry(QRect(30, 30, 441, 81));
        titleLabel->setStyleSheet(QString::fromUtf8("QLabel#titleLabel{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(230, 230, 230);\n"
"	font: 18pt \"Snap ITC\";\n"
"	color: black;\n"
"}"));
        musicLabel = new QLabel(mainMenuPage);
        musicLabel->setObjectName("musicLabel");
        musicLabel->setGeometry(QRect(610, 20, 131, 41));
        musicLabel->setStyleSheet(QString::fromUtf8("QLabel#musicLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 700 11pt \"Sitka Display\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        musicCheckBox = new QCheckBox(mainMenuPage);
        musicCheckBox->setObjectName("musicCheckBox");
        musicCheckBox->setGeometry(QRect(750, 20, 41, 41));
        musicCheckBox->setChecked(true);
        musicCheckBox->setTristate(false);
        stackedWidget->addWidget(mainMenuPage);
        tutorialPage = new QWidget();
        tutorialPage->setObjectName("tutorialPage");
        tutorialPage->setStyleSheet(QString::fromUtf8("QWidget#tutorialPage{\n"
"	background-image: url(:/img/img/tutorialPageBackground.jpg);\n"
"}"));
        tutorialPageBackToMainMenuButton = new QPushButton(tutorialPage);
        tutorialPageBackToMainMenuButton->setObjectName("tutorialPageBackToMainMenuButton");
        tutorialPageBackToMainMenuButton->setGeometry(QRect(580, 20, 201, 51));
        tutorialPageBackToMainMenuButton->setStyleSheet(QString::fromUtf8("QWidget#tutorialPageBackToMainMenuButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 11pt \"Algerian\";\n"
"	color: black;\n"
"}\n"
"\n"
"QWidget#tutorialPageBackToMainMenuButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 11pt \"Algerian\";\n"
"	color: black;\n"
"}"));
        arrowKeysImageLabel = new QLabel(tutorialPage);
        arrowKeysImageLabel->setObjectName("arrowKeysImageLabel");
        arrowKeysImageLabel->setGeometry(QRect(20, 20, 51, 51));
        arrowKeysImageLabel->setStyleSheet(QString::fromUtf8("QLabel#arrowKeysImageLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"}"));
        arrowKeysImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/arrowKeys.png")));
        arrowKeysImageLabel->setScaledContents(true);
        arrowKeysDescriptionLabel = new QLabel(tutorialPage);
        arrowKeysDescriptionLabel->setObjectName("arrowKeysDescriptionLabel");
        arrowKeysDescriptionLabel->setGeometry(QRect(70, 20, 501, 51));
        arrowKeysDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#arrowKeysDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 700 11pt \"Sitka Display\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        playerLabel = new QLabel(tutorialPage);
        playerLabel->setObjectName("playerLabel");
        playerLabel->setGeometry(QRect(450, 190, 181, 51));
        playerLabel->setStyleSheet(QString::fromUtf8("QLabel#playerLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        floodLabel = new QLabel(tutorialPage);
        floodLabel->setObjectName("floodLabel");
        floodLabel->setGeometry(QRect(20, 190, 101, 51));
        floodLabel->setStyleSheet(QString::fromUtf8("QLabel#floodLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        playerImageLabel = new QLabel(tutorialPage);
        playerImageLabel->setObjectName("playerImageLabel");
        playerImageLabel->setGeometry(QRect(640, 190, 51, 51));
        playerImageLabel->setStyleSheet(QString::fromUtf8("QLabel#playerImageLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"}"));
        playerImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/player.png")));
        playerImageLabel->setScaledContents(true);
        robberLabel = new QLabel(tutorialPage);
        robberLabel->setObjectName("robberLabel");
        robberLabel->setGeometry(QRect(450, 330, 101, 51));
        robberLabel->setStyleSheet(QString::fromUtf8("QLabel#robberLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        robberImageLabel = new QLabel(tutorialPage);
        robberImageLabel->setObjectName("robberImageLabel");
        robberImageLabel->setGeometry(QRect(560, 330, 51, 51));
        robberImageLabel->setStyleSheet(QString::fromUtf8("QLabel#robberImageLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"}"));
        robberImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/robber.jpg")));
        robberImageLabel->setScaledContents(true);
        terroristImageLabel = new QLabel(tutorialPage);
        terroristImageLabel->setObjectName("terroristImageLabel");
        terroristImageLabel->setGeometry(QRect(560, 460, 51, 51));
        terroristImageLabel->setStyleSheet(QString::fromUtf8("QLabel#terroristImageLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"}"));
        terroristImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/terrorist.jpg")));
        terroristImageLabel->setScaledContents(true);
        terroristLabel = new QLabel(tutorialPage);
        terroristLabel->setObjectName("terroristLabel");
        terroristLabel->setGeometry(QRect(450, 460, 101, 51));
        terroristLabel->setStyleSheet(QString::fromUtf8("QLabel#terroristLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        floodImageLabel = new QLabel(tutorialPage);
        floodImageLabel->setObjectName("floodImageLabel");
        floodImageLabel->setGeometry(QRect(130, 190, 51, 51));
        floodImageLabel->setStyleSheet(QString::fromUtf8("QLabel#floodImageLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"}"));
        floodImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/flood.jpg")));
        floodImageLabel->setScaledContents(true);
        wildfireLabel = new QLabel(tutorialPage);
        wildfireLabel->setObjectName("wildfireLabel");
        wildfireLabel->setGeometry(QRect(20, 320, 101, 51));
        wildfireLabel->setStyleSheet(QString::fromUtf8("QLabel#wildfireLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        wildfireImageLabel = new QLabel(tutorialPage);
        wildfireImageLabel->setObjectName("wildfireImageLabel");
        wildfireImageLabel->setGeometry(QRect(130, 320, 51, 51));
        wildfireImageLabel->setStyleSheet(QString::fromUtf8("QLabel#wildfireImageLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"}"));
        wildfireImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/wildfire.jpg")));
        wildfireImageLabel->setScaledContents(true);
        tornadoLabel = new QLabel(tutorialPage);
        tornadoLabel->setObjectName("tornadoLabel");
        tornadoLabel->setGeometry(QRect(20, 450, 101, 51));
        tornadoLabel->setStyleSheet(QString::fromUtf8("QLabel#tornadoLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        tornadoImageLabel = new QLabel(tutorialPage);
        tornadoImageLabel->setObjectName("tornadoImageLabel");
        tornadoImageLabel->setGeometry(QRect(130, 450, 51, 51));
        tornadoImageLabel->setStyleSheet(QString::fromUtf8("QLabel#tornadoImageLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"}"));
        tornadoImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/img/img/tornado.jpg")));
        tornadoImageLabel->setScaledContents(true);
        playerDescriptionLabel = new QLabel(tutorialPage);
        playerDescriptionLabel->setObjectName("playerDescriptionLabel");
        playerDescriptionLabel->setGeometry(QRect(450, 240, 341, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Titillium Web")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        playerDescriptionLabel->setFont(font);
        playerDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#playerDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 9pt \"Titillium Web\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        playerDescriptionLabel->setWordWrap(true);
        robberDescriptionLabel = new QLabel(tutorialPage);
        robberDescriptionLabel->setObjectName("robberDescriptionLabel");
        robberDescriptionLabel->setGeometry(QRect(450, 380, 341, 71));
        robberDescriptionLabel->setFont(font);
        robberDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#robberDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 9pt \"Titillium Web\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        robberDescriptionLabel->setWordWrap(true);
        moveDescriptionLabel = new QLabel(tutorialPage);
        moveDescriptionLabel->setObjectName("moveDescriptionLabel");
        moveDescriptionLabel->setGeometry(QRect(20, 80, 761, 51));
        moveDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#moveDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 9pt \"Titillium Web\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        moveDescriptionLabel->setWordWrap(true);
        terroristDescriptionLabel = new QLabel(tutorialPage);
        terroristDescriptionLabel->setObjectName("terroristDescriptionLabel");
        terroristDescriptionLabel->setGeometry(QRect(450, 510, 341, 71));
        terroristDescriptionLabel->setFont(font);
        terroristDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#terroristDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 9pt \"Titillium Web\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        terroristDescriptionLabel->setWordWrap(true);
        floodDescriptionLabel = new QLabel(tutorialPage);
        floodDescriptionLabel->setObjectName("floodDescriptionLabel");
        floodDescriptionLabel->setGeometry(QRect(20, 240, 341, 61));
        floodDescriptionLabel->setFont(font);
        floodDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#floodDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 9pt \"Titillium Web\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        floodDescriptionLabel->setWordWrap(true);
        rigorousTestingDescriptionLabel = new QLabel(tutorialPage);
        rigorousTestingDescriptionLabel->setObjectName("rigorousTestingDescriptionLabel");
        rigorousTestingDescriptionLabel->setGeometry(QRect(20, 130, 761, 51));
        rigorousTestingDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#rigorousTestingDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 9pt \"Titillium Web\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        rigorousTestingDescriptionLabel->setWordWrap(true);
        wildfireDescriptionLabel = new QLabel(tutorialPage);
        wildfireDescriptionLabel->setObjectName("wildfireDescriptionLabel");
        wildfireDescriptionLabel->setGeometry(QRect(20, 370, 341, 61));
        wildfireDescriptionLabel->setFont(font);
        wildfireDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#wildfireDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 9pt \"Titillium Web\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        wildfireDescriptionLabel->setWordWrap(true);
        tornadoDescriptionLabel = new QLabel(tutorialPage);
        tornadoDescriptionLabel->setObjectName("tornadoDescriptionLabel");
        tornadoDescriptionLabel->setGeometry(QRect(20, 500, 341, 61));
        tornadoDescriptionLabel->setFont(font);
        tornadoDescriptionLabel->setStyleSheet(QString::fromUtf8("QLabel#tornadoDescriptionLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: white;\n"
"	font: 9pt \"Titillium Web\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        tornadoDescriptionLabel->setWordWrap(true);
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
"	color: black;\n"
"}\n"
"\n"
"QWidget#highscorePageBackToMainMenuButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 11pt \"Algerian\";\n"
"	color: black;\n"
"}"));
        highscoresLabel = new QLabel(highscoresPage);
        highscoresLabel->setObjectName("highscoresLabel");
        highscoresLabel->setGeometry(QRect(50, 100, 441, 61));
        highscoresLabel->setStyleSheet(QString::fromUtf8("QLabel#highscoresLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));\n"
"	background-color: white;\n"
"	font: 700 14pt \"Bahnschrift\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
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
"	color: black;\n"
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
"	color: black;\n"
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
"	color: black;\n"
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
"	color: black;\n"
"}\n"
"\n"
"QWidget#clearHighscoresButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"	color: black;\n"
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
"	color: black;\n"
"}\n"
"\n"
"QWidget#clearRunLogButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"	color: black;\n"
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
"	font: 700 14pt \"Bahnschrift\";\n"
"	qproperty-alignment: AlignCenter;\n"
"	color: black;\n"
"}"));
        stackedWidget->addWidget(highscoresPage);
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
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Nightmare survival simulator", nullptr));
        musicLabel->setText(QCoreApplication::translate("MainWindow", "Music", nullptr));
        musicCheckBox->setText(QString());
        tutorialPageBackToMainMenuButton->setText(QCoreApplication::translate("MainWindow", "Back to Main Menu", nullptr));
        arrowKeysImageLabel->setText(QString());
        arrowKeysDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "Use arrow keys to move yourself in game", nullptr));
        playerLabel->setText(QCoreApplication::translate("MainWindow", "Player (You)", nullptr));
        floodLabel->setText(QCoreApplication::translate("MainWindow", "Flood", nullptr));
        playerImageLabel->setText(QString());
        robberLabel->setText(QCoreApplication::translate("MainWindow", "Robber", nullptr));
        robberImageLabel->setText(QString());
        terroristImageLabel->setText(QString());
        terroristLabel->setText(QCoreApplication::translate("MainWindow", "Terrorist", nullptr));
        floodImageLabel->setText(QString());
        wildfireLabel->setText(QCoreApplication::translate("MainWindow", "Wildfire", nullptr));
        wildfireImageLabel->setText(QString());
        tornadoLabel->setText(QCoreApplication::translate("MainWindow", "Tornado", nullptr));
        tornadoImageLabel->setText(QString());
        playerDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "The goal is to survive as long as possible. You will die if you touch a robber, terrorist, or natural disaster. Surviving more than 50 seconds is very difficult and is considered a world-class accomplishment.", nullptr));
        robberDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "The robber targets the nearest block, and will target you if there's no more blocks remaining. The robber moves more faster than the other enemies.", nullptr));
        moveDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "Enemies (Natural disaster, Robber, Terrorist) move independently. The speed of all enemies increases with the duration of the simulation. The speed is capped at a few hundred milliseconds but may differ depending on the enemy. At that point, it is very hard to survive because everything moves so fast.", nullptr));
        terroristDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "Unlike the robber, the terrorist cannot move through blocks. He moves slower than the robber and only targets you.", nullptr));
        floodDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "Each flood cell spreads orthogonally and diagonally. However, it can only destroy grass blocks.", nullptr));
        rigorousTestingDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "Enemies spawn randomly on the edge of the map. When a disaster dies out, a new disaster of the same type will spawn on the edge of the map. A robber is guaranteed to never attack a terrorist and vice versa. Both robber and terrorist are immune to disasters.", nullptr));
        wildfireDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "Each wildfire cell spreads orthogonally. It can destroy grass and wood blocks.", nullptr));
        tornadoDescriptionLabel->setText(QCoreApplication::translate("MainWindow", "Each tornado cell spreads diagonally. It can destroy grass, wood, and cobblestone blocks.", nullptr));
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
