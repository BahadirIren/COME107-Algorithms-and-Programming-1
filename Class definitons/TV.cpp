#include"TV.h"
#include<iostream>
#include<string>
using namespace std;
TV::TV(){}
void TV::setBrand(string br)
{
	if (br == "samsung" || br == "lg")
	{
		brand = br;
	}
	else
		cout << "Enter samsung or lg" << endl;
}
string TV::getBrand()
{
	return brand;
}
void TV::setSize(int siz)
{
	if (siz > 10 && siz < 70)
	{
		size = siz;
	}
	else
	{
		cout << "Enter between 10 to 70" << endl; 
		size = 0;
	}
}
int TV::getSize()
{
	return size;
}
void TV::setPrice(int pr)
{
	if (pr > 1000 && pr < 5000)
	{
		price = pr;
	}
	else
	{
		cout << "Enter between 1000 to 5000" << endl;
		price = 0;
	}

}
int TV::getPrice()
{
	return price;
}
void TV::print()
{
	cout << "Your tv name is " << getBrand() << ", its size " << getSize() << ", price is " << getPrice() << endl;
}