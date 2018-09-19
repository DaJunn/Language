/*************************************************************************
	> File Name: 20.cpp
	> Author: 
	> Mail: 
	> Created Time: Fri 14 Sep 2018 02:56:21 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    void function(double val); //3的值没有传回来
    double val;               //val没有初始化
    function(val);
    cout << val;
    return 0;
}

void function(double val)
{
    val = 3;
}
