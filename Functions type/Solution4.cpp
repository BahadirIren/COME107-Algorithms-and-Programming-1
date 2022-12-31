//function with parameter with return type
#include<iostream>
using namespace std;
double summation(double a, double b)
{
	double sum;
	sum = a + b;
	return sum;
}
int main()
{
	double x, y ,result;
	cout << "enter two numbers: " << endl;
	cin >> x >> y;
	result= summation(x, y);
	cout << "Result = " <<result<< endl;
	system("pause");
	return 0;
}