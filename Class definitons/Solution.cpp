#include"TV.h"
#include<iostream>
using namespace std;
int main()
{
	int price, size;
	string brand;

	cout << "Enter samsung or lg" << endl;
	cin >> brand;
	cout << "Enter between 10 to 70" << endl;
	cin >> size;
	cout << "Enter between 1000 to 5000" << endl;
	cin >> price;

	TV myTv;
	myTv.setBrand(brand);
	myTv.setPrice(price);
	myTv.setSize(size);
	myTv.print();
	system("pause");
	return 0;
}