#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mysquare.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMainWindow>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    QGraphicsScene *scene;
    QGraphicsView *view;
    MySquare *mysquare;
};

#endif // MAINWINDOW_H
