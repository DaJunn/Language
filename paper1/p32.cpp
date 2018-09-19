/*************************************************************************
	> File Name: p32.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 04:06:33 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class SAMPLE
{
    int n;
public:
    SAMPLE(int i = 0) : n(i) {  }
    void setValue(int n0);
};
void SAMPLE::setValue(int n0) { n = n0; }//在类外定义类的成员函数，需要使用作用域限定符：：
