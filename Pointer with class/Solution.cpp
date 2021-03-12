#include"Rectangle.h"
#include<iostream>
using namespace std;
//int main()
//{
//	int len, brea;
//	cout << "enter your length and breadth:" << endl;
//	cin >> len >> brea;
//	Rectangle myRec(len, brea);
//	Rectangle *ptr = &myRec;
//	cout << "Your area: " << ptr->getArea() << endl;
//	system("pause");
//	return 0;
//
//
//}
int main()
{
	Rectangle arr[2];
	arr[0] = Rectangle(5, 2);
	arr[1] = Rectangle(3, 2);
	Rectangle *ptr = arr; // *ptr=&arr[0] same
	for (int i = 0; i < 2; i++)
	{
		cout << "area of the rectangle " <<(i+1)<<" : "<< (ptr+i)->getArea()<<endl;
	}
	
	system("pause");
	return 0;

}