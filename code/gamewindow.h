#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>

namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private slots:
    void on_backToMainMenuButton_clicked();

private:
    Ui::GameWindow *ui;
    void *gridCells[15][15];
    void setUpGrid();
    QWidget *mainMenuWidget;
};

#endif // GAMEWINDOW_H
