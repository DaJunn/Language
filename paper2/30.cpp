/*************************************************************************
	> File Name: 30.cpp
	> Author: 
	> Mail: 
	> Created Time: Sat 15 Sep 2018 02:36:50 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int i = 1;
class Fun{
public:
    static int i;
    int value(){ return i-1; }
    int value() const { return i+1; }
};

int Fun::i = 2;                                       //外部同名的变量赋值

int main(){
    int i=3;
    Fun fun1;
    const Fun fun2;                                  //不能改变类的静态成员变量            
    cout << fun1.value() << Fun::i << fun2.value(); //fun对象里面的i值为2
    return 0;
}
