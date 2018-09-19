/*************************************************************************
	> File Name: 36.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 07:51:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base
{
public:
    void fun1() { cout << "Base\n"; }         //不是虚函数，输出基类的fun1    
    virtual void fun2() { cout << "Base\n"; } //是虚函数，输出派生类的fun2
};
class Derived : public Base {

public:
    void fun1(){ cout << "Derived\n"; }
    void fun2(){ cout << "Derived\n"; }
};

void f(Base& b){ b.fun1(); b.fun2(); }
int main()
{
    Derived obj;
    f(obj);                                   //定义了派生类对象obj，f（）函数将其转化为基类对象
    return 0;
}
