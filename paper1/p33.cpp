/*************************************************************************
	> File Name: p33.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 04:09:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A                               //基类
{              
public:                            
    A(){ cout << "A"; }             //先调用基类的构造函数
    ~A() { cout << "~A"; }         //再释放基类的析构函数
};

class B : public A                   //派生类
{
    A * p;
public:
    B() { cout << "B";p = new A(); }//再调用派生类的构造函数
    ~B() { cout << "~B";delete p; }//先释放派生类的析构函数
};

int main()
{
    B obj;
    return 0;
}
