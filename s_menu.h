#ifndef S_MENU_H
#define S_MENU_H

#include <QWidget>

namespace Ui {
class S_Menu;
}

class S_Menu : public QWidget
{
    Q_OBJECT

public:
    explicit S_Menu(QWidget *parent = nullptr);
    ~S_Menu();
    void startScreen();

protected slots:
    void onBtnLanjut();

private:
    //Ui::S_Menu *ui;
    QWidget *gui;
};

#endif // S_MENU_H
