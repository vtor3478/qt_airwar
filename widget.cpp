#include "widget.h"
#include "config.h"
#include <QIcon>
#include <QPainter>
#include <QDebug>
#include <ctime>
#include <QSound>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setMouseTracking(true);
    // 绘制场景
    InitScene();
    // 启动游戏
    PlayGame();

}

void Widget::InitScene()
{
    //resize(400,800);
    //设置窗口尺寸及标题图标
    setFixedSize(GAME_WIDTH, GAME_HEIGHT);
    setWindowTitle(GAME_TITLE);
    setWindowIcon(QIcon(GAME_ICON));

    //定时器设置
    runTimer.setInterval(GAME_INTERVAL);

    //时间随机种子
    srand((unsigned int)time(NULL));
}
void Widget::PlayGame()
{
    //bgm
    //QSound *bgm = new QSound(SOUND_BGM, this);
    //bgm->setLoops(-1);
    //bgm->play();

    //启动定时器
    runTimer.start();

    connect(&runTimer, &QTimer::timeout, [=](){
        //是否停止
        //CheckStop();

        //更新坐标数值
        updatePosition();

        //检测碰撞
        CheckHit();

        //更新绘制
        update();
    });
}

void Widget::CheckHit()
{
    // 检测子弹碰撞
    for (int i=0; i< BULLET_NUM; i++)
    {
        if (heroPlane.bullet[i].pos != QPoint(0,0))
        {
            for (int j = 0;j < ENEMY1_NUM;j ++)
            {
                if (enemy[j].pos != QPoint(0,0))
                {
                    if (1 == heroPlane.bullet[i].rect.intersects(enemy[j].rect))
                    {
                        heroPlane.bullet[i].pos = QPoint(0,0);
                        enemy[j].Create();
                        heroPlane.kill_cnt += 1;
                        //QSound::play(SOUND_BOMB);
                        break;
                    }
                }
            }
        }
    }
}

void Widget::updatePosition()
{
    map.UpdatePosition();
    heroPlane.UpdatePosition();
    for (int i = 0;i < ENEMY1_NUM;i ++) {
        enemy[i].UpdatePosition();
    }

}

void Widget::mousePressEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton)
    {
        heroPlane.Fire();
    }
    else if (event->buttons() & Qt::RightButton)
    {
        heroPlane.Launch();
    }
}

void Widget::keyPressEvent(QKeyEvent *event)
{
    QString key_text = event->text();
    if (key_text == 'q')
    {
        heroPlane.Fire();
    }
    else if (key_text == "w") {
        heroPlane.Launch();
    }
}

void Widget::mouseMoveEvent(QMouseEvent *event)
{
    heroPlane.pos = event->pos() - QPoint(heroPlane.rect.width() / 2,heroPlane.rect.height() / 2);
}

void Widget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    //painter.drawPixmap(0,0,QPixmap("./img/background.png"));
    map.paint(&painter);
    //painter.drawPixmap(map.pos,map.pixmap);
    heroPlane.paint(&painter);
    //painter.drawPixmap(heroPlane.pos,heroPlane.pixmap);
    for (int i = 0;i < ENEMY1_NUM;i ++)
    {
        if (enemy[i].pos != QPoint(0,0))
        {
            //QString str = QString("enemy[%1]").arg(i);
            //painter.drawText(enemy[i].pos,str);
            enemy[i].paint(&painter);
        }
    }
}

Widget::~Widget()
{
}

