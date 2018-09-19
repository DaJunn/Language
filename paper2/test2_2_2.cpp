/*************************************************************************
	> File Name: test2_2_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Tue 11 Sep 2018 08:56:57 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

class Entry {
public:
  Entry* next;
  int data;

  //**********found**********
  Entry(Entry* n, int d) : next(n), data(d) { }//使用成员列表初始化
};

class Stack {
  Entry* top;
public:
  Stack() : top(0) { }
  ~Stack()
  {
    while (top != 0) 
    {
      Entry* tmp = top;
      //**********found**********
      top = top->next;//新元素要添加到栈顶
      delete tmp;
    }
  }
  void push(int data)
  {
    //**********found**********
    top = new Entry(top++, data);//栈顶添加元素的动态分配
  }
  int pop()
  {
    if (top == 0) return 0;
    //**********found**********
    int result = top->data;//推出栈顶元素
    top = top->next;
    return result;
  }
};

int main()
{
  int a[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  Stack s;

  int i = 0;
  for (i = 0; i < 10; i++) {
    cout << a[i] << ' ';
    s.push(a[i]);
  }
  cout << endl;
  for (i = 0; i < 10; i++) {
    cout << s.pop() << ' ';
  }
  cout << endl;
  return 0;
}
