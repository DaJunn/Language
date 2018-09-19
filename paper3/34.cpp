/*************************************************************************
	> File Name: 34.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Sep 2018 09:18:26 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
    A(int i) { x = i; }                        //基类的构造函数
    void dispa() { cout << x << ','; }
private:
    int x;
};

class B : public A {                          //类B继承类A
public:
    B(int i) : A(i + 10) { x = i; }             //派生类的构造函数
    void dispb() { dispa();cout << x << endl; }
private:
    int x;
};

int main(){
    B b(2);                                  //定义了类B的对象并初始化b（2），此时执行类b的构造函数，执行结果是继承类A中的私有成员赋值了12，给类B自身数据成员赋值了2，
    b.dispb();                              //执行函数，输出类A的私有成员x，输出类B自身的数据成员
    return 0;
}
