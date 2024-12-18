#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>

//#include "screen/s_homebase.h"
//#include "screen/s_menu.h"
#include "s_homebase.h"
#include "s_menu.h"

struct ColorText
{
    QString text;
    QColor color;
};

void MainWindow::startScreen (const int& indx) {
    // stopIdleTimer();
    // stopMovie();
    ui->stackedWidget->setCurrentIndex(indx);
    switch(indx) {
    case static_cast<int>(SCREEN::HOMEBASE):
        s_homebase->startScreen();
        break;
    case static_cast<int>(SCREEN::MENU):
        s_menu->startScreen();
        break;
    }
}

void MainWindow::openScreen (const SCREEN& currScr) {
     int indx = static_cast<int>(currScr);
    // if (indx < 0 || indx >= MAXSCREEN) return;
    // if (scrPrevious_ != scrCurrent_)
    //     scrPrevious_ = scrCurrent_;
    // if (scrCurrent_ != currScr)
    //     scrCurrent_ = currScr;
    startScreen (indx);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , scrCurrent_(SCREEN::HOMEBASE)
    , scrPrevious_(SCREEN::MENU)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowFullScreen);
        // this->setWindowFlags(Qt::CustomizeWindowHint | Qt::FramelessWindowHint);
        this->setCentralWidget(ui->stackedWidget);

        int m_iWidth = 300;//controller_->GetWindowConfigWidth(); //ambil dari config
        int m_iHeight = 220;//system()->GetWindowConfigHeight(); //ambil dari config

        s_homebase = new S_HomeBase(this);
        s_menu = new S_Menu(this);
        ui->stackedWidget->insertWidget(static_cast<int>(SCREEN::HOMEBASE), s_homebase);
        ui->stackedWidget->insertWidget(static_cast<int>(SCREEN::MENU), s_menu);

        openScreen(SCREEN::MENU);

        QFile file("myFile.txt");
        if (file.open(QIODevice::WriteOnly)) {
            file.write("Hello, WebAssembly!");
            file.close();
        }
}



MainWindow::~MainWindow()
{
    delete ui;
}

