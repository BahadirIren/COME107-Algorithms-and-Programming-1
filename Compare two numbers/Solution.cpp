#include<iostream>
using namespace std;
int main()

{
	double x, y;
	
	cout << "Enter 2 numbers"<<endl;
	
	cin >> x >> y;

	if (x > y)
		{
			cout << x << " " << "greater than" << " " << y << endl;
	}
	else if (x < y)
	{
		cout << x << " " << "less than" << " " << y << endl;
	}
	system("pause");
	return 0;
}