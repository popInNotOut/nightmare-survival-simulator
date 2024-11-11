#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QLabel>
#include <QPushButton>
#include <iostream>
#include <QPixMap>
#include <QString>
#include <string>

GameWindow::GameWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Game Window");
    mainMenuWidget = parent;
    setUpGrid();
}

void GameWindow::setUpGrid(){
    for (int i = 0; i < 15; i++) for (int j = 0; j < 15; j++) gridCells[i][j] = nullptr;
    for (int row = 0; row < 15; row++){
        for (int column = 0; column < 15; column++){
            if (gridCells[row][column] == nullptr){
                ui->grid->addWidget(new QPushButton(),row,column);
            }
        }
    }
    QPixmap playerPic(":/img/img/player.png");
    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(7,7)->widget())->setIcon(QIcon(playerPic));
    int w = ui->floodImageLabel->width(), h = ui->floodImageLabel->height();
    QPixmap floodPic(":/img/img/flood.jpg"), wildfirePic(":/img/img/wildfire.jpg"), tornadoPic(":/img/img/tornado.jpg");
    ui->floodImageLabel->setPixmap(floodPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->wildfireImageLabel->setPixmap(wildfirePic.scaled(w,h,Qt::KeepAspectRatio));
    ui->tornadoImageLabel->setPixmap(tornadoPic.scaled(w,h,Qt::KeepAspectRatio));
    QPixmap grassPic(":/img/img/grassBlock.png"), woodPic(":/img/img/woodBlock.png"), cobblestonePic(":/img/img/cobblestoneBlock.png"), concretePic(":/img/img/concreteBlock.png");
    w = ui->grassImageLabel->width(); h = ui->grassImageLabel->height();
    ui->grassImageLabel->setPixmap(grassPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->woodImageLabel->setPixmap(woodPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->cobblestoneImageLabel->setPixmap(cobblestonePic.scaled(w,h,Qt::KeepAspectRatio));
    ui->concreteImageLabel->setPixmap(concretePic.scaled(w,h,Qt::KeepAspectRatio));
    budget = 100;
    ui->budgetLabel->setText(QString::fromStdString("Budget = " + std::to_string(budget)));
}

GameWindow::~GameWindow()
{
    std::cout << "Deleting GameWindow" << std::endl;
    delete ui;
}

void GameWindow::on_backToMainMenuButton_clicked()
{
    hide();
}


void GameWindow::on_grassCheckBox_stateChanged(int arg1)
{
    if (ui->grassCheckBox->isChecked()){
        ui->woodCheckBox->setChecked(false);
        ui->cobblestoneCheckBox->setChecked(false);
        ui->concreteCheckBox->setChecked(false);
    }
}

void GameWindow::on_woodCheckBox_stateChanged(int arg1)
{
    if (ui->woodCheckBox->isChecked()){
        ui->grassCheckBox->setChecked(false);
        ui->cobblestoneCheckBox->setChecked(false);
        ui->concreteCheckBox->setChecked(false);
    }
}

void GameWindow::on_cobblestoneCheckBox_stateChanged(int arg1)
{
    if (ui->cobblestoneCheckBox->isChecked()){
        ui->grassCheckBox->setChecked(false);
        ui->woodCheckBox->setChecked(false);
        ui->concreteCheckBox->setChecked(false);
    }
}

void GameWindow::on_concreteCheckBox_stateChanged(int arg1)
{
    if (ui->concreteCheckBox->isChecked()){
        ui->grassCheckBox->setChecked(false);
        ui->woodCheckBox->setChecked(false);
        ui->cobblestoneCheckBox->setChecked(false);
    }
}

void GameWindow::on_floodCheckBox_stateChanged(int arg1)
{
    if (ui->floodCheckBox->isChecked()){
        ui->wildfireCheckBox->setChecked(false);
        ui->tornadoCheckBox->setChecked(false);
    }
}

void GameWindow::on_wildfireCheckBox_stateChanged(int arg1)
{
    if (ui->wildfireCheckBox->isChecked()){
        ui->floodCheckBox->setChecked(false);
        ui->tornadoCheckBox->setChecked(false);
    }
}


void GameWindow::on_tornadoCheckBox_stateChanged(int arg1)
{
    if (ui->tornadoCheckBox->isChecked()){
        ui->floodCheckBox->setChecked(false);
        ui->wildfireCheckBox->setChecked(false);
    }
}

