#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"
#include "objects.h"
#include <iostream>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    std::cout << "Deleting MainWindow" << std::endl;
    delete ui;
}


void MainWindow::on_playGameButton_clicked()
{
    hide();
    GameWindow gameWindow(this);
    gameWindow.setModal(true);
    gameWindow.exec();
    show();
}

void MainWindow::on_highscorePageBackToMainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_highscoresButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    displayHighscores(); displayRunLog();
}

void MainWindow::on_clearHighscoresButton_clicked()
{
    HighscoresSingleton *highscoresSingleton = HighscoresSingleton::getInstance();
    highscoresSingleton->clearHighscores();
    displayHighscores();
}

void MainWindow::displayHighscores(){
    /* Highscores csv file layout
     *
     * Flood,maxFloodSurvivalTime
     * Wildfire,maxWildfireSurvivalTime
     * Tornado,maxTornadoSurvivalTime
     *
     * */

    const int FLOOD_ROW = 0, WILDFIRE_ROW = 1, TORNADO_ROW = 2;

    QFile highscoresReadFile(HighscoresSingleton::HIGHSCORES_RELATIVE_FILE_PATH);
    if (!highscoresReadFile.open(QIODevice::ReadOnly | QIODevice::Text)) { std::cerr << "Could not open highscores.csv file for reading!" << std::endl; return; }
    std::string highscoresTableData[3][2];
    QTextStream in(&highscoresReadFile);
    for (int i = 0; i < 3; i++) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        for (int j = 0; j < 2; j++){
            highscoresTableData[i][j] = fields[j].toStdString();
        }
    }
    highscoresReadFile.close();

    if (highscoresTableData[FLOOD_ROW][1] != "-1") {
        ui->highscorePageFloodValueLabel->setText(QString::fromStdString(highscoresTableData[FLOOD_ROW][1]));
    }
    else {
        ui->highscorePageFloodValueLabel->setText("N/A");
    }
    if (highscoresTableData[WILDFIRE_ROW][1] != "-1"){
        ui->highscorePageWildfireValueLabel->setText(QString::fromStdString(highscoresTableData[WILDFIRE_ROW][1]));
    }
    else {
        ui->highscorePageWildfireValueLabel->setText("N/A");
    }
    if (highscoresTableData[TORNADO_ROW][1] != "-1"){
        ui->highscorePageTornadoValueLabel->setText(QString::fromStdString(highscoresTableData[TORNADO_ROW][1]));
    }
    else {
        ui->highscorePageTornadoValueLabel->setText("N/A");
    }
}

void MainWindow::displayRunLog(){
    /* Run Log csv entry layout
     *
     * Disaster Type, Survival Time, Cause of Death
     *
     * */
    ui->runLogListWidget->clear();
    QFile runLogReadFile(HighscoresSingleton::RUN_LOG_RELATIVE_FILE_PATH);
    if (!runLogReadFile.open(QIODevice::ReadOnly | QIODevice::Text)) { std::cerr << "Could not open run_log.csv file for reading!" << std::endl; return; }
    QTextStream in(&runLogReadFile);
    QString line;
    std::vector<QListWidgetItem*> itemList;
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList fields = line.split(",");
        QString disasterType = fields[0], survivalTime = fields[1], cause_of_death = fields[2];
        QListWidgetItem *item = new QListWidgetItem("[Disaster: " + disasterType + "], [Survival Time (seconds): " + survivalTime + "], [" + cause_of_death + "]");
        itemList.push_back(item);
    }
    std::reverse(itemList.begin(), itemList.end());
    for (QListWidgetItem *item : itemList){
        ui->runLogListWidget->addItem(item);
    }

    runLogReadFile.close();
}

void MainWindow::on_clearRunLogButton_clicked()
{
    HighscoresSingleton *highscoresSingleton = HighscoresSingleton::getInstance();
    highscoresSingleton->clearRunLog();
    displayRunLog();
}

void MainWindow::on_tutorialButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_tutorialPageBackToMainMenuButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
