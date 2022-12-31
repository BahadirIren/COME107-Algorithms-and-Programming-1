#include<iostream>
using namespace std;
int main()
{
	int passes = 0; int fails = 0; int result;
	for (int student = 1; student <= 10; student++)
	{
		cout << "enter result (1 = passed , 2 = failed ) : ";
		cin >> result;
		if (result == 1)
			passes++;
		else if (result == 2)
			fails++;
		else if (result != 1 && result != 2)
		{
			cout << "\nwrong integer number is given!\n" << endl;
			break;
		}

	}
    
	cout << "passed = " << passes << "\nfailed = " << fails << endl;
	system("pause");
	return 0;
}