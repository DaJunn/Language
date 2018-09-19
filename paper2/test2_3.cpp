/*************************************************************************
	> File Name: test2_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 02:39:45 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class MyPoint{   //表示平面坐标系中的点的类
  double x;
  double y;
public:
  MyPoint (double x,double y){this->x=x;this->y=y;}
  double getX()const{ return x;}
  double getY()const{ return y;}
  void show()const{ cout<<'('<<x<<','<<y<<')';}
};
class MyRectangle{         //表示矩形的类
  MyPoint up_left;         //矩形的左上角顶点
  MyPoint down_right;      //矩形的右下角顶点
public:
  MyRectangle(MyPoint upleft,MyPoint downright);
  MyPoint getUpLeft()const{ return up_left;}         //返回左上角坐标
  MyPoint getDownRight()const{ return down_right;}   //返回右下角坐标
  MyPoint getUpRight()const;                         //返回右上角坐标
  MyPoint getDownLeft()const;                        //返回左下角坐标
  double area()const;                                //返回矩形的面积
};
//**1** **********found**********
MyRectangle::MyRectangle(MyPoint p1, MyPoint p2):  
                   up_left(p1),down_right(p2){}

MyPoint MyRectangle::getUpRight()const
{
  return MyPoint(down_right.getX(),up_left.getY());
}

MyPoint MyRectangle::getDownLeft()const
{//**2** **********found**********
    return MyPoint(up_left.getX(), down_right.getY());
}
//**3** **********found**********
double MyRectangle::area()const
{
  return (getUpLeft().getX()-getDownRight().getX())*
         (getDownRight().getY()-getUpLeft().getY());
}

int main( )
{
  MyRectangle r(MyPoint(0,2),MyPoint(2,0));
  r.getUpLeft().show();
  r.getUpRight().show();
  r.getDownRight().show();
  r.getDownLeft().show();
  cout<<r.area()<<endl;
  return 0;
}
