#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QLabel>
#include <QPushButton>
#include <iostream>
#include <QPixMap>
#include <QString>
#include <string>
#include <QMessageBox>

GameWindow::GameWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Game Window");
    init();
}

GameWindow::~GameWindow()
{
    std::cout << "Deleting GameWindow" << std::endl;
    delete ui;
}

void GameWindow::init(){
    grassPic = (QPixmap(QString::fromStdString(GrassBlock::GRASS_BLOCK_IMG_RELATIVE_FILE_PATH)));
    woodPic = (QPixmap(QString::fromStdString(WoodBlock::WOOD_BLOCK_IMG_RELATIVE_FILE_PATH)));
    cobblestonePic = (QPixmap(QString::fromStdString(CobblestoneBlock::COBBLESTONE_BLOCK_IMG_RELATIVE_FILE_PATH)));
    concretePic = (QPixmap(QString::fromStdString(ConcreteBlock::CONCRETE_BLOCK_IMG_RELATIVE_FILE_PATH)));
    playerPic = QPixmap(QString::fromStdString(Player::PLAYER_IMG_RELATIVE_FILE_PATH));
    robberPic = QPixmap(QString::fromStdString(Robber::ROBBER_IMG_RELATIVE_FILE_PATH));
    terroristPic = QPixmap(QString::fromStdString(Terrorist::TERRORIST_IMG_RELATIVE_FILE_PATH));
    floodPic = (QPixmap(QString::fromStdString(Flood::FLOOD_IMG_RELATIVE_FILE_PATH)));
    wildfirePic = (QPixmap(QString::fromStdString(Wildfire::WILDFIRE_IMG_RELATIVE_FILE_PATH)));
    tornadoPic = (QPixmap(QString::fromStdString(Tornado::TORNADO_IMG_RELATIVE_FILE_PATH)));

    gameState = new EntityFacade(); gameState->initBuildingPhase();
    initGridCells(); updateGridToMatchGameState();

    int w = ui->floodImageLabel->width(), h = ui->floodImageLabel->height();
    ui->floodImageLabel->setPixmap(floodPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->wildfireImageLabel->setPixmap(wildfirePic.scaled(w,h,Qt::KeepAspectRatio));
    ui->tornadoImageLabel->setPixmap(tornadoPic.scaled(w,h,Qt::KeepAspectRatio));

    w = ui->grassImageLabel->width(); h = ui->grassImageLabel->height();
    ui->grassImageLabel->setPixmap(grassPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->woodImageLabel->setPixmap(woodPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->cobblestoneImageLabel->setPixmap(cobblestonePic.scaled(w,h,Qt::KeepAspectRatio));
    ui->concreteImageLabel->setPixmap(concretePic.scaled(w,h,Qt::KeepAspectRatio));

    ui->budgetLabel->setText(QString::fromStdString("Budget = " + std::to_string(gameState->getBudget())));
}

void GameWindow::initGridCells(){
    for (int row = 0; row < gameState->NUM_OF_GRID_ROWS; row++){
        for (int column = 0; column < gameState->NUM_OF_GRID_COLUMNS; column++){
            ui->grid->addWidget(new QPushButton(),row,column);
            connect(qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget()), &QPushButton::clicked, [=](){
                buttonClickedEvent(row, column);
            });
        }
    }
}

void GameWindow::updateGridToMatchGameState(){
    for (int row = 0; row < gameState->NUM_OF_GRID_ROWS; row++){
        for (int column = 0; column < gameState->NUM_OF_GRID_COLUMNS; column++){
            switch(gameState->getEntityAtCell({row,column})){
                case EntityType::GRASS:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(grassPic));
                    break;
                case EntityType::WOOD:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(woodPic));
                    break;
                case EntityType::COBBLESTONE:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(cobblestonePic));
                    break;
                case EntityType::CONCRETE:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(concretePic));
                    break;
                case EntityType::PLAYER:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(playerPic));
                    break;
                case EntityType::ROBBER:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(robberPic));
                    break;
                case EntityType::TERRORIST:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(terroristPic));
                    break;
                case EntityType::FLOOD:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(floodPic));
                    break;
                case EntityType::WILDFIRE:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(wildfirePic));
                    break;
                case EntityType::TORNADO:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon(tornadoPic));
                    break;
                case EntityType::EMPTY:
                    qobject_cast<QPushButton*>(ui->grid->itemAtPosition(row,column)->widget())->setIcon(QIcon());
                    break;
            }
        }
    }
}

void GameWindow::buttonClickedEvent(int r, int c){
    if (!gameState->isCellEmpty({r,c})){
        QMessageBox::warning(this,"Place Block Error","You cannot place a block there");
        return;
    }
    if (ui->grassCheckBox->isChecked()){
        if (gameState->getBudget() < GrassBlock::GRASS_BLOCK_COST){
            QMessageBox::warning(this,"Place Block Error","You do not have enough money");
            return;
        }
        gameState->updateCell({r,c},EntityType::GRASS);
        gameState->setBudget(gameState->getBudget()-GrassBlock::GRASS_BLOCK_COST);
    }
    else if (ui->woodCheckBox->isChecked()){
        if (gameState->getBudget() < WoodBlock::WOOD_BLOCK_COST){
            QMessageBox::warning(this,"Place Block Error","You do not have enough money");
            return;
        }
        gameState->updateCell({r,c},EntityType::WOOD);
        gameState->setBudget(gameState->getBudget()-WoodBlock::WOOD_BLOCK_COST);
    }
    else if (ui->cobblestoneCheckBox->isChecked()){
        if (gameState->getBudget() < CobblestoneBlock::COBBLESTONE_BLOCK_COST){
            QMessageBox::warning(this,"Place Block Error","You do not have enough money");
            return;
        }
        gameState->updateCell({r,c},EntityType::COBBLESTONE);
        gameState->setBudget(gameState->getBudget()-CobblestoneBlock::COBBLESTONE_BLOCK_COST);
    }
    else if (ui->concreteCheckBox->isChecked()){
        if (gameState->getBudget() < ConcreteBlock::CONCRETE_BLOCK_COST){
            QMessageBox::warning(this,"Place Block Error","You do not have enough money");
            return;
        }
        gameState->updateCell({r,c},EntityType::CONCRETE);
        gameState->setBudget(gameState->getBudget()-ConcreteBlock::CONCRETE_BLOCK_COST);
    }
    else {
        QMessageBox::warning(this,"Place Block Error","You did not select a block");
        return;
    }
    updateGridToMatchGameState();
    ui->budgetLabel->setText(QString::fromStdString("Budget = " + std::to_string(gameState->getBudget())));
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

