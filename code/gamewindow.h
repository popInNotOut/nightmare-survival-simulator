#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <QPixMap>
#include <QGridLayout>
#include <QKeyEvent>
#include "objects.h"

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

    void on_resetButton_clicked();

    void on_finishButton_clicked();

private:
    Ui::GameWindow *ui;
    QPixmap grassPic, woodPic, cobblestonePic, concretePic; QPixmap playerPic, robberPic, terroristPic; QPixmap floodPic, wildfirePic, tornadoPic;
    QPixmap leftArrowKeyPic, rightArrowKeyPic, downArrowKeyPic, upArrowKeyPic;
    EntityFacade *gameState;
    void init(), initGridCellsForBuildingGrid(), initGridCellsForSimulationGrid(), updateGridToMatchGameState(QGridLayout *selectedGrid), gridButtonClickedEvent(int r, int c);
    void keyPressEvent(QKeyEvent *e) override, keyReleaseEvent(QKeyEvent *e) override;
};

#endif // GAMEWINDOW_H
