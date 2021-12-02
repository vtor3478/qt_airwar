#ifndef HEROPLANE_H
#define HEROPLANE_H
#include "config.h"
#include <QPoint>
#include <QPixmap>
#include <QPainter>
#include <math.h>
#include <QSound>
#include <bullet.h>

class HeroPlane
{
public:
    HeroPlane();

    QPoint pos;
    QPixmap pixmap;
    void paint(QPainter *);

    QRect rect;

    Bullet bullet[BULLET_NUM];
    QPoint missile[MISSILE_NUM];
    QPoint missile_dst;

    int fire_cnt;
    int kill_cnt;

    void UpdatePosition();
    void Fire();
    void Launch();
};

#endif // HEROPLANE_H
