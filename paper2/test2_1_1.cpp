/*************************************************************************
	> File Name: test2_1_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 11 Sep 2018 08:04:59 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class MyClass {
public:
    MyClass(int i)//
    {
        value = i;
        cout << "Constructor called of "<<value << endl;
    }
    void Print() const
    { cout << "The value is " << value << endl;}

    ~MyClass()//析构函数不需要返回类型，将void去掉
    { cout << "Destructor called of " << value << endl;}
private:
    int value;//私有成员只能声明不能初始化,也就是说在private下的int后面不能带=0这种初始化
};
int main()
{
    const MyClass obj(10);//obj函数的定义，限定其为const类型
    obj.Print();
    return 0;
}

