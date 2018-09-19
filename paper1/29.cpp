/*************************************************************************
	> File Name: 29.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 03:23:46 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Foo
{
public:
    Foo(int v): value(v) {  }    //1
    ~Foo(){  }                  //2
private:
    Foo(){  }                 //3
    int value = 0;           //类的数据成员不能在声明类时初始化
};
