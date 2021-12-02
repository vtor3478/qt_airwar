#include "map.h"

Map::Map()
{
    pixmap.load(MAP_PATH);
}

void Map::paint(QPainter *painter)
{
    painter->drawPixmap(pos,pixmap);
}

void Map::UpdatePosition()
{
    pos += QPoint(0,1);
    if (pos.y() >= 500)
        pos = QPoint(0,0);
}

