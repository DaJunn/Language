/*************************************************************************
	> File Name: test3_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 02:45:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class MyClass{
    int value;
public:
    MyClass(int val) : value(val) {}
    int GetValue() const { return value; }
    void SetValue(int val);
};

void MyClass::SetValue(int val){ value = val; }

int main()
{
    MyClass obj(0);
    obj.SetValue(10);
    cout<<"The value is "<<obj.GetValue()<<endl;
    return 0;
}
