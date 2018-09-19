/*************************************************************************
	> File Name: test1_2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年09月07日 星期五 18时18分42秒
 ************************************************************************/

#include<iostream>
using namespace std;

class Array{//使用C++的一个数组类
    public://定义共有成员函数
        Array(unsigned int s)//实例化Array类为无符号整型变量s
    {
        size = s;//将变量s传给数据成员size，size表示数组的容量，数组的元素不能超过size也就是不能超过s
        num = 0;//定义当前数组中的元素个数为0个
        a = new int[s];//数据成员a表示实际用于存储数据的整型数组为新的无符号整型变量s
    }

    virtual ~Array(){delete[] a;    }//用关键字virtual说明该函数是虚函数，在array这个基类的派生类下有对add函数的定义，里面
    virtual void add(int e)//用关键字virtual定义虚函数无返回值，添加形参数int e到数组a中去
    {
        if(num<size){//使用if条件语句，语句内判断当num成员的元素长度小于size成员的长度时执行
            a[num]=e;//将一个整型数e添加到a[num]中去。此处使用虚函数virtual void add(int e)的用法
            num++;//循环体num+1
        }
    }

    int get(unsigned int i)const //使用const关键字限定get函数，把无符号整型i形参传给get函数
    {
        if(i < size)//使用if条件语句，判断为当i小于size数组容量时
            return a[i];//则返回i给数据成员a
        return 0;//否则返回空值0
    }

    protected://使用C++的保护成员
    int *a;//使用a指针指向int变量的地址
    unsigned int size, num;//声明无符号整型size和num为protected保护成员
};

class SortedArray:public Array{//使用Array这个基类的派生类，声明共有成员数组
public:
    SortedArray(unsigned int s):Array(s){}//将基类的数组传给派生类

        virtual void add(int e)//使用关键字virtual定义虚函数返回空值并将整型e的值添加到数组中
    {
        if (num >= size)//使用if条件语句，语句内判断当num成员的元素长度大于或等于size成员的时
            return;//则有什么返回什么

        int i=0,j;//重载基类中的i和j变量
        while(i<num){//使用while循环判断当i小于num成员时
            if(e<a[i]){//执行if条件选择语句，如果e小于i传给a的值时
                for(j=num;j>i;j--){//执行嵌套循环语句for，语句内j等于num数据成员，当j大于i时则j-1

                  a[j]=a[j-1];//将a[j-1]的值传给a[j]
                }
                a[i]=e;//把插入的数据放在数组a的第i+1个位置
                break;//满足条件跳出循环
            }
            i++;//先引用i在增加，先在表达式子中使用当前的值后让i+1
        }
        

        if(i==num)//if选择语句
            a[i] = e;//当e传给数组a中的第i个位置时
         num++;//i等价于num则先执行num在表达式中的操作，后+1
    }
};


void fun(Array& a)//无类型指针void指向fun函数，函数形参为array引用 a也就是给array这个数组取外号叫a
{
    int i;//整型i
    for(i=10;i>=1;i--){//执行for循环，当i=10，i>=1时，先引用i执行循环语句再i-1
        a.add(i);//将i的值传给a数组
    }
    for(i=0;i<10;i++){//执行for循环，当i=0，i<10,时i先自增再+1
        cout<<a.get(i)<<", ";//输出从i中取得的元素赋值给a数组
    }
    cout<<endl;
}

int main()
{
    Array a(10);
    fun(a);

    SortedArray sa(10);//派生类传入10到sa数组中
    fun(sa);//返回sa数组的值

    return 0;
}
