#ifndef MAP_H
#define MAP_H
#include <QPoint>
#include <QPixmap>
#include <QPainter>

#include "config.h"

class Map
{
public:
    Map();
    QPoint pos;
    QPixmap pixmap;

    void UpdatePosition();
    void paint(QPainter *painter);
};

#endif // MAP_H
