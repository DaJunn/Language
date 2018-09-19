/*************************************************************************
	> File Name: 31.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Sep 2018 08:47:54 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Point{
public:
    static int number;
public:
    Point() { number++; }
    ~Point() { number--; }
};

int Point::number=0;

int main() {
    Point *ptr;                          
    Point A,B;                             //定义了对象AB
    {
        Point* ptr_point = new Point[3];  //定义了数组Point【3】
        ptr = ptr_point;
    }
    Point C;                             //定义了对象C
    cout << Point::number << endl;       //执行6次构造函数，number变成6
    delete[]ptr;
    return 0;
}
