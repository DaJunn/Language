/*************************************************************************
	> File Name: test7_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 04:29:58 PM CST
 ************************************************************************/
#include<iostream>
#include<cstring>
using namespace std; 
class CD
{
	    char name[20];
	    int number;
public:
	    void init(char* aa, int bb)
	    {
            // ERROR **********found**********
		    strcpy(name, aa);
	        number=bb;
	    }
	    char* getName () {
		    // ERROR **********found**********
		    return name;
		}
	    int getNumber () {return number;}
	    void output() {
			// ERROR **********found**********
		   cout << name << ' ' << number << endl;			
		}
}; 

void main()
{
	CD dx,dy;
	dx.init("歌唱祖国",30);
	dy.init("义勇军进行曲",3*dx.getNumber()+5);
	dx.output();
	dy.output();
}
