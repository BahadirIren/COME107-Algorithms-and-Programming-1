#include<iostream>
using namespace std;
int main()
{
	int sayi;
	int x = 1, sonuc = 1;

	cout << "sayiyi gir: ";
	cin >> sayi;
	while (true)
	{
		if (x > sayi)
		{
			break;
		}
		sonuc *= x;
		x++;

	}
	cout << "girilen sayinin faktoriyeli: " << sonuc << endl;
	system("pause");
	return 0;

}