/*************************************************************************
	> File Name: 35.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 03:05:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Instrument {
public:
    virtual void Display() = 0;          //纯虚函数是在声明虚函数时候被初始化为0的函数，包含纯虚函数的类是抽象类，抽象类不能被实例化
};
class Piano : public Instrument {
public:
    void Display() { /*函数体略*/ }
};

int main() {
    Instrument s;                        //此句试图将抽象类Instrument实例化  
    Instrument *p = 0;
    //
    //return 0;
}
