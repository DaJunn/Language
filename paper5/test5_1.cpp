/*************************************************************************
	> File Name: test5_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 04:04:16 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class MyClass{
    int _i;
    friend void Increment(MyClass& f);
public:
    const int NUM;
    MyClass(int i=0) : NUM(0){
        _i = i;
    }
    int GetValue() const { return _i; }
};

void Increment(MyClass& f) { f._i++; }

int main()
{
    MyClass obj;
    Increment(obj);

    cout<<"NUM = "<<obj.NUM<<endl
    <<"Value = "<<obj.GetValue()<<endl;
    return 0;
}


