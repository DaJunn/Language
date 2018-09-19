/*************************************************************************
	> File Name: 33.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Sep 2018 09:12:29 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base{
public:
    int data;
};

class Derived1:public Base {};
class Derived2:protected Base {};

int main(){
    Derived1 d1;                 //公用集成Base
    Derived2 d2;                //保护继承Base
    d1.data = 0;
    d2.data = 0;
    return 0;
}
