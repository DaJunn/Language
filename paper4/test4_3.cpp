/*************************************************************************
	> File Name: test4_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 04:00:37 PM CST
 ************************************************************************/

// proj3.cpp
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class intArray
{
private:
  int *array;  //整数序列首地址
  int length;  //序列中的整数个数
public:
  //构造函数，从文件中读取数据用于初始化新对象。参数是文件名。
  intArray(char *filename);
  void sort();  //对整数序列按非递减排序
  ~intArray();
  void writeToFile(char *filename);
};

intArray::intArray(char *filename)
{
  ifstream myFile(filename);
  int len=300;
  array=new int[len];
  length=0;
  while(myFile>>array[length++]);
  length--;
  myFile.close();
}

void intArray::sort(){
//*************333***********

  for (int i = 0; i < length; ++i)
	  for (int j = i; j < length; ++j)
		  if (array[i] > array[j])
		  {
			  int temp;
			  temp = array[i];
			  array[i] = array[j];
			  array[j] = temp;
		  }
 	for (int a = 0; a < length; ++a)
	cout << array[a] << " ";

//**********666*********
}

intArray::~intArray()
{
  delete [] array;
}

void intArray::writeToFile(char *filename)
{
  int step=0;
  ofstream outFile(filename);
  for(int i=0; i<length; i=i+step)
  {
    outFile<<array[i]<<endl;
    step++;
  }
  outFile.close();
}

void main()
{
  intArray myArray("IN.DAT");
  myArray.sort();
  myArray.writeToFile("out.dat");
}


