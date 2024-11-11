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

    void on_grassCheckBox_stateChanged(int arg1);

    void on_woodCheckBox_stateChanged(int arg1);

    void on_cobblestoneCheckBox_stateChanged(int arg1);

    void on_concreteCheckBox_stateChanged(int arg1);

    void on_floodCheckBox_stateChanged(int arg1);

    void on_wildfireCheckBox_stateChanged(int arg1);

    void on_tornadoCheckBox_stateChanged(int arg1);

private:
    Ui::GameWindow *ui;
    void *gridCells[15][15];
    void setUpGrid();
    QWidget *mainMenuWidget;
    int budget;
};

#endif // GAMEWINDOW_H
