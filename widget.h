#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTimer>
#include <QMouseEvent>
#include <QKeyEvent>
#include <heroplane.h>
#include <map.h>
#include <enemy.h>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void paintEvent(QPaintEvent *) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void updatePosition();
    void CheckHit();

    int Distance(QPoint p1,QPoint p2);

    Map map;


private:
    void InitScene();
    void PlayGame();
    QTimer runTimer;
    HeroPlane heroPlane;
    Enemy enemy[ENEMY1_NUM];
};
#endif // WIDGET_H
