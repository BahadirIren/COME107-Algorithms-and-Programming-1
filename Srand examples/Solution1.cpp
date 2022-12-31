#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int number = rand() % 10;
	cout << number<<endl;
	system("pause");
	return 0;
}