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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
    QGridLayout *buildGrid;
    QPushButton *finishButton;
    QPushButton *backToMainMenuButton;
    QLabel *selectBlocksOuterLabel;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *buildBlocksVerticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *placeBlocksLabel;
    QLabel *budgetLabel;
    QHBoxLayout *horizontalLayout;
    QLabel *grassLabel;
    QLabel *grassImageLabel;
    QCheckBox *grassCheckBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *woodLabel;
    QLabel *woodImageLabel;
    QCheckBox *woodCheckBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *cobblestoneLabel;
    QLabel *cobblestoneImageLabel;
    QCheckBox *cobblestoneCheckBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *concreteLabel;
    QLabel *concreteImageLabel;
    QCheckBox *concreteCheckBox;
    QLabel *selectDisasterOuterLabel;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *disasterVerticalLayout;
    QLabel *selectDisasterLabel;
    QHBoxLayout *horizontalLayout_2;
    QLabel *floodLabel;
    QLabel *floodImageLabel;
    QCheckBox *floodCheckBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *wildfireLabel;
    QLabel *wildfireImageLabel;
    QCheckBox *wildfireCheckBox;
    QHBoxLayout *horizontalLayout_8;
    QLabel *tornadoLabel;
    QLabel *tornadoImageLabel;
    QCheckBox *tornadoCheckBox;
    QPushButton *resetButton;
    QWidget *simulationPage;
    QWidget *gridLayoutWidget_2;
    QGridLayout *simulationGrid;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *entityInformationVerticalLayout;
    QHBoxLayout *horizontalLayout_9;
    QLabel *playerLabel;
    QLabel *playerImageLabel;
    QHBoxLayout *horizontalLayout_10;
    QLabel *robberLabel;
    QLabel *robberImageLabel;
    QHBoxLayout *horizontalLayout_11;
    QLabel *terroristLabel;
    QLabel *terroristImageLabel;
    QHBoxLayout *horizontalLayout_12;
    QLabel *disasterLabel;
    QLabel *disasterImageLabel;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *survivalTimeVerticalLayout;
    QLabel *survivalTimeDisplayLabel;
    QLabel *survivalTimeLabel;
    QLabel *upArrowKeyLabel;
    QLabel *leftArrowKeyLabel;
    QLabel *downArrowKeyLabel;
    QLabel *rightArrowKeyLabel;
    QLabel *useArrowKeysToMoveLabel;
    QWidget *gameOverPage;
    QLabel *causeOfDeathLabel;
    QLabel *gameOverSurvivalTimeLabel;
    QPushButton *gameOverPageBackToMainMenuButton;

    void setupUi(QDialog *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName("GameWindow");
        GameWindow->resize(1044, 677);
        GameWindow->setStyleSheet(QString::fromUtf8("QWidget#GameWindow{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(9, 41, 4, 255), stop:0.085 rgba(2, 79, 0, 255), stop:0.19 rgba(50, 147, 22, 255), stop:0.275 rgba(236, 191, 49, 255), stop:0.39 rgba(243, 61, 34, 255), stop:0.555 rgba(135, 81, 60, 255), stop:0.667 rgba(121, 75, 255, 255), stop:0.825 rgba(164, 255, 244, 255), stop:0.885 rgba(104, 222, 71, 255), stop:1 rgba(93, 128, 0, 255));\n"
"}"));
        stackedWidget = new QStackedWidget(GameWindow);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 20, 1001, 641));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        buildPage = new QWidget();
        buildPage->setObjectName("buildPage");
        buildPage->setStyleSheet(QString::fromUtf8("QWidget#buildPage{\n"
"	background-image: url(:/img/img/apocalypseBackgroundGameWindow.jpg);\n"
"}"));
        gridLayoutWidget = new QWidget(buildPage);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 20, 631, 591));
        buildGrid = new QGridLayout(gridLayoutWidget);
        buildGrid->setObjectName("buildGrid");
        buildGrid->setContentsMargins(0, 0, 0, 0);
        finishButton = new QPushButton(buildPage);
        finishButton->setObjectName("finishButton");
        finishButton->setGeometry(QRect(830, 520, 151, 91));
        finishButton->setStyleSheet(QString::fromUtf8("QWidget#finishButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 25pt \"Algerian\";\n"
"}\n"
"\n"
"QWidget#finishButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 25pt \"Algerian\";\n"
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
        selectBlocksOuterLabel = new QLabel(buildPage);
        selectBlocksOuterLabel->setObjectName("selectBlocksOuterLabel");
        selectBlocksOuterLabel->setGeometry(QRect(670, 70, 311, 221));
        selectBlocksOuterLabel->setStyleSheet(QString::fromUtf8("QLabel#selectBlocksOuterLabel{\n"
"	background-color: black;\n"
"}"));
        selectBlocksOuterLabel->setScaledContents(true);
        verticalLayoutWidget = new QWidget(buildPage);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(680, 80, 293, 201));
        buildBlocksVerticalLayout = new QVBoxLayout(verticalLayoutWidget);
        buildBlocksVerticalLayout->setObjectName("buildBlocksVerticalLayout");
        buildBlocksVerticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        placeBlocksLabel = new QLabel(verticalLayoutWidget);
        placeBlocksLabel->setObjectName("placeBlocksLabel");
        placeBlocksLabel->setStyleSheet(QString::fromUtf8("QLabel#placeBlocksLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 255, 0);\n"
"	background-color: white;\n"
"	font: 9pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_6->addWidget(placeBlocksLabel);

        budgetLabel = new QLabel(verticalLayoutWidget);
        budgetLabel->setObjectName("budgetLabel");
        budgetLabel->setStyleSheet(QString::fromUtf8("QLabel#budgetLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: rgb(255, 0, 0);\n"
"	background-color: white;\n"
"	font: 9pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_6->addWidget(budgetLabel);


        buildBlocksVerticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        grassLabel = new QLabel(verticalLayoutWidget);
        grassLabel->setObjectName("grassLabel");
        grassLabel->setStyleSheet(QString::fromUtf8("QLabel#grassLabel{\n"
"	background-color: white;\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout->addWidget(grassLabel);

        grassImageLabel = new QLabel(verticalLayoutWidget);
        grassImageLabel->setObjectName("grassImageLabel");

        horizontalLayout->addWidget(grassImageLabel);

        grassCheckBox = new QCheckBox(verticalLayoutWidget);
        grassCheckBox->setObjectName("grassCheckBox");

        horizontalLayout->addWidget(grassCheckBox);


        buildBlocksVerticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        woodLabel = new QLabel(verticalLayoutWidget);
        woodLabel->setObjectName("woodLabel");
        woodLabel->setStyleSheet(QString::fromUtf8("QLabel#woodLabel{\n"
"	background-color: white;\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_3->addWidget(woodLabel);

        woodImageLabel = new QLabel(verticalLayoutWidget);
        woodImageLabel->setObjectName("woodImageLabel");

        horizontalLayout_3->addWidget(woodImageLabel);

        woodCheckBox = new QCheckBox(verticalLayoutWidget);
        woodCheckBox->setObjectName("woodCheckBox");

        horizontalLayout_3->addWidget(woodCheckBox);


        buildBlocksVerticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        cobblestoneLabel = new QLabel(verticalLayoutWidget);
        cobblestoneLabel->setObjectName("cobblestoneLabel");
        cobblestoneLabel->setStyleSheet(QString::fromUtf8("QLabel#cobblestoneLabel{\n"
"	background-color: white;\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_4->addWidget(cobblestoneLabel);

        cobblestoneImageLabel = new QLabel(verticalLayoutWidget);
        cobblestoneImageLabel->setObjectName("cobblestoneImageLabel");

        horizontalLayout_4->addWidget(cobblestoneImageLabel);

        cobblestoneCheckBox = new QCheckBox(verticalLayoutWidget);
        cobblestoneCheckBox->setObjectName("cobblestoneCheckBox");

        horizontalLayout_4->addWidget(cobblestoneCheckBox);


        buildBlocksVerticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        concreteLabel = new QLabel(verticalLayoutWidget);
        concreteLabel->setObjectName("concreteLabel");
        concreteLabel->setStyleSheet(QString::fromUtf8("QLabel#concreteLabel{\n"
"	background-color: white;\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_5->addWidget(concreteLabel);

        concreteImageLabel = new QLabel(verticalLayoutWidget);
        concreteImageLabel->setObjectName("concreteImageLabel");

        horizontalLayout_5->addWidget(concreteImageLabel);

        concreteCheckBox = new QCheckBox(verticalLayoutWidget);
        concreteCheckBox->setObjectName("concreteCheckBox");

        horizontalLayout_5->addWidget(concreteCheckBox);


        buildBlocksVerticalLayout->addLayout(horizontalLayout_5);

        selectDisasterOuterLabel = new QLabel(buildPage);
        selectDisasterOuterLabel->setObjectName("selectDisasterOuterLabel");
        selectDisasterOuterLabel->setGeometry(QRect(670, 300, 311, 211));
        selectDisasterOuterLabel->setStyleSheet(QString::fromUtf8("QLabel#selectDisasterOuterLabel{\n"
"	background-color: black;\n"
"}"));
        verticalLayoutWidget_2 = new QWidget(buildPage);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(680, 310, 291, 191));
        disasterVerticalLayout = new QVBoxLayout(verticalLayoutWidget_2);
        disasterVerticalLayout->setObjectName("disasterVerticalLayout");
        disasterVerticalLayout->setContentsMargins(0, 0, 0, 0);
        selectDisasterLabel = new QLabel(verticalLayoutWidget_2);
        selectDisasterLabel->setObjectName("selectDisasterLabel");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(selectDisasterLabel->sizePolicy().hasHeightForWidth());
        selectDisasterLabel->setSizePolicy(sizePolicy);
        selectDisasterLabel->setStyleSheet(QString::fromUtf8("QLabel#selectDisasterLabel{\n"
"	border-width: 3px;\n"
"	border-style: solid;\n"
"	border-color: rgb(0, 0, 255);\n"
"	background-color: white;\n"
"	font: 9pt \"8514oem\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        disasterVerticalLayout->addWidget(selectDisasterLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        floodLabel = new QLabel(verticalLayoutWidget_2);
        floodLabel->setObjectName("floodLabel");
        floodLabel->setStyleSheet(QString::fromUtf8("QLabel#floodLabel{\n"
"	background-color: white;\n"
"	font: 600 15pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_2->addWidget(floodLabel);

        floodImageLabel = new QLabel(verticalLayoutWidget_2);
        floodImageLabel->setObjectName("floodImageLabel");
        floodImageLabel->setScaledContents(false);

        horizontalLayout_2->addWidget(floodImageLabel);

        floodCheckBox = new QCheckBox(verticalLayoutWidget_2);
        floodCheckBox->setObjectName("floodCheckBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(floodCheckBox->sizePolicy().hasHeightForWidth());
        floodCheckBox->setSizePolicy(sizePolicy1);
        floodCheckBox->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(floodCheckBox);


        disasterVerticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        wildfireLabel = new QLabel(verticalLayoutWidget_2);
        wildfireLabel->setObjectName("wildfireLabel");
        wildfireLabel->setStyleSheet(QString::fromUtf8("QLabel#wildfireLabel{\n"
"	background-color: white;\n"
"	font: 600 14pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_7->addWidget(wildfireLabel);

        wildfireImageLabel = new QLabel(verticalLayoutWidget_2);
        wildfireImageLabel->setObjectName("wildfireImageLabel");

        horizontalLayout_7->addWidget(wildfireImageLabel);

        wildfireCheckBox = new QCheckBox(verticalLayoutWidget_2);
        wildfireCheckBox->setObjectName("wildfireCheckBox");
        sizePolicy1.setHeightForWidth(wildfireCheckBox->sizePolicy().hasHeightForWidth());
        wildfireCheckBox->setSizePolicy(sizePolicy1);

        horizontalLayout_7->addWidget(wildfireCheckBox);


        disasterVerticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        tornadoLabel = new QLabel(verticalLayoutWidget_2);
        tornadoLabel->setObjectName("tornadoLabel");
        tornadoLabel->setStyleSheet(QString::fromUtf8("QLabel#tornadoLabel{\n"
"	background-color: white;\n"
"	font: 600 14pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_8->addWidget(tornadoLabel);

        tornadoImageLabel = new QLabel(verticalLayoutWidget_2);
        tornadoImageLabel->setObjectName("tornadoImageLabel");

        horizontalLayout_8->addWidget(tornadoImageLabel);

        tornadoCheckBox = new QCheckBox(verticalLayoutWidget_2);
        tornadoCheckBox->setObjectName("tornadoCheckBox");
        sizePolicy1.setHeightForWidth(tornadoCheckBox->sizePolicy().hasHeightForWidth());
        tornadoCheckBox->setSizePolicy(sizePolicy1);

        horizontalLayout_8->addWidget(tornadoCheckBox);


        disasterVerticalLayout->addLayout(horizontalLayout_8);

        resetButton = new QPushButton(buildPage);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(670, 520, 151, 91));
        resetButton->setStyleSheet(QString::fromUtf8("QWidget#resetButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 25pt \"Algerian\";\n"
"}\n"
"\n"
"QWidget#resetButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 25pt \"Algerian\";\n"
"}\n"
""));
        stackedWidget->addWidget(buildPage);
        simulationPage = new QWidget();
        simulationPage->setObjectName("simulationPage");
        simulationPage->setStyleSheet(QString::fromUtf8("QWidget#simulationPage{\n"
"	background-image: url(:/img/img/simulationPageBackground.jpg);\n"
"}"));
        gridLayoutWidget_2 = new QWidget(simulationPage);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 711, 621));
        simulationGrid = new QGridLayout(gridLayoutWidget_2);
        simulationGrid->setObjectName("simulationGrid");
        simulationGrid->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_3 = new QWidget(simulationPage);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(730, 290, 261, 181));
        entityInformationVerticalLayout = new QVBoxLayout(verticalLayoutWidget_3);
        entityInformationVerticalLayout->setObjectName("entityInformationVerticalLayout");
        entityInformationVerticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        playerLabel = new QLabel(verticalLayoutWidget_3);
        playerLabel->setObjectName("playerLabel");
        playerLabel->setStyleSheet(QString::fromUtf8("QLabel#playerLabel{\n"
"	background-color: white;\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_9->addWidget(playerLabel);

        playerImageLabel = new QLabel(verticalLayoutWidget_3);
        playerImageLabel->setObjectName("playerImageLabel");

        horizontalLayout_9->addWidget(playerImageLabel);


        entityInformationVerticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        robberLabel = new QLabel(verticalLayoutWidget_3);
        robberLabel->setObjectName("robberLabel");
        robberLabel->setStyleSheet(QString::fromUtf8("QLabel#robberLabel{\n"
"	background-color: white;\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_10->addWidget(robberLabel);

        robberImageLabel = new QLabel(verticalLayoutWidget_3);
        robberImageLabel->setObjectName("robberImageLabel");

        horizontalLayout_10->addWidget(robberImageLabel);


        entityInformationVerticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        terroristLabel = new QLabel(verticalLayoutWidget_3);
        terroristLabel->setObjectName("terroristLabel");
        terroristLabel->setStyleSheet(QString::fromUtf8("QLabel#terroristLabel{\n"
"	background-color: white;\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_11->addWidget(terroristLabel);

        terroristImageLabel = new QLabel(verticalLayoutWidget_3);
        terroristImageLabel->setObjectName("terroristImageLabel");

        horizontalLayout_11->addWidget(terroristImageLabel);


        entityInformationVerticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        disasterLabel = new QLabel(verticalLayoutWidget_3);
        disasterLabel->setObjectName("disasterLabel");
        disasterLabel->setStyleSheet(QString::fromUtf8("QLabel#disasterLabel{\n"
"	background-color: white;\n"
"	font: 600 9pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        horizontalLayout_12->addWidget(disasterLabel);

        disasterImageLabel = new QLabel(verticalLayoutWidget_3);
        disasterImageLabel->setObjectName("disasterImageLabel");

        horizontalLayout_12->addWidget(disasterImageLabel);


        entityInformationVerticalLayout->addLayout(horizontalLayout_12);

        verticalLayoutWidget_4 = new QWidget(simulationPage);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(730, 490, 261, 141));
        survivalTimeVerticalLayout = new QVBoxLayout(verticalLayoutWidget_4);
        survivalTimeVerticalLayout->setObjectName("survivalTimeVerticalLayout");
        survivalTimeVerticalLayout->setContentsMargins(0, 0, 0, 0);
        survivalTimeDisplayLabel = new QLabel(verticalLayoutWidget_4);
        survivalTimeDisplayLabel->setObjectName("survivalTimeDisplayLabel");
        survivalTimeDisplayLabel->setStyleSheet(QString::fromUtf8("QLabel#survivalTimeDisplayLabel{\n"
"	background-color: white;\n"
"	font: 600 14pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        survivalTimeVerticalLayout->addWidget(survivalTimeDisplayLabel);

        survivalTimeLabel = new QLabel(verticalLayoutWidget_4);
        survivalTimeLabel->setObjectName("survivalTimeLabel");
        survivalTimeLabel->setStyleSheet(QString::fromUtf8("QLabel#survivalTimeLabel{\n"
"	background-color: white;\n"
"	font: 600 14pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));

        survivalTimeVerticalLayout->addWidget(survivalTimeLabel);

        upArrowKeyLabel = new QLabel(simulationPage);
        upArrowKeyLabel->setObjectName("upArrowKeyLabel");
        upArrowKeyLabel->setGeometry(QRect(810, 40, 61, 55));
        upArrowKeyLabel->setScaledContents(false);
        leftArrowKeyLabel = new QLabel(simulationPage);
        leftArrowKeyLabel->setObjectName("leftArrowKeyLabel");
        leftArrowKeyLabel->setGeometry(QRect(740, 90, 62, 55));
        leftArrowKeyLabel->setScaledContents(false);
        downArrowKeyLabel = new QLabel(simulationPage);
        downArrowKeyLabel->setObjectName("downArrowKeyLabel");
        downArrowKeyLabel->setGeometry(QRect(810, 140, 61, 55));
        downArrowKeyLabel->setScaledContents(false);
        rightArrowKeyLabel = new QLabel(simulationPage);
        rightArrowKeyLabel->setObjectName("rightArrowKeyLabel");
        rightArrowKeyLabel->setGeometry(QRect(860, 90, 62, 55));
        rightArrowKeyLabel->setScaledContents(false);
        useArrowKeysToMoveLabel = new QLabel(simulationPage);
        useArrowKeysToMoveLabel->setObjectName("useArrowKeysToMoveLabel");
        useArrowKeysToMoveLabel->setGeometry(QRect(740, 210, 231, 41));
        useArrowKeysToMoveLabel->setStyleSheet(QString::fromUtf8("QLabel#useArrowKeysToMoveLabel{\n"
"	background-color: white;\n"
"	font: 600 11pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        stackedWidget->addWidget(simulationPage);
        gameOverPage = new QWidget();
        gameOverPage->setObjectName("gameOverPage");
        gameOverPage->setStyleSheet(QString::fromUtf8("QWidget#gameOverPage{\n"
"	background-image: url(:/img/img/gameOverPageBackground.jpg);\n"
"}"));
        causeOfDeathLabel = new QLabel(gameOverPage);
        causeOfDeathLabel->setObjectName("causeOfDeathLabel");
        causeOfDeathLabel->setGeometry(QRect(10, 10, 981, 131));
        causeOfDeathLabel->setStyleSheet(QString::fromUtf8("QLabel#causeOfDeathLabel{\n"
"	background-color: white;\n"
"	font: 600 15pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        gameOverSurvivalTimeLabel = new QLabel(gameOverPage);
        gameOverSurvivalTimeLabel->setObjectName("gameOverSurvivalTimeLabel");
        gameOverSurvivalTimeLabel->setGeometry(QRect(40, 150, 911, 71));
        gameOverSurvivalTimeLabel->setStyleSheet(QString::fromUtf8("QLabel#gameOverSurvivalTimeLabel{\n"
"	background-color: white;\n"
"	font: 600 15pt \"Segoe UI Semibold\";\n"
"	qproperty-alignment: AlignCenter;\n"
"}"));
        gameOverPageBackToMainMenuButton = new QPushButton(gameOverPage);
        gameOverPageBackToMainMenuButton->setObjectName("gameOverPageBackToMainMenuButton");
        gameOverPageBackToMainMenuButton->setGeometry(QRect(10, 520, 301, 111));
        gameOverPageBackToMainMenuButton->setStyleSheet(QString::fromUtf8("QWidget#gameOverPageBackToMainMenuButton{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(225, 225, 225);\n"
"	font: 15pt \"Algerian\";\n"
"}\n"
"\n"
"QWidget#gameOverPageBackToMainMenuButton::pressed{\n"
"	border-width: 4px;\n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	background-color: rgb(182, 182, 182);\n"
"	font: 15pt \"Algerian\";\n"
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
        selectBlocksOuterLabel->setText(QString());
        placeBlocksLabel->setText(QCoreApplication::translate("GameWindow", "Place Blocks", nullptr));
        budgetLabel->setText(QCoreApplication::translate("GameWindow", "(Show Budget)", nullptr));
        grassLabel->setText(QCoreApplication::translate("GameWindow", "Grass ($2)", nullptr));
        grassImageLabel->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        grassCheckBox->setText(QCoreApplication::translate("GameWindow", "CheckBox", nullptr));
        woodLabel->setText(QCoreApplication::translate("GameWindow", "Wood ($3)", nullptr));
        woodImageLabel->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        woodCheckBox->setText(QCoreApplication::translate("GameWindow", "CheckBox", nullptr));
        cobblestoneLabel->setText(QCoreApplication::translate("GameWindow", "Cobblestone ($5)", nullptr));
        cobblestoneImageLabel->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        cobblestoneCheckBox->setText(QCoreApplication::translate("GameWindow", "CheckBox", nullptr));
        concreteLabel->setText(QCoreApplication::translate("GameWindow", "Concrete ($7)", nullptr));
        concreteImageLabel->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        concreteCheckBox->setText(QCoreApplication::translate("GameWindow", "CheckBox", nullptr));
        selectDisasterOuterLabel->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        selectDisasterLabel->setText(QCoreApplication::translate("GameWindow", "Select Disaster", nullptr));
        floodLabel->setText(QCoreApplication::translate("GameWindow", "Flood", nullptr));
        floodImageLabel->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        floodCheckBox->setText(QCoreApplication::translate("GameWindow", "CheckBox", nullptr));
        wildfireLabel->setText(QCoreApplication::translate("GameWindow", "Wildfire", nullptr));
        wildfireImageLabel->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        wildfireCheckBox->setText(QCoreApplication::translate("GameWindow", "CheckBox", nullptr));
        tornadoLabel->setText(QCoreApplication::translate("GameWindow", "Tornado", nullptr));
        tornadoImageLabel->setText(QCoreApplication::translate("GameWindow", "TextLabel", nullptr));
        tornadoCheckBox->setText(QCoreApplication::translate("GameWindow", "CheckBox", nullptr));
        resetButton->setText(QCoreApplication::translate("GameWindow", "RESET", nullptr));
        playerLabel->setText(QCoreApplication::translate("GameWindow", "Player", nullptr));
        playerImageLabel->setText(QString());
        robberLabel->setText(QCoreApplication::translate("GameWindow", "Robber", nullptr));
        robberImageLabel->setText(QString());
        terroristLabel->setText(QCoreApplication::translate("GameWindow", "Terrorist", nullptr));
        terroristImageLabel->setText(QString());
        disasterLabel->setText(QCoreApplication::translate("GameWindow", "Disaster", nullptr));
        disasterImageLabel->setText(QString());
        survivalTimeDisplayLabel->setText(QCoreApplication::translate("GameWindow", "Survival Time (seconds)", nullptr));
        survivalTimeLabel->setText(QString());
        upArrowKeyLabel->setText(QString());
        leftArrowKeyLabel->setText(QString());
        downArrowKeyLabel->setText(QString());
        rightArrowKeyLabel->setText(QString());
        useArrowKeysToMoveLabel->setText(QCoreApplication::translate("GameWindow", "Use Arrow Keys to Move", nullptr));
        causeOfDeathLabel->setText(QString());
        gameOverSurvivalTimeLabel->setText(QString());
        gameOverPageBackToMainMenuButton->setText(QCoreApplication::translate("GameWindow", "Back to Main Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
