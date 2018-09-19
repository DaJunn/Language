/*************************************************************************
	> File Name: 31.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 02:42:33 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Obj {
    static int i;
public:
    Obj() { i++;}
    ~Obj() { i--;}                                   //执行析构函数，i变成1
    static int getVal() { return i; }               //定义了对象指针，i变成2，
};

int Obj::i = 0;
void f() { Obj ob2;cout << ob2.getVal(); }          //定义了对象ob2，再次执行构造函数，i变成2，输出2
int main(){
    Obj ob1;                                       //先定义了对象ob1，执行构造函数，i变成1
    f();                                          //执行函数f后，跳到20行
    Obj *ob3=new Obj;cout << ob3 -> getVal();
    delete ob3;cout << Obj::getVal();            //释放ob3后，i变成1 
    return 0;
}
