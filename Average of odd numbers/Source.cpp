#include<iostream>
using namespace std;
int main()
{
	double average, number;
	double sum = 0;
	int count = 0;
	
	cout << "enter an integer number:(>1) " ;
	cin >> number;

	int i = 1;
	while (i <=number )
	{
		sum = sum + i;
		count++;
		i = i + 2;
	}
	average = sum / count;
	cout << "Average of odd numbers= " << average << endl;
	system("pause");
	return 0;

}