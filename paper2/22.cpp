/*************************************************************************
	> File Name: 22.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 02:15:54 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    void function(double val);
    double val;
    function(val);
    cout << val;
    return 0;
}

void function(double val)
{ val = 3; }
