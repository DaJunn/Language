/*************************************************************************
	> File Name: 28.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 03:18:17 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class B
{
    public: void fun1() {  }    //基类的共有成员函数
    private: void fun2() {  }
    protected: void fun3() {  }
};
class D:public B               //在类外引用成员函数时，派生对象只能引用基有类的公有成员函数fun1
{
    protected: void fun4(){  }
};
