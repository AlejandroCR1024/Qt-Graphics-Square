#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setCentralWidget
            (view = new QGraphicsView
            (scene = new QGraphicsScene));

    scene->addItem
            (mysquare = new MySquare());
}

MainWindow::~MainWindow()
{

}
