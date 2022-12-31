#include<iostream>
using namespace std;
int main()
{
	int n1, n2;
	cout << "enter two integer numbers: ";
	cin >> n1 >> n2;
	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;

	}
	cout << "OBEB = " << n1 << endl;
	system("pause");
	return 0;
}