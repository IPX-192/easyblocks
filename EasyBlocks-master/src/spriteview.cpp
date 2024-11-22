#include "spriteview.h"

#include <QDebug>
#include <QGraphicsView>
#include <QGraphicsSceneMouseEvent>

SpriteView::SpriteView(Sprite *sprite) : _sprite(sprite)
{
    //是否图片只有缩放，位置，旋转角度几个属性可以改变
    QPixmap pixmap(*(_sprite->getCurrentImage()));
    pixmap = pixmap.scaled(_sprite->getSize());
    setPixmap(pixmap);
    setPos(_sprite->getPosition().x() - _sprite->getSize().width()/2, _sprite->getPosition().y() - _sprite->getSize().height()/2);
    setTransformOriginPoint(_sprite->getSize().width()/2, _sprite->getSize().height()/2);
    setRotation(_sprite->getRotation());
}

void SpriteView::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

    qDebug()<<u8"按下图片";
    QGraphicsPixmapItem::mousePressEvent(event);

    if (event->isAccepted())
        return;
    _sprite->sendSignal(Signal::MOUSECLICKED);
    event->accept();
}
