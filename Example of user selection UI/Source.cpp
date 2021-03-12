////#include<iostream>
////using namespace std;
////int main()
////{
////	int student1 = 1;
////	int sum = 0;
////	int student = 1;
////	int secim = 0;
////	int passes = 0;
////	int fails = 0;
////	int average;
////	int grade;
////
////	while (secim != 3)
////	{ 
////		cout << "Secenekler" << endl << "1-Grade Average" << endl << "2-Number of passed students" << endl << "3-Cikis" << endl;
////		cin >> secim;
////		if (secim == 1)
////		{
////			while (student <= 6)
////			{
////				cout << "enter grades: " ; cin >> grade;
////				sum = sum + grade;
////				average = sum / student;
////				student++;
////				
////			}
////			
////			
////
////			cout << "Average = " << average << endl;
////
////			
////		}
////		
////		else if(secim == 2)
////		{
////			
////			while (student1<=6)
////			{
////				cout << "Enter students grades: "; cin >> grade;
////				if (grade >= 60)
////				{
////					passes++;
////				}
////				else
////				{
////					fails++;
////				}
////				student1++;
////			}
////			cout << "number of passed students = " << passes << endl;
////			cout << "number of failed students = " << fails << endl;
////		}
////
////	}
////
////	system("pause");
////	return 0;
////}

////#include<iostream>
////using namespace std;
////int main()
////{
////	int passes = 0;
////	int fails = 0;
////	int student = 1;
////	int result;
////
////	while (student <= 10)
////	{
////		cout << "enter result (1 = pass , 2 = fail ): ";
////		cin >> result;
////		if (result == 1)
////		{
////			passes++;
////		}
////		else
////			fails++;
////
////		student++;
////	}
////	cout << "passed = " << passes << "\nfailed = " << fails << endl;
////
////	if (passes > 8)
////		cout << "raise tuition" << endl;
////
////
////	system("pause");
////	return 0;
////
////
////
////}


////#include<iostream>
////using namespace std;
////int main()
////{
////	int passes = 0; int fails = 0; int result;
////	for (int student = 1; student <= 10; student++)
////	{
////		cout << "enter result (1 = passed , 2 = failed ) : ";
////		cin >> result;
////		if (result == 1)
////			passes++;
////		else if (result == 2)
////			fails++;
////		else if (result != 1 && result != 2)
////		{
////			cout << "\nwrong integer number is given!\n" << endl;
////			break;
////		}
////
////	}
////	cout << "passed = " << passes << "\nfailed = " << fails << endl;
////	system("pause");
////	return 0;
////
////
////}


