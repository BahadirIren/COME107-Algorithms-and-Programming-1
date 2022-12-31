#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int x;
	int a = 1;
	while (a != -1)
	{
		cout << "enter the multiplication result of the following number: " << endl;
		int number1 = rand() % 10;
		cout << number1 << "*";
		int number2 = rand() % 10;
		cout << number2 << "=";
		cin >> x;

		if (x == number1*number2)
		{
			cout << "CORRECT" << endl;
		}
		else
		  cout << "WRONG" << endl;
		
		cout << "Continue (1) or Quit (-1):";
		cin >> a;
	}
	system("pause");
	return 0;
}