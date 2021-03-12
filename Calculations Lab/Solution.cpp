#include"Calculations.h"
#include<iostream>
using namespace std;
int main()
{ 
	Calculations myCalc1;
		int no;
	
		cout << "Enter an integer number or -1 to exit" << endl;
		cin >> no;
		while (no != -1)
		{
			myCalc1.setNumber(no);
			if (myCalc1.isEven() == true)
			{
				cout << no << " is even" << endl;
			}
			else if (myCalc1.isOdd() == true)
			{
				cout << no << " is odd" << endl;
			}
			if (myCalc1.isPrime() == true)
			{
				cout << no << " is prime" << endl;
			}
			else
				cout << no << " is not prime" << endl;
			
			cout << "Total sum for " << no << " is " << myCalc1.total() << endl;
			
			cout << "Enter an integer number or -1 to exit" << endl;
			cin >> no;

		}
	system("pause");
	return 0;
}