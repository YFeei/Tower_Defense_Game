#ifndef ENEMY_H
#define ENEMY_H
#include <queue>
#include <QObject>
#include <QPoint>
class Turret;
class Enemy
{
public:
    Enemy();
    ~Enemy();
    void setHp(int hurt);
    void move();
    void check_turret();
    void chose_turret();
    void attack();
    QPoint getPos();
private:
    int maxHp;              //最大血量
    int currentHp;          //当前血量
    int movespeed;          //移动速度，每帧移动距离
    int type;               //敌人类型
    int range;              //敌人攻击范围
    int firerate;           //敌人攻击频率
    QPoint pos;             //敌人位置
    Turret *current_turret; //当前攻击炮塔
    std::priority_queue<Turret*> turret_list;    //攻击范围内炮塔列表

    QPixmap sprite;     //图片文件
private slots:

protected:
};

#endif // ENEMY_H
