#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	int a = 1;
	while (a <= 10)
	{
		int number = rand() % 100;
		cout << number << endl;
		a++;
	}
	system("pause");
	return 0;
}