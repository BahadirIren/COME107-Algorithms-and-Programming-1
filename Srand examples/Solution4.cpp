#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int x;
	cout << "enter the number of times the dice will roll= ";
	cin >> x;
	int a = 1;
	while (a <= x)
	{
		int number = 1 + rand() % 6;
		cout << number << endl;
		a++;
	}
	system("pause");
	return 0;
}