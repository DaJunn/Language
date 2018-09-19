/*************************************************************************
	> File Name: test8_1.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 05:18:06 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

class Xabc {
    int *a; int n;
  public:
    Xabc(int aa[], int nn): n(nn){
        a=new int[n];
        for(int i=0; i<n; i++)
                a[i] = aa[i];
    }
    int GetA(int i) const { return a[i]; }
    int SumA(int n);
    ~Xabc() { delete []a; }
};

int Xabc::SumA(int n){
    int s=0;
    for(int j=0; j<n; j++) s+=a[j];
    return s;
}

int main(){
    int a[6]={2,5,8,3,6,9};
    Xabc x(a,6);
    a[3]=19;
    int d=0;
    for(int i=0; i<6; i++)
        d+=x.GetA(i);
    int f=x.SumA(5);
    cout<<d+f<<endl;
    return 0;
}
