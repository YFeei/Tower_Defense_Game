#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QList>
namespace Ui {
class MainWindow;
}
class QMovie;
class Turret;
class Enemy;
class Bullet;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int wave;
    int current_wave;    //还没想好
    int money;
    int maxHp;
    int currentHp;
    QList<Turret*> turret_list;       //炮塔数据列表
    QList<Enemy*> ememy_list;         //敌人数据列表
    QList<Bullet*> bullet_list;       //子弹数据列表

    QPixmap sprite;     //图片文件，不止，先写着

    void remove_enemy(Enemy* enemy);  //除去敌人
    void remove_turret(Turret* turret);//除去炮塔
    void remove_bullet(Bullet* bullet);//除去子弹
    void add_turret();   //参数未定
    void add_enemy();    //同上
    void add_bullet();   //同上
    void checkHp();      //检查敌人是否到达终点，同时扣血
    void win();
    void lose();
    void earn_money(int money);
    void pay_money(int money);

    void game_start();    //一关游戏的开始，参数为第几关
    void fast_game();     //二倍速游戏
    void Pause();         //游戏暂停
    void MapUpdate();     //
private slots:

private:
    Ui::MainWindow *ui;
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // MAINWINDOW_H
