/*************************************************************************
	> File Name: test4_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 03:19:04 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Point{
public:
        Point(double x, double y) : _x(x), _y(y) {}
    double GetX() const { return _x; }
    double GetY() const { return _y; }
    void Move(double xOff, double yOff)
    {
        _x += xOff; _y += yOff;
    }
protected:
    double _x, _y;
};

int main()
{
    Point pt(1.5, 2.5);
    pt.Move(2.5, 1.5);
    cout<<'('<<pt.GetX()<<','<<pt.GetY()<<')'<<endl;
    return 0;
}
