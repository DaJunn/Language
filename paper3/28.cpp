/*************************************************************************
	> File Name: 28.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Sep 2018 08:40:45 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class AA{
    int a;
    public:
        AA(int n = 0):a(n) {}
};

class BB:public AA {
    public:
        BB(int n):AA(n) {}
};
