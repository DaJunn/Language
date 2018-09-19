/*************************************************************************
	> File Name: 13.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Sep 2018 08:00:09 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int i = 0, j = 1;
nt & r = i;
r = j;
int *p = &i;
*p = &r;            //给一个指针起别名
