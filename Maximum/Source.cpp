#include<iostream>
using namespace std;
int main()

{
	double x, y, z;
	cout << "Enter 3 numbers"<<endl;
	cin >> x >> y >> z;

	if (x > y  &&  y > z)
	{
		cout << x << "is maximum!"<<endl;

	}
	else if (y > z)
	{
		cout << y << "is maximum!"<<endl;

	}
	else {
		cout << z << "is maximum!"<<endl;

	}
	system("pause");
	return 0;

}