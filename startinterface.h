//startinterface.h
#ifndef STRATINTERFACE_H
#define STARTINTERFACE_H

#include <deque>
#include <vector>
#include "point.h"

class StartInterface //初始界面
{
public:
    StartInterface() : speed(50)
    {                                          //调来调去还是觉得50ms间隔让人觉得自然
        startsnake.emplace_back(Point(0, 14)); //奇行种
        startsnake.emplace_back(Point(1, 14));
        startsnake.emplace_back(Point(2, 15));
        startsnake.emplace_back(Point(3, 16));
        startsnake.emplace_back(Point(4, 17));
        startsnake.emplace_back(Point(5, 18));
        startsnake.emplace_back(Point(6, 17));
        startsnake.emplace_back(Point(7, 16));
        startsnake.emplace_back(Point(8, 15));
        startsnake.emplace_back(Point(9, 14));

        textsnake.emplace_back(Point(-27, 14)); //H
        textsnake.emplace_back(Point(-27, 15));
        textsnake.emplace_back(Point(-27, 16));
        textsnake.emplace_back(Point(-27, 17));
        textsnake.emplace_back(Point(-27, 18));
        textsnake.emplace_back(Point(-26, 16));
        textsnake.emplace_back(Point(-25, 16));
        textsnake.emplace_back(Point(-24, 14));
        textsnake.emplace_back(Point(-24, 15));
        textsnake.emplace_back(Point(-24, 16));
        textsnake.emplace_back(Point(-24, 17));
        textsnake.emplace_back(Point(-24, 18));

        textsnake.emplace_back(Point(-22, 14)); //Q
        textsnake.emplace_back(Point(-22, 15));
        textsnake.emplace_back(Point(-22, 16));
        textsnake.emplace_back(Point(-22, 17));
        textsnake.emplace_back(Point(-21, 14));
        textsnake.emplace_back(Point(-21, 17));
        textsnake.emplace_back(Point(-20, 14));
        textsnake.emplace_back(Point(-20, 16));
        textsnake.emplace_back(Point(-20, 17));
        textsnake.emplace_back(Point(-19, 14));
        textsnake.emplace_back(Point(-19, 15));
        textsnake.emplace_back(Point(-19, 16));
        textsnake.emplace_back(Point(-19, 17));
        textsnake.emplace_back(Point(-18, 18));

        textsnake.emplace_back(Point(-16, 14)); //T
        textsnake.emplace_back(Point(-15, 14));
        textsnake.emplace_back(Point(-14, 14));
        textsnake.emplace_back(Point(-13, 14));
        textsnake.emplace_back(Point(-12, 14));
        textsnake.emplace_back(Point(-11, 14));
        textsnake.emplace_back(Point(-10, 14));
        textsnake.emplace_back(Point(-16, 15));
        textsnake.emplace_back(Point(-15, 15));
        textsnake.emplace_back(Point(-14, 15));
        textsnake.emplace_back(Point(-13, 15));
        textsnake.emplace_back(Point(-12, 15));
        textsnake.emplace_back(Point(-11, 15));
        textsnake.emplace_back(Point(-10, 15));
        textsnake.emplace_back(Point(-16, 16));
        textsnake.emplace_back(Point(-15, 16));
        textsnake.emplace_back(Point(-13, 16));
        textsnake.emplace_back(Point(-11, 16));
        textsnake.emplace_back(Point(-10, 16));
        textsnake.emplace_back(Point(-13, 17));
        textsnake.emplace_back(Point(-14, 18));
        textsnake.emplace_back(Point(-13, 18));
        textsnake.emplace_back(Point(-12, 18));

        textsnake.emplace_back(Point(-7, 14)); //6
        textsnake.emplace_back(Point(-7, 15));
        textsnake.emplace_back(Point(-7, 16));
        textsnake.emplace_back(Point(-7, 17));
        textsnake.emplace_back(Point(-7, 18));
        textsnake.emplace_back(Point(-6, 14));
        textsnake.emplace_back(Point(-6, 16));
        textsnake.emplace_back(Point(-6, 18));
        textsnake.emplace_back(Point(-5, 14));
        textsnake.emplace_back(Point(-5, 16));
        textsnake.emplace_back(Point(-5, 17));
        textsnake.emplace_back(Point(-5, 18));

        textsnake.emplace_back(Point(-2, 14)); //6
        textsnake.emplace_back(Point(-2, 15));
        textsnake.emplace_back(Point(-2, 16));
        textsnake.emplace_back(Point(-2, 17));
        textsnake.emplace_back(Point(-2, 18));
        textsnake.emplace_back(Point(-1, 14));
        textsnake.emplace_back(Point(-1, 16));
        textsnake.emplace_back(Point(-1, 18));
        textsnake.emplace_back(Point(0, 14));
        textsnake.emplace_back(Point(0, 16));
        textsnake.emplace_back(Point(0, 17));
        textsnake.emplace_back(Point(0, 18));
    }
    void PrintFirst();
    void PrintSecond();
    void PrintThird();
    void PrintText();
    void ClearText();
    void Action();

private:
    std::deque<Point> startsnake; //开始动画中的蛇
    std::vector<Point> textsnake; //开始动画中的文字
    int speed;                    //动画的速度
};
#endif // STRATINTERFACE_H