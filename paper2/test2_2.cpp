/*************************************************************************
	> File Name: test2_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 12:28:08 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
const int Size=5;
class Stack;
class Item
{
    public:
        Item(const int&val):item(val){}//构造函数对私有成员的初始化,item(val)
    private:
        int item;
        Item* next;
        friend class Stack;
};
class Stack
{
    public:
        Stack():top(NULL){}
        ~Stack();
        int Pop();
        void Push(const int&);
    private:
        Item *top;
};
Stack::~Stack()
{
    Item *p=top,*q;
    while(p!=NULL)
    {
        q=p->next;
        delete []p;
        p=q;
        
    }
}

int Stack::Pop()
{
    Item* temp;
    int ret;
    temp=top;//指向栈顶节点的是top指针，要使temp指向栈顶结点，使用temp=top；
    ret=top->item;
    top=top->next;//是新结点next指针指向栈顶，使用temp->next=top
    delete temp;
    return ret;
}

void Stack::Push(const int&val)
{
    Item* temp=new Item(val);
    temp->next=top;
    top=temp;
}

int main()
{
    Stack s;
    int i;
    for(i=1;i<Size;i++)
        s.Push(i);
    cout<<"The element of stack are: ";
    for(i=1;i<Size;i++)
        cout<<s.Pop()<<'\t';
    return 0;
}

