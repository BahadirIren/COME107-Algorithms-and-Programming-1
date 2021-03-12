////#include<iostream>
////#include<cmath>
////#include<cstdlib>
////#include<ctime>
////using namespace std;
////
////int main()
////{
////	srand(time(NULL));
////	int number = rand() % 10;
////	cout << number<<endl;
////	system("pause");
////	return 0;
////}

////#include<iostream>
////#include<cmath>
////#include<cstdlib>
////#include<ctime>
////using namespace std;
////int main()
////{
////	srand(time(NULL));
////
////	int a = 1;
////	while (a <= 10)
////	{
////		int number = rand() % 100;
////		cout << number << endl;
////		a++;
////	}
////	system("pause");
////	return 0;
////}

////#include<iostream>
////#include<cstdlib>
////#include<cmath>
////#include<ctime>
////using namespace std;
////int main()
////{
////	srand(time(NULL));
////	int a = 1;
////	while (a <= 6)
////	{
////		int number = rand() % 10;
////		cout << number <<" ";
////		a++;
////	}
////	cout << endl;
////	system("pause");
////	return 0;
////}

////#include<iostream>
////#include<cmath>
////#include<cstdlib>
////#include<ctime>
////using namespace std;
////int main()
////{
////	srand(time(NULL));
////	int x;
////	cout << "enter the number of times the dice will roll= ";
////	cin >> x;
////	int a = 1;
////	while (a <= x)
////	{
////		int number = 1 + rand() % 6;
////		cout << number << endl;
////		a++;
////	}
////	system("pause");
////	return 0;
////}

////#include<iostream>
////#include<cstdlib>
////#include<cmath>
////#include<ctime>
////using namespace std;
////int main()
////{
////	srand(time(NULL));
////	int x;
////	int a = 1;
////	while (a != -1)
////	{
////		cout << "enter the multiplication result of the following number: " << endl;
////		int number1 = rand() % 10;
////		cout << number1 << "*";
////		int number2 = rand() % 10;
////		cout << number2 << "=";
////		cin >> x;
////
////		if (x == number1*number2)
////		{
////			cout << "CORRECT" << endl;
////		}
////		else
////		  cout << "WRONG" << endl;
////		
////		cout << "Continue (1) or Quit (-1):";
////		cin >> a;
////	}
////	system("pause");
////	return 0;
////}

////#include<iostream>
////#include<ctime>
////using namespace std;
////void main()
////{
////	int com_say, my_say;
////	srand(time(NULL));
////	com_say = rand() % 101;
////
////	cout << "enter a number between 0 - 100 : " << endl;
////	cin >> my_say;
////	int counter = 1;
////	while (com_say != my_say)
////	{
////		if (my_say < com_say)
////			cout << "number up" << endl;
////		else
////			cout << "number down" << endl;
////		cin >> my_say;
////		counter++;
////	}
////	cout << "Congratulations...You found."<<endl << "you guessed " << counter << " times." << endl;
////	system("pause");
////	
////
////}

////#include<iostream>
////#include<ctime>
////using namespace std;
////int main()
////{
////	int r, x = 0, y = 0;
////	srand(time(NULL));
////	for (int i = 1; i <= 120; i++)
////	{
////		r = rand() % 110 - 20;
////			if (r < 6)
////			{
////				cout << i << ". second temperature value: " << r << " Critical Cooling! " << endl;
////				x++;
////			}
////			else if (r > 65)
////			{
////				cout << i << ". second temperature value: " << r << " Critical Warm-Up! " << endl;
////				y++;
////			}
////			else
////			{
////				cout << i << ". second temperature value: " << r << endl;
////			}
////	}
////	cout << "------------------------------" << endl;
////	cout << "Total of 120 seconds: " << x << " times Critical Cooling ;" << y << " times Critical Warm-Up warning " << endl;
////	system("pause");
////	return 0;
////}

////#include<iostream>
////#include<ctime>
////using namespace std;
////int main()
////{
////	int r, total = 0;
////	srand(time(NULL));
////	for (int i = 1; i <= 60; i++)
////	{
////		r = rand() % 5 + 3;
////		cout << "at " << i << ". minute; passing number of vehicles: " << r << endl;
////		total += r;
////
////	}
////	cout << "------------------------" << endl;
////	cout << "After 60 mins " << total << " vehicles passed " << endl;
////	system("pause");
////	return 0;
////
////}