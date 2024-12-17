#include "selectorscreen.h"

SelectorScreen::SelectorScreen(QWidget *parent)
    : QWidget(parent)
{

}

void SelectorScreen::showScreen(const SCREEN &scr){
    MainWindow *mainwindow = qobject_cast<MainWindow*>(parentWidget()->parentWidget());
       if (mainwindow != nullptr) {
           retryCounter_ = 0;
           mainwindow->openScreen(scr);
       }
}
