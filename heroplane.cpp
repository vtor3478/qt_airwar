#include "heroplane.h"

HeroPlane::HeroPlane()
{
    // 初始化飞机出场位置
    pixmap.load(HERO_PATH);
    pos = QPoint((GAME_WIDTH - pixmap.width())/ 2,GAME_HEIGHT - pixmap.height());

    rect.setSize(pixmap.size());
    rect.moveTo(pos);
    for (int i=0; i< BULLET_NUM; i++)
    {
        bullet[i].pos = QPoint(0,0);
        bullet[i].speed = QPoint(0,-10);
        bullet[i].setPixmap(BULLET_PATH);
    }
    for (int i=0; i< MISSILE_NUM; i++)
    {
        missile[i] = QPoint(0,0);
    }
}

void HeroPlane::UpdatePosition()
{
    // 更新机体的rect位置
    rect.moveTo(pos);
    // 更新子弹位置
    for (int i=0; i< BULLET_NUM; i++)
    {
        bullet[i].UpdatePosition();
    }
}


void HeroPlane::paint(QPainter *painter)
{
    // 绘制机身
    painter->drawPixmap(pos,pixmap);
    painter->drawRect(rect);
    // 绘制子弹
    for (int i=0; i< BULLET_NUM; i++)
    {
        if (bullet[i].pos != QPoint(0,0))
        {
            bullet[i].paint(painter);
        }
    }
    // 绘制分数
    QString str = "fire_cnt" + QString::number(fire_cnt) + "\n";
    str += "kill_cnt" + QString::number(kill_cnt) + "\n";
    str += "kill_cnt" + QString::number(kill_cnt) + "\n";
    str += "kill_cnt" + QString::number(kill_cnt) + "\n";
    //str.replace("\\n","\n");
    painter->drawText(100,200,str);

}

void HeroPlane::Fire()
{
    for (int i=0; i< BULLET_NUM; i++)
    {
        if (bullet[i].pos == QPoint(0,0))
        {
            fire_cnt += 1;
            bullet[i].pos = pos + QPoint(rect.width()/2 - bullet[i].rect.width() / 2,0);
            break;
        }
    }
}

void HeroPlane::Launch()
{
    for (int i=0; i< MISSILE_NUM; i++)
    {
        if (missile[i] == QPoint(0,0))
        {
            missile[i] = pos + QPoint(rect.width()/2,0);
            break;
        }
    }
}


