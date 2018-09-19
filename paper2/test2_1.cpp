/*************************************************************************
> File Name: test2_1.cpp
> Author: 
> Mail: 
> Created Time: Mon 10 Sep 2018 12:17:51 PM CST
************************************************************************/

#include<iostream>
using namespace std;

class MyClass{
    public:
    MyClass(int i)//构造函数前不用家void或其它任何类型名，直接用类+形参
    {
        value=i;cout<<"Constructor called."<<endl;
    }
    int Max(int x, int y){return x>y?x:y;}//求两个整数的最大值

    int Max(int x, int y,int z)//求三个整数的最大值//函数重载要求形参类型或形参个数不同
    {
        if(x>y)
        return x>z?x:z;
        else
        return y>z?y:z;
    }

    int GetValue()const{return value; }

    ~MyClass(){cout<<"Destructor called."<<endl;//析构函数
              }

    private:
    int value;
};

int main()
{
    MyClass obj(10);
    cout<<"The value is "<<obj.GetValue()<<endl;//成员函数的调用，value是私有成员，所以不能被类外函数直接调用得到value的值
    cout<<"Max number is "<<obj.Max(10,20)<<endl;
    return 0;
}
