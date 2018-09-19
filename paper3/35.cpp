/*************************************************************************
	> File Name: 35.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 17 Sep 2018 09:26:46 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Music{
public:
    void setTitle(char * str) { strcpy(title, str); }
protected:
    char type[10];
private:
    char title[20];
};

class Jazz : public Music {
public:
    void set(char * str){
        strcpy(type, "Jazz");
        strcpy(title.str);
    }
};
