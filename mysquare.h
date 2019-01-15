#ifndef MYSQUARE_H
#define MYSQUARE_H

#include <QDebug>

#include <QPainter>
#include <QGraphicsItem>

class MySquare : public QGraphicsItem
{
public:
    MySquare();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QRectF boundingRect() const;
    bool pressed;


protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);;
};

#endif // MYSQUARE_H
