/*************************************************************************
	> File Name: test8_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 05:25:03 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
class XBase
{
  private:
    int mem1,mem2;
  public:
      //分别用m1和m2初始化数据成员mem1和mem2
      //*************found**************
	  XBase(int m1=0, int m2=0): mem1(m1), mem2(m2) {} 
      //sum函数定义，返回两个数据成员之和
      //*************found**************
	  virtual int sum(){return mem1+mem2;}
};
//XDerived类公有继承XBase类	
//*************found**************
class XDerived: public XBase
{
  private:
    int mem3;
  public:
	  XDerived(): XBase(), mem3(0) {} 
      //用m1和m2的值分别初始化基类中的mem1和mem2成员，用m3初始化mem3成员
      //*************found**************
	  XDerived(int m1, int m2, int m3):  XBase(m1,m2),mem3(m3) {} 
      int sum() {return XBase::sum()+mem3;}
};

void main() {
    XDerived b(3,4,5); 
    XBase a(6,7), *pb=&b;
    int s=pb->sum()+a.sum(); 
	cout<<"s="<<s<<endl; 
} 
