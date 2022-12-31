#include<iostream>
using namespace std;
int main()
{
	int number, result;

	cout << "Enter an integer number"<<endl;
	cin >> number;

	result = number %2;

	if (result == 0)
	{
		cout << number << " " << "is even" << endl;

	}
	else {
		cout << number << " " << "is odd" << endl;

	}
	system("pause");
	return 0;
}