#include "enemy.h"

Enemy::Enemy()
{
    // 初始化飞机出场位置
    pixmap.load(ENEMY1_PATH);
    bullet_pixmap.load(BULLET2_PATH);

    Create();

    rect.setSize(pixmap.size());
    rect.moveTo(pos);
    for (int i=0; i< BULLET2_NUM; i++)
    {
        bullet[i].pos = QPoint(0,0);
        bullet[i].speed = QPoint(0,2);
        bullet[i].setPixmap(BULLET2_PATH);
    }
}

void Enemy::Create()
{
    pos = QPoint(rand() % (GAME_WIDTH - rect.width()),0);
    speed = QPoint(0,rand() % 3 + 1);
}

void Enemy::UpdatePosition()
{
    // 更新敌机位置信息
    if (pos != QPoint(-1,-1))
    {
        pos += speed;
    }
    if (pos.y() > GAME_HEIGHT)
    {
        Create();
    }
    // 更新机体的rect位置
    rect.moveTo(pos);
    Fire();
    // 更新子弹位置
    for (int i=0; i< BULLET2_NUM; i++)
    {
        bullet[i].UpdatePosition();
    }
}

void Enemy::paint(QPainter *painter)
{
    // 绘制机身（绘画机身时，自行判断是否绘画）
    if (pos != QPoint(-1,-1))
    {
        painter->drawPixmap(pos,pixmap);
        painter->drawRect(rect);
        //painter->drawText(pos,"enemy1");
        // 绘制子弹
        for (int i = 0; i< BULLET2_NUM; i++)
        {
            //painter->drawPixmap(bullet[i].pos,bullet_pixmap);
            bullet[i].paint(painter);
        }
    }
}

void Enemy::Fire()
{
    if (rand() % 1000 > 998)
    {
        for (int i=0; i< BULLET2_NUM; i++)
        {
            if (bullet[i].pos == QPoint(-1,-1))
            {
                bullet[i].setSpeed(QPoint(0,rand() % 5 + 2));
                bullet[i].pos = pos + QPoint(rect.width() / 2 - bullet[i].rect.width() / 2,rect.height());
                break;
            }
        }
    }
}


