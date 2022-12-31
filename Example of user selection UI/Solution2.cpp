#include<iostream>
using namespace std;
int main()
{
	int passes = 0;
	int fails = 0;
	int student = 1;
	int result;

	while (student <= 10)
	{
		cout << "enter result (1 = pass , 2 = fail ): ";
		cin >> result;
		if (result == 1)
		{
			passes++;
		}
		else
			fails++;

		student++;
	}
	cout << "passed = " << passes << "\nfailed = " << fails << endl;

	if (passes > 8)
		cout << "raise tuition" << endl;


	system("pause");
	return 0;
}


