#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gamewindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

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

