/*************************************************************************
	> File Name: test4_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 03:24:28 PM CST
 ************************************************************************/
// proj2.cpp
#include <iostream>
#include <cstring>
using namespace std;

class Base1 {
public:
//********found********  下列语句需要声明纯虚函数Show
	virtual void Show() = 0;
};

class Base2 {
protected:
  char * _p;
  Base2(const char *s)
  {
    _p = new char[strlen(s)+1];
//********found********  下列语句将形参指向的字符串常量复制到该类的字符数组中
	strcpy(_p, s);
  }
  ~Base2() { delete [] _p; }
};

//********found********  Derived类公有继承Base1，私有继承Base2类
class Derived : public Base1, private Base2{
public:
//********found********  以下构造函数调用Base2类构造函数
	Derived(const char *s) : Base2(s)
	{ }
  void Show()
  { cout << _p << endl; }
};

int main()
{
  Base1 *pb = new Derived("I'm a derived class.");
  pb->Show();
  delete pb;
  return 0;
}
