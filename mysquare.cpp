#include "mysquare.h"

MySquare::MySquare()
{
    pressed = false;
    setFlag(ItemIsMovable);
}

void MySquare::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    QRectF rec = boundingRect();
    QBrush brush = QBrush(nullptr);

    if(pressed){
        brush.setColor(Qt::red);
    } else {
        brush.setColor(Qt::blue);
    }

    painter->fillRect(rec, brush);
    painter->drawRect(rec);
}

QRectF MySquare::boundingRect() const
{
    return QRectF(0, 0, 100, 100);
}

void MySquare::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    pressed = true;
    update();
    QGraphicsItem::mousePressEvent(event);
}

void MySquare::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    pressed = false;
    update();
    QGraphicsItem::mouseReleaseEvent(event);
}
