#include<iostream>
using namespace std;
int main()
{
	double grade;
	cout << "enter a number" << endl;
	cin >> grade;
	if (grade >= 90)
	{
		cout << "A" << endl;

	}
	else if (grade >= 80)
	{
		cout << "B" << endl;

	}
	else if (grade >= 70)
	{
		cout << "C" << endl;

	}
	else if (grade >= 60)
	{
		cout << "D" << endl;

	}
	else{
		cout << "failed!" << endl;
		cout << "you should take the course again." << endl;

	}
	system("pause");
	return 0;

}