/*************************************************************************
	> File Name: test3_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 03:00:53 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;


class Stack {
public:
  virtual void push(char c) = 0;
  virtual char pop() = 0;
};

class ArrayStack : public Stack {
  char * p;
  int maxSize;
  int top;
public:
  ArrayStack(int s)
  {
    top = 0;
    maxSize = s;
//********found********
	p = new char[s];
  }
  ~ArrayStack()
  {
//********found********
	  delete [] p;
  }
  void push(char c)
  {
    if (top == maxSize) {
      cerr << "Overflow!\n";
      return;
    }
//********found********
    p[top] = c;
    top++;
  }
  char pop()
  {
    if (top == 0) {
      cerr << "Underflow!\n";
      return '\0';
    }
    top--;
//********found********
	return p[top];
  }
};
void f(Stack& sRef)
{
  char ch[] = {'a', 'b', 'c'};
  cout << ch[0] << ", " << ch[1] << ", " << ch[2] << endl;
  sRef.push(ch[0]); sRef.push(ch[1]); sRef.push(ch[2]);
  cout << sRef.pop() << ", ";
  cout << sRef.pop() << ", ";
  cout << sRef.pop() << endl;
}
int main()
{
  ArrayStack as(10);
  f(as);
  return 0;
}
