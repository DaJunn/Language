/*************************************************************************
	> File Name: test6_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 04:24:21 PM CST
 ************************************************************************/

// proj1.cpp
#include <iostream>
using namespace std;
class MyClass {
  int _i;
  friend void Increment(MyClass& f);
public:
  const int NUM;
// ERROR  ********found********
  MyClass(int i=0) : NUM(0) {
    _i = i;
  }
  int GetValue() const { return _i; }
};

// ERROR  ********found********
void Increment(MyClass& f) { f._i++; }


int main()
{
  MyClass obj;
// ERROR  ********found********
  Increment(obj);
 
  cout << "NUM = " << obj.NUM << endl
       << "Value = " << obj.GetValue() << endl;
  return 0;
}
