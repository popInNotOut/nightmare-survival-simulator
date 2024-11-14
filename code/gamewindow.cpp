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
    leftArrowKeyPic = (QPixmap(QString::fromStdString(":/img/img/leftArrowKey.png")));
    rightArrowKeyPic = (QPixmap(QString::fromStdString(":/img/img/rightArrowKey.png")));
    downArrowKeyPic = (QPixmap(QString::fromStdString(":/img/img/downArrowKey.png")));
    upArrowKeyPic = (QPixmap(QString::fromStdString(":/img/img/upArrowKey.png")));

    gameState = new EntityFacade();
    initGridCellsForBuildingGrid(); gameState->initBuildingPhase(); updateGridToMatchGameState(ui->buildGrid);

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

void GameWindow::initGridCellsForBuildingGrid(){
    for (int row = 0; row < gameState->NUM_OF_GRID_ROWS; row++){
        for (int column = 0; column < gameState->NUM_OF_GRID_COLUMNS; column++){
            ui->buildGrid->addWidget(new QPushButton(),row,column);
            connect(qobject_cast<QPushButton*>(ui->buildGrid->itemAtPosition(row,column)->widget()), &QPushButton::clicked, [=](){
                gridButtonClickedEvent(row, column);
            });
        }
    }
}

void GameWindow::initGridCellsForSimulationGrid(){
    for (int row = 0; row < gameState->NUM_OF_GRID_ROWS; row++){
        for (int column = 0; column < gameState->NUM_OF_GRID_COLUMNS; column++){
            ui->simulationGrid->addWidget(new QPushButton(),row,column);
            qobject_cast<QPushButton*>(ui->simulationGrid->itemAtPosition(row,column)->widget())->setFocusPolicy(Qt::NoFocus);
        }
    }
}

void GameWindow::updateGridToMatchGameState(QGridLayout *selectedGrid){
    for (int row = 0; row < gameState->NUM_OF_GRID_ROWS; row++){
        for (int column = 0; column < gameState->NUM_OF_GRID_COLUMNS; column++){
            switch(gameState->getEntityAtCell({row,column})){
                case EntityType::GRASS:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(grassPic));
                    break;
                case EntityType::WOOD:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(woodPic));
                    break;
                case EntityType::COBBLESTONE:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(cobblestonePic));
                    break;
                case EntityType::CONCRETE:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(concretePic));
                    break;
                case EntityType::PLAYER:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(playerPic));
                    break;
                case EntityType::ROBBER:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(robberPic));
                    break;
                case EntityType::TERRORIST:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(terroristPic));
                    break;
                case EntityType::FLOOD:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(floodPic));
                    break;
                case EntityType::WILDFIRE:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(wildfirePic));
                    break;
                case EntityType::TORNADO:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon(tornadoPic));
                    break;
                case EntityType::EMPTY:
                    qobject_cast<QPushButton*>(selectedGrid->itemAtPosition(row,column)->widget())->setIcon(QIcon());
                    break;
            }
        }
    }
}

void GameWindow::gridButtonClickedEvent(int r, int c){
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
    updateGridToMatchGameState(ui->buildGrid);
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
        gameState->setDisasterType(EntityType::FLOOD);
    }
    else {
        gameState->setDisasterType(EntityType::EMPTY);
    }
}

void GameWindow::on_wildfireCheckBox_stateChanged(int arg1)
{
    if (ui->wildfireCheckBox->isChecked()){
        ui->floodCheckBox->setChecked(false);
        ui->tornadoCheckBox->setChecked(false);
        gameState->setDisasterType(EntityType::WILDFIRE);
    }
    else {
        gameState->setDisasterType(EntityType::EMPTY);
    }
}


void GameWindow::on_tornadoCheckBox_stateChanged(int arg1)
{
    if (ui->tornadoCheckBox->isChecked()){
        ui->floodCheckBox->setChecked(false);
        ui->wildfireCheckBox->setChecked(false);
        gameState->setDisasterType(EntityType::TORNADO);
    }
    else {
        gameState->setDisasterType(EntityType::EMPTY);
    }
}

void GameWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->isAutoRepeat()) return;
    if (event->key() == Qt::Key_Left){
        ui->rightArrowKeyLabel->hide();
        ui->downArrowKeyLabel->hide();
        ui->upArrowKeyLabel->hide();
    }
    else if (event->key() == Qt::Key_Right){
        ui->leftArrowKeyLabel->hide();
        ui->downArrowKeyLabel->hide();
        ui->upArrowKeyLabel->hide();
    }
    else if (event->key() == Qt::Key_Down){
        ui->leftArrowKeyLabel->hide();
        ui->rightArrowKeyLabel->hide();
        ui->upArrowKeyLabel->hide();
    }
    else if (event->key() == Qt::Key_Up){
        ui->leftArrowKeyLabel->hide();
        ui->rightArrowKeyLabel->hide();
        ui->downArrowKeyLabel->hide();
    }
    updateGridToMatchGameState(ui->simulationGrid);
}

void GameWindow::keyReleaseEvent(QKeyEvent *event)
{
    if (event->isAutoRepeat()) return;
    if (event->key() == Qt::Key_Left){
        gameState->movePlayer(0,-1);
        ui->rightArrowKeyLabel->show();
        ui->downArrowKeyLabel->show();
        ui->upArrowKeyLabel->show();
    }
    else if (event->key() == Qt::Key_Right){
        gameState->movePlayer(0,1);
        ui->leftArrowKeyLabel->show();
        ui->downArrowKeyLabel->show();
        ui->upArrowKeyLabel->show();
    }
    else if (event->key() == Qt::Key_Down){
        gameState->movePlayer(1,0);
        ui->leftArrowKeyLabel->show();
        ui->rightArrowKeyLabel->show();
        ui->upArrowKeyLabel->show();
    }
    else if (event->key() == Qt::Key_Up){
        gameState->movePlayer(-1,0);
        ui->leftArrowKeyLabel->show();
        ui->rightArrowKeyLabel->show();
        ui->downArrowKeyLabel->show();
    }
    if (gameState->gameOver()){
        gameOverTransition();
        return;
    }
    updateGridToMatchGameState(ui->simulationGrid);
}


void GameWindow::on_resetButton_clicked()
{
    ui->grassCheckBox->setChecked(false);
    ui->woodCheckBox->setChecked(false);
    ui->cobblestoneCheckBox->setChecked(false);
    ui->concreteCheckBox->setChecked(false);
    ui->floodCheckBox->setChecked(false);
    ui->wildfireCheckBox->setChecked(false);
    ui->tornadoCheckBox->setChecked(false);
    gameState->initBuildingPhase();
    gameState->setBudget(100);
    updateGridToMatchGameState(ui->buildGrid);
    ui->budgetLabel->setText(QString::fromStdString("Budget = " + std::to_string(gameState->getBudget())));
}

void GameWindow::on_finishButton_clicked()
{
    if (gameState->getDisasterType() == EntityType::EMPTY){
        QMessageBox::warning(this,"Finish Build Phase Error","You did not select a disaster");
        return;
    }

    ui->stackedWidget->setCurrentIndex(1);

    int w = ui->leftArrowKeyLabel->width(), h = ui->leftArrowKeyLabel->height();
    ui->leftArrowKeyLabel->setPixmap(leftArrowKeyPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->rightArrowKeyLabel->setPixmap(rightArrowKeyPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->downArrowKeyLabel->setPixmap(downArrowKeyPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->upArrowKeyLabel->setPixmap(upArrowKeyPic.scaled(w,h,Qt::KeepAspectRatio));
    w = ui->playerImageLabel->width(); h = ui->playerImageLabel->height();
    ui->playerImageLabel->setPixmap(playerPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->robberImageLabel->setPixmap(robberPic.scaled(w,h,Qt::KeepAspectRatio));
    ui->terroristImageLabel->setPixmap(terroristPic.scaled(w,h,Qt::KeepAspectRatio));
    if (gameState->getDisasterType() == EntityType::FLOOD) ui->disasterImageLabel->setPixmap(floodPic.scaled(w,h,Qt::KeepAspectRatio));
    else if (gameState->getDisasterType() == EntityType::WILDFIRE) ui->disasterImageLabel->setPixmap(wildfirePic.scaled(w,h,Qt::KeepAspectRatio));
    else if (gameState->getDisasterType() == EntityType::TORNADO) ui->disasterImageLabel->setPixmap(tornadoPic.scaled(w,h,Qt::KeepAspectRatio));

    initGridCellsForSimulationGrid(); gameState->initSimulationPhase(); updateGridToMatchGameState(ui->simulationGrid);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timeoutFunction()));
    timer->start(gameState->getEnemyMoveSpeedInMilliseconds());

    survivalTimeTimer = new QTimer(this); survivalTimeValueTimer = new QElapsedTimer();
    connect(survivalTimeTimer, SIGNAL(timeout()), this, SLOT(updateSurvivalTimeFunction()));
    survivalTimeTimer->start(1); survivalTimeValueTimer->start();
}

void GameWindow::timeoutFunction()
{
    gameState->moveEnemy();
    if (gameState->gameOver()){
        gameOverTransition();
        return;
    }
    updateGridToMatchGameState(ui->simulationGrid);
    timer->setInterval(gameState->getEnemyMoveSpeedInMilliseconds());
}

void GameWindow::updateSurvivalTimeFunction()
{
    ui->survivalTimeLabel->setText(QString::fromStdString(std::to_string(survivalTimeValueTimer->elapsed()/1000.0)));
}

void GameWindow::gameOverTransition(){
    timer->stop(); survivedTimeInSeconds = survivalTimeValueTimer->elapsed()/1000.0; survivalTimeTimer->stop();
    ui->stackedWidget->setCurrentIndex(2);
    ui->causeOfDeathLabel->setText(QString::fromStdString(gameState->getCauseOfDeath()));
    ui->gameOverSurvivalTimeLabel->setText(QString::fromStdString("Survival time: " + std::to_string(survivedTimeInSeconds) + " seconds"));
}


void GameWindow::on_gameOverPageBackToMainMenuButton_clicked()
{
    hide();
}

