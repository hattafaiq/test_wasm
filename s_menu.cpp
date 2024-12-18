#include "s_menu.h"
#include <QDebug>
#include "ui_s_menu.h"

S_Menu::S_Menu(QWidget *parent)
    : QWidget(parent)
   // , ui(new Ui::S_Menu)
{
    gui = (QWidget *) new Ui::S_Menu();
    Ui::S_Menu *ui = (Ui::S_Menu *) gui;
    ui->setupUi(this);
     connect(ui->pushButton , SIGNAL(clicked()), this, SLOT(onBtnLanjut()));
}

void S_Menu::startScreen() {
    qDebug()<<"mulai screen menu";
    // QTimer::singleShot(1000, this, SLOT(onProcess()));
}

void S_Menu::onBtnLanjut(){
    qDebug()<<"ganti!!";
}

S_Menu::~S_Menu()
{
    //delete ui;
}
