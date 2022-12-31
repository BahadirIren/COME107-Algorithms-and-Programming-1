#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int a = 1;
	while (a <= 6)
	{
		int number = rand() % 10;
		cout << number <<" ";
		a++;
	}
	cout << endl;
	system("pause");
	return 0;
}