#ifndef BULLET_H
#define BULLET_H
#include <QObject>
#include <QPoint>
class Enemy;
class Turret;
class Bullet
{
public:
    Bullet();
    ~Bullet();
    void move();
    void hitTarget();
private:
    QPoint pos;               //子弹位置
    int type;                 //子弹类型
    int power;                //子弹威力
    int movespeed;            //子弹移动速度
    Enemy *current_enemy;     //子弹目标敌人
    Turret *current_turret;   //子弹目标炮塔

    QPixmap sprite;     //图片文件

private slots:

protected:
};

#endif // BULLET_H
