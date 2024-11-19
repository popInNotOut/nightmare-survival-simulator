#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_playGameButton_clicked();

    void on_highscoresButton_clicked();

    void on_highscorePageBackToMainMenuButton_clicked();

    void on_clearHighscoresButton_clicked();

    void on_clearRunLogButton_clicked();

    void on_tutorialPageBackToMainMenuButton_clicked();

    void on_tutorialButton_clicked();

    void on_musicCheckBox_stateChanged(int arg1);

private:
    Ui::MainWindow *ui;
    void displayHighscores(), displayRunLog();
    void initMusic(), startBackgroundMusic(), stopBackgroundMusic();
    QMediaPlayer *mainWindowBackgroundMediaPlayer;
    QAudioOutput *mainWindowBackgroundAudioOutput;
};
#endif // MAINWINDOW_H
