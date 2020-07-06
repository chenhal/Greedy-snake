//point.h
#ifndef POINT_H //如果没定义
#define POINT_H //那就定义一个呗
//描述点的结构

class Point
{
public:
    Point() {}
    Point(const int x, const int y) : x(x), y(y) {}
    void Print();
    void PrintCircular();
    void Clear();
    void ChangePosition(const int x, const int y);
    bool operator==(const Point &point) { return (point.x == this->x) && (point.y == this->y); }
    int GetX() { return this->x; }
    int GetY() { return this->y; }

private:
    int x, y;
};
#endif // POINT_H