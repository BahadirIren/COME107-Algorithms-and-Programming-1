#include"Employee.h"
using namespace std;
double average(Employee e[], int size);
int main()
{
	int age, emNo, wEx, choice;
	string marRes, engRes;
	bool mariStatus, engCert;
	do
	{
		cout << "Enter Employee number: "; cin >> emNo;
		cout << "Enter Employee's work experience: "; cin >> wEx;
		cout << "Enter Employee's age: "; cin >> age;
		
		cout << "Enter Employee's marital status write married (m) or not (n): "; cin >> marRes;
		if (marRes == "m")
		{
			mariStatus = true;
		}
		else
			mariStatus = false;
		
		cout << "Enter Employee's certificate Status write yes (y) or no (n): "; cin >> engRes;
		if (engRes == "y")
		{
			engCert = true;
		}
		else
			engCert = false;

		Employee myEmp1(emNo, age, wEx, mariStatus, engCert);
		myEmp1.setSalary(1500);
		myEmp1.print();
		cout << "Enter 1 for continue -1 for quit: "; cin >> choice;
	
	} while (choice != -1);
	
	system("pause");
	return 0;
}
double average(Employee e[], int size)
{
	for (int i = 0; i < size; i++)
	{

	}
	return 0;
}