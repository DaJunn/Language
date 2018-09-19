/*************************************************************************
	> File Name: test8_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 05:27:00 PM CST
 ************************************************************************/
#include<fstream>
#include"Array.h"

//返回数组a[size]中的最大值与最小值之和
int XArray::sum()    {  //补充函数体   
    //********333********
int i, max = a[0], min = a[0];
for (i = 1; i < size; i++)
{
	if (max < a[i])
	{
		max = a[i];
	}
	if (min > a[i])
	{
		min = a[i];
	}
}
return max+min;



   //********666********
}

void main(){
	int s1[10]={23,15,19,13,26,33,18,30,20,10};
	XArray x(s1,10);  
    int d=x.sum();
    cout<<x.length()<<endl;
	cout<<"d="<<d<<endl;
    
	writeToFile("");   //不用考虑此语句的作用

}
void writeToFile(const char *path)
{

	char filename[30];
	strcpy(filename,path);
	strcat(filename,"out.dat");
	ofstream fout(filename);


	int s1[10]={23,15,19,13,66,33,18,30,20,10};
	XArray x(s1,10); 
	int d=x.sum();
    fout<<x.length()<<endl;
	fout<<"d="<<d<<endl;
	fout.close();
}
