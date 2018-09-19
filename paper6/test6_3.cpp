/*************************************************************************
	> File Name: test6_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 04:29:29 PM CST
 ************************************************************************/
#include<iostream>
#include<fstream>
#include<cstring>
#include "intArray.h"
using namespace std;

intArray::intArray()
{
  length=10;
  array=new int[length];
}

intArray::intArray(char *filename)
{
  ifstream myFile(filename);
  array=new int[300];
  length=0;
  while(myFile>>array[length++]);
  length--;
  myFile.close();
}

intArray& intArray::operator=(const intArray & src)
{
  if(array!=NULL) delete [] array;
  length = src.length;
  array = new int [length];
//*************333***********

  for (int i = 0; i < length; i++)
	  array[i] = src.array[i];

//**********666*********
  return *this;
}

intArray::~intArray()
{
  delete [] array;
}

void intArray::show()
{
  int step=0;
  for(int i=0; i<length; i=i+step)
  {
    cout<<array[i]<<endl;
    step++;
  }
}

void main()
{
  intArray *arrayP=new intArray("input.DAT");
  intArray myArray;
  myArray=*arrayP;
  (*arrayP).show();
  delete arrayP;

  writeToFile("");
}

void writeToFile(const char *path)
{
	char filename[30];
	strcpy_s(filename,path);
	strcat_s(filename,"out.dat");
	ofstream fout(filename);

	intArray *arrayP=new intArray("IN.DAT");
	intArray myArray;
	myArray=*arrayP;

	int i,m=0;
	for(i=0;m<myArray.getLength();i++)
	{
		
		fout<<myArray.getArray()[m]<<endl;
		m=m+i;
	}
	
}
