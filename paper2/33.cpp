/*************************************************************************
	> File Name: 33.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 02:57:45 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
protected:
    Base(){ cout << 'A'; }              //执行基类的构造函数，输出A
    Base(char c){ cout << c; }
};

class Derived:public Base {
public:
    Derived( char c ) { cout << c; }    //执行派生类的构造函数，输出B
};

int main(){
    Derived d1('B');                    //先定义了一个派生类对象d1
    return 0;
}
