#ifndef SELECTORSCREEN_H
#define SELECTORSCREEN_H

#include "mainwindow.h"
#include <QWidget>

class SelectorScreen : public QWidget
{
    Q_OBJECT
public:
    SelectorScreen(QWidget *parent = nullptr);
protected:
    void showScreen(const SCREEN& scr);
    int retryCounter_;
};

#endif // SELECTORSCREEN_H
