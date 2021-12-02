#ifndef ENEMY_H
#define ENEMY_H
#include "config.h"
#include <QPoint>
#include <QPixmap>
#include <QPainter>
#include <math.h>
#include <bullet.h>

class Enemy
{
public:
    Enemy();

    QPoint pos;
    QPoint speed;
    QPixmap pixmap;
    QPixmap bullet_pixmap;
    void paint(QPainter *);

    QRect rect;

    Bullet bullet[BULLET2_NUM];


    void Create();
    void UpdatePosition();
    void Fire();
};

#endif // ENEMY_H
