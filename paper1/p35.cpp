/*************************************************************************
	> File Name: p35.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 05:22:54 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Base1
{
public:
    Base1(int d) { cout << d; }
    ~Base1() {  }
};

class Base2
{
public:
    Base2(int d) { cout << d; }
    ~Base2() {  }
};

class Derived : public Base1, Base2
{
public:
    Derived(int a, int b, int c, int d):Base1(b),Base2(a),b1(d),b2(c) {  }
private:
    int b1;
    int b2;
};

int main()
{
    Derived d(1,2,3,4);
    return 0;
}
