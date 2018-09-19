/*************************************************************************
	> File Name: test1_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 02:34:27 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int mian(){
    int i=1,sum=0;
    do{
        sum += i;
        i++;
    }while(i<=10);
    cout<<"sum ="<<sum<<endl;
    return 0;
}
