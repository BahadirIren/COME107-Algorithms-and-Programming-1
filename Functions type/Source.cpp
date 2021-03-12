
//////function without parameter without return type
////#include<iostream>
////using namespace std;
////void sumation()
////{
////	double a, b, sum;
////	cout << "Enter two numbers: " << endl;
////	cin >> a >> b;
////	sum = a + b;
////
////	cout << "result = " << sum << endl;
////
////}
////int main()
////{
////	sumation();
////	system("pause");
////	return 0;
////}

//function without parameter with return type
#include<iostream>
using namespace std;
double sumation()
{
	double a, b, sum;
	cout << "Enter two numbers: " << endl;
	cin >> a >> b;
	
	sum = a + b;
	return sum;
}
int main()
{
	cout << "result = " << sumation() << endl;
	system("pause");
	return 0;
}

//////function with parameter without return type
////#include<iostream>
////using namespace std;
////void sumation(double a, double b)
////{
////	double sum;
////	sum = a + b;
////
////	cout << "result = " << sum << endl;
////
////
////}
////int main()
////{
////	double x, y;
////	cout << "enter two numbers: " << endl;
////	cin >> x >> y;
////	sumation(x, y);
////	system("pause");
////	return 0;
////}

//////function with parameter with return type
////#include<iostream>
////using namespace std;
////double sumation(double a, double b)
////{
////	double sum;
////	sum = a + b;
////	return sum;
////}
////int main()
////{
////	double x, y ,result;
////	cout << "enter two numbers: " << endl;
////	cin >> x >> y;
////	result=sumation(x, y);
////	cout << "Result = " <<result<< endl;
////	system("pause");
////	return 0;
////}