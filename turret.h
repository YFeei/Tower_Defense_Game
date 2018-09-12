#ifndef TURRET_H
#define TURRET_H
#include <queue>
#include <QObject>
#include <QPoint>
class Enemy;
class MainWindow;
class Turret
{
public:
    Turret();
    ~Turret();
    void check_enemy_range();
    void chose_enemy();
    void setHp(int hurt);
    void attack();
    void levelup(int id);
    void repair();
    QPoint getPos();
private:
    int maxHp;       //最大血量
    int currentHp;   //血量
    QPoint pos;      //中点坐标
    int type;        //炮塔类型
    double range;    //炮塔攻击范围
    double radius;   //炮塔所占面积半径
    int power;       //炮塔子弹威力
    int firerate;    //两次攻击时间间隔
    Enemy* current_enemy;     //当前攻击敌人
    std::priority_queue<Enemy*> enemy_list;    //攻击范围内敌人列表

    QPixmap sprite;     //图片文件
    MainWindow *game;



private slots:

protected:

};

#endif // TURRET_H
