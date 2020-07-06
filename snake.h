//snake.h
#ifndef SNAKE_H //如果没定义
#define SNAKE_H //那就定义一个呗
//做蛇要做的事情

#include <deque>
#include "point.h" //需要知道蛇的坐标
#include "food.h"  //需要知道食物信息

class Food;
class Snake //蛇-类的属性
{
public:
    enum Direction
    {
        UP,
        DOWN,
        LEFT,
        RIGHT
    }; //枚举方向

    Snake()
    {
        snake.emplace_back(14, 8);   //蛇
        snake.emplace_back(15, 8);   //的
        snake.emplace_back(16, 8);   //身
        direction = Direction::DOWN; //蛇的初始方向
    }
    void InitSnake(); //画蛇
    void Move();      //移动
    void NormalMove();
    bool OverEdge(); //一些布尔，判断一下蛇的属性的变化
    bool HitItself();
    bool ChangeDirection();
    bool GetFood(const Food &);
    bool GetBigFood(Food &);

private:
    std::deque<Point> snake;
    Direction direction;
    friend class Food; //将Food类置为友元，以便访问其私有元素
};
#endif // SNAKE_H