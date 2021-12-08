#include "bullet.h"

Bullet::Bullet()
{

}
void Bullet::setSpeed(QPoint spd)
{
    speed = spd;
}
void Bullet::setPixmap(QString pixmap_path)
{
    pixmap.load(pixmap_path);
    rect.setSize(pixmap.size());
}

void Bullet::UpdatePosition()
{
    if (pos != QPoint(0,0))
    {
        pos += speed;
        // 超出范围就回收子弹
        if (pos.y() < 0 || GAME_HEIGHT < pos.y())
            pos = QPoint(0,0);
        rect.moveTo(pos);
    }
}

void Bullet::paint(QPainter *painter)
{
    // 是否绘画子弹，留给子弹本身进行判断
    if (pos != QPoint(0,0))
    {
        //painter->drawText(pos,"b");
        painter->drawRect(rect);
        painter->drawPixmap(pos,pixmap);
    }
}

