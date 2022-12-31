#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	int r, total = 0;
	srand(time(NULL));
	for (int i = 1; i <= 60; i++)
	{
		r = rand() % 5 + 3;
		cout << "at " << i << ". minute; passing number of vehicles: " << r << endl;
		total += r;

	}
	cout << "------------------------" << endl;
	cout << "After 60 mins " << total << " vehicles passed " << endl;
	system("pause");
	return 0;

}