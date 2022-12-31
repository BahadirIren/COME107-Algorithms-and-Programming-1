#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int r, x = 0, y = 0;
	srand(time(NULL));
	for (int i = 1; i <= 120; i++)
	{
		r = rand() % 110 - 20;
			if (r < 6)
			{
				cout << i << ". second temperature value: " << r << " Critical Cooling! " << endl;
				x++;
			}
			else if (r > 65)
			{
				cout << i << ". second temperature value: " << r << " Critical Warm-Up! " << endl;
				y++;
			}
			else
			{
				cout << i << ". second temperature value: " << r << endl;
			}
	}
	cout << "------------------------------" << endl;
	cout << "Total of 120 seconds: " << x << " times Critical Cooling ;" << y << " times Critical Warm-Up warning " << endl;
	system("pause");
	return 0;
}