#include<iostream>
using namespace std;
int main()
{
	int student1 = 1;
	int sum = 0;
	int student = 1;
	int secim = 0;
	int passes = 0;
	int fails = 0;
	int average;
	int grade;

	while (secim != 3)
	{ 
		cout << "Secenekler" << endl << "1-Grade Average" << endl << "2-Number of passed students" << endl << "3-Cikis" << endl;
		cin >> secim;
		if (secim == 1)
		{
			while (student <= 6)
			{
				cout << "enter grades: " ; cin >> grade;
				sum = sum + grade;
				average = sum / student;
				student++;
				
			}
			
			cout << "Average = " << average << endl;
		}
		
		else if(secim == 2)
		{
			while (student1<=6)
			{
				cout << "Enter students grades: "; cin >> grade;
				if (grade >= 60)
				{
					passes++;
				}
				else
				{
					fails++;
				}
				student1++;
			}
			cout << "number of passed students = " << passes << endl;
			cout << "number of failed students = " << fails << endl;
		}

	}
	
	system("pause");
	return 0;
}