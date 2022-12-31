//function without parameter with return type
#include<iostream>
using namespace std;
double summation()
{
	double a, b, sum;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	
	sum = a + b;
	return sum;
}

int main()
{
	cout << "result = " << summation() << endl;
	system("pause");
	return 0;
}