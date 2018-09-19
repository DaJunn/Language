/*************************************************************************
	> File Name: 29.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 02:26:05 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class MyClass{
public:
    MyClass() { cout << "A"; }              //构造函数，先构造的后析构
    MyClass(char c) { cout << c; }         //构造函数，后构造的先析构
    ~MyClass() { cout << "B"; }           //析构函数
};

int main(){
    MyClass p1, *p2;                     //p1参数，p2指针地址
    p2 = new MyClass('X');              //将x参数传进MyClass类里再赋值给p2
    delete p2;                         //删除p2指针
    return 0;
}
