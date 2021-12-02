#ifndef BULLET_H
#define BULLET_H
#include <QPixmap>
#include <QRect>
#include <QPainter>
#include "config.h"


class Bullet
{
public:
    Bullet();
    Bullet(QPixmap pixmap);
    QPixmap pixmap;
    void UpdatePosition();
    void setPixmap(QString pixmap_path);
    void setSpeed(QPoint spd);
    void paint(QPainter *painter);
    QRect rect;
    QPoint pos;
    QPoint speed;
};

#endif // BULLET_H
