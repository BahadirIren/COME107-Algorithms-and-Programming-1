#include"Phone.h"
using namespace std;
int main()
{
	string st;
	int no;
	cout << "Enter a brand (iphone or samsung): " << endl;
	cin >> st;
	cout << "Enter an integer storage number: " << endl;
	cin >> no;
	Phone myPhone(st, no);
	myPhone.print();
	system("pause");
	return 0;

}