#include"Calculations.h"
#include<iostream>
using namespace std;
int main()
{
	int K;
	const int arraySize = 10;
	int numbers[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		cout << "Enter "<<i+1<<". number of array: ";
		cin >> numbers[i];
	}
	Calculations myCalc(numbers);cout<< endl;
	cout << "Largest number of the array: " << myCalc.largest() << endl;
	cout << "---------------------------------------" << endl;
	cout << "Smallest number of the array: " << myCalc.smallest() << endl;
	cout << "---------------------------------------" << endl;
	cout << "For k'th largest value enter your k value:"; cin >> K;
	cout << "\nK'th largest value: " << myCalc.findKLargest(K) << endl;
	cout << "---------------------------------------" << endl;
	cout << "Most occured element is: " << myCalc.mostOccuringElement() << endl;
	cout << "---------------------------------------" << endl;
	cout << "Even and Odd numbers seperated: "<< endl;
	myCalc.separateEvenOdd();
	cout << "---------------------------------------" << endl;

	system("pause");
	return 0;
}