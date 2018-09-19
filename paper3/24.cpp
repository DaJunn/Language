/*************************************************************************
	> File Name: 24.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Sep 2018 08:03:00 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    static int a;                  //限定整型变量a的作用域
    void init() { a = 1; }         //初始化a的值为1
    A( int a = 2 ) { init(); a++; }//先用a为1的值初始化再自增1
};

int A::a = 0;                     //A作用域成员a的值为0
A obj;                            //定义对象obj，执行构造函数

int main()
{
    cout << obj.a;                //输出obj函数，调用a的值0
    return 0;
}
