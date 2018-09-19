/*************************************************************************
	> File Name: test1_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 03:18:03 AM CST
 ************************************************************************/

#include<iostream>
using std::ostream;
using std::cout;
using std::endl;

class Myvector{
    double x;
    double y;
public:
    Myvector(double i=0.0, double j=0.0);//二维向量类，主要涉及到构造函数，重载运算符+，-，<< 
    Myvector operator+(Myvector j);
    friend Myvector operator-(Myvector i, Myvector j);
    friend ostream& operator<<(ostream&os, Myvector v);
};
Myvector::Myvector(double i, double j):x(i),y(j){}//在类外定义构造函数要使用类名和作用域

Myvector Myvector::operator+(Myvector j){
    return Myvector(x+j.x, y+j.y);
}

Myvector operator-(Myvector i, Myvector j)
{
    return Myvector(i.x-j.x,i.y-j.y);
}

ostream&operator<<(ostream&os,Myvector v){
    os<<'('<<v.x<<','<<v.y<<')';
          return os;
}

int main()
{
    Myvector v1(2, 3), v2(4, 5),v3;
    v3=v1+v2;//重载运算符+的使用
    cout<<v3<<endl;
    return 0; 
}
