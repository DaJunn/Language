/*************************************************************************
	> File Name: p34.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 04:18:43 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base
{
private:
    void fun1() const { cout << "fun1"; }    //x 私有成员仍为基类私有，用于保护基类的所有成员在派生类中，使得函数在类外不能访问
protected:
    void fun2() const { cout << "fun2"; }   //x保护成员在派生类中成为了保护成员
public:
    void fun3() const { cout << "fun3"; }  //x公有成员在派生类中成为了保护成员
};

class Derived : protected Base            //保护继承
{                                        //派生类对积累进行访问
public:
    void fun4() const { cout << "fun4"; }//可以访问
};

int main()
{
    Derived obj;
    obj.fun1();                           //1
    obj.fun2();                          //2
    obj.fun3();                         //3
    obj.fun4();                        
    return 0;
}
