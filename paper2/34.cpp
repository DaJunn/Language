/*************************************************************************
	> File Name: 34.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 03:02:24 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class MyBase{
    int k;
public:
    MyBase( int n = 0 ):k(n) {  }
    int value() const { return k; }
};

class MyDerived:MyBase{
    int j;
    public:
    MyDerived(int i):j(i){  }
    int getK() const { return k; }       //函数getK试图访问基类的私有成员变量k
    int getJ() const { return j; }
};
