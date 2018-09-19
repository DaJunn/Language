/*************************************************************************
	> File Name: 36.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Sep 2018 09:30:24 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Book{
public:
    Book(char * t = "") { strcpy(title, t); }
    virtual char * Category() const = 0;
private:
    char title[40];
};

class Novel : public Book {
public:
    Novel(char* t =""): Book(t) {}
    char* Category() const { return "Literature"; }
};

int main(){
    Book *pb;
    pb = new Novel();
    cout << pb -> Category();
    delete pb;
    return 0;
}
