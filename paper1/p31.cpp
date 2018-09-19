/*************************************************************************
	> File Name: p31.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 03:38:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Test 
{
public:
    Test(){ a = 0;c = 0;}                     //通过默认构造函数初始化c
    int f(int a) const { this -> a = a; }    //常成员函数只能通过引用本类中的数据成员而不能修改
    static int g() { return a; }            //静态成员函数由于没有this指针，所以不能访问本类中的非静态成员
    void h(int b) { Test::b = b; };        
private:
    int a;
    static int b;
    const int c;                        //c为常成员数据，只能引用不能修改
};
int Test::b = 0;
