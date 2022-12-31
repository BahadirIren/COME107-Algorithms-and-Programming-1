//function with parameter without return type
#include<iostream>
using namespace std;
void summation(double a, double b)
{
	double sum;
	sum = a + b;

	cout << "result = " << sum << endl;
}

int main()
{
	double x, y;
	cout << "enter two numbers: " << endl;
	cin >> x >> y;
	summation(x, y);
	system("pause");
	return 0;
}