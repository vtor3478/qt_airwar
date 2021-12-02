#ifndef CONFIG_H
#define CONFIG_H

/********** 游戏配置数据 **********/
#define GAME_WIDTH 400 //屏宽
#define GAME_HEIGHT 800 //屏高
#define GAME_TITLE "飞机大战" //标题
#define GAME_RCC "./plane.rcc" //二进制资源路径
#define GAME_ICON ":/images/life.png" //图标
#define GAME_INTERVAL 10 //定时器间隔

/********** 音效配置数据 **********/
#define SOUND_BGM ":/images/background.wav"
#define SOUND_BOMB ":/images/down.wav"

/********** 地图配置数据 **********/
#define MAP_PATH ":/images/background.png" //地图路径
//#define MAP_PATH "E:/qt/airwar2/img/background.png" //地图路径
#define MAP_SCROLL_SPEED 1 //地图滚动幅度

/********** 飞机配置数据 **********/
#define HERO_PATH ":/images/me1.png" //英雄飞机路径
#define HERO_PATH2 ":/images/me2.png" //英雄飞机路径2
#define HERO_PIC_CYCLE 40 //图像切换周期
#define HERO_RECT 20 //飞机边框减小参数
#define HERO_LIFE 3 //生命
#define HERO_TIME 600 //爆炸至重生总时间
#define HERO_DOWN_TIME 100 //爆炸时间
#define HERO_DOWN_INTERVAL 10 //爆炸图片间隔
#define HERO_DOWN_NUM 4 //爆炸图片数量
#define HERO_DOWN1 ":/images/me_destroy_1.png"
#define HERO_DOWN2 ":/images/me_destroy_2.png"
#define HERO_DOWN3 ":/images/me_destroy_3.png"
#define HERO_DOWN4 ":/images/me_destroy_4.png" //爆炸图片路径



/********** 子弹配置数据 **********/
#define BULLET_PATH ":/images/bullet1.png" //子弹路径
#define BULLET_SPEED 10 //子弹速度
#define MISSILE_NUM 50 //导弹个数
#define BULLET_INTERVAL 8 //子弹发射间隔
#define BULLET_NUM 100 //子弹数量
#define BULLET_SHOOT_PLACE 20 //子弹发射时与机翼的距离
#define BULLET_RELIFE_PLACE 7 //重生时子弹与机翼的距离


/********** 敌机1配置数据 **********/
#define ENEMY1_PATH ":/images/enemy1.png" //敌机1路径
#define ENEMY1_SPEED 5 //敌机1速度
#define ENEMY1_INTERVAL 30 //敌机1出现间隔
#define ENEMY1_NUM 10 //敌机1最大数量
#define ENEMY1_DOWN_INTERVAL 10 //爆炸间隔
#define ENEMY1_DOWN_NUM 4 //图片数量
#define ENEMY1_DOWN1 ":/images/enemy1_down1.png"
#define ENEMY1_DOWN2 ":/images/enemy1_down2.png"
#define ENEMY1_DOWN3 ":/images/enemy1_down3.png"
#define ENEMY1_DOWN4 ":/images/enemy1_down4.png" //爆炸图片路径
/********** 敌机2子弹配置数据 **********/
#define BULLET2_PATH ":/images/bullet2.png" //子弹路径
#define BULLET2_SPEED 6 //子弹速度
#define BULLET2_NUM 5 //子弹数量


/********** 敌机2配置数据 **********/
#define ENEMY2_PATH ":/images/enemy2.png" //敌机2路径
#define ENEMY2_PATH2 ":/images/enemy2_hit.png" //敌机2路径2
#define ENEMY2_CYCLE 90 //图像切换/射击周期
#define ENEMY2_PIC_NUM 2 //正常图片数量
#define ENEMY2_SPEED 2 //敌机2速度
#define ENEMY2_INTERVAL 150 //敌机2出现间隔
#define ENEMY2_NUM 2 //敌机2最大数量
#define ENEMY2_DOWN_INTERVAL 10 //爆炸图片间隔
#define ENEMY2_DOWN_NUM 4 //爆炸图片数量
#define ENEMY2_DOWN1 ":/images/enemy2_down1.png"
#define ENEMY2_DOWN2 ":/images/enemy2_down2.png"
#define ENEMY2_DOWN3 ":/images/enemy2_down3.png"
#define ENEMY2_DOWN4 ":/images/enemy2_down4.png" //爆炸图片路径
#define ENEMY2_LIFE 2 //生命



/********** 敌机3配置数据 **********/
#define ENEMY3_PATH ":/images/enemy3_n1.png" //敌机2路径
#define ENEMY3_PATH2 ":/images/enemy3_n2.png" //敌机2路径2
#define ENEMY3_PATH3 ":/images/enemy3_hit.png" //敌机2路径3
#define ENEMY3_CYCLE 48 //图像切换/射击周期
#define ENEMY3_PIC_NUM 3 //正常图片数量
#define ENEMY3_SPEED 1 //敌机3速度
#define ENEMY3_INTERVAL 1500 //出现间隔
#define ENEMY3_DOWN_INTERVAL 10 //爆炸图片间隔
#define ENEMY3_DOWN_NUM 6 //爆炸图片数量
#define ENEMY3_DOWN1 ":/images/enemy3_down1.png"
#define ENEMY3_DOWN2 ":/images/enemy3_down2.png"
#define ENEMY3_DOWN3 ":/images/enemy3_down3.png"
#define ENEMY3_DOWN4 ":/images/enemy3_down4.png"
#define ENEMY3_DOWN5 ":/images/enemy3_down5.png"
#define ENEMY3_DOWN6 ":/images/enemy3_down6.png" //爆炸图片路径
#define ENEMY3_MOVE_PLACE 30 //移动时距屏幕边的距离
#define ENEMY3_MOVE_TOP 5 //移动时距屏幕顶的距离
#define ENEMY3_STOP_INTERVAL 100 //停顿间隔
#define ENEMY3_LIFE 150 //生命
#define ENEMY3_RECT 20 //飞机边框减小参数

/********** 敌机3舰载机配置数据 **********/
#define BULLET3_NUM 3 //数量
#define BULLET3_PLACE 60 //舰载机出现在母舰的位置



#endif // CONFIG_H
