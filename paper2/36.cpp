/*************************************************************************
	> File Name: 36.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 03:10:25 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A{
public:
    virtual void func1() { cout << "A1"; }   //虚函数没有指定返回值，
    void func2() { cout << "  A2"; }
};

class B:public A{
public:
    void func1() { cout << "B1"; }
    void func2() { cout << "B2"; }
};

int main(){
    A *p = new B;                           //变量B赋值给A的指针指向A
    p -> func1();
    p -> func2();
    delete p;
    return 0;
}
