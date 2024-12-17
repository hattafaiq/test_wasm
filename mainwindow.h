#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define MAXSCREEN 10

class S_HomeBase;
class S_Menu;

enum class SCREEN
{
    HOMEBASE = 0,
    MENU = 1
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void openScreen(const SCREEN& currScr);
    void startScreen(const int& indx);

private:
    Ui::MainWindow *ui;
    S_HomeBase *s_homebase;
    S_Menu *s_menu;

    SCREEN scrCurrent_;
    SCREEN scrPrevious_;
};
#endif // MAINWINDOW_H
