#include "s_homebase.h"
#include <QDebug>
#include "ui_s_homebase.h"

S_HomeBase::S_HomeBase(QWidget *parent) :
    QWidget(parent)
  //, ui(new Ui::S_HomeBase)
{

   // qDebug()<<"hallo";
    gui = (QWidget *) new Ui::S_HomeBase();
    Ui::S_HomeBase *ui = (Ui::S_HomeBase *)gui;
    ui->setupUi(this);

    connect(ui->pushButton , SIGNAL(clicked()), this, SLOT(onBtnLanjut()));

}

void S_HomeBase::startScreen() {
    qDebug()<<"mulai screen home";
    // QTimer::singleShot(1000, this, SLOT(onProcess()));
}

void S_HomeBase::onBtnLanjut(){

}

S_HomeBase::~S_HomeBase()
{
    //delete ui;
}
