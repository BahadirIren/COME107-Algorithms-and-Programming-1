#include<iostream>
using namespace std;
class Calculations
{
private:
	int number;
public:
	Calculations()
	{
		number = 0;
	}
	void setNumber(int number)
	{
		this->number = number;
	}
	int getNumber()
	{
		return number;
	}
	bool isEven()
	{
		if (number%2==0)
		{
			return true;
		}
		else
			return false;
	}
	bool isOdd()
	{
		if (number%2!=0)
		{
			return true;
		}
		else
			return false;
	}
	bool isPrime()
	{
		if (number < 2)
		{
			return false;
		}
		for (int i = 2; i < number;i++)
		{ 
			if (number%i==0)
			{
				return false;
			}
		}
		return true;
	}
	int total()
	{
		int sum = 0;
		for (int i = 1; i <= number; i++)
		{
			sum = sum + i;
		}
		return sum;
	}

};