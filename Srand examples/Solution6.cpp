#include<iostream>
#include<ctime>
using namespace std;

void main()
{
	int com_say, my_say;
	srand(time(NULL));
	com_say = rand() % 101;

	cout << "enter a number between 0 - 100 : " << endl;
	cin >> my_say;
	int counter = 1;
	while (com_say != my_say)
	{
		if (my_say < com_say)
			cout << "number up" << endl;
		else
			cout << "number down" << endl;
		cin >> my_say;
		counter++;
	}
	cout << "Congratulations...You found."<<endl << "you guessed " << counter << " times." << endl;
	system("pause");
	

}