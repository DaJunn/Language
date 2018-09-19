/*************************************************************************
	> File Name: 30.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 03:32:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Point
{
    int xx, yy;
public:
    Point(): xx(0), yy(0) {  }                   //默认构造函数
    Point( int x, int y = 0) : xx(x),yy(y){  }  //带参数构造函数
};

int main(){
    Point a(2),b[3], *c[4];                    //定义a(2)对象|b[3]对象数组（对象指针不调用构造函数）
    return 0;
}
