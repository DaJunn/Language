/*************************************************************************
	> File Name: 28.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 02:18:14 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    void fun() { cout << "Base::fun" << endl; }
};

class Derived : public Base {
public:
    void fun(){
        Base::fun();                             //只能通过调用基类的公有成员来输出Base::fun
        cout << "Derived::fun" << endl;
    }
};

int main() {
    Derived d;
    d.fun();
    return 0;
}
