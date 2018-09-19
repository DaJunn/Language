/*************************************************************************
	> File Name: 32.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 02:52:05 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Pair{
    int m,n;
public:
    Pair(int j,int k):m(j),n(k){}       
    int get(){ return m; }              //执行默认构造函数输出3
    int get() const { return m+n; }     //执行构造函数输出8——————3+5
};

int main(){
    Pair a(3,5);                        //常对象a只能调用常成员函数，执行a.get
    const Pair b(3,5);
    cout << a.get() << b.get();         //对象b为常对象，执行b.get
    return 0;
}
