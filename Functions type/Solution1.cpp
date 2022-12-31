//function without parameter without return type
#include<iostream>
using namespace std;
void summation()
{
	double a, b, sum;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	sum = a + b;

	cout << "result = " << sum << endl;

}
int main()
{
	summation();
	system("pause");
	return 0;
}