#include<iostream>
using namespace std;
int main()
{
	float taban, kenar1, kenar2, yukseklik, alan;
	int secim = 0;

	while (secim != 3)
	{
		cout << "secenekler" << endl << "1-Alan Hesabi" << endl << "2-Cevre Hesabi" << endl << "3-Cikis" << endl;
		cin >> secim;
		if (secim == 1)
		{
			cout << "taban ve yukseklik degerlerini giriniz: " << endl;
			cin >> taban >> yukseklik;
			alan = taban*yukseklik / 2;
			cout << "Alan = "<< alan << endl;

		}
		if (secim == 2)
		{
			cout << "1.kenar degerini giriniz: "; cin >> kenar1;
			cout << "2.kenar degerini giriniz: "; cin >> kenar2;
			cout << "taban degerini giriniz: "; cin >> taban;
			cout << "cevre = " << taban + kenar1 + kenar2 << endl;

		}

	}
	system("pause");
	return 0;

}