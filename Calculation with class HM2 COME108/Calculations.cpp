#include"Calculations.h"
#include<iostream>
using namespace std;
Calculations::Calculations(int n[])
{
	for (int m = 0; m < arraySize; m++)
	{
		numbers[m]=n[m];
	}
}
int Calculations::largest()
{
	int max;
	for (int k = 0; k < arraySize - 1; k++)
	{
		if (numbers[k] > numbers[k + 1])
		{
			max = numbers[k];
			numbers[k] = numbers[k + 1];
			numbers[k + 1] = max;
		}
		else
			max = numbers[k+1];
	}
	return max ;
}
int Calculations::smallest()
{
	int min;
	for (int k = 0; k < arraySize - 1; k++)
	{
		if (numbers[k] < numbers[k + 1])
		{
			min = numbers[k];
			numbers[k] = numbers[k + 1];
			numbers[k + 1] = min;
		}
		else
			min= numbers[k + 1];
	}
	return min;
}
int Calculations::findKLargest(int k)
{
	int kLarge;
	int insert;
	for (int next = 1; next < arraySize; next++)
	{
		insert = numbers[next];
		int moveItem = next;
		while ((moveItem > 0) && (numbers[moveItem - 1]>insert))
		{
			numbers[moveItem] = numbers[moveItem - 1];
			moveItem--;
		}
		numbers[moveItem] = insert;
	}
	cout << "K largest: ";
	for (int i = arraySize - 1; i >= 10 - k; i--)
	{
		cout << numbers[i] << " ";
		kLarge = numbers[i];
	}
	return kLarge;
}
int Calculations::mostOccuringElement()
{
	int most = numbers[0];
	int temp = 0, count=1;
	for (int i = 0; i < arraySize; i++)
	{
		int tempCount = 0;
		temp = numbers[i];
		tempCount++;
		for (int j = i + 1; j < arraySize; j++)
		{
			if (numbers[j] == temp)
			{
				tempCount++;
				if (tempCount > count)
				{
					most = temp;
					count = tempCount;
				}
			}
		}
	}
	return most;
}
void Calculations::separateEvenOdd()
{
	for (int b = 0; b < arraySize; b++)
	{
		if (numbers[b] % 2 == 0)
		{
			cout << numbers[b] << " ";
		}
	}
	for (int a = 0; a < arraySize; a++)
	{
		if (numbers[a] % 2 != 0)
		{
			cout << numbers[a] << " ";
		}
	}
	cout << endl;
}

