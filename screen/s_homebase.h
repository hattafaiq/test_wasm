#ifndef S_HOMEBASE_H
#define S_HOMEBASE_H

#include <QWidget>

namespace Ui {
    class S_HomeBase;
}

class S_HomeBase : public QWidget
{
    Q_OBJECT

public:
    explicit S_HomeBase(QWidget *parent = nullptr);
    ~S_HomeBase();
    void startScreen();

protected slots:
    void onBtnLanjut();

private:
  //  Ui::S_HomeBase *ui;
    QWidget *gui;
};

#endif // S_HOMEBASE_H
