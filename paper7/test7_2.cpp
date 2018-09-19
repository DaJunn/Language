/*************************************************************************
	> File Name: test7_2.cpp
	> Author: 
	> Mail: 
	> Created Time: Mon 10 Sep 2018 04:54:41 PM CST
 ************************************************************************/
#include<iostream>
using namespace std;

class Sale
{
public:
	Sale();//默认构造函数，将price初始化为0
	Sale(double the_price);//构造函数，用the_price初始化price
	virtual double bill() const;//返回当前商品的价格（基本价）
	double savings(const Sale& other) const;//返回参数other所引用的对象比当前对象便宜的差价
protected:
	double price;//商品的基本价格（不打折的价格）
};

Sale::Sale():price(0)
{}

Sale::Sale(double the_price):price(the_price)
{}

double Sale::bill() const
{
	return price;
}

double Sale::savings(const Sale &other) const
{
	//**********found**********
	return this->bill() - other.bill();//返回当前对象价格比other贵多少的差价	
}


class DiscountSale:public Sale//打折销售类继承销售类
{
public:
	DiscountSale();//默认构造函数，将discount初始化为0
	DiscountSale(double the_price,double the_discount);//构造函数，the_price是基本价格；the_discount是折扣百分比
	virtual double bill() const;//返回本商品销售价格（即打折以后的实际售价，覆盖了基类的bill函数）
protected:
	double discount;//折扣百分比。例如降价至原价的70%，此成员值应为70
};

DiscountSale::DiscountSale():discount(0)
{}

DiscountSale::DiscountSale(double the_price, double the_discount)
    :Sale(the_price),discount(the_discount)
{}

double DiscountSale::bill() const
{
	double fraction=discount/100;
	//**********found**********
 return fraction * price;//返回本对象打折以后的实际售价

}

bool operator <(const Sale& first, const Sale& second)
{
	//**********found**********
	return first.bill() < second.bill();//判断是否first价格低于second价格
}

int main()
{
	Sale simple(10.00);
	DiscountSale discount(11.00,90);
	
	if(discount<simple)
	{
		cout<<"Discount item is cheaper.\n";
	    //**********found**********
		//这里输出购买discount比购买simple节省多少钱
	    cout<<"Saving is "<< simple.savings(discount)<<endl;		
	}
	else
		cout<<"Discount item is not cheaper.\n";
	return 0;
}
