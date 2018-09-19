/*************************************************************************
	> File Name: test3_3.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 03:13:10 PM CST
 ************************************************************************/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class doc
{
private:
  char *str;  //文本字符串首地址
  int length; //文本字符个数
public:
//构造函数，读取文件内容，用于初始化新对象。filename是文件名字符串首地址。
  doc(char *filename);
  void reverse(); //将字符序列反转
  ~doc();
  void writeToFile(char *filename);
};

doc::doc(char *filename)
{
  ifstream myFile(filename);
  int len=1001,tmp;
  str=new char[len];
  length=0;
  while((tmp=myFile.get())!=EOF)
  {
	  str[length++]=tmp;
  }
  str[length]='\0';
  myFile.close();
}

void doc::reverse(){
// 将数组str中的length个字符中的第一个字符与最后一个字符交换，第二个字符与倒数第二个
// 字符交换……
//*************333***********         
int i, j;      
for(i = 0, j = length-1; i<j; i++, j--)      
{           
	char temp = str[i];           
	str[i] = str[j];           
	str[j] = temp;      
}      

//*************666***********
}

doc::~doc()
{
  delete [] str;
}

void doc::writeToFile(char *filename)
{
  ofstream outFile(filename);
  outFile<<str;
  outFile.close();
}

void main()
{
  doc myDoc("in.dat");
  myDoc.reverse();
  myDoc.writeToFile("out.dat");
}

