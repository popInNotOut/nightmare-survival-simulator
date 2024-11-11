#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QLabel>
#include <QPushButton>
#include <iostream>
#include <QPixMap>

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

