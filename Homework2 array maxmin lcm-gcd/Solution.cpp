#include<iostream>
using namespace std;

void odd(int ar[], int size)
{
	cout << "Odd numbers: { ";
	for (int i = 0; i < size; i++)
	{
		if (ar[i] % 2 != 0)
		{
			cout << ar[i] << " ";
		}
	}
	cout << "}" << endl;
}

void even(int ar[], int size)
{
	cout << "Even numbers: { ";
	for (int i = 0; i < size;i++)
	{
		if (ar[i] % 2 == 0)
		{
			cout << ar[i] <<" ";
		}
	}
	cout << "}" << endl;
}

int max(int ar[], int high)
{
	high = ar[0];
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] > high)
		{
			high = ar[i];
		}
	}
	return high;
}

int min(int ar[], int low)
{
	low = ar[0];
	for (int i = 0; i < 10; i++)
	{
		if (ar[i] < low)
		{
			low = ar[i];
		}
	}
	return low;
}

int lcm(int ar[],int lcm)
{
	int high = max(ar, 10);
	int low = min(ar, 10);
	for (int i = 1; i <= high*low; i++) {
		if ((i%high == 0) && (i%low == 0)){
			lcm = i;
			cout << "LCM: ";
			break;
		}
	}
	
	return lcm;
}

int gcd(int ar[], int gcd)
{
	int high = max(ar, 10);
	int low = min(ar, 10);
    gcd = high;
	for (gcd; gcd>0; gcd--) {
		if ((high%gcd == 0) && (low%gcd == 0)) {
			cout << "GCD: ";
			break;
		}
	}
	
	return gcd;
}

int main()
{
	const int arraySize = 10;
	int ar[arraySize];
	char choice = 0;
	while (choice != 'd' || choice != 'D')
	{
		cout << "A- Odd and Even numbers" << endl << "B- LCM and GCD" << endl << "C- MAX and MIN" << endl << "D- EXIT" << endl;
		cin >> choice;
		if (choice == 'a' || choice == 'A')
		{
			for (int i = 0; i < arraySize; i++)
			{
				cout << "Enter a number: ";
				cin >> ar[i];
			}
			cout << "--------------------------------------" << endl;
			odd(ar, arraySize);
			even(ar, arraySize);
			cout << "--------------------------------------" << endl;
		}
		else if (choice == 'b' || choice == 'B')
		{
			for (int i = 0; i < arraySize; i++)
			{
				cout << "Enter a number: ";
				cin >> ar[i];
			}
			cout << "--------------------------------------" << endl;
			cout << lcm(ar, arraySize) << endl;
			cout << gcd(ar, arraySize) << endl;
			cout << "--------------------------------------" << endl;
		}
		else if (choice == 'c' || choice == 'C')
		{
			for (int i = 0; i < arraySize; i++)
			{
				cout << "Enter a number: ";
				cin >> ar[i];
			}
			cout << "--------------------------------------" << endl;
			cout << "Maximum number is: " << max(ar, arraySize) << endl;
			cout << "Minimum number is: " << min(ar, arraySize) << endl;
			cout << "--------------------------------------" << endl;
		}
		else if (choice == 'd' || choice == 'D')
		{
			break;
		}
		else
		{
			cout << "--------------------------------------" << endl;
			cout << "INVALID CHARACTER IS ENTERED!" << endl;
			cout << "--------------------------------------" << endl;
		}

	}
	system("pause");
	return 0;
}